#include "steam_api.h"

/**** WriteScreenshot****/
ScreenshotHandle Screenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_WriteScreenshot(void* pubRGB, uint32 cubRGB, int nWidth, int nHeight) {
    // FIXME: implement
    STUB();
    return 0;
}

ScreenshotHandle Screenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_WriteScreenshot(void* pubRGB, uint32 cubRGB, int nWidth, int nHeight) {
    return Screenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_WriteScreenshot(pubRGB, cubRGB, nWidth, nHeight);
}

ScreenshotHandle Screenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_WriteScreenshot(void* pubRGB, uint32 cubRGB, int nWidth, int nHeight) {
    return Screenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_WriteScreenshot(pubRGB, cubRGB, nWidth, nHeight);
}

/**** AddScreenshotToLibrary****/
ScreenshotHandle Screenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_AddScreenshotToLibrary(char* pchJpegOrTGAFilename, char* pchJpegOrTGAThumbFilename, int nWidth, int nHeight) {
    // FIXME: implement
    STUB();
    return 0;
}

ScreenshotHandle Screenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_AddScreenshotToLibrary(char* pchJpegOrTGAFilename, char* pchJpegOrTGAThumbFilename, int nWidth, int nHeight) {
    return Screenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_AddScreenshotToLibrary(pchJpegOrTGAFilename, pchJpegOrTGAThumbFilename, nWidth, nHeight);
}

ScreenshotHandle Screenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_AddScreenshotToLibrary(char* pchJpegOrTGAFilename, char* pchJpegOrTGAThumbFilename, int nWidth, int nHeight) {
    return Screenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_AddScreenshotToLibrary(pchJpegOrTGAFilename, pchJpegOrTGAThumbFilename, nWidth, nHeight);
}

/**** TriggerScreenshot****/
void Screenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TriggerScreenshot() {
    // FIXME: implement
    STUB();
}

void Screenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TriggerScreenshot() {
    return Screenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TriggerScreenshot();
}

void Screenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TriggerScreenshot() {
    return Screenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TriggerScreenshot();
}

/**** HookScreenshots****/
void Screenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_HookScreenshots(bool bHook) {
    // FIXME: implement
    STUB();
}

void Screenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_HookScreenshots(bool bHook) {
    return Screenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_HookScreenshots(bHook);
}

void Screenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_HookScreenshots(bool bHook) {
    return Screenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_HookScreenshots(bHook);
}

/**** SetLocation****/
bool Screenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_SetLocation(ScreenshotHandle hScreenshot, char* pchLocation) {
    // FIXME: implement
    STUB();
    return false;
}

bool Screenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_SetLocation(ScreenshotHandle hScreenshot, char* pchLocation) {
    return Screenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_SetLocation(hScreenshot, pchLocation);
}

bool Screenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_SetLocation(ScreenshotHandle hScreenshot, char* pchLocation) {
    return Screenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_SetLocation(hScreenshot, pchLocation);
}

/**** TagUser****/
bool Screenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TagUser(ScreenshotHandle hScreenshot, CSteamID steamID) {
    // FIXME: implement
    STUB();
    return false;
}

bool Screenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TagUser(ScreenshotHandle hScreenshot, CSteamID steamID) {
    return Screenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TagUser(hScreenshot, steamID);
}

bool Screenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TagUser(ScreenshotHandle hScreenshot, CSteamID steamID) {
    return Screenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TagUser(hScreenshot, steamID);
}

/**** TagPublishedFile****/
bool Screenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TagPublishedFile(ScreenshotHandle hScreenshot, PublishedFileId_t unPublishedFileID) {
    // FIXME: implement
    STUB();
    return false;
}

bool Screenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TagPublishedFile(ScreenshotHandle hScreenshot, PublishedFileId_t unPublishedFileID) {
    return Screenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TagPublishedFile(hScreenshot, unPublishedFileID);
}

/**** IsScreenshotsHooked****/
bool Screenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_IsScreenshotsHooked() {
    // FIXME: implement
    STUB();
    return false;
}

/**** AddVRScreenshotToLibrary****/
ScreenshotHandle Screenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_AddVRScreenshotToLibrary(EVRScreenshotType_v1 eType, char* pchFilename, char* pchVRFilename) {
    // FIXME: implement
    STUB();
    return 0;
}

