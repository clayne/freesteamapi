#include "steam_api.h"

/**** Init****/
bool HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Init() {
    // FIXME: implement
    STUB();
    return false;
}

bool HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Init() {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Init();
}

bool HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Init() {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Init();
}

/**** Shutdown****/
bool HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Shutdown() {
    // FIXME: implement
    STUB();
    return false;
}

bool HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Shutdown() {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Shutdown();
}

bool HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Shutdown() {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Shutdown();
}

/**** CreateBrowser****/
SteamAPICall_t HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_CreateBrowser(char* pchUserAgent, char* pchUserCSS) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_CreateBrowser(char* pchUserAgent, char* pchUserCSS) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_CreateBrowser(pchUserAgent, pchUserCSS);
}

SteamAPICall_t HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_CreateBrowser(char* pchUserAgent, char* pchUserCSS) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_CreateBrowser(pchUserAgent, pchUserCSS);
}

/**** RemoveBrowser****/
void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_RemoveBrowser(HHTMLBrowser unBrowserHandle) {
    // FIXME: implement
    STUB();
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_RemoveBrowser(HHTMLBrowser unBrowserHandle) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_RemoveBrowser(unBrowserHandle);
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_RemoveBrowser(HHTMLBrowser unBrowserHandle) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_RemoveBrowser(unBrowserHandle);
}

/**** LoadURL****/
void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_LoadURL(HHTMLBrowser unBrowserHandle, char* pchURL, char* pchPostData) {
    // FIXME: implement
    STUB();
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_LoadURL(HHTMLBrowser unBrowserHandle, char* pchURL, char* pchPostData) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_LoadURL(unBrowserHandle, pchURL, pchPostData);
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_LoadURL(HHTMLBrowser unBrowserHandle, char* pchURL, char* pchPostData) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_LoadURL(unBrowserHandle, pchURL, pchPostData);
}

/**** SetSize****/
void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetSize(HHTMLBrowser unBrowserHandle, uint32 unWidth, uint32 unHeight) {
    // FIXME: implement
    STUB();
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetSize(HHTMLBrowser unBrowserHandle, uint32 unWidth, uint32 unHeight) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetSize(unBrowserHandle, unWidth, unHeight);
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetSize(HHTMLBrowser unBrowserHandle, uint32 unWidth, uint32 unHeight) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetSize(unBrowserHandle, unWidth, unHeight);
}

/**** StopLoad****/
void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_StopLoad(HHTMLBrowser unBrowserHandle) {
    // FIXME: implement
    STUB();
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_StopLoad(HHTMLBrowser unBrowserHandle) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_StopLoad(unBrowserHandle);
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_StopLoad(HHTMLBrowser unBrowserHandle) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_StopLoad(unBrowserHandle);
}

/**** Reload****/
void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Reload(HHTMLBrowser unBrowserHandle) {
    // FIXME: implement
    STUB();
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Reload(HHTMLBrowser unBrowserHandle) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Reload(unBrowserHandle);
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Reload(HHTMLBrowser unBrowserHandle) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Reload(unBrowserHandle);
}

/**** GoBack****/
void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GoBack(HHTMLBrowser unBrowserHandle) {
    // FIXME: implement
    STUB();
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GoBack(HHTMLBrowser unBrowserHandle) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GoBack(unBrowserHandle);
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GoBack(HHTMLBrowser unBrowserHandle) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GoBack(unBrowserHandle);
}

/**** GoForward****/
void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GoForward(HHTMLBrowser unBrowserHandle) {
    // FIXME: implement
    STUB();
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GoForward(HHTMLBrowser unBrowserHandle) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GoForward(unBrowserHandle);
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GoForward(HHTMLBrowser unBrowserHandle) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GoForward(unBrowserHandle);
}

/**** AddHeader****/
void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_AddHeader(HHTMLBrowser unBrowserHandle, char* pchKey, char* pchValue) {
    // FIXME: implement
    STUB();
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_AddHeader(HHTMLBrowser unBrowserHandle, char* pchKey, char* pchValue) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_AddHeader(unBrowserHandle, pchKey, pchValue);
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_AddHeader(HHTMLBrowser unBrowserHandle, char* pchKey, char* pchValue) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_AddHeader(unBrowserHandle, pchKey, pchValue);
}

