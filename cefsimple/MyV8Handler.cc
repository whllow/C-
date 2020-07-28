#include "tests\cefsimple\MyV8Handler.h"
#include <stdlib.h>
cMyV8Handler::cMyV8Handler(){

}
cMyV8Handler::~cMyV8Handler(){

}
bool cMyV8Handler::Execute(const CefString& name,
                       CefRefPtr<CefV8Value> object,
                       const CefV8ValueList& arguments,
                       CefRefPtr<CefV8Value>& retval,
                       CefString& exception){

                           if (name == "func"){
                                int num = rand()&(8-1);
                                //retval = CefV8Value::CreateString("func: C++!");
                              retval = CefV8Value::CreateInt(num);
                                return true;


                           }

                     return false;


                       }