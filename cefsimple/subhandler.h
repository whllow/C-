
#include "include/cef_app.h"

class csubclassHandler :
public CefApp,
public CefRenderProcessHandler
{

public:
    csubclassHandler();
    ~csubclassHandler();

   
    virtual CefRefPtr<CefRenderProcessHandler> GetRenderProcessHandler() OVERRIDE {
    return this;
  } 

    void OnContextCreated(CefRefPtr<CefBrowser> browser, CefRefPtr<CefFrame> frame, CefRefPtr<CefV8Context> context) OVERRIDE;
  private:
	  IMPLEMENT_REFCOUNTING(csubclassHandler);
};