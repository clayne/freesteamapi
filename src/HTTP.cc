#include "steam_api.h"

/**** CreateHTTPRequest****/
HTTPRequestHandle HTTP_STEAMHTTP_INTERFACE_VERSION002_CreateHTTPRequest(EHTTPMethod_v1 eHTTPRequestMethod, char* pchAbsoluteURL) {
    // FIXME: implement
    STUB();
    return 0;
}

HTTPRequestHandle HTTP_STEAMHTTP_INTERFACE_VERSION001_CreateHTTPRequest(EHTTPMethod_v1 eHTTPRequestMethod, char* pchAbsoluteURL) {
    return HTTP_STEAMHTTP_INTERFACE_VERSION002_CreateHTTPRequest(eHTTPRequestMethod, pchAbsoluteURL);
}

/**** SetHTTPRequestContextValue****/
bool HTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestContextValue(HTTPRequestHandle hRequest, uint64 ulContextValue) {
    // FIXME: implement
    STUB();
    return false;
}

bool HTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestContextValue(HTTPRequestHandle hRequest, uint64 ulContextValue) {
    return HTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestContextValue(hRequest, ulContextValue);
}

/**** SetHTTPRequestNetworkActivityTimeout****/
bool HTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestNetworkActivityTimeout(HTTPRequestHandle hRequest, uint32 unTimeoutSeconds) {
    // FIXME: implement
    STUB();
    return false;
}

bool HTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestNetworkActivityTimeout(HTTPRequestHandle hRequest, uint32 unTimeoutSeconds) {
    return HTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestNetworkActivityTimeout(hRequest, unTimeoutSeconds);
}

/**** SetHTTPRequestHeaderValue****/
bool HTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestHeaderValue(HTTPRequestHandle hRequest, char* pchHeaderName, char* pchHeaderValue) {
    // FIXME: implement
    STUB();
    return false;
}

bool HTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestHeaderValue(HTTPRequestHandle hRequest, char* pchHeaderName, char* pchHeaderValue) {
    return HTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestHeaderValue(hRequest, pchHeaderName, pchHeaderValue);
}

/**** SetHTTPRequestGetOrPostParameter****/
bool HTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestGetOrPostParameter(HTTPRequestHandle hRequest, char* pchParamName, char* pchParamValue) {
    // FIXME: implement
    STUB();
    return false;
}

bool HTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestGetOrPostParameter(HTTPRequestHandle hRequest, char* pchParamName, char* pchParamValue) {
    return HTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestGetOrPostParameter(hRequest, pchParamName, pchParamValue);
}

/**** SendHTTPRequest****/
bool HTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequest(HTTPRequestHandle hRequest, SteamAPICall_t* pCallHandle) {
    // FIXME: implement
    STUB();
    return false;
}

bool HTTP_STEAMHTTP_INTERFACE_VERSION001_SendHTTPRequest(HTTPRequestHandle hRequest, SteamAPICall_t* pCallHandle) {
    return HTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequest(hRequest, pCallHandle);
}

/**** DeferHTTPRequest****/
bool HTTP_STEAMHTTP_INTERFACE_VERSION002_DeferHTTPRequest(HTTPRequestHandle hRequest) {
    // FIXME: implement
    STUB();
    return false;
}

bool HTTP_STEAMHTTP_INTERFACE_VERSION001_DeferHTTPRequest(HTTPRequestHandle hRequest) {
    return HTTP_STEAMHTTP_INTERFACE_VERSION002_DeferHTTPRequest(hRequest);
}

/**** PrioritizeHTTPRequest****/
bool HTTP_STEAMHTTP_INTERFACE_VERSION002_PrioritizeHTTPRequest(HTTPRequestHandle hRequest) {
    // FIXME: implement
    STUB();
    return false;
}

bool HTTP_STEAMHTTP_INTERFACE_VERSION001_PrioritizeHTTPRequest(HTTPRequestHandle hRequest) {
    return HTTP_STEAMHTTP_INTERFACE_VERSION002_PrioritizeHTTPRequest(hRequest);
}

/**** GetHTTPResponseHeaderSize****/
bool HTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderSize(HTTPRequestHandle hRequest, char* pchHeaderName, uint32* unResponseHeaderSize) {
    // FIXME: implement
    STUB();
    return false;
}

bool HTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseHeaderSize(HTTPRequestHandle hRequest, char* pchHeaderName, uint32* unResponseHeaderSize) {
    return HTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderSize(hRequest, pchHeaderName, unResponseHeaderSize);
}

/**** GetHTTPResponseHeaderValue****/
bool HTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderValue(HTTPRequestHandle hRequest, char* pchHeaderName, uint8* pHeaderValueBuffer, uint32 unBufferSize) {
    // FIXME: implement
    STUB();
    return false;
}

bool HTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseHeaderValue(HTTPRequestHandle hRequest, char* pchHeaderName, uint8* pHeaderValueBuffer, uint32 unBufferSize) {
    return HTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderValue(hRequest, pchHeaderName, pHeaderValueBuffer, unBufferSize);
}

/**** GetHTTPResponseBodySize****/
bool HTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodySize(HTTPRequestHandle hRequest, uint32* unBodySize) {
    // FIXME: implement
    STUB();
    return false;
}

bool HTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseBodySize(HTTPRequestHandle hRequest, uint32* unBodySize) {
    return HTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodySize(hRequest, unBodySize);
}

/**** GetHTTPResponseBodyData****/
bool HTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodyData(HTTPRequestHandle hRequest, uint8* pBodyDataBuffer, uint32 unBufferSize) {
    // FIXME: implement
    STUB();
    return false;
}

bool HTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseBodyData(HTTPRequestHandle hRequest, uint8* pBodyDataBuffer, uint32 unBufferSize) {
    return HTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodyData(hRequest, pBodyDataBuffer, unBufferSize);
}

/**** ReleaseHTTPRequest****/
bool HTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseHTTPRequest(HTTPRequestHandle hRequest) {
    // FIXME: implement
    STUB();
    return false;
}

bool HTTP_STEAMHTTP_INTERFACE_VERSION001_ReleaseHTTPRequest(HTTPRequestHandle hRequest) {
    return HTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseHTTPRequest(hRequest);
}

/**** GetHTTPDownloadProgressPct****/
bool HTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPDownloadProgressPct(HTTPRequestHandle hRequest, float* pflPercentOut) {
    // FIXME: implement
    STUB();
    return false;
}

bool HTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPDownloadProgressPct(HTTPRequestHandle hRequest, float* pflPercentOut) {
    return HTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPDownloadProgressPct(hRequest, pflPercentOut);
}

/**** SetHTTPRequestRawPostBody****/
bool HTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRawPostBody(HTTPRequestHandle hRequest, char* pchContentType, uint8* pubBody, uint32 unBodyLen) {
    // FIXME: implement
    STUB();
    return false;
}

bool HTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestRawPostBody(HTTPRequestHandle hRequest, char* pchContentType, uint8* pubBody, uint32 unBodyLen) {
    return HTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRawPostBody(hRequest, pchContentType, pubBody, unBodyLen);
}

/**** SendHTTPRequestAndStreamResponse****/
bool HTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequestAndStreamResponse(HTTPRequestHandle hRequest, SteamAPICall_t* pCallHandle) {
    // FIXME: implement
    STUB();
    return false;
}

/**** GetHTTPStreamingResponseBodyData****/
bool HTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPStreamingResponseBodyData(HTTPRequestHandle hRequest, uint32 cOffset, uint8* pBodyDataBuffer, uint32 unBufferSize) {
    // FIXME: implement
    STUB();
    return false;
}

/**** CreateCookieContainer****/
HTTPCookieContainerHandle HTTP_STEAMHTTP_INTERFACE_VERSION002_CreateCookieContainer(bool bAllowResponsesToModify) {
    // FIXME: implement
    STUB();
    return 0;
}

/**** ReleaseCookieContainer****/
bool HTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseCookieContainer(HTTPCookieContainerHandle hCookieContainer) {
    // FIXME: implement
    STUB();
    return false;
}

/**** SetCookie****/
bool HTTP_STEAMHTTP_INTERFACE_VERSION002_SetCookie(HTTPCookieContainerHandle hCookieContainer, char* pchHost, char* pchUrl, char* pchCookie) {
    // FIXME: implement
    STUB();
    return false;
}

/**** SetHTTPRequestCookieContainer****/
bool HTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestCookieContainer(HTTPRequestHandle hRequest, HTTPCookieContainerHandle hCookieContainer) {
    // FIXME: implement
    STUB();
    return false;
}

/**** SetHTTPRequestUserAgentInfo****/
bool HTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestUserAgentInfo(HTTPRequestHandle hRequest, char* pchUserAgentInfo) {
    // FIXME: implement
    STUB();
    return false;
}

/**** SetHTTPRequestRequiresVerifiedCertificate****/
bool HTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRequiresVerifiedCertificate(HTTPRequestHandle hRequest, bool bRequireVerifiedCertificate) {
    // FIXME: implement
    STUB();
    return false;
}

/**** SetHTTPRequestAbsoluteTimeoutMS****/
bool HTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestAbsoluteTimeoutMS(HTTPRequestHandle hRequest, uint32 unMilliseconds) {
    // FIXME: implement
    STUB();
    return false;
}

/**** GetHTTPRequestWasTimedOut****/
bool HTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPRequestWasTimedOut(HTTPRequestHandle hRequest, bool* pbWasTimedOut) {
    // FIXME: implement
    STUB();
    return false;
}

