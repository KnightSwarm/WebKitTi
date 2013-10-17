
/* Generated data (by glib-mkenums) */

/*
 * Copyright (C) 2013 Igalia S.L.
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

#include <config.h>
#include "WebKitEnumTypes.h"

#include <webkit2/webkit2.h>
extern "C" {
// Enumerations from ./Source/WebKit2/UIProcess/API/gtk/WebKitAuthenticationRequest.h.
GType webkit_authentication_scheme_get_type()
{
    static const GEnumValue values[] = {
        { WEBKIT_AUTHENTICATION_SCHEME_DEFAULT, "WEBKIT_AUTHENTICATION_SCHEME_DEFAULT", "default" },
        { WEBKIT_AUTHENTICATION_SCHEME_HTTP_BASIC, "WEBKIT_AUTHENTICATION_SCHEME_HTTP_BASIC", "http-basic" },
        { WEBKIT_AUTHENTICATION_SCHEME_HTTP_DIGEST, "WEBKIT_AUTHENTICATION_SCHEME_HTTP_DIGEST", "http-digest" },
        { WEBKIT_AUTHENTICATION_SCHEME_HTML_FORM, "WEBKIT_AUTHENTICATION_SCHEME_HTML_FORM", "html-form" },
        { WEBKIT_AUTHENTICATION_SCHEME_NTLM, "WEBKIT_AUTHENTICATION_SCHEME_NTLM", "ntlm" },
        { WEBKIT_AUTHENTICATION_SCHEME_NEGOTIATE, "WEBKIT_AUTHENTICATION_SCHEME_NEGOTIATE", "negotiate" },
        { WEBKIT_AUTHENTICATION_SCHEME_CLIENT_CERTIFICATE_REQUESTED, "WEBKIT_AUTHENTICATION_SCHEME_CLIENT_CERTIFICATE_REQUESTED", "client-certificate-requested" },
        { WEBKIT_AUTHENTICATION_SCHEME_SERVER_TRUST_EVALUATION_REQUESTED, "WEBKIT_AUTHENTICATION_SCHEME_SERVER_TRUST_EVALUATION_REQUESTED", "server-trust-evaluation-requested" },
        { WEBKIT_AUTHENTICATION_SCHEME_UNKNOWN, "WEBKIT_AUTHENTICATION_SCHEME_UNKNOWN", "unknown" },
        { 0, NULL, NULL }
    };

    static GType type = 0;
    if (G_UNLIKELY(!type))
        type = g_enum_register_static("WebKitAuthenticationScheme", values);

    return type;
}

// Enumerations from ./Source/WebKit2/UIProcess/API/gtk/WebKitContextMenuActions.h.
GType webkit_context_menu_action_get_type()
{
    static const GEnumValue values[] = {
        { WEBKIT_CONTEXT_MENU_ACTION_NO_ACTION, "WEBKIT_CONTEXT_MENU_ACTION_NO_ACTION", "no-action" },
        { WEBKIT_CONTEXT_MENU_ACTION_OPEN_LINK, "WEBKIT_CONTEXT_MENU_ACTION_OPEN_LINK", "open-link" },
        { WEBKIT_CONTEXT_MENU_ACTION_OPEN_LINK_IN_NEW_WINDOW, "WEBKIT_CONTEXT_MENU_ACTION_OPEN_LINK_IN_NEW_WINDOW", "open-link-in-new-window" },
        { WEBKIT_CONTEXT_MENU_ACTION_DOWNLOAD_LINK_TO_DISK, "WEBKIT_CONTEXT_MENU_ACTION_DOWNLOAD_LINK_TO_DISK", "download-link-to-disk" },
        { WEBKIT_CONTEXT_MENU_ACTION_COPY_LINK_TO_CLIPBOARD, "WEBKIT_CONTEXT_MENU_ACTION_COPY_LINK_TO_CLIPBOARD", "copy-link-to-clipboard" },
        { WEBKIT_CONTEXT_MENU_ACTION_OPEN_IMAGE_IN_NEW_WINDOW, "WEBKIT_CONTEXT_MENU_ACTION_OPEN_IMAGE_IN_NEW_WINDOW", "open-image-in-new-window" },
        { WEBKIT_CONTEXT_MENU_ACTION_DOWNLOAD_IMAGE_TO_DISK, "WEBKIT_CONTEXT_MENU_ACTION_DOWNLOAD_IMAGE_TO_DISK", "download-image-to-disk" },
        { WEBKIT_CONTEXT_MENU_ACTION_COPY_IMAGE_TO_CLIPBOARD, "WEBKIT_CONTEXT_MENU_ACTION_COPY_IMAGE_TO_CLIPBOARD", "copy-image-to-clipboard" },
        { WEBKIT_CONTEXT_MENU_ACTION_COPY_IMAGE_URL_TO_CLIPBOARD, "WEBKIT_CONTEXT_MENU_ACTION_COPY_IMAGE_URL_TO_CLIPBOARD", "copy-image-url-to-clipboard" },
        { WEBKIT_CONTEXT_MENU_ACTION_OPEN_FRAME_IN_NEW_WINDOW, "WEBKIT_CONTEXT_MENU_ACTION_OPEN_FRAME_IN_NEW_WINDOW", "open-frame-in-new-window" },
        { WEBKIT_CONTEXT_MENU_ACTION_GO_BACK, "WEBKIT_CONTEXT_MENU_ACTION_GO_BACK", "go-back" },
        { WEBKIT_CONTEXT_MENU_ACTION_GO_FORWARD, "WEBKIT_CONTEXT_MENU_ACTION_GO_FORWARD", "go-forward" },
        { WEBKIT_CONTEXT_MENU_ACTION_STOP, "WEBKIT_CONTEXT_MENU_ACTION_STOP", "stop" },
        { WEBKIT_CONTEXT_MENU_ACTION_RELOAD, "WEBKIT_CONTEXT_MENU_ACTION_RELOAD", "reload" },
        { WEBKIT_CONTEXT_MENU_ACTION_COPY, "WEBKIT_CONTEXT_MENU_ACTION_COPY", "copy" },
        { WEBKIT_CONTEXT_MENU_ACTION_CUT, "WEBKIT_CONTEXT_MENU_ACTION_CUT", "cut" },
        { WEBKIT_CONTEXT_MENU_ACTION_PASTE, "WEBKIT_CONTEXT_MENU_ACTION_PASTE", "paste" },
        { WEBKIT_CONTEXT_MENU_ACTION_DELETE, "WEBKIT_CONTEXT_MENU_ACTION_DELETE", "delete" },
        { WEBKIT_CONTEXT_MENU_ACTION_SELECT_ALL, "WEBKIT_CONTEXT_MENU_ACTION_SELECT_ALL", "select-all" },
        { WEBKIT_CONTEXT_MENU_ACTION_INPUT_METHODS, "WEBKIT_CONTEXT_MENU_ACTION_INPUT_METHODS", "input-methods" },
        { WEBKIT_CONTEXT_MENU_ACTION_UNICODE, "WEBKIT_CONTEXT_MENU_ACTION_UNICODE", "unicode" },
        { WEBKIT_CONTEXT_MENU_ACTION_SPELLING_GUESS, "WEBKIT_CONTEXT_MENU_ACTION_SPELLING_GUESS", "spelling-guess" },
        { WEBKIT_CONTEXT_MENU_ACTION_NO_GUESSES_FOUND, "WEBKIT_CONTEXT_MENU_ACTION_NO_GUESSES_FOUND", "no-guesses-found" },
        { WEBKIT_CONTEXT_MENU_ACTION_IGNORE_SPELLING, "WEBKIT_CONTEXT_MENU_ACTION_IGNORE_SPELLING", "ignore-spelling" },
        { WEBKIT_CONTEXT_MENU_ACTION_LEARN_SPELLING, "WEBKIT_CONTEXT_MENU_ACTION_LEARN_SPELLING", "learn-spelling" },
        { WEBKIT_CONTEXT_MENU_ACTION_IGNORE_GRAMMAR, "WEBKIT_CONTEXT_MENU_ACTION_IGNORE_GRAMMAR", "ignore-grammar" },
        { WEBKIT_CONTEXT_MENU_ACTION_FONT_MENU, "WEBKIT_CONTEXT_MENU_ACTION_FONT_MENU", "font-menu" },
        { WEBKIT_CONTEXT_MENU_ACTION_BOLD, "WEBKIT_CONTEXT_MENU_ACTION_BOLD", "bold" },
        { WEBKIT_CONTEXT_MENU_ACTION_ITALIC, "WEBKIT_CONTEXT_MENU_ACTION_ITALIC", "italic" },
        { WEBKIT_CONTEXT_MENU_ACTION_UNDERLINE, "WEBKIT_CONTEXT_MENU_ACTION_UNDERLINE", "underline" },
        { WEBKIT_CONTEXT_MENU_ACTION_OUTLINE, "WEBKIT_CONTEXT_MENU_ACTION_OUTLINE", "outline" },
        { WEBKIT_CONTEXT_MENU_ACTION_INSPECT_ELEMENT, "WEBKIT_CONTEXT_MENU_ACTION_INSPECT_ELEMENT", "inspect-element" },
        { WEBKIT_CONTEXT_MENU_ACTION_OPEN_VIDEO_IN_NEW_WINDOW, "WEBKIT_CONTEXT_MENU_ACTION_OPEN_VIDEO_IN_NEW_WINDOW", "open-video-in-new-window" },
        { WEBKIT_CONTEXT_MENU_ACTION_OPEN_AUDIO_IN_NEW_WINDOW, "WEBKIT_CONTEXT_MENU_ACTION_OPEN_AUDIO_IN_NEW_WINDOW", "open-audio-in-new-window" },
        { WEBKIT_CONTEXT_MENU_ACTION_COPY_VIDEO_LINK_TO_CLIPBOARD, "WEBKIT_CONTEXT_MENU_ACTION_COPY_VIDEO_LINK_TO_CLIPBOARD", "copy-video-link-to-clipboard" },
        { WEBKIT_CONTEXT_MENU_ACTION_COPY_AUDIO_LINK_TO_CLIPBOARD, "WEBKIT_CONTEXT_MENU_ACTION_COPY_AUDIO_LINK_TO_CLIPBOARD", "copy-audio-link-to-clipboard" },
        { WEBKIT_CONTEXT_MENU_ACTION_TOGGLE_MEDIA_CONTROLS, "WEBKIT_CONTEXT_MENU_ACTION_TOGGLE_MEDIA_CONTROLS", "toggle-media-controls" },
        { WEBKIT_CONTEXT_MENU_ACTION_TOGGLE_MEDIA_LOOP, "WEBKIT_CONTEXT_MENU_ACTION_TOGGLE_MEDIA_LOOP", "toggle-media-loop" },
        { WEBKIT_CONTEXT_MENU_ACTION_ENTER_VIDEO_FULLSCREEN, "WEBKIT_CONTEXT_MENU_ACTION_ENTER_VIDEO_FULLSCREEN", "enter-video-fullscreen" },
        { WEBKIT_CONTEXT_MENU_ACTION_MEDIA_PLAY, "WEBKIT_CONTEXT_MENU_ACTION_MEDIA_PLAY", "media-play" },
        { WEBKIT_CONTEXT_MENU_ACTION_MEDIA_PAUSE, "WEBKIT_CONTEXT_MENU_ACTION_MEDIA_PAUSE", "media-pause" },
        { WEBKIT_CONTEXT_MENU_ACTION_MEDIA_MUTE, "WEBKIT_CONTEXT_MENU_ACTION_MEDIA_MUTE", "media-mute" },
        { WEBKIT_CONTEXT_MENU_ACTION_DOWNLOAD_VIDEO_TO_DISK, "WEBKIT_CONTEXT_MENU_ACTION_DOWNLOAD_VIDEO_TO_DISK", "download-video-to-disk" },
        { WEBKIT_CONTEXT_MENU_ACTION_DOWNLOAD_AUDIO_TO_DISK, "WEBKIT_CONTEXT_MENU_ACTION_DOWNLOAD_AUDIO_TO_DISK", "download-audio-to-disk" },
        { WEBKIT_CONTEXT_MENU_ACTION_CUSTOM, "WEBKIT_CONTEXT_MENU_ACTION_CUSTOM", "custom" },
        { 0, NULL, NULL }
    };

    static GType type = 0;
    if (G_UNLIKELY(!type))
        type = g_enum_register_static("WebKitContextMenuAction", values);

    return type;
}

// Enumerations from ./Source/WebKit2/UIProcess/API/gtk/WebKitCookieManager.h.
GType webkit_cookie_persistent_storage_get_type()
{
    static const GEnumValue values[] = {
        { WEBKIT_COOKIE_PERSISTENT_STORAGE_TEXT, "WEBKIT_COOKIE_PERSISTENT_STORAGE_TEXT", "text" },
        { WEBKIT_COOKIE_PERSISTENT_STORAGE_SQLITE, "WEBKIT_COOKIE_PERSISTENT_STORAGE_SQLITE", "sqlite" },
        { 0, NULL, NULL }
    };

    static GType type = 0;
    if (G_UNLIKELY(!type))
        type = g_enum_register_static("WebKitCookiePersistentStorage", values);

    return type;
}

GType webkit_cookie_accept_policy_get_type()
{
    static const GEnumValue values[] = {
        { WEBKIT_COOKIE_POLICY_ACCEPT_ALWAYS, "WEBKIT_COOKIE_POLICY_ACCEPT_ALWAYS", "always" },
        { WEBKIT_COOKIE_POLICY_ACCEPT_NEVER, "WEBKIT_COOKIE_POLICY_ACCEPT_NEVER", "never" },
        { WEBKIT_COOKIE_POLICY_ACCEPT_NO_THIRD_PARTY, "WEBKIT_COOKIE_POLICY_ACCEPT_NO_THIRD_PARTY", "no-third-party" },
        { 0, NULL, NULL }
    };

    static GType type = 0;
    if (G_UNLIKELY(!type))
        type = g_enum_register_static("WebKitCookieAcceptPolicy", values);

    return type;
}

// Enumerations from ./Source/WebKit2/UIProcess/API/gtk/WebKitCredential.h.
GType webkit_credential_persistence_get_type()
{
    static const GEnumValue values[] = {
        { WEBKIT_CREDENTIAL_PERSISTENCE_NONE, "WEBKIT_CREDENTIAL_PERSISTENCE_NONE", "none" },
        { WEBKIT_CREDENTIAL_PERSISTENCE_FOR_SESSION, "WEBKIT_CREDENTIAL_PERSISTENCE_FOR_SESSION", "for-session" },
        { WEBKIT_CREDENTIAL_PERSISTENCE_PERMANENT, "WEBKIT_CREDENTIAL_PERSISTENCE_PERMANENT", "permanent" },
        { 0, NULL, NULL }
    };

    static GType type = 0;
    if (G_UNLIKELY(!type))
        type = g_enum_register_static("WebKitCredentialPersistence", values);

    return type;
}

// Enumerations from ./Source/WebKit2/UIProcess/API/gtk/WebKitError.h.
GType webkit_network_error_get_type()
{
    static const GEnumValue values[] = {
        { WEBKIT_NETWORK_ERROR_FAILED, "WEBKIT_NETWORK_ERROR_FAILED", "failed" },
        { WEBKIT_NETWORK_ERROR_TRANSPORT, "WEBKIT_NETWORK_ERROR_TRANSPORT", "transport" },
        { WEBKIT_NETWORK_ERROR_UNKNOWN_PROTOCOL, "WEBKIT_NETWORK_ERROR_UNKNOWN_PROTOCOL", "unknown-protocol" },
        { WEBKIT_NETWORK_ERROR_CANCELLED, "WEBKIT_NETWORK_ERROR_CANCELLED", "cancelled" },
        { WEBKIT_NETWORK_ERROR_FILE_DOES_NOT_EXIST, "WEBKIT_NETWORK_ERROR_FILE_DOES_NOT_EXIST", "file-does-not-exist" },
        { 0, NULL, NULL }
    };

    static GType type = 0;
    if (G_UNLIKELY(!type))
        type = g_enum_register_static("WebKitNetworkError", values);

    return type;
}

GType webkit_policy_error_get_type()
{
    static const GEnumValue values[] = {
        { WEBKIT_POLICY_ERROR_FAILED, "WEBKIT_POLICY_ERROR_FAILED", "failed" },
        { WEBKIT_POLICY_ERROR_CANNOT_SHOW_MIME_TYPE, "WEBKIT_POLICY_ERROR_CANNOT_SHOW_MIME_TYPE", "cannot-show-mime-type" },
        { WEBKIT_POLICY_ERROR_CANNOT_SHOW_URI, "WEBKIT_POLICY_ERROR_CANNOT_SHOW_URI", "cannot-show-uri" },
        { WEBKIT_POLICY_ERROR_FRAME_LOAD_INTERRUPTED_BY_POLICY_CHANGE, "WEBKIT_POLICY_ERROR_FRAME_LOAD_INTERRUPTED_BY_POLICY_CHANGE", "frame-load-interrupted-by-policy-change" },
        { WEBKIT_POLICY_ERROR_CANNOT_USE_RESTRICTED_PORT, "WEBKIT_POLICY_ERROR_CANNOT_USE_RESTRICTED_PORT", "cannot-use-restricted-port" },
        { 0, NULL, NULL }
    };

    static GType type = 0;
    if (G_UNLIKELY(!type))
        type = g_enum_register_static("WebKitPolicyError", values);

    return type;
}

GType webkit_plugin_error_get_type()
{
    static const GEnumValue values[] = {
        { WEBKIT_PLUGIN_ERROR_FAILED, "WEBKIT_PLUGIN_ERROR_FAILED", "failed" },
        { WEBKIT_PLUGIN_ERROR_CANNOT_FIND_PLUGIN, "WEBKIT_PLUGIN_ERROR_CANNOT_FIND_PLUGIN", "cannot-find-plugin" },
        { WEBKIT_PLUGIN_ERROR_CANNOT_LOAD_PLUGIN, "WEBKIT_PLUGIN_ERROR_CANNOT_LOAD_PLUGIN", "cannot-load-plugin" },
        { WEBKIT_PLUGIN_ERROR_JAVA_UNAVAILABLE, "WEBKIT_PLUGIN_ERROR_JAVA_UNAVAILABLE", "java-unavailable" },
        { WEBKIT_PLUGIN_ERROR_CONNECTION_CANCELLED, "WEBKIT_PLUGIN_ERROR_CONNECTION_CANCELLED", "connection-cancelled" },
        { WEBKIT_PLUGIN_ERROR_WILL_HANDLE_LOAD, "WEBKIT_PLUGIN_ERROR_WILL_HANDLE_LOAD", "will-handle-load" },
        { 0, NULL, NULL }
    };

    static GType type = 0;
    if (G_UNLIKELY(!type))
        type = g_enum_register_static("WebKitPluginError", values);

    return type;
}

GType webkit_download_error_get_type()
{
    static const GEnumValue values[] = {
        { WEBKIT_DOWNLOAD_ERROR_NETWORK, "WEBKIT_DOWNLOAD_ERROR_NETWORK", "network" },
        { WEBKIT_DOWNLOAD_ERROR_CANCELLED_BY_USER, "WEBKIT_DOWNLOAD_ERROR_CANCELLED_BY_USER", "cancelled-by-user" },
        { WEBKIT_DOWNLOAD_ERROR_DESTINATION, "WEBKIT_DOWNLOAD_ERROR_DESTINATION", "destination" },
        { 0, NULL, NULL }
    };

    static GType type = 0;
    if (G_UNLIKELY(!type))
        type = g_enum_register_static("WebKitDownloadError", values);

    return type;
}

GType webkit_print_error_get_type()
{
    static const GEnumValue values[] = {
        { WEBKIT_PRINT_ERROR_GENERAL, "WEBKIT_PRINT_ERROR_GENERAL", "general" },
        { WEBKIT_PRINT_ERROR_PRINTER_NOT_FOUND, "WEBKIT_PRINT_ERROR_PRINTER_NOT_FOUND", "printer-not-found" },
        { WEBKIT_PRINT_ERROR_INVALID_PAGE_RANGE, "WEBKIT_PRINT_ERROR_INVALID_PAGE_RANGE", "invalid-page-range" },
        { 0, NULL, NULL }
    };

    static GType type = 0;
    if (G_UNLIKELY(!type))
        type = g_enum_register_static("WebKitPrintError", values);

    return type;
}

GType webkit_javascript_error_get_type()
{
    static const GEnumValue values[] = {
        { WEBKIT_JAVASCRIPT_ERROR_SCRIPT_FAILED, "WEBKIT_JAVASCRIPT_ERROR_SCRIPT_FAILED", "failed" },
        { 0, NULL, NULL }
    };

    static GType type = 0;
    if (G_UNLIKELY(!type))
        type = g_enum_register_static("WebKitJavascriptError", values);

    return type;
}

GType webkit_snapshot_error_get_type()
{
    static const GEnumValue values[] = {
        { WEBKIT_SNAPSHOT_ERROR_FAILED_TO_CREATE, "WEBKIT_SNAPSHOT_ERROR_FAILED_TO_CREATE", "create" },
        { 0, NULL, NULL }
    };

    static GType type = 0;
    if (G_UNLIKELY(!type))
        type = g_enum_register_static("WebKitSnapshotError", values);

    return type;
}

// Enumerations from ./Source/WebKit2/UIProcess/API/gtk/WebKitFaviconDatabase.h.
GType webkit_favicon_database_error_get_type()
{
    static const GEnumValue values[] = {
        { WEBKIT_FAVICON_DATABASE_ERROR_NOT_INITIALIZED, "WEBKIT_FAVICON_DATABASE_ERROR_NOT_INITIALIZED", "not-initialized" },
        { WEBKIT_FAVICON_DATABASE_ERROR_FAVICON_NOT_FOUND, "WEBKIT_FAVICON_DATABASE_ERROR_FAVICON_NOT_FOUND", "favicon-not-found" },
        { WEBKIT_FAVICON_DATABASE_ERROR_FAVICON_UNKNOWN, "WEBKIT_FAVICON_DATABASE_ERROR_FAVICON_UNKNOWN", "favicon-unknown" },
        { 0, NULL, NULL }
    };

    static GType type = 0;
    if (G_UNLIKELY(!type))
        type = g_enum_register_static("WebKitFaviconDatabaseError", values);

    return type;
}

// Enumerations from ./Source/WebKit2/UIProcess/API/gtk/WebKitFindController.h.
GType webkit_find_options_get_type()
{
    static const GFlagsValue values[] = {
        { WEBKIT_FIND_OPTIONS_NONE, "WEBKIT_FIND_OPTIONS_NONE", "none" },
        { WEBKIT_FIND_OPTIONS_CASE_INSENSITIVE, "WEBKIT_FIND_OPTIONS_CASE_INSENSITIVE", "case-insensitive" },
        { WEBKIT_FIND_OPTIONS_AT_WORD_STARTS, "WEBKIT_FIND_OPTIONS_AT_WORD_STARTS", "at-word-starts" },
        { WEBKIT_FIND_OPTIONS_TREAT_MEDIAL_CAPITAL_AS_WORD_START, "WEBKIT_FIND_OPTIONS_TREAT_MEDIAL_CAPITAL_AS_WORD_START", "treat-medial-capital-as-word-start" },
        { WEBKIT_FIND_OPTIONS_BACKWARDS, "WEBKIT_FIND_OPTIONS_BACKWARDS", "backwards" },
        { WEBKIT_FIND_OPTIONS_WRAP_AROUND, "WEBKIT_FIND_OPTIONS_WRAP_AROUND", "wrap-around" },
        { 0, NULL, NULL }
    };

    static GType type = 0;
    if (G_UNLIKELY(!type))
        type = g_flags_register_static("WebKitFindOptions", values);

    return type;
}

// Enumerations from ./Source/WebKit2/UIProcess/API/gtk/WebKitHitTestResult.h.
GType webkit_hit_test_result_context_get_type()
{
    static const GFlagsValue values[] = {
        { WEBKIT_HIT_TEST_RESULT_CONTEXT_DOCUMENT, "WEBKIT_HIT_TEST_RESULT_CONTEXT_DOCUMENT", "document" },
        { WEBKIT_HIT_TEST_RESULT_CONTEXT_LINK, "WEBKIT_HIT_TEST_RESULT_CONTEXT_LINK", "link" },
        { WEBKIT_HIT_TEST_RESULT_CONTEXT_IMAGE, "WEBKIT_HIT_TEST_RESULT_CONTEXT_IMAGE", "image" },
        { WEBKIT_HIT_TEST_RESULT_CONTEXT_MEDIA, "WEBKIT_HIT_TEST_RESULT_CONTEXT_MEDIA", "media" },
        { WEBKIT_HIT_TEST_RESULT_CONTEXT_EDITABLE, "WEBKIT_HIT_TEST_RESULT_CONTEXT_EDITABLE", "editable" },
        { WEBKIT_HIT_TEST_RESULT_CONTEXT_SCROLLBAR, "WEBKIT_HIT_TEST_RESULT_CONTEXT_SCROLLBAR", "scrollbar" },
        { 0, NULL, NULL }
    };

    static GType type = 0;
    if (G_UNLIKELY(!type))
        type = g_flags_register_static("WebKitHitTestResultContext", values);

    return type;
}

// Enumerations from ./Source/WebKit2/UIProcess/API/gtk/WebKitNavigationPolicyDecision.h.
GType webkit_navigation_type_get_type()
{
    static const GEnumValue values[] = {
        { WEBKIT_NAVIGATION_TYPE_LINK_CLICKED, "WEBKIT_NAVIGATION_TYPE_LINK_CLICKED", "link-clicked" },
        { WEBKIT_NAVIGATION_TYPE_FORM_SUBMITTED, "WEBKIT_NAVIGATION_TYPE_FORM_SUBMITTED", "form-submitted" },
        { WEBKIT_NAVIGATION_TYPE_BACK_FORWARD, "WEBKIT_NAVIGATION_TYPE_BACK_FORWARD", "back-forward" },
        { WEBKIT_NAVIGATION_TYPE_RELOAD, "WEBKIT_NAVIGATION_TYPE_RELOAD", "reload" },
        { WEBKIT_NAVIGATION_TYPE_FORM_RESUBMITTED, "WEBKIT_NAVIGATION_TYPE_FORM_RESUBMITTED", "form-resubmitted" },
        { WEBKIT_NAVIGATION_TYPE_OTHER, "WEBKIT_NAVIGATION_TYPE_OTHER", "other" },
        { 0, NULL, NULL }
    };

    static GType type = 0;
    if (G_UNLIKELY(!type))
        type = g_enum_register_static("WebKitNavigationType", values);

    return type;
}

// Enumerations from ./Source/WebKit2/UIProcess/API/gtk/WebKitPrintOperation.h.
GType webkit_print_operation_response_get_type()
{
    static const GEnumValue values[] = {
        { WEBKIT_PRINT_OPERATION_RESPONSE_PRINT, "WEBKIT_PRINT_OPERATION_RESPONSE_PRINT", "print" },
        { WEBKIT_PRINT_OPERATION_RESPONSE_CANCEL, "WEBKIT_PRINT_OPERATION_RESPONSE_CANCEL", "cancel" },
        { 0, NULL, NULL }
    };

    static GType type = 0;
    if (G_UNLIKELY(!type))
        type = g_enum_register_static("WebKitPrintOperationResponse", values);

    return type;
}

// Enumerations from ./Source/WebKit2/UIProcess/API/gtk/WebKitScriptDialog.h.
GType webkit_script_dialog_type_get_type()
{
    static const GEnumValue values[] = {
        { WEBKIT_SCRIPT_DIALOG_ALERT, "WEBKIT_SCRIPT_DIALOG_ALERT", "alert" },
        { WEBKIT_SCRIPT_DIALOG_CONFIRM, "WEBKIT_SCRIPT_DIALOG_CONFIRM", "confirm" },
        { WEBKIT_SCRIPT_DIALOG_PROMPT, "WEBKIT_SCRIPT_DIALOG_PROMPT", "prompt" },
        { 0, NULL, NULL }
    };

    static GType type = 0;
    if (G_UNLIKELY(!type))
        type = g_enum_register_static("WebKitScriptDialogType", values);

    return type;
}

// Enumerations from ./Source/WebKit2/UIProcess/API/gtk/WebKitWebContext.h.
GType webkit_cache_model_get_type()
{
    static const GEnumValue values[] = {
        { WEBKIT_CACHE_MODEL_DOCUMENT_VIEWER, "WEBKIT_CACHE_MODEL_DOCUMENT_VIEWER", "document-viewer" },
        { WEBKIT_CACHE_MODEL_WEB_BROWSER, "WEBKIT_CACHE_MODEL_WEB_BROWSER", "web-browser" },
        { WEBKIT_CACHE_MODEL_DOCUMENT_BROWSER, "WEBKIT_CACHE_MODEL_DOCUMENT_BROWSER", "document-browser" },
        { 0, NULL, NULL }
    };

    static GType type = 0;
    if (G_UNLIKELY(!type))
        type = g_enum_register_static("WebKitCacheModel", values);

    return type;
}

GType webkit_tls_errors_policy_get_type()
{
    static const GEnumValue values[] = {
        { WEBKIT_TLS_ERRORS_POLICY_IGNORE, "WEBKIT_TLS_ERRORS_POLICY_IGNORE", "ignore" },
        { WEBKIT_TLS_ERRORS_POLICY_FAIL, "WEBKIT_TLS_ERRORS_POLICY_FAIL", "fail" },
        { 0, NULL, NULL }
    };

    static GType type = 0;
    if (G_UNLIKELY(!type))
        type = g_enum_register_static("WebKitTLSErrorsPolicy", values);

    return type;
}

// Enumerations from ./Source/WebKit2/UIProcess/API/gtk/WebKitWebView.h.
GType webkit_policy_decision_type_get_type()
{
    static const GEnumValue values[] = {
        { WEBKIT_POLICY_DECISION_TYPE_NAVIGATION_ACTION, "WEBKIT_POLICY_DECISION_TYPE_NAVIGATION_ACTION", "navigation-action" },
        { WEBKIT_POLICY_DECISION_TYPE_NEW_WINDOW_ACTION, "WEBKIT_POLICY_DECISION_TYPE_NEW_WINDOW_ACTION", "new-window-action" },
        { WEBKIT_POLICY_DECISION_TYPE_RESPONSE, "WEBKIT_POLICY_DECISION_TYPE_RESPONSE", "response" },
        { 0, NULL, NULL }
    };

    static GType type = 0;
    if (G_UNLIKELY(!type))
        type = g_enum_register_static("WebKitPolicyDecisionType", values);

    return type;
}

GType webkit_load_event_get_type()
{
    static const GEnumValue values[] = {
        { WEBKIT_LOAD_STARTED, "WEBKIT_LOAD_STARTED", "started" },
        { WEBKIT_LOAD_REDIRECTED, "WEBKIT_LOAD_REDIRECTED", "redirected" },
        { WEBKIT_LOAD_COMMITTED, "WEBKIT_LOAD_COMMITTED", "committed" },
        { WEBKIT_LOAD_FINISHED, "WEBKIT_LOAD_FINISHED", "finished" },
        { 0, NULL, NULL }
    };

    static GType type = 0;
    if (G_UNLIKELY(!type))
        type = g_enum_register_static("WebKitLoadEvent", values);

    return type;
}

GType webkit_save_mode_get_type()
{
    static const GEnumValue values[] = {
        { WEBKIT_SAVE_MODE_MHTML, "WEBKIT_SAVE_MODE_MHTML", "mhtml" },
        { 0, NULL, NULL }
    };

    static GType type = 0;
    if (G_UNLIKELY(!type))
        type = g_enum_register_static("WebKitSaveMode", values);

    return type;
}

GType webkit_insecure_content_event_get_type()
{
    static const GEnumValue values[] = {
        { WEBKIT_INSECURE_CONTENT_RUN, "WEBKIT_INSECURE_CONTENT_RUN", "run" },
        { WEBKIT_INSECURE_CONTENT_DISPLAYED, "WEBKIT_INSECURE_CONTENT_DISPLAYED", "displayed" },
        { 0, NULL, NULL }
    };

    static GType type = 0;
    if (G_UNLIKELY(!type))
        type = g_enum_register_static("WebKitInsecureContentEvent", values);

    return type;
}

GType webkit_view_mode_get_type()
{
    static const GEnumValue values[] = {
        { WEBKIT_VIEW_MODE_WEB, "WEBKIT_VIEW_MODE_WEB", "web" },
        { WEBKIT_VIEW_MODE_SOURCE, "WEBKIT_VIEW_MODE_SOURCE", "source" },
        { 0, NULL, NULL }
    };

    static GType type = 0;
    if (G_UNLIKELY(!type))
        type = g_enum_register_static("WebKitViewMode", values);

    return type;
}

GType webkit_snapshot_options_get_type()
{
    static const GFlagsValue values[] = {
        { WEBKIT_SNAPSHOT_OPTIONS_NONE, "WEBKIT_SNAPSHOT_OPTIONS_NONE", "none" },
        { WEBKIT_SNAPSHOT_OPTIONS_INCLUDE_SELECTION_HIGHLIGHTING, "WEBKIT_SNAPSHOT_OPTIONS_INCLUDE_SELECTION_HIGHLIGHTING", "include-selection-highlighting" },
        { 0, NULL, NULL }
    };

    static GType type = 0;
    if (G_UNLIKELY(!type))
        type = g_flags_register_static("WebKitSnapshotOptions", values);

    return type;
}

GType webkit_snapshot_region_get_type()
{
    static const GEnumValue values[] = {
        { WEBKIT_SNAPSHOT_REGION_VISIBLE, "WEBKIT_SNAPSHOT_REGION_VISIBLE", "visible" },
        { WEBKIT_SNAPSHOT_REGION_FULL_DOCUMENT, "WEBKIT_SNAPSHOT_REGION_FULL_DOCUMENT", "full-document" },
        { 0, NULL, NULL }
    };

    static GType type = 0;
    if (G_UNLIKELY(!type))
        type = g_enum_register_static("WebKitSnapshotRegion", values);

    return type;
}

// Enumerations from ./Source/WebKit2/UIProcess/API/gtk/WebKitWebViewGroup.h.
GType webkit_injected_content_frames_get_type()
{
    static const GEnumValue values[] = {
        { WEBKIT_INJECTED_CONTENT_FRAMES_ALL, "WEBKIT_INJECTED_CONTENT_FRAMES_ALL", "all" },
        { WEBKIT_INJECTED_CONTENT_FRAMES_TOP_ONLY, "WEBKIT_INJECTED_CONTENT_FRAMES_TOP_ONLY", "top-only" },
        { 0, NULL, NULL }
    };

    static GType type = 0;
    if (G_UNLIKELY(!type))
        type = g_enum_register_static("WebKitInjectedContentFrames", values);

    return type;
}

}

/* Generated data ends here */