/**** ExecuteJavascript****/
void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_ExecuteJavascript(HHTMLBrowser unBrowserHandle, char* pchScript) {
    // FIXME: implement
    STUB();
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_ExecuteJavascript(HHTMLBrowser unBrowserHandle, char* pchScript) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_ExecuteJavascript(unBrowserHandle, pchScript);
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_ExecuteJavascript(HHTMLBrowser unBrowserHandle, char* pchScript) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_ExecuteJavascript(unBrowserHandle, pchScript);
}

/**** MouseUp****/
void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseUp(HHTMLBrowser unBrowserHandle, EHTMLMouseButton_v1 eMouseButton) {
    // FIXME: implement
    STUB();
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseUp(HHTMLBrowser unBrowserHandle, EHTMLMouseButton_v1 eMouseButton) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseUp(unBrowserHandle, eMouseButton);
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseUp(HHTMLBrowser unBrowserHandle, EHTMLMouseButton_v1 eMouseButton) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseUp(unBrowserHandle, eMouseButton);
}

/**** MouseDown****/
void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseDown(HHTMLBrowser unBrowserHandle, EHTMLMouseButton_v1 eMouseButton) {
    // FIXME: implement
    STUB();
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseDown(HHTMLBrowser unBrowserHandle, EHTMLMouseButton_v1 eMouseButton) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseDown(unBrowserHandle, eMouseButton);
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseDown(HHTMLBrowser unBrowserHandle, EHTMLMouseButton_v1 eMouseButton) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseDown(unBrowserHandle, eMouseButton);
}

/**** MouseDoubleClick****/
void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseDoubleClick(HHTMLBrowser unBrowserHandle, EHTMLMouseButton_v1 eMouseButton) {
    // FIXME: implement
    STUB();
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseDoubleClick(HHTMLBrowser unBrowserHandle, EHTMLMouseButton_v1 eMouseButton) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseDoubleClick(unBrowserHandle, eMouseButton);
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseDoubleClick(HHTMLBrowser unBrowserHandle, EHTMLMouseButton_v1 eMouseButton) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseDoubleClick(unBrowserHandle, eMouseButton);
}

/**** MouseMove****/
void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseMove(HHTMLBrowser unBrowserHandle, int x, int y) {
    // FIXME: implement
    STUB();
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseMove(HHTMLBrowser unBrowserHandle, int x, int y) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseMove(unBrowserHandle, x, y);
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseMove(HHTMLBrowser unBrowserHandle, int x, int y) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseMove(unBrowserHandle, x, y);
}

/**** MouseWheel****/
void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseWheel(HHTMLBrowser unBrowserHandle, int32 nDelta) {
    // FIXME: implement
    STUB();
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseWheel(HHTMLBrowser unBrowserHandle, int32 nDelta) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseWheel(unBrowserHandle, nDelta);
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseWheel(HHTMLBrowser unBrowserHandle, int32 nDelta) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseWheel(unBrowserHandle, nDelta);
}

/**** KeyDown****/
void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyDown(HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, EHTMLKeyModifiers_v1 eHTMLKeyModifiers) {
    // FIXME: implement
    STUB();
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyDown(HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, EHTMLKeyModifiers_v1 eHTMLKeyModifiers) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyDown(unBrowserHandle, nNativeKeyCode, eHTMLKeyModifiers);
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyDown(HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, EHTMLKeyModifiers_v1 eHTMLKeyModifiers) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyDown(unBrowserHandle, nNativeKeyCode, eHTMLKeyModifiers);
}

/**** KeyUp****/
void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyUp(HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, EHTMLKeyModifiers_v1 eHTMLKeyModifiers) {
    // FIXME: implement
    STUB();
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyUp(HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, EHTMLKeyModifiers_v1 eHTMLKeyModifiers) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyUp(unBrowserHandle, nNativeKeyCode, eHTMLKeyModifiers);
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyUp(HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, EHTMLKeyModifiers_v1 eHTMLKeyModifiers) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyUp(unBrowserHandle, nNativeKeyCode, eHTMLKeyModifiers);
}

