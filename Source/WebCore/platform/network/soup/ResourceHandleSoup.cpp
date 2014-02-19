/*
 * Copyright (C) 2008 Alp Toker <alp@atoker.com>
 * Copyright (C) 2008 Xan Lopez <xan@gnome.org>
 * Copyright (C) 2008, 2010 Collabora Ltd.
 * Copyright (C) 2009 Holger Hans Peter Freyther
 * Copyright (C) 2009 Gustavo Noronha Silva <gns@gnome.org>
 * Copyright (C) 2009 Christian Dywan <christian@imendio.com>
 * Copyright (C) 2009 Igalia S.L.
 * Copyright (C) 2009 John Kjellberg <john.kjellberg@power.alstom.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public License
 * along with this library; see the file COPYING.LIB.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#include "config.h"
#include "ResourceHandle.h"

#include "CookieJarSoup.h"
#include "CredentialStorage.h"
#include "FileSystem.h"
#include "GOwnPtrSoup.h"
#include "HTTPParsers.h"
#include "LocalizedStrings.h"
#include "Logging.h"
#include "MIMETypeRegistry.h"
#include "NetworkingContext.h"
#include "NotImplemented.h"
#include "ResourceError.h"
#include "ResourceHandleClient.h"
#include "ResourceHandleInternal.h"
#include "ResourceResponse.h"
#include "SharedBuffer.h"
#include "SoupURIUtils.h"
#include "TextEncoding.h"
#include <errno.h>
#include <fcntl.h>
#include <gio/gio.h>
#include <glib.h>
#include <libsoup/soup.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <wtf/CurrentTime.h>
#include <wtf/SHA1.h>
#include <wtf/gobject/GRefPtr.h>
#include <wtf/text/Base64.h>
#include <wtf/text/CString.h>
#include "TitaniumProtocols.h"

#include <errno.h>
#include <fcntl.h>
#include <gio/gio.h>
#include <glib.h>
#include <libsoup/soup.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

namespace WebCore {
    
static bool loadingSynchronousRequest = false;

class WebCoreSynchronousLoader : public ResourceHandleClient {
    WTF_MAKE_NONCOPYABLE(WebCoreSynchronousLoader);
public:

    WebCoreSynchronousLoader(ResourceError& error, ResourceResponse& response, SoupSession* session, Vector<char>& data)
        : m_error(error)
        , m_response(response)
        , m_session(session)
        , m_data(data)
        , m_finished(false)
    {
        // We don't want any timers to fire while we are doing our synchronous load
        // so we replace the thread default main context. The main loop iterations
        // will only process GSources associated with this inner context.
        loadingSynchronousRequest = true;
        GRefPtr<GMainContext> innerMainContext = adoptGRef(g_main_context_new());
        g_main_context_push_thread_default(innerMainContext.get());
        m_mainLoop = adoptGRef(g_main_loop_new(innerMainContext.get(), false));

        adjustMaxConnections(1);
    }

    ~WebCoreSynchronousLoader()
    {
        adjustMaxConnections(-1);

        GMainContext* context = g_main_context_get_thread_default();
        while (g_main_context_pending(context))
            g_main_context_iteration(context, FALSE);

        g_main_context_pop_thread_default(context);
        loadingSynchronousRequest = false;
    }

    void adjustMaxConnections(int adjustment)
    {
        int maxConnections, maxConnectionsPerHost;
        g_object_get(m_session,
                     SOUP_SESSION_MAX_CONNS, &maxConnections,
                     SOUP_SESSION_MAX_CONNS_PER_HOST, &maxConnectionsPerHost,
                     NULL);
        maxConnections += adjustment;
        maxConnectionsPerHost += adjustment;
        g_object_set(m_session,
                     SOUP_SESSION_MAX_CONNS, maxConnections,
                     SOUP_SESSION_MAX_CONNS_PER_HOST, maxConnectionsPerHost,
                     NULL);

    }

    virtual bool isSynchronousClient()
    {
        return true;
    }

    virtual void didReceiveResponse(ResourceHandle*, const ResourceResponse& response)
    {
        m_response = response;
    }

    virtual void didReceiveData(ResourceHandle*, const char* data, int length, int)
    {
        m_data.append(data, length);
    }

    virtual void didFinishLoading(ResourceHandle*, double)
    {
        if (g_main_loop_is_running(m_mainLoop.get()))
            g_main_loop_quit(m_mainLoop.get());
        m_finished = true;
    }

    virtual void didFail(ResourceHandle* handle, const ResourceError& error)
    {
        m_error = error;
        didFinishLoading(handle, 0);
    }

    virtual void didReceiveAuthenticationChallenge(ResourceHandle*, const AuthenticationChallenge& challenge)
    {
        // We do not handle authentication for synchronous XMLHttpRequests.
        challenge.authenticationClient()->receivedRequestToContinueWithoutCredential(challenge);
    }

    void run()
    {
        if (!m_finished)
            g_main_loop_run(m_mainLoop.get());
    }

private:
    ResourceError& m_error;
    ResourceResponse& m_response;
    SoupSession* m_session;
    Vector<char>& m_data;
    bool m_finished;
    GRefPtr<GMainLoop> m_mainLoop;
};

static void cleanupGioOperation(ResourceHandle* handle, bool isDestroying);
static bool startData(ResourceHandle* handle, String urlString);
static bool startGio(ResourceHandle* handle, KURL url);
static void readCallback(GObject* source, GAsyncResult* res, gpointer data);
static const size_t defaultReadBufferSize = 8192;
static bool gIgnoreSSLErrors = false;
static SoupSession* createSoupSession();

ResourceHandleInternal::~ResourceHandleInternal()
{
}

ResourceHandle::~ResourceHandle()
{
    if (d->m_soupMessage)
        g_signal_handlers_disconnect_matched(d->m_soupMessage.get(), G_SIGNAL_MATCH_DATA,
                                             0, 0, 0, 0, this);

    cleanupGioOperation(this, true);
}

void ResourceHandle::ensureReadBuffer()
{
    ResourceHandleInternal* d = getInternal();

    size_t bufferSize;
    char* bufferPtr = client()->getOrCreateReadBuffer(defaultReadBufferSize, bufferSize);
    if (bufferPtr) {
        d->m_defaultReadBuffer.clear();
        d->m_readBufferPtr = bufferPtr;
        d->m_readBufferSize = bufferSize;
    } else if (!d->m_defaultReadBuffer) {
        d->m_defaultReadBuffer.set(static_cast<char*>(g_malloc(defaultReadBufferSize)));
        d->m_readBufferPtr = d->m_defaultReadBuffer.get();
        d->m_readBufferSize = defaultReadBufferSize;
    } else
        d->m_readBufferPtr = d->m_defaultReadBuffer.get();

    ASSERT(d->m_readBufferPtr);
    ASSERT(d->m_readBufferSize);
}

void ResourceHandle::prepareForURL(const KURL &url)
{
#ifdef HAVE_LIBSOUP_2_29_90
    GOwnPtr<SoupURI> soupURI(soup_uri_new(url.prettyURL().utf8().data()));
    if (!soupURI)
        return;
    soup_session_prepare_for_uri(ResourceHandle::defaultSession(), soupURI.get());
#endif
}

// All other kinds of redirections, except for the *304* status code
// (SOUP_STATUS_NOT_MODIFIED) which needs to be fed into WebCore, will be
// handled by soup directly.
static gboolean statusWillBeHandledBySoup(guint statusCode)
{
    if (SOUP_STATUS_IS_TRANSPORT_ERROR(statusCode)
        || (SOUP_STATUS_IS_REDIRECTION(statusCode) && (statusCode != SOUP_STATUS_NOT_MODIFIED))
        || (statusCode == SOUP_STATUS_UNAUTHORIZED))
        return true;

    return false;
}

static void fillResponseFromMessage(SoupMessage* msg, ResourceResponse* response)
{
    response->updateFromSoupMessage(msg);
}

// Called each time the message is going to be sent again except the first time.
// It's used mostly to let webkit know about redirects.
static void restartedCallback(SoupMessage* msg, gpointer data)
{
    ResourceHandle* handle = static_cast<ResourceHandle*>(data);
    if (!handle)
        return;
    ResourceHandleInternal* d = handle->getInternal();
    if (d->m_cancelled)
        return;

    char* uri = soup_uri_to_string(soup_message_get_uri(msg), false);
    String location = String(uri);
    g_free(uri);
    KURL newURL = KURL(handle->firstRequest().url(), location);

    ResourceRequest request = handle->firstRequest();
    ResourceResponse response;
    request.setURL(newURL);
    request.setHTTPMethod(msg->method);
    fillResponseFromMessage(msg, &response);

    // Should not set Referer after a redirect from a secure resource to non-secure one.
    if (!request.url().protocolIs("https") && protocolIs(request.httpReferrer(), "https")) {
        request.clearHTTPReferrer();
        soup_message_headers_remove(msg->request_headers, "Referer");
    }

    if (d->client())
        d->client()->willSendRequest(handle, request, response);

    if (d->m_cancelled)
        return;

#ifdef HAVE_LIBSOUP_2_29_90
    // Update the first party in case the base URL changed with the redirect
    String firstPartyString = request.firstPartyForCookies().string();
    if (!firstPartyString.isEmpty()) {
        GOwnPtr<SoupURI> firstParty(soup_uri_new(firstPartyString.utf8().data()));
        soup_message_set_first_party(d->m_soupMessage, firstParty.get());
    }
#endif
}

void ResourceHandle::receivedRequestToContinueWithoutCredential(const AuthenticationChallenge& challenge)
{
    ASSERT(!challenge.isNull());
    if (challenge != d->m_currentWebChallenge)
        return;
    soup_session_unpause_message(challenge.soupSession(), challenge.soupMessage());

    clearAuthentication();
}

static int milisecondsSinceRequest(double requestTime)
{
    return static_cast<int>((monotonicallyIncreasingTime() - requestTime) * 1000.0);
}

static void requestStartedCallback(SoupSession*, SoupMessage* soupMessage, SoupSocket*, gpointer)
{
    RefPtr<ResourceHandle> handle = static_cast<ResourceHandle*>(g_object_get_data(G_OBJECT(soupMessage), "handle"));
    if (!handle)
        return;

    ResourceHandleInternal* d = handle->getInternal();
    if (!d->m_response.resourceLoadTiming())
        return;
    
    d->m_response.resourceLoadTiming()->sendStart = milisecondsSinceRequest(d->m_response.resourceLoadTiming()->requestTime);
    if (d->m_response.resourceLoadTiming()->sslStart != -1) {
        // WebCore/inspector/front-end/RequestTimingView.js assumes
        // that SSL time is included in connection time so must
        // substract here the SSL delta that will be added later (see
        // WebInspector.RequestTimingView.createTimingTable in the
        // file above for more details).
        d->m_response.resourceLoadTiming()->sendStart -=
            d->m_response.resourceLoadTiming()->sslEnd - d->m_response.resourceLoadTiming()->sslStart;
    }
}

static void authenticateCallback(SoupSession* session, SoupMessage* soupMessage, SoupAuth* soupAuth, gboolean retrying)
{
    RefPtr<ResourceHandle> handle = static_cast<ResourceHandle*>(g_object_get_data(G_OBJECT(soupMessage), "handle"));
    if (!handle)
        return;
    handle->didReceiveAuthenticationChallenge(AuthenticationChallenge(session, soupMessage, soupAuth, retrying, handle.get()));
}

SoupSession* ResourceHandle::createTestingSession()
{
    SoupSession* session = createSoupSession();
    // The testing session operates with the default cookie jar.
    soup_session_add_feature(session, SOUP_SESSION_FEATURE(soupCookieJar()));
    return session;
}

SoupSession* ResourceHandle::createPrivateBrowsingSession()
{
    SoupSession* session = createSoupSession();
    soup_session_add_feature(session, SOUP_SESSION_FEATURE(createPrivateBrowsingCookieJar()));
    return session;
}

void ResourceHandle::platformSetDefersLoading(bool defersLoading)
{
    if (cancelledOrClientless())
        return;

    // Except when canceling a possible timeout timer, we only need to take action here to UN-defer loading.
    if (defersLoading) {
        if (d->m_timeoutSource) {
            g_source_destroy(d->m_timeoutSource.get());
            d->m_timeoutSource.clear();
        }
        return;
    }

    /* Nonsense using old Soup usage
    if (waitingToSendRequest(this)) {
        sendPendingRequest();
        return;
    }
    */

    if (d->m_deferredResult) {
        GRefPtr<GAsyncResult> asyncResult = adoptGRef(d->m_deferredResult.leakRef());

        if (d->m_inputStream)
            readCallback(G_OBJECT(d->m_inputStream.get()), asyncResult.get(), this);
        else
            //sendRequestCallback(G_OBJECT(d->m_soupRequest.get()), asyncResult.get(), this);
            notImplemented(); //Don't know what to do here //FIXME
    }
}

static SoupSession* sessionFromContext(NetworkingContext* context)
{
    if (!context || !context->isValid())
        return ResourceHandle::defaultSession();
    return context->storageSession().soupSession();
}

void ResourceHandle::receivedCredential(const AuthenticationChallenge& challenge, const Credential& credential)
{
    ASSERT(!challenge.isNull());
    if (challenge != d->m_currentWebChallenge)
        return;

    // FIXME: Support empty credentials. Currently, an empty credential cannot be stored in WebCore credential storage, as that's empty value for its map.
    if (credential.isEmpty()) {
        receivedRequestToContinueWithoutCredential(challenge);
        return;
    }

    if (shouldUseCredentialStorage()) {
        // Eventually we will manage per-session credentials only internally or use some newly-exposed API from libsoup,
        // because once we authenticate via libsoup, there is no way to ignore it for a particular request. Right now,
        // we place the credentials in the store even though libsoup will never fire the authenticate signal again for
        // this protection space.
        if (credential.persistence() == CredentialPersistenceForSession || credential.persistence() == CredentialPersistencePermanent)
            CredentialStorage::set(credential, challenge.protectionSpace(), challenge.failureResponse().url());

#if PLATFORM(GTK)
        if (credential.persistence() == CredentialPersistencePermanent) {
            d->m_credentialDataToSaveInPersistentStore.credential = credential;
            d->m_credentialDataToSaveInPersistentStore.challenge = challenge;
        }
#endif
    }

    ASSERT(challenge.soupSession());
    ASSERT(challenge.soupMessage());
    soup_auth_authenticate(challenge.soupAuth(), credential.user().utf8().data(), credential.password().utf8().data());
    soup_session_unpause_message(challenge.soupSession(), challenge.soupMessage());

    clearAuthentication();
}

