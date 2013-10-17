/*
 * Copyright (C) 2010 Apple Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1.  Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 * 2.  Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. AND ITS CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL APPLE INC. OR ITS CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "config.h"

#include "WebSoupRequestManager.h"

#include "ArgumentCoders.h"
#include "DataReference.h"
#include "HandleMessage.h"
#include "MessageDecoder.h"
#include "WebCoreArgumentCoders.h"
#include "WebSoupRequestManagerMessages.h"
#include <WebCore/ResourceError.h>
#include <wtf/text/WTFString.h>

namespace WebKit {

void WebSoupRequestManager::didReceiveMessage(CoreIPC::Connection* connection, CoreIPC::MessageDecoder& decoder)
{
    if (decoder.messageName() == Messages::WebSoupRequestManager::RegisterURIScheme::name()) {
        CoreIPC::handleMessage<Messages::WebSoupRequestManager::RegisterURIScheme>(decoder, this, &WebSoupRequestManager::registerURIScheme);
        return;
    }
    if (decoder.messageName() == Messages::WebSoupRequestManager::DidHandleURIRequest::name()) {
        CoreIPC::handleMessage<Messages::WebSoupRequestManager::DidHandleURIRequest>(decoder, this, &WebSoupRequestManager::didHandleURIRequest);
        return;
    }
    if (decoder.messageName() == Messages::WebSoupRequestManager::DidReceiveURIRequestData::name()) {
        CoreIPC::handleMessage<Messages::WebSoupRequestManager::DidReceiveURIRequestData>(decoder, this, &WebSoupRequestManager::didReceiveURIRequestData);
        return;
    }
    if (decoder.messageName() == Messages::WebSoupRequestManager::DidFailURIRequest::name()) {
        CoreIPC::handleMessage<Messages::WebSoupRequestManager::DidFailURIRequest>(decoder, this, &WebSoupRequestManager::didFailURIRequest);
        return;
    }
    UNUSED_PARAM(connection);
    ASSERT_NOT_REACHED();
}

} // namespace WebKit
