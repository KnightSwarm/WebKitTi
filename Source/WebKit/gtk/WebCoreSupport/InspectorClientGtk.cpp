/*
 * Copyright (C) 2008, 2012 Gustavo Noronha Silva
 * Copyright (C) 2010 Collabora Ltd.
 * Copyright (C) 2013 Knightswarm Handelsbolag
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include "config.h"
#include "InspectorClientGtk.h"

#include "FileSystem.h"
#include "Frame.h"
#include "InspectorController.h"
#include "NotImplemented.h"
#include "Page.h"
#include "webkitversion.h"
#include "webkitwebinspector.h"
#include "webkitwebinspectorprivate.h"
#include "webkitwebview.h"
#include "webkitwebviewprivate.h"
#include <wtf/text/CString.h>
#include <wtf/text/WTFString.h>

char *CustomGtkWebInspectorPath = 0;

using namespace WebCore;

namespace WebKit {

static void notifyWebViewDestroyed(WebKitWebView* webView, InspectorFrontendClient* inspectorFrontendClient)
{
    inspectorFrontendClient->destroyInspectorWindow(true);
}

namespace {

class InspectorFrontendSettingsGtk : public InspectorFrontendClientLocal::Settings {
public:
    virtual ~InspectorFrontendSettingsGtk() { }

private:
    virtual String getProperty(const String& name)
    {
        notImplemented();
        return String();
    }

    virtual void setProperty(const String& name, const String& value)
    {
        notImplemented();
    }
};

} // namespace

InspectorClient::InspectorClient(WebKitWebView* webView)
    : m_inspectedWebView(webView)
    , m_frontendPage(0)
    , m_frontendClient(0)
{}

InspectorClient::~InspectorClient()
{
    if (m_frontendClient) {
        m_frontendClient->disconnectInspectorClient();
        m_frontendClient = 0;
    }
}

void InspectorClient::inspectorDestroyed()
{
    closeInspectorFrontend();
    delete this;
}

InspectorFrontendChannel* InspectorClient::openInspectorFrontend(InspectorController* controller)
{
    // This g_object_get will ref the inspector. We're not doing an
    // unref if this method succeeds because the inspector object must
    // be alive even after the inspected WebView is destroyed - the
    // close-window and destroy signals still need to be
    // emitted.
    WebKitWebInspector* webInspector = 0;
    g_object_get(m_inspectedWebView, "web-inspector", &webInspector, NULL);
    ASSERT(webInspector);

    WebKitWebView* inspectorWebView = 0;
    g_signal_emit_by_name(webInspector, "inspect-web-view", m_inspectedWebView, &inspectorWebView);

    if (!inspectorWebView) {
        g_object_unref(webInspector);
        return 0;
    }

    webkit_web_inspector_set_web_view(webInspector, inspectorWebView);
    
    GOwnPtr<gchar> inspectorURI;

    //Ti
    // Make the Web Inspector work when running tests
    if (CustomGtkWebInspectorPath) {
        String url = CustomGtkWebInspectorPath;
        url.append("/inspector.html");
        inspectorURI.set(g_filename_to_uri(url.utf8().data(), NULL, NULL));
    } else if (g_file_test("WebCore/inspector/front-end/inspector.html", G_FILE_TEST_EXISTS)) {
        GOwnPtr<gchar> currentDirectory(g_get_current_dir());
        GOwnPtr<gchar> fullPath(g_strdup_printf("%s/WebCore/inspector/front-end/inspector.html", currentDirectory.get()));
        inspectorURI.set(g_filename_to_uri(fullPath.get(), NULL, NULL));
    } else
        inspectorURI.set(g_filename_to_uri(DATA_DIR"/webkit-1.0/webinspector/inspector.html", NULL, NULL));
 
    //webkit_web_view_load_uri(inspectorWebView, "resource:///org/webkitgtk/inspector/UserInterface/Main.html");
    webkit_web_view_load_uri(inspectorWebView, inspectorURI.get());

    gtk_widget_show(GTK_WIDGET(inspectorWebView));

    m_frontendPage = core(inspectorWebView);
    OwnPtr<InspectorFrontendClient> frontendClient = adoptPtr(new InspectorFrontendClient(m_inspectedWebView, inspectorWebView, webInspector, m_frontendPage, this));
    m_frontendClient = frontendClient.get();
    m_frontendPage->inspectorController()->setInspectorFrontendClient(frontendClient.release());

    // The inspector must be in it's own PageGroup to avoid deadlock while debugging.
    m_frontendPage->setGroupName("");
    
    return this;
}

void InspectorClient::closeInspectorFrontend()
{
    if (m_frontendClient)
        m_frontendClient->destroyInspectorWindow(false);
}

void InspectorClient::bringFrontendToFront()
{
    m_frontendClient->bringToFront();
}

void InspectorClient::releaseFrontendPage()
{
    m_frontendPage = 0;
    m_frontendClient = 0;
}

void InspectorClient::highlight()
{
    hideHighlight();
}

void InspectorClient::hideHighlight()
{
    // FIXME: we should be able to only invalidate the actual rects of
    // the new and old nodes. We need to track the nodes, and take the
    // actual highlight size into account when calculating the damage
    // rect.
    gtk_widget_queue_draw(GTK_WIDGET(m_inspectedWebView));
}

bool InspectorClient::sendMessageToFrontend(const String& message)
{
    return doDispatchMessageOnFrontendPage(m_frontendPage, message);
}

InspectorFrontendClient::InspectorFrontendClient(WebKitWebView* inspectedWebView, WebKitWebView* inspectorWebView, WebKitWebInspector* webInspector, Page* inspectorPage, InspectorClient* inspectorClient)
    : InspectorFrontendClientLocal(core(inspectedWebView)->inspectorController(), inspectorPage, adoptPtr(new InspectorFrontendSettingsGtk()))
    , m_inspectorWebView(inspectorWebView)
    , m_inspectedWebView(inspectedWebView)
    , m_webInspector(webInspector)
    , m_inspectorClient(inspectorClient)
{
    g_signal_connect(m_inspectorWebView, "destroy",
                     G_CALLBACK(notifyWebViewDestroyed), (gpointer)this);
}

InspectorFrontendClient::~InspectorFrontendClient()
{
    if (m_inspectorClient) {
        m_inspectorClient->releaseFrontendPage();
        m_inspectorClient = 0;
    }

    ASSERT(!m_webInspector);
}

void InspectorFrontendClient::destroyInspectorWindow(bool notifyInspectorController)
{
    if (!m_webInspector)
        return;

    GRefPtr<WebKitWebInspector> webInspector = adoptGRef(m_webInspector.leakRef());

    if (m_inspectorWebView) {
        g_signal_handlers_disconnect_by_func(m_inspectorWebView, reinterpret_cast<gpointer>(notifyWebViewDestroyed), this);
        m_inspectorWebView = 0;
    }

    if (notifyInspectorController)
        core(m_inspectedWebView)->inspectorController()->disconnectFrontend();

    if (m_inspectorClient)
        m_inspectorClient->releaseFrontendPage();

    gboolean handled = FALSE;
    g_signal_emit_by_name(webInspector.get(), "close-window", &handled);
    ASSERT(handled);

    // Please do not use member variables here because InspectorFrontendClient object pointed by 'this'
    // has been implicitly deleted by "close-window" function.
}

String InspectorFrontendClient::localizedStringsURL()
{
    // FIXME: support l10n of localizedStrings.js
    return String("resource:///org/webkitgtk/inspector/Localizations/en.lproj/localizedStrings.js");
}

void InspectorFrontendClient::bringToFront()
{
    if (!m_inspectorWebView)
        return;

    gboolean handled = FALSE;
    g_signal_emit_by_name(m_webInspector.get(), "show-window", &handled);
}

void InspectorFrontendClient::closeWindow()
{
    destroyInspectorWindow(true);
}

void InspectorFrontendClient::attachWindow(DockSide)
{
    if (!m_inspectorWebView)
        return;

    gboolean handled = FALSE;
    g_signal_emit_by_name(m_webInspector.get(), "attach-window", &handled);
}

void InspectorFrontendClient::detachWindow()
{
    if (!m_inspectorWebView)
        return;

    gboolean handled = FALSE;
    g_signal_emit_by_name(m_webInspector.get(), "detach-window", &handled);
}

void InspectorFrontendClient::setAttachedWindowHeight(unsigned height)
{
    notImplemented();
}

void InspectorFrontendClient::setAttachedWindowWidth(unsigned width)
{
    notImplemented();
}

void InspectorFrontendClient::setToolbarHeight(unsigned height)
{
    notImplemented();
}

void InspectorFrontendClient::inspectedURLChanged(const String& newURL)
{
    if (!m_inspectorWebView)
        return;

    webkit_web_inspector_set_inspected_uri(m_webInspector.get(), newURL.utf8().data());
}

}