void ResourceHandle::setIgnoreSSLErrors(bool ignoreSSLErrors)
{
    gIgnoreSSLErrors = ignoreSSLErrors;
}

void ResourceHandle::receivedCancellation(const AuthenticationChallenge& challenge)
{
    ASSERT(!challenge.isNull());
    if (challenge != d->m_currentWebChallenge)
        return;

    soup_session_unpause_message(challenge.soupSession(), challenge.soupMessage());

    if (client())
        client()->receivedCancellation(this, challenge);

    clearAuthentication();
}

void ResourceHandle::platformLoadResourceSynchronously(NetworkingContext* context, const ResourceRequest& request, StoredCredentials /*storedCredentials*/, ResourceError& error, ResourceResponse& response, Vector<char>& data)
{
    ASSERT(!loadingSynchronousRequest);
    if (loadingSynchronousRequest) // In practice this cannot happen, but if for some reason it does,
        return; // we want to avoid accidentally going into an infinite loop of requests.

    WebCoreSynchronousLoader syncLoader(error, response, sessionFromContext(context), data);
    RefPtr<ResourceHandle> handle = create(context, request, &syncLoader, false /*defersLoading*/, false /*shouldContentSniff*/);
    if (!handle)
        return;

    // If the request has already failed, do not run the main loop, or else we'll block indefinitely.
    if (handle->d->m_scheduledFailureType != NoFailure)
        return;

    syncLoader.run();
}

bool ResourceHandle::shouldUseCredentialStorage()
{
    return (!client() || client()->shouldUseCredentialStorage(this)) && firstRequest().url().protocolIsInHTTPFamily();
}

bool ResourceHandle::cancelledOrClientless()
{
    if (!client())
        return true;

    return getInternal()->m_cancelled;
}

static void gotHeadersCallback(SoupMessage* msg, gpointer data)
{
    // For 401, we will accumulate the resource body, and only use it
    // in case authentication with the soup feature doesn't happen
    if (msg->status_code == SOUP_STATUS_UNAUTHORIZED) {
        soup_message_body_set_accumulate(msg->response_body, TRUE);
        return;
    }

    // For all the other responses, we handle each chunk ourselves,
    // and we don't need msg->response_body to contain all of the data
    // we got, when we finish downloading.
    soup_message_body_set_accumulate(msg->response_body, FALSE);

    RefPtr<ResourceHandle> handle = static_cast<ResourceHandle*>(data);

    // The content-sniffed callback will handle the response if WebCore
    // require us to sniff.
    if (!handle || statusWillBeHandledBySoup(msg->status_code) || handle->shouldContentSniff())
        return;

    ResourceHandleInternal* d = handle->getInternal();
    if (d->m_cancelled)
        return;
    ResourceHandleClient* client = handle->client();
    if (!client)
        return;

    fillResponseFromMessage(msg, &d->m_response);
    client->didReceiveResponse(handle.get(), d->m_response);
}

// This callback will not be called if the content sniffer is disabled in startHttp.
static void contentSniffedCallback(SoupMessage* msg, const char* sniffedType, GHashTable *params, gpointer data)
{
    if (sniffedType) {
        const char* officialType = soup_message_headers_get_one(msg->response_headers, "Content-Type");

        if (!officialType || strcmp(officialType, sniffedType))
            soup_message_headers_set_content_type(msg->response_headers, sniffedType, params);
    }

    if (statusWillBeHandledBySoup(msg->status_code))
        return;

    RefPtr<ResourceHandle> handle = static_cast<ResourceHandle*>(data);
    if (!handle)
        return;
    ResourceHandleInternal* d = handle->getInternal();
    if (d->m_cancelled)
        return;
    ResourceHandleClient* client = handle->client();
    if (!client)
        return;

    fillResponseFromMessage(msg, &d->m_response);
    client->didReceiveResponse(handle.get(), d->m_response);
}

static void gotChunkCallback(SoupMessage* msg, SoupBuffer* chunk, gpointer data)
{
    if (statusWillBeHandledBySoup(msg->status_code))
        return;

    RefPtr<ResourceHandle> handle = static_cast<ResourceHandle*>(data);
    if (!handle)
        return;
    ResourceHandleInternal* d = handle->getInternal();
    if (d->m_cancelled)
        return;
    ResourceHandleClient* client = handle->client();
    if (!client)
        return;

    client->didReceiveData(handle.get(), chunk->data, chunk->length, false);
}

// Called at the end of the message, with all the necessary about the last informations.
// Doesn't get called for redirects.
static void finishedCallback(SoupSession *session, SoupMessage* msg, gpointer data)
{
    RefPtr<ResourceHandle> handle = adoptRef(static_cast<ResourceHandle*>(data));
    // TODO: maybe we should run this code even if there's no client?
    if (!handle)
        return;

    ResourceHandleInternal* d = handle->getInternal();

    ResourceHandleClient* client = handle->client();
    if (!client)
        return;

    if (d->m_cancelled)
        return;

    if (SOUP_STATUS_IS_TRANSPORT_ERROR(msg->status_code)) {
        char* uri = soup_uri_to_string(soup_message_get_uri(msg), false);
        ResourceError error(g_quark_to_string(SOUP_HTTP_ERROR),
                            msg->status_code,
                            uri,
                            String::fromUTF8(msg->reason_phrase));
        g_free(uri);
        client->didFail(handle.get(), error);
        return;
    }

    if (msg->status_code == SOUP_STATUS_UNAUTHORIZED) {
        fillResponseFromMessage(msg, &d->m_response);
        client->didReceiveResponse(handle.get(), d->m_response);

        // WebCore might have cancelled the job in the while
        if (d->m_cancelled)
            return;

        if (msg->response_body->data)
            client->didReceiveData(handle.get(), msg->response_body->data, msg->response_body->length, true);
    }

    client->didFinishLoading(handle.get(), 0);
}

// parseDataUrl() is taken from the CURL http backend.
static gboolean parseDataUrl(gpointer callbackData)
{
    ResourceHandle* handle = static_cast<ResourceHandle*>(callbackData);
    ResourceHandleClient* client = handle->client();
    ResourceHandleInternal* d = handle->getInternal();
    if (d->m_cancelled)
        return false;

    d->m_idleHandler = 0;

    ASSERT(client);
    if (!client)
        return false;

    String url = handle->firstRequest().url().string();
    ASSERT(url.startsWith("data:", false));

    int index = url.find(',');
    if (index == -1) {
        client->cannotShowURL(handle);
        return false;
    }

    String mediaType = url.substring(5, index - 5);
    String data = url.substring(index + 1);

    bool isBase64 = mediaType.endsWith(";base64", false);
    if (isBase64)
        mediaType = mediaType.left(mediaType.length() - 7);

    if (mediaType.isEmpty())
        mediaType = "text/plain;charset=US-ASCII";

    String mimeType = extractMIMETypeFromMediaType(mediaType);
    String charset = extractCharsetFromMediaType(mediaType);

    ResourceResponse response;
    response.setURL(handle->firstRequest().url());
    response.setMimeType(mimeType);

    if (isBase64) {
        data = decodeURLEscapeSequences(data);
        response.setTextEncodingName(charset);
        client->didReceiveResponse(handle, response);

        // The load may be cancelled, and the client may be destroyed
        // by any of the client reporting calls, so we check, and bail
        // out in either of those cases.
        if (d->m_cancelled || !handle->client())
            return false;

        // Use the GLib Base64, since WebCore's decoder isn't
        // general-purpose and fails on Acid3 test 97 (whitespace).
        size_t outLength = 0;
        char* outData = 0;
        outData = reinterpret_cast<char*>(g_base64_decode(data.utf8().data(), &outLength));
        if (outData && outLength > 0)
            client->didReceiveData(handle, outData, outLength, 0);
        g_free(outData);
    } else {
        // We have to convert to UTF-16 early due to limitations in KURL
        data = decodeURLEscapeSequences(data, TextEncoding(charset));
        response.setTextEncodingName("UTF-16");
        client->didReceiveResponse(handle, response);

        if (d->m_cancelled || !handle->client())
            return false;

        if (data.length() > 0)
            client->didReceiveData(handle, reinterpret_cast<const char*>(data.characters()), data.length() * sizeof(UChar), 0);
    }

    if (d->m_cancelled || !handle->client())
        return false;

    client->didFinishLoading(handle, 0);

    return false;
}

static bool startData(ResourceHandle* handle, String urlString)
{
    ASSERT(handle);

    ResourceHandleInternal* d = handle->getInternal();

    // If parseDataUrl is called synchronously the job is not yet effectively started
    // and webkit won't never know that the data has been parsed even didFinishLoading is called.
    d->m_idleHandler = g_timeout_add(0, parseDataUrl, handle);
    return true;
}

static SoupSession* createSoupSession()
{
    return soup_session_async_new();
}

// Values taken from http://stevesouders.com/ua/index.php following
// the rule "Do What Every Other Modern Browser Is Doing". They seem
// to significantly improve page loading time compared to soup's
// default values.
#define MAX_CONNECTIONS          60
#define MAX_CONNECTIONS_PER_HOST 6

static void ensureSessionIsInitialized(SoupSession* session)
{
    if (g_object_get_data(G_OBJECT(session), "webkit-init"))
        return;

    SoupCookieJar* jar = reinterpret_cast<SoupCookieJar*>(soup_session_get_feature(session, SOUP_TYPE_COOKIE_JAR));
    if (!jar)
        soup_session_add_feature(session, SOUP_SESSION_FEATURE(soupCookieJar()));
    else
        setSoupCookieJar(jar);

#if !LOG_DISABLED
    if (!soup_session_get_feature(session, SOUP_TYPE_LOGGER) && LogNetwork.state == WTFLogChannelOn) {
        SoupLogger* logger = soup_logger_new(static_cast<SoupLoggerLogLevel>(SOUP_LOGGER_LOG_BODY), -1);
        soup_session_add_feature(session, SOUP_SESSION_FEATURE(logger));
        soup_logger_set_printer(logger, soupLogPrinter, 0, 0);
        g_object_unref(logger);
    }
#endif // !LOG_DISABLED

    g_object_set(session,
                 SOUP_SESSION_MAX_CONNS, MAX_CONNECTIONS,
                 SOUP_SESSION_MAX_CONNS_PER_HOST, MAX_CONNECTIONS_PER_HOST,
                 NULL);

    g_object_set_data(G_OBJECT(session), "webkit-init", reinterpret_cast<void*>(0xdeadbeef));
}

//Local to this file
namespace
{
char* filenameFromString(const String& string)
{
#if OS(WINDOWS)
    return g_strdup(string.utf8().data());
#else
    return g_uri_unescape_string(string.utf8().data(), 0);
#endif
}
}

static bool startHttp(ResourceHandle* handle)
{
    ASSERT(handle);

    SoupSession* session = handle->defaultSession();
    ensureSessionIsInitialized(session);

    ResourceHandleInternal* d = handle->getInternal();

    ResourceRequest request(handle->firstRequest());
    KURL url(request.url());
    url.removeFragmentIdentifier();
    request.setURL(url);

    d->m_soupMessage = request.toSoupMessage();
    if (!d->m_soupMessage)
        return false;

    if (!handle->shouldContentSniff())
        soup_message_disable_feature(d->m_soupMessage.get(), SOUP_TYPE_CONTENT_SNIFFER);

    g_signal_connect(d->m_soupMessage.get(), "restarted", G_CALLBACK(restartedCallback), handle);
    g_signal_connect(d->m_soupMessage.get(), "got-headers", G_CALLBACK(gotHeadersCallback), handle);
    g_signal_connect(d->m_soupMessage.get(), "content-sniffed", G_CALLBACK(contentSniffedCallback), handle);
    g_signal_connect(d->m_soupMessage.get(), "got-chunk", G_CALLBACK(gotChunkCallback), handle);

#ifdef HAVE_LIBSOUP_2_29_90
    String firstPartyString = request.firstPartyForCookies().string();
    if (!firstPartyString.isEmpty()) {
        GOwnPtr<SoupURI> firstParty(soup_uri_new(firstPartyString.utf8().data()));
        soup_message_set_first_party(d->m_soupMessage, firstParty.get());
    }
#endif
    g_object_set_data(G_OBJECT(d->m_soupMessage.get()), "resourceHandle", reinterpret_cast<void*>(handle));

    FormData* httpBody = d->m_firstRequest.httpBody();
    if (httpBody && !httpBody->isEmpty()) {
        size_t numElements = httpBody->elements().size();

        // handle the most common case (i.e. no file upload)
        if (numElements < 2) {
            Vector<char> body;
            httpBody->flatten(body);
            soup_message_set_request(d->m_soupMessage.get(), d->m_firstRequest.httpContentType().utf8().data(),
                                     SOUP_MEMORY_COPY, body.data(), body.size());
        } else {
            /*
             * we have more than one element to upload, and some may
             * be (big) files, which we will want to mmap instead of
             * copying into memory; TODO: support upload of non-local
             * (think sftp://) files by using GIO?
             */
            soup_message_body_set_accumulate(d->m_soupMessage->request_body, FALSE);
            for (size_t i = 0; i < numElements; i++) {
                const FormDataElement& element = httpBody->elements()[i];

                if (element.m_type == FormDataElement::data)
                    soup_message_body_append(d->m_soupMessage->request_body, SOUP_MEMORY_TEMPORARY, element.m_data.data(), element.m_data.size());
                else {
                    /*
                     * mapping for uploaded files code inspired by technique used in
                     * libsoup's simple-httpd test
                     */
                    GError* error = 0;
                    gchar* fileName = filenameFromString(element.m_filename);
                    GMappedFile* fileMapping = g_mapped_file_new(fileName, false, &error);

                    g_free(fileName);

                    if (error) {
                        g_error_free(error);
                        g_signal_handlers_disconnect_matched(d->m_soupMessage.get(), G_SIGNAL_MATCH_DATA,
                                                             0, 0, 0, 0, handle);
                        //Smart pointer used now
                        //g_object_unref(d->m_soupMessage);
                        d->m_soupMessage = 0;

                        return false;
                    }

                    SoupBuffer* soupBuffer = soup_buffer_new_with_owner(g_mapped_file_get_contents(fileMapping),
                                                                        g_mapped_file_get_length(fileMapping),
                                                                        fileMapping,
#if GLIB_CHECK_VERSION(2, 21, 3)
                                                                        reinterpret_cast<GDestroyNotify>(g_mapped_file_unref));
#else
                                                                        reinterpret_cast<GDestroyNotify>(g_mapped_file_free));
#endif
                    soup_message_body_append_buffer(d->m_soupMessage->request_body, soupBuffer);
                    soup_buffer_free(soupBuffer);
                }
            }
        }
    }

    // balanced by a deref() in finishedCallback, which should always run
    handle->ref();

    // Make sure we have an Accept header for subresources; some sites
    // want this to serve some of their subresources
    if (!soup_message_headers_get_one(d->m_soupMessage->request_headers, "Accept"))
        soup_message_headers_append(d->m_soupMessage->request_headers, "Accept", "*/*");

    // Balanced in ResourceHandleInternal's destructor; we need to
    // keep our own ref, because after queueing the message, the
    // session owns the initial reference.
    //g_object_ref(d->m_soupMessage);
    soup_session_queue_message(session, d->m_soupMessage.get(), finishedCallback, handle);

    return true;
}

static gboolean preprocessURL(gpointer callbackData)
{
    ResourceHandle* handle = static_cast<ResourceHandle*>(callbackData);
    ResourceHandleClient* client = handle->client();
    ResourceHandleInternal* d = handle->getInternal();
    if (d->m_cancelled)
        return false;

    d->m_idleHandler = 0;

    ASSERT(client);
    if (!client)
        return false;

    String mimeType;
    String data = TitaniumProtocols::Preprocess(handle->firstRequest(), mimeType);

    ResourceResponse response;
    response.setExpectedContentLength(data.length());

    response.setURL(handle->firstRequest().url());
    response.setMimeType(mimeType);
    response.setHTTPStatusCode(200);
    response.setHTTPStatusText("OK");
    response.setTextEncodingName("UTF-8");
    //response.setLastModifiedDate(time(NULL));
    client->didReceiveResponse(handle, response);

    if (d->m_cancelled)
        return false;

    if (data.length() > 0)
        client->didReceiveData(handle, data.utf8().data(), data.length(), data.length());

    if (d->m_cancelled)
        return false;

    client->didFinishLoading(handle, time(NULL));

    return false;
}

static bool startPreprocessed(ResourceHandle* handle)
{
    ASSERT(handle);

    ResourceHandleInternal* d = handle->getInternal();

    // If preprocessURL is called synchronously the job is not yet effectively started
    // and webkit won't never know that the data has been parsed even didFinishLoading is called.
    d->m_idleHandler = g_idle_add(preprocessURL, handle);
    return true;
}

bool ResourceHandle::start()
{
    ASSERT(!d->m_soupMessage);


    // The frame could be null if the ResourceHandle is not associated to any
    // Frame, e.g. if we are downloading a file.
    // If the frame is not null but the page is null this must be an attempted
    // load from an onUnload handler, so let's just block it.
    if (d->m_context && !d->m_context->isValid())
        return false;
    
    
    const ResourceRequest& request = firstRequest();
    KURL url = request.url();
    String urlString = url.string();
    String protocol = url.protocol();

    if (equalIgnoringCase(protocol, "data"))
        return startData(this, urlString);

    if (equalIgnoringCase(protocol, "http") || equalIgnoringCase(protocol, "https")) {
        if (startHttp(this))
            return true;
    }

    if (equalIgnoringCase(protocol, "file") || equalIgnoringCase(protocol, "ftp") || equalIgnoringCase(protocol, "ftps")) {
        // FIXME: should we be doing any other protocols here?
        if (startGio(this, url))
            return true;
    }
    
    if (equalIgnoringCase(request.url().protocol(), "app") || equalIgnoringCase(request.url().protocol(), "ti"))
    {
        KURL normalized(TitaniumProtocols::NormalizeURL(url));
        bool isNormalized = strcmp(normalized.string().utf8().data(), url.string().utf8().data()) == 0;

        if (isNormalized && TitaniumProtocols::CanPreprocess(request))
        {
            return startPreprocessed(this);
        }
        else
        {
            d->m_titaniumURL = strdup(url.string().utf8().data());
            KURL fileURL = TitaniumProtocols::URLToFileURL(url);
            return startGio(this,fileURL);
        }
    }

    // Error must not be reported immediately
    this->scheduleFailure(InvalidURLFailure);

    return true;
}

