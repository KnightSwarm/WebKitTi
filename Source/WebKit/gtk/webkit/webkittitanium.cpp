/**
 * Appcelerator WebKit - licensed under the Apache Public License 2
 * see LICENSE in the root folder for details on the license.
 * Copyright (c) 2009 Appcelerator, Inc. All Rights Reserved.
 */

#include "config.h"
#include "webkittitanium.h"

#include "webkitprivate.h"

#include "ScriptSourceCode.h"
#include "ScriptEvaluator.h"
#include "ScriptElement.h"
#include "InspectorClientGtk.h"
#include "TitaniumProtocols.h"
//IICDEBUG FIXME removeme
#include <iostream>

namespace WebCore {
    //class String;
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

        bool matchesMimeType(const WTF::String &mimeType) {
            return evaluator->matchesMimeType(mimeType.utf8().data());
        }

        void evaluate(const WTF::String &mimeType, const WebCore::ScriptSourceCode& sourceCode, void *context)
        {
            //std::cout << "IICDEBUG sourceCode ASCII: " << sourceCode.jsSourceCode().toString().ascii().data() << std::endl; //ASCII screws up \n and \t somehow
            //std::cout << "IICDEBUG sourceCode UTF-8: " << sourceCode.jsSourceCode().toString().utf8().data() << std::endl;
            evaluator->evaluate(mimeType.utf8().data(), sourceCode.jsSourceCode().toString().utf8().data(), context);
        }
};

void webkit_titanium_add_script_evaluator(WebKitWebScriptEvaluator *evaluator) {
    WebCore::ScriptElement::addScriptEvaluator(new EvaluatorAdapter(evaluator));
}


