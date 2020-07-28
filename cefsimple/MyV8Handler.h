#include "include\cef_v8.h"
class cMyV8Handler : public CefV8Handler{
    public:
    cMyV8Handler(); 
    ~cMyV8Handler(); 

    virtual bool Execute(const CefString& name,
                       CefRefPtr<CefV8Value> object,
                       const CefV8ValueList& arguments,
                       CefRefPtr<CefV8Value>& retval,
                       CefString& exception);
    public:
    IMPLEMENT_REFCOUNTING(cMyV8Handler);

};