void ResourceHandle::cancel()
{
    d->m_cancelled = true;
    if (d->m_soupMessage)
        soup_session_cancel_message(defaultSession(), d->m_soupMessage.get(), SOUP_STATUS_CANCELLED);
    else if (d->m_cancellable)
        g_cancellable_cancel(d->m_cancellable.get());
}

bool ResourceHandle::loadsBlocked()
{
    return false;
}

// Test just commenting this bit out
//void ResourceHandle::loadResourceSynchronously(const ResourceRequest& request, StoredCredentials /*storedCredentials*/, ResourceError& error, ResourceResponse& response, Vector<char>& data, Frame* frame)
/*
{
    WebCoreSynchronousLoader syncLoader(error, response, data);
    ResourceHandle handle(request, &syncLoader, true, false);

    handle.start(frame);
    syncLoader.run();
}
*/

// GIO-based loader
static void cleanupGioOperation(ResourceHandle* handle, bool isDestroying = false)
{
    ResourceHandleInternal* d = handle->getInternal();

    if (d->m_gfile) {
        g_object_set_data(G_OBJECT(d->m_gfile), "webkit-resource", 0);
        //g_object_unref(d->m_gfile);
        //d->m_gfile = 0;
    }

    if (d->m_cancellable) {
        //g_object_unref(d->m_cancellable);
        d->m_cancellable.clear();
    }

    if (d->m_inputStream) {
        g_object_set_data(G_OBJECT(d->m_inputStream.get()), "webkit-resource", 0);
        //g_object_unref(d->m_inputStream);
        //d->m_inputStream = 0;
    }
    
    if (d->m_readBufferPtr)
        d->m_readBufferPtr = 0;
    if (!d->m_defaultReadBuffer)
        d->m_readBufferSize = 0;

    /*
    if (d->m_buffer) {
        //g_free(d->m_buffer);
        //d->m_buffer = 0;
    }
    */

    if (!isDestroying)
        handle->deref();
}

static void closeCallback(GObject* source, GAsyncResult* res, gpointer)
{
    RefPtr<ResourceHandle> handle = static_cast<ResourceHandle*>(g_object_get_data(source, "webkit-resource"));
    if (!handle)
        return;

    ResourceHandleInternal* d = handle->getInternal();
    ResourceHandleClient* client = handle->client();

    g_input_stream_close_finish(d->m_inputStream.get(), res, 0);
    cleanupGioOperation(handle.get());

    // The load may have been cancelled, the client may have been
    // destroyed already. In such cases calling didFinishLoading is a
    // bad idea.
    if (d->m_cancelled || !client)
        return;

    client->didFinishLoading(handle.get(), 0);
}

static void readCallback(GObject* source, GAsyncResult* res, gpointer data)
{
    int *totalBytesRead = static_cast<int*>(data);
    RefPtr<ResourceHandle> handle = static_cast<ResourceHandle*>(g_object_get_data(source, "webkit-resource"));
    if (!handle)
        return;

    ResourceHandleInternal* d = handle->getInternal();
    ResourceHandleClient* client = handle->client();

    if (d->m_cancelled || !client) {
        cleanupGioOperation(handle.get());
        return;
    }

    GError* error = 0;

    gssize bytesRead = g_input_stream_read_finish(d->m_inputStream.get(), res, &error);
    if (error) {
        char* uri = g_file_get_uri(d->m_gfile);
        ResourceError resourceError(g_quark_to_string(G_IO_ERROR),
                                    error->code,
                                    uri,
                                    error ? String::fromUTF8(error->message) : String());
        g_free(uri);
        g_error_free(error);
        cleanupGioOperation(handle.get());
        client->didFail(handle.get(), resourceError);
        return;
    }

    if (!bytesRead) {
        delete totalBytesRead;
        g_input_stream_close_async(d->m_inputStream.get(), G_PRIORITY_DEFAULT,
                                   0, closeCallback, 0);
        return;
    }

    *(totalBytesRead) += bytesRead;
    client->didReceiveData(handle.get(), d->m_readBufferPtr, bytesRead, *totalBytesRead);

    // didReceiveData may cancel the load, which may release the last reference.
    if (d->m_cancelled) {
        delete totalBytesRead;
        cleanupGioOperation(handle.get());
        return;
    }

    handle->ensureReadBuffer();
    g_input_stream_read_async(d->m_inputStream.get(), d->m_readBufferPtr, d->m_readBufferSize,
                              G_PRIORITY_DEFAULT, d->m_cancellable.get(),
                              readCallback, 0);
}

