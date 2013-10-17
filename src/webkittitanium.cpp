/**
 * This file has been modified from its orginal sources.
 *
 * Copyright (c) 2013 KnightSwarm Handelsbolag
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License. 
 * 
 *** 
 * Appcelerator WebKit - licensed under the Apache Public License 2
 * see LICENSE in the root folder for details on the license.
 * Copyright (c) 2009 Appcelerator, Inc. All Rights Reserved.
 */

#include "config.h"
#include "webkittitanium.h"

#include "webkitprivate.h"

#include <WebCore/bindings/js/ScriptSourceCode.h>
#include <WebCore/dom/ScriptEvaluator.h>
#include <WebCore/dom/ScriptElement.h>
#include "FrameLoaderClientGtk.h"
#include "InspectorClientGtk.h"
#include "TitaniumProtocols.h"

namespace WebCore {
    class String;
    class ScriptSourceCode;
}

void webkit_titanium_set_normalize_url_cb(NormalizeURLCallback cb) {
    WebCore::TitaniumProtocols::NormalizeCallback = cb;
}

void webkit_titanium_set_url_to_file_url_cb(URLToFileURLCallback cb) {
    WebCore::TitaniumProtocols::URLCallback = cb;
}

void webkit_titanium_set_can_preprocess_cb(CanPreprocessURLCallback cb) {
    WebCore::TitaniumProtocols::CanPreprocessCallback = cb;
}

void webkit_titanium_set_preprocess_cb(PreprocessURLCallback cb) {
    WebCore::TitaniumProtocols::PreprocessCallback = cb;
}

void webkit_titanium_set_inspector_url(const gchar* url) {
   if (WebKit::CustomGtkWebInspectorPath)
       free(WebKit::CustomGtkWebInspectorPath);
   WebKit::CustomGtkWebInspectorPath = strdup(url);
}

class EvaluatorAdapter : public WebCore::ScriptEvaluator {
    protected:
        WebKitWebScriptEvaluator *evaluator;

    public:
        EvaluatorAdapter(WebKitWebScriptEvaluator *evaluator) 
        : evaluator(evaluator)
        {
        }

        bool matchesMimeType(const WebCore::String &mimeType) {
            return evaluator->matchesMimeType(mimeType.utf8().data());
        }

        void evaluate(const WebCore::String &mimeType, const WebCore::ScriptSourceCode& sourceCode, void *context) {
            evaluator->evaluate(mimeType.utf8().data(), sourceCode.jsSourceCode().toString().ascii(), context);

        }
};

void webkit_titanium_add_script_evaluator(WebKitWebScriptEvaluator *evaluator) {
    WebCore::ScriptElement::addScriptEvaluator(new EvaluatorAdapter(evaluator));
}