/**** KeyChar****/
void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyChar(HHTMLBrowser unBrowserHandle, uint32 cUnicodeChar, EHTMLKeyModifiers_v1 eHTMLKeyModifiers) {
    // FIXME: implement
    STUB();
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyChar(HHTMLBrowser unBrowserHandle, uint32 cUnicodeChar, EHTMLKeyModifiers_v1 eHTMLKeyModifiers) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyChar(unBrowserHandle, cUnicodeChar, eHTMLKeyModifiers);
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyChar(HHTMLBrowser unBrowserHandle, uint32 cUnicodeChar, EHTMLKeyModifiers_v1 eHTMLKeyModifiers) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyChar(unBrowserHandle, cUnicodeChar, eHTMLKeyModifiers);
}

/**** SetHorizontalScroll****/
void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetHorizontalScroll(HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll) {
    // FIXME: implement
    STUB();
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetHorizontalScroll(HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetHorizontalScroll(unBrowserHandle, nAbsolutePixelScroll);
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetHorizontalScroll(HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetHorizontalScroll(unBrowserHandle, nAbsolutePixelScroll);
}

/**** SetVerticalScroll****/
void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetVerticalScroll(HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll) {
    // FIXME: implement
    STUB();
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetVerticalScroll(HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetVerticalScroll(unBrowserHandle, nAbsolutePixelScroll);
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetVerticalScroll(HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetVerticalScroll(unBrowserHandle, nAbsolutePixelScroll);
}

/**** SetKeyFocus****/
void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetKeyFocus(HHTMLBrowser unBrowserHandle, bool bHasKeyFocus) {
    // FIXME: implement
    STUB();
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetKeyFocus(HHTMLBrowser unBrowserHandle, bool bHasKeyFocus) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetKeyFocus(unBrowserHandle, bHasKeyFocus);
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetKeyFocus(HHTMLBrowser unBrowserHandle, bool bHasKeyFocus) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetKeyFocus(unBrowserHandle, bHasKeyFocus);
}

/**** ViewSource****/
void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_ViewSource(HHTMLBrowser unBrowserHandle) {
    // FIXME: implement
    STUB();
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_ViewSource(HHTMLBrowser unBrowserHandle) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_ViewSource(unBrowserHandle);
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_ViewSource(HHTMLBrowser unBrowserHandle) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_ViewSource(unBrowserHandle);
}

/**** CopyToClipboard****/
void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_CopyToClipboard(HHTMLBrowser unBrowserHandle) {
    // FIXME: implement
    STUB();
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_CopyToClipboard(HHTMLBrowser unBrowserHandle) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_CopyToClipboard(unBrowserHandle);
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_CopyToClipboard(HHTMLBrowser unBrowserHandle) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_CopyToClipboard(unBrowserHandle);
}

/**** PasteFromClipboard****/
void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_PasteFromClipboard(HHTMLBrowser unBrowserHandle) {
    // FIXME: implement
    STUB();
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_PasteFromClipboard(HHTMLBrowser unBrowserHandle) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_PasteFromClipboard(unBrowserHandle);
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_PasteFromClipboard(HHTMLBrowser unBrowserHandle) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_PasteFromClipboard(unBrowserHandle);
}

/**** Find****/
void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Find(HHTMLBrowser unBrowserHandle, char* pchSearchStr, bool bCurrentlyInFind, bool bReverse) {
    // FIXME: implement
    STUB();
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Find(HHTMLBrowser unBrowserHandle, char* pchSearchStr, bool bCurrentlyInFind, bool bReverse) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Find(unBrowserHandle, pchSearchStr, bCurrentlyInFind, bReverse);
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Find(HHTMLBrowser unBrowserHandle, char* pchSearchStr, bool bCurrentlyInFind, bool bReverse) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Find(unBrowserHandle, pchSearchStr, bCurrentlyInFind, bReverse);
}

/**** StopFind****/
void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_StopFind(HHTMLBrowser unBrowserHandle) {
    // FIXME: implement
    STUB();
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_StopFind(HHTMLBrowser unBrowserHandle) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_StopFind(unBrowserHandle);
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_StopFind(HHTMLBrowser unBrowserHandle) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_StopFind(unBrowserHandle);
}

/**** GetLinkAtPosition****/
void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GetLinkAtPosition(HHTMLBrowser unBrowserHandle, int x, int y) {
    // FIXME: implement
    STUB();
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GetLinkAtPosition(HHTMLBrowser unBrowserHandle, int x, int y) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GetLinkAtPosition(unBrowserHandle, x, y);
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GetLinkAtPosition(HHTMLBrowser unBrowserHandle, int x, int y) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GetLinkAtPosition(unBrowserHandle, x, y);
}

/**** SetCookie****/
void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetCookie(char* pchHostname, char* pchKey, char* pchValue, char* pchPath, RTime32 nExpires, bool bSecure, bool bHTTPOnly) {
    // FIXME: implement
    STUB();
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetCookie(char* pchHostname, char* pchKey, char* pchValue, char* pchPath, RTime32 nExpires, bool bSecure, bool bHTTPOnly) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetCookie(pchHostname, pchKey, pchValue, pchPath, nExpires, bSecure, bHTTPOnly);
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetCookie(char* pchHostname, char* pchKey, char* pchValue, char* pchPath, RTime32 nExpires, bool bSecure, bool bHTTPOnly) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetCookie(pchHostname, pchKey, pchValue, pchPath, nExpires, bSecure, bHTTPOnly);
}

/**** SetPageScaleFactor****/
void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetPageScaleFactor(HHTMLBrowser unBrowserHandle, float flZoom, int nPointX, int nPointY) {
    // FIXME: implement
    STUB();
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetPageScaleFactor(HHTMLBrowser unBrowserHandle, float flZoom, int nPointX, int nPointY) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetPageScaleFactor(unBrowserHandle, flZoom, nPointX, nPointY);
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetPageScaleFactor(HHTMLBrowser unBrowserHandle, float flZoom, int nPointX, int nPointY) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetPageScaleFactor(unBrowserHandle, flZoom, nPointX, nPointY);
}

/**** AllowStartRequest****/
void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_AllowStartRequest(HHTMLBrowser unBrowserHandle, bool bAllowed) {
    // FIXME: implement
    STUB();
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_AllowStartRequest(HHTMLBrowser unBrowserHandle, bool bAllowed) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_AllowStartRequest(unBrowserHandle, bAllowed);
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_AllowStartRequest(HHTMLBrowser unBrowserHandle, bool bAllowed) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_AllowStartRequest(unBrowserHandle, bAllowed);
}

/**** JSDialogResponse****/
void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_JSDialogResponse(HHTMLBrowser unBrowserHandle, bool bResult) {
    // FIXME: implement
    STUB();
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_JSDialogResponse(HHTMLBrowser unBrowserHandle, bool bResult) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_JSDialogResponse(unBrowserHandle, bResult);
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_JSDialogResponse(HHTMLBrowser unBrowserHandle, bool bResult) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_JSDialogResponse(unBrowserHandle, bResult);
}

/**** FileLoadDialogResponse****/
void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_FileLoadDialogResponse(HHTMLBrowser unBrowserHandle, char** pchSelectedFiles) {
    // FIXME: implement
    STUB();
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_FileLoadDialogResponse(HHTMLBrowser unBrowserHandle, char** pchSelectedFiles) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_FileLoadDialogResponse(unBrowserHandle, pchSelectedFiles);
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_FileLoadDialogResponse(HHTMLBrowser unBrowserHandle, char** pchSelectedFiles) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_FileLoadDialogResponse(unBrowserHandle, pchSelectedFiles);
}

/**** SetBackgroundMode****/
void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetBackgroundMode(HHTMLBrowser unBrowserHandle, bool bBackgroundMode) {
    // FIXME: implement
    STUB();
}

void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetBackgroundMode(HHTMLBrowser unBrowserHandle, bool bBackgroundMode) {
    return HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetBackgroundMode(unBrowserHandle, bBackgroundMode);
}

/**** SetDPIScalingFactor****/
void HTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetDPIScalingFactor(HHTMLBrowser unBrowserHandle, float flDPIScaling) {
    // FIXME: implement
    STUB();
}

