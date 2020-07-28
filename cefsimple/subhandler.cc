
#include "tests\cefsimple\subhandler.h"
#include "tests\cefsimple\MyV8Handler.h"
void csubclassHandler::OnContextCreated(CefRefPtr<CefBrowser> browser, CefRefPtr<CefFrame> frame, CefRefPtr<CefV8Context> context)
{

       

        CefRefPtr<CefV8Value> window = context->GetGlobal();

        

        CefRefPtr<cMyV8Handler> handler= new cMyV8Handler();

     

        CefRefPtr<CefV8Value> myFunc = CefV8Value::CreateFunction("func", handler);

   

        window->SetValue("func", myFunc, V8_PROPERTY_ATTRIBUTE_NONE);

    }


  csubclassHandler::csubclassHandler(){}
  csubclassHandler::~csubclassHandler(){}