static void openCallback(GObject* source, GAsyncResult* res, gpointer)
{
    RefPtr<ResourceHandle> handle = static_cast<ResourceHandle*>(g_object_get_data(source, "webkit-resource"));
    if (!handle)
        return;

    ResourceHandleInternal* d = handle->getInternal();
    ResourceHandleClient* client = handle->client();

    if (d->m_cancelled || !client) {
        cleanupGioOperation(handle.get());
        return;
    }

    GError* error = 0;
    GFileInputStream* in = g_file_read_finish(G_FILE(source), res, &error);
    if (error) {
        char* uri = g_file_get_uri(d->m_gfile);
        ResourceError resourceError(g_quark_to_string(G_IO_ERROR),
                                    error->code,
                                    uri,
                                    error ? String::fromUTF8(error->message) : String());
        g_free(uri);
        g_error_free(error);
        cleanupGioOperation(handle.get());
        client->didFail(handle.get(), resourceError);
        return;
    }

    d->m_inputStream = G_INPUT_STREAM(in);
    d->m_readBufferSize = 8192;
    /*
    d->m_buffer = static_cast<char*>(g_malloc(d->m_bufferSize)); //ensureReadBuffer replaces this
    d->m_total = 0; //No longer exists, replaced
    */

    g_object_set_data(G_OBJECT(d->m_inputStream.get()), "webkit-resource", handle.get());
    g_input_stream_read_async(d->m_inputStream.get(), d->m_readBufferPtr, d->m_readBufferSize,
                              G_PRIORITY_DEFAULT, d->m_cancellable.get(),
                              readCallback, 0);
}

static void queryInfoCallback(GObject* source, GAsyncResult* res, gpointer)
{
    RefPtr<ResourceHandle> handle = static_cast<ResourceHandle*>(g_object_get_data(source, "webkit-resource"));
    if (!handle)
        return;

    ResourceHandleInternal* d = handle->getInternal();
    ResourceHandleClient* client = handle->client();

    if (d->m_cancelled) {
        cleanupGioOperation(handle.get());
        return;
    }

    ResourceResponse response;

    char* uri = g_file_get_uri(d->m_gfile);
    response.setURL(KURL(KURL(), uri));
    g_free(uri);

    GError* error = 0;
    GFileInfo* info = g_file_query_info_finish(d->m_gfile, res, &error);

    if (error) {
        // FIXME: to be able to handle ftp URIs properly, we must
        // check if the error is G_IO_ERROR_NOT_MOUNTED, and if so,
        // call g_file_mount_enclosing_volume() to mount the ftp
        // server (and then keep track of the fact that we mounted it,
        // and set a timeout to unmount it later after it's been idle
        // for a while).
        char* uri = g_file_get_uri(d->m_gfile);
        ResourceError resourceError(g_quark_to_string(G_IO_ERROR),
                                    error->code,
                                    uri,
                                    error ? String::fromUTF8(error->message) : String());
        g_free(uri);
        g_error_free(error);
        cleanupGioOperation(handle.get());
        client->didFail(handle.get(), resourceError);
        return;
    }

    if (g_file_info_get_file_type(info) != G_FILE_TYPE_REGULAR) {
        // FIXME: what if the URI points to a directory? Should we
        // generate a listing? How? What do other backends do here?
        char* uri = g_file_get_uri(d->m_gfile);
        ResourceError resourceError(g_quark_to_string(G_IO_ERROR),
                                    G_IO_ERROR_FAILED,
                                    uri,
                                    String());
        g_free(uri);
        cleanupGioOperation(handle.get());
        client->didFail(handle.get(), resourceError);
        return;
    }

    response.setMimeType(g_file_info_get_content_type(info));
    response.setExpectedContentLength(g_file_info_get_size(info));

    GTimeVal tv;
    g_file_info_get_modification_time(info, &tv);
    //response.setLastModifiedDate(tv.tv_sec);

    client->didReceiveResponse(handle.get(), response);

    if (d->m_cancelled) {
        cleanupGioOperation(handle.get());
        return;
    }

    g_file_read_async(d->m_gfile, G_PRIORITY_DEFAULT, d->m_cancellable.get(),
                      openCallback, 0);
}
static bool startGio(ResourceHandle* handle, KURL url)
{
    ASSERT(handle);

    ResourceHandleInternal* d = handle->getInternal();

    if (handle->firstRequest().httpMethod() != "GET" && handle->firstRequest().httpMethod() != "POST")
        return false;

    // GIO doesn't know how to handle refs and queries, so remove them
    // TODO: use KURL.fileSystemPath after KURLGtk and FileSystemGtk are
    // using GIO internally, and providing URIs instead of file paths
    url.removeFragmentIdentifier();
    url.setQuery(String());
    url.removePort();

#if !OS(WINDOWS)
    // we avoid the escaping for local files, because
    // g_filename_from_uri (used internally by GFile) has problems
    // decoding strings with arbitrary percent signs
    if (url.isLocalFile())
        d->m_gfile = g_file_new_for_path(url.fileSystemPath().utf8().data());
    else
#endif
        d->m_gfile = g_file_new_for_uri(url.string().utf8().data());
    g_object_set_data(G_OBJECT(d->m_gfile), "webkit-resource", handle);

    // balanced by a deref() in cleanupGioOperation, which should always run
    handle->ref();

    d->m_cancellable = g_cancellable_new();
    g_file_query_info_async(d->m_gfile,
                            G_FILE_ATTRIBUTE_STANDARD_TYPE ","
                            G_FILE_ATTRIBUTE_STANDARD_CONTENT_TYPE ","
                            G_FILE_ATTRIBUTE_STANDARD_SIZE,
                            G_FILE_QUERY_INFO_NONE,
                            G_PRIORITY_DEFAULT, d->m_cancellable.get(),
                            queryInfoCallback, 0);
    return true;
}

SoupSession* ResourceHandle::defaultSession()
{
    static SoupSession* session = createSoupSession();

    return session;
}

}

