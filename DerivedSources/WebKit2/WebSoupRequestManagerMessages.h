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

#ifndef WebSoupRequestManagerMessages_h
#define WebSoupRequestManagerMessages_h

#include "Arguments.h"
#include "MessageEncoder.h"
#include "StringReference.h"

namespace CoreIPC {
    class DataReference;
}

namespace WTF {
    class String;
}

namespace WebCore {
    class ResourceError;
}

namespace Messages {
namespace WebSoupRequestManager {

static inline CoreIPC::StringReference messageReceiverName()
{
    return CoreIPC::StringReference("WebSoupRequestManager");
}

struct RegisterURIScheme : CoreIPC::Arguments1<const WTF::String&> {
    static CoreIPC::StringReference receiverName() { return messageReceiverName(); }
    static CoreIPC::StringReference name() { return CoreIPC::StringReference("RegisterURIScheme"); }
    static const bool isSync = false;

    typedef CoreIPC::Arguments1<const WTF::String&> DecodeType;
    explicit RegisterURIScheme(const WTF::String& uriScheme)
        : CoreIPC::Arguments1<const WTF::String&>(uriScheme)
    {
    }
};

struct DidHandleURIRequest : CoreIPC::Arguments4<const CoreIPC::DataReference&, uint64_t, const WTF::String&, uint64_t> {
    static CoreIPC::StringReference receiverName() { return messageReceiverName(); }
    static CoreIPC::StringReference name() { return CoreIPC::StringReference("DidHandleURIRequest"); }
    static const bool isSync = false;

    typedef CoreIPC::Arguments4<const CoreIPC::DataReference&, uint64_t, const WTF::String&, uint64_t> DecodeType;
    DidHandleURIRequest(const CoreIPC::DataReference& requestData, uint64_t contentLength, const WTF::String& mimeType, uint64_t requestID)
        : CoreIPC::Arguments4<const CoreIPC::DataReference&, uint64_t, const WTF::String&, uint64_t>(requestData, contentLength, mimeType, requestID)
    {
    }
};

struct DidReceiveURIRequestData : CoreIPC::Arguments2<const CoreIPC::DataReference&, uint64_t> {
    static CoreIPC::StringReference receiverName() { return messageReceiverName(); }
    static CoreIPC::StringReference name() { return CoreIPC::StringReference("DidReceiveURIRequestData"); }
    static const bool isSync = false;

    typedef CoreIPC::Arguments2<const CoreIPC::DataReference&, uint64_t> DecodeType;
    DidReceiveURIRequestData(const CoreIPC::DataReference& requestData, uint64_t requestID)
        : CoreIPC::Arguments2<const CoreIPC::DataReference&, uint64_t>(requestData, requestID)
    {
    }
};

struct DidFailURIRequest : CoreIPC::Arguments2<const WebCore::ResourceError&, uint64_t> {
    static CoreIPC::StringReference receiverName() { return messageReceiverName(); }
    static CoreIPC::StringReference name() { return CoreIPC::StringReference("DidFailURIRequest"); }
    static const bool isSync = false;

    typedef CoreIPC::Arguments2<const WebCore::ResourceError&, uint64_t> DecodeType;
    DidFailURIRequest(const WebCore::ResourceError& error, uint64_t requestID)
        : CoreIPC::Arguments2<const WebCore::ResourceError&, uint64_t>(error, requestID)
    {
    }
};

} // namespace WebSoupRequestManager
} // namespace Messages

#endif // WebSoupRequestManagerMessages_h
