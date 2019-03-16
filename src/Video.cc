#include "steam_api.h"

/**** GetVideoURL****/
void Video_STEAMVIDEO_INTERFACE_V002_GetVideoURL(AppId_t unVideoAppID) {
    // FIXME: implement
    STUB();
}

void Video_STEAMVIDEO_INTERFACE_V001_GetVideoURL(AppId_t unVideoAppID) {
    return Video_STEAMVIDEO_INTERFACE_V002_GetVideoURL(unVideoAppID);
}

/**** IsBroadcasting****/
bool Video_STEAMVIDEO_INTERFACE_V002_IsBroadcasting(int* pnNumViewers) {
    // FIXME: implement
    STUB();
    return false;
}

bool Video_STEAMVIDEO_INTERFACE_V001_IsBroadcasting(int* pnNumViewers) {
    return Video_STEAMVIDEO_INTERFACE_V002_IsBroadcasting(pnNumViewers);
}

/**** GetOPFSettings****/
void Video_STEAMVIDEO_INTERFACE_V002_GetOPFSettings(AppId_t unVideoAppID) {
    // FIXME: implement
    STUB();
}

/**** GetOPFStringForApp****/
bool Video_STEAMVIDEO_INTERFACE_V002_GetOPFStringForApp(AppId_t unVideoAppID, char* pchBuffer, int32* pnBufferSize) {
    // FIXME: implement
    STUB();
    return false;
}

