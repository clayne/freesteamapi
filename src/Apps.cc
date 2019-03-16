#include "steam_api.h"

/**** GetAppData****/
int Apps_STEAMAPPS_INTERFACE_VERSION001_GetAppData(AppId_t nAppID, char* pchKey, char* pchValue, int cchValueMax) {
    // FIXME: implement
    STUB();
    return 0;
}

/**** BIsSubscribed****/
bool Apps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribed() {
    // FIXME: implement
    STUB();
    return false;
}

bool Apps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribed() {
    return Apps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribed();
}

bool Apps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribed() {
    return Apps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribed();
}

bool Apps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribed() {
    return Apps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribed();
}

bool Apps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribed() {
    return Apps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribed();
}

bool Apps_STEAMAPPS_INTERFACE_VERSION003_BIsSubscribed() {
    return Apps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribed();
}

bool Apps_STEAMAPPS_INTERFACE_VERSION002_BIsSubscribed() {
    return Apps_STEAMAPPS_INTERFACE_VERSION003_BIsSubscribed();
}

/**** BIsLowViolence****/
bool Apps_STEAMAPPS_INTERFACE_VERSION008_BIsLowViolence() {
    // FIXME: implement
    STUB();
    return false;
}

bool Apps_STEAMAPPS_INTERFACE_VERSION007_BIsLowViolence() {
    return Apps_STEAMAPPS_INTERFACE_VERSION008_BIsLowViolence();
}

bool Apps_STEAMAPPS_INTERFACE_VERSION006_BIsLowViolence() {
    return Apps_STEAMAPPS_INTERFACE_VERSION007_BIsLowViolence();
}

bool Apps_STEAMAPPS_INTERFACE_VERSION005_BIsLowViolence() {
    return Apps_STEAMAPPS_INTERFACE_VERSION006_BIsLowViolence();
}

bool Apps_STEAMAPPS_INTERFACE_VERSION004_BIsLowViolence() {
    return Apps_STEAMAPPS_INTERFACE_VERSION005_BIsLowViolence();
}

bool Apps_STEAMAPPS_INTERFACE_VERSION003_BIsLowViolence() {
    return Apps_STEAMAPPS_INTERFACE_VERSION004_BIsLowViolence();
}

bool Apps_STEAMAPPS_INTERFACE_VERSION002_BIsLowViolence() {
    return Apps_STEAMAPPS_INTERFACE_VERSION003_BIsLowViolence();
}

/**** BIsCybercafe****/
bool Apps_STEAMAPPS_INTERFACE_VERSION008_BIsCybercafe() {
    // FIXME: implement
    STUB();
    return false;
}

bool Apps_STEAMAPPS_INTERFACE_VERSION007_BIsCybercafe() {
    return Apps_STEAMAPPS_INTERFACE_VERSION008_BIsCybercafe();
}

bool Apps_STEAMAPPS_INTERFACE_VERSION006_BIsCybercafe() {
    return Apps_STEAMAPPS_INTERFACE_VERSION007_BIsCybercafe();
}

bool Apps_STEAMAPPS_INTERFACE_VERSION005_BIsCybercafe() {
    return Apps_STEAMAPPS_INTERFACE_VERSION006_BIsCybercafe();
}

bool Apps_STEAMAPPS_INTERFACE_VERSION004_BIsCybercafe() {
    return Apps_STEAMAPPS_INTERFACE_VERSION005_BIsCybercafe();
}

bool Apps_STEAMAPPS_INTERFACE_VERSION003_BIsCybercafe() {
    return Apps_STEAMAPPS_INTERFACE_VERSION004_BIsCybercafe();
}

bool Apps_STEAMAPPS_INTERFACE_VERSION002_BIsCybercafe() {
    return Apps_STEAMAPPS_INTERFACE_VERSION003_BIsCybercafe();
}

/**** BIsVACBanned****/
bool Apps_STEAMAPPS_INTERFACE_VERSION008_BIsVACBanned() {
    // FIXME: implement
    STUB();
    return false;
}

bool Apps_STEAMAPPS_INTERFACE_VERSION007_BIsVACBanned() {
    return Apps_STEAMAPPS_INTERFACE_VERSION008_BIsVACBanned();
}

bool Apps_STEAMAPPS_INTERFACE_VERSION006_BIsVACBanned() {
    return Apps_STEAMAPPS_INTERFACE_VERSION007_BIsVACBanned();
}

bool Apps_STEAMAPPS_INTERFACE_VERSION005_BIsVACBanned() {
    return Apps_STEAMAPPS_INTERFACE_VERSION006_BIsVACBanned();
}

bool Apps_STEAMAPPS_INTERFACE_VERSION004_BIsVACBanned() {
    return Apps_STEAMAPPS_INTERFACE_VERSION005_BIsVACBanned();
}

bool Apps_STEAMAPPS_INTERFACE_VERSION003_BIsVACBanned() {
    return Apps_STEAMAPPS_INTERFACE_VERSION004_BIsVACBanned();
}

bool Apps_STEAMAPPS_INTERFACE_VERSION002_BIsVACBanned() {
    return Apps_STEAMAPPS_INTERFACE_VERSION003_BIsVACBanned();
}

/**** GetCurrentGameLanguage****/
const char * Apps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentGameLanguage() {
    // FIXME: implement
    STUB();
    return NULL;
}

const char * Apps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentGameLanguage() {
    return Apps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentGameLanguage();
}

const char * Apps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentGameLanguage() {
    return Apps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentGameLanguage();
}

const char * Apps_STEAMAPPS_INTERFACE_VERSION005_GetCurrentGameLanguage() {
    return Apps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentGameLanguage();
}

const char * Apps_STEAMAPPS_INTERFACE_VERSION004_GetCurrentGameLanguage() {
    return Apps_STEAMAPPS_INTERFACE_VERSION005_GetCurrentGameLanguage();
}

const char * Apps_STEAMAPPS_INTERFACE_VERSION003_GetCurrentGameLanguage() {
    return Apps_STEAMAPPS_INTERFACE_VERSION004_GetCurrentGameLanguage();
}

const char * Apps_STEAMAPPS_INTERFACE_VERSION002_GetCurrentGameLanguage() {
    return Apps_STEAMAPPS_INTERFACE_VERSION003_GetCurrentGameLanguage();
}

/**** GetAvailableGameLanguages****/
const char * Apps_STEAMAPPS_INTERFACE_VERSION008_GetAvailableGameLanguages() {
    // FIXME: implement
    STUB();
    return NULL;
}

const char * Apps_STEAMAPPS_INTERFACE_VERSION007_GetAvailableGameLanguages() {
    return Apps_STEAMAPPS_INTERFACE_VERSION008_GetAvailableGameLanguages();
}

const char * Apps_STEAMAPPS_INTERFACE_VERSION006_GetAvailableGameLanguages() {
    return Apps_STEAMAPPS_INTERFACE_VERSION007_GetAvailableGameLanguages();
}

const char * Apps_STEAMAPPS_INTERFACE_VERSION005_GetAvailableGameLanguages() {
    return Apps_STEAMAPPS_INTERFACE_VERSION006_GetAvailableGameLanguages();
}

const char * Apps_STEAMAPPS_INTERFACE_VERSION004_GetAvailableGameLanguages() {
    return Apps_STEAMAPPS_INTERFACE_VERSION005_GetAvailableGameLanguages();
}

const char * Apps_STEAMAPPS_INTERFACE_VERSION003_GetAvailableGameLanguages() {
    return Apps_STEAMAPPS_INTERFACE_VERSION004_GetAvailableGameLanguages();
}

const char * Apps_STEAMAPPS_INTERFACE_VERSION002_GetAvailableGameLanguages() {
    return Apps_STEAMAPPS_INTERFACE_VERSION003_GetAvailableGameLanguages();
}

/**** BIsSubscribedApp****/
bool Apps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedApp(AppId_t appID) {
    // FIXME: implement
    STUB();
    return false;
}

bool Apps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedApp(AppId_t appID) {
    return Apps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedApp(appID);
}

bool Apps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedApp(AppId_t appID) {
    return Apps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedApp(appID);
}

bool Apps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribedApp(AppId_t appID) {
    return Apps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedApp(appID);
}

bool Apps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedApp(AppId_t appID) {
    return Apps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribedApp(appID);
}

bool Apps_STEAMAPPS_INTERFACE_VERSION003_BIsSubscribedApp(AppId_t appID) {
    return Apps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedApp(appID);
}

bool Apps_STEAMAPPS_INTERFACE_VERSION002_BIsSubscribedApp(AppId_t appID) {
    return Apps_STEAMAPPS_INTERFACE_VERSION003_BIsSubscribedApp(appID);
}

/**** BIsDlcInstalled****/
bool Apps_STEAMAPPS_INTERFACE_VERSION008_BIsDlcInstalled(AppId_t appID) {
    // FIXME: implement
    STUB();
    return false;
}

bool Apps_STEAMAPPS_INTERFACE_VERSION007_BIsDlcInstalled(AppId_t appID) {
    return Apps_STEAMAPPS_INTERFACE_VERSION008_BIsDlcInstalled(appID);
}

bool Apps_STEAMAPPS_INTERFACE_VERSION006_BIsDlcInstalled(AppId_t appID) {
    return Apps_STEAMAPPS_INTERFACE_VERSION007_BIsDlcInstalled(appID);
}

bool Apps_STEAMAPPS_INTERFACE_VERSION005_BIsDlcInstalled(AppId_t appID) {
    return Apps_STEAMAPPS_INTERFACE_VERSION006_BIsDlcInstalled(appID);
}

bool Apps_STEAMAPPS_INTERFACE_VERSION004_BIsDlcInstalled(AppId_t appID) {
    return Apps_STEAMAPPS_INTERFACE_VERSION005_BIsDlcInstalled(appID);
}

bool Apps_STEAMAPPS_INTERFACE_VERSION003_BIsDlcInstalled(AppId_t appID) {
    return Apps_STEAMAPPS_INTERFACE_VERSION004_BIsDlcInstalled(appID);
}

/**** GetEarliestPurchaseUnixTime****/
uint32 Apps_STEAMAPPS_INTERFACE_VERSION008_GetEarliestPurchaseUnixTime(AppId_t nAppID) {
    // FIXME: implement
    STUB();
    return 0;
}

uint32 Apps_STEAMAPPS_INTERFACE_VERSION007_GetEarliestPurchaseUnixTime(AppId_t nAppID) {
    return Apps_STEAMAPPS_INTERFACE_VERSION008_GetEarliestPurchaseUnixTime(nAppID);
}

uint32 Apps_STEAMAPPS_INTERFACE_VERSION006_GetEarliestPurchaseUnixTime(AppId_t nAppID) {
    return Apps_STEAMAPPS_INTERFACE_VERSION007_GetEarliestPurchaseUnixTime(nAppID);
}

uint32 Apps_STEAMAPPS_INTERFACE_VERSION005_GetEarliestPurchaseUnixTime(AppId_t nAppID) {
    return Apps_STEAMAPPS_INTERFACE_VERSION006_GetEarliestPurchaseUnixTime(nAppID);
}

uint32 Apps_STEAMAPPS_INTERFACE_VERSION004_GetEarliestPurchaseUnixTime(AppId_t nAppID) {
    return Apps_STEAMAPPS_INTERFACE_VERSION005_GetEarliestPurchaseUnixTime(nAppID);
}

/**** BIsSubscribedFromFreeWeekend****/
bool Apps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFreeWeekend() {
    // FIXME: implement
    STUB();
    return false;
}

bool Apps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedFromFreeWeekend() {
    return Apps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFreeWeekend();
}

bool Apps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedFromFreeWeekend() {
    return Apps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedFromFreeWeekend();
}

bool Apps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribedFromFreeWeekend() {
    return Apps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedFromFreeWeekend();
}

bool Apps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedFromFreeWeekend() {
    return Apps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribedFromFreeWeekend();
}

/**** GetDLCCount****/
int Apps_STEAMAPPS_INTERFACE_VERSION008_GetDLCCount() {
    // FIXME: implement
    STUB();
    return 0;
}

int Apps_STEAMAPPS_INTERFACE_VERSION007_GetDLCCount() {
    return Apps_STEAMAPPS_INTERFACE_VERSION008_GetDLCCount();
}

int Apps_STEAMAPPS_INTERFACE_VERSION006_GetDLCCount() {
    return Apps_STEAMAPPS_INTERFACE_VERSION007_GetDLCCount();
}

int Apps_STEAMAPPS_INTERFACE_VERSION005_GetDLCCount() {
    return Apps_STEAMAPPS_INTERFACE_VERSION006_GetDLCCount();
}

int Apps_STEAMAPPS_INTERFACE_VERSION004_GetDLCCount() {
    return Apps_STEAMAPPS_INTERFACE_VERSION005_GetDLCCount();
}

/**** BGetDLCDataByIndex****/
bool Apps_STEAMAPPS_INTERFACE_VERSION008_BGetDLCDataByIndex(int iDLC, AppId_t* pAppID, bool* pbAvailable, char* pchName, int cchNameBufferSize) {
    // FIXME: implement
    STUB();
    return false;
}

bool Apps_STEAMAPPS_INTERFACE_VERSION007_BGetDLCDataByIndex(int iDLC, AppId_t* pAppID, bool* pbAvailable, char* pchName, int cchNameBufferSize) {
    return Apps_STEAMAPPS_INTERFACE_VERSION008_BGetDLCDataByIndex(iDLC, pAppID, pbAvailable, pchName, cchNameBufferSize);
}

bool Apps_STEAMAPPS_INTERFACE_VERSION006_BGetDLCDataByIndex(int iDLC, AppId_t* pAppID, bool* pbAvailable, char* pchName, int cchNameBufferSize) {
    return Apps_STEAMAPPS_INTERFACE_VERSION007_BGetDLCDataByIndex(iDLC, pAppID, pbAvailable, pchName, cchNameBufferSize);
}

bool Apps_STEAMAPPS_INTERFACE_VERSION005_BGetDLCDataByIndex(int iDLC, AppId_t* pAppID, bool* pbAvailable, char* pchName, int cchNameBufferSize) {
    return Apps_STEAMAPPS_INTERFACE_VERSION006_BGetDLCDataByIndex(iDLC, pAppID, pbAvailable, pchName, cchNameBufferSize);
}

bool Apps_STEAMAPPS_INTERFACE_VERSION004_BGetDLCDataByIndex(int iDLC, AppId_t* pAppID, bool* pbAvailable, char* pchName, int cchNameBufferSize) {
    return Apps_STEAMAPPS_INTERFACE_VERSION005_BGetDLCDataByIndex(iDLC, pAppID, pbAvailable, pchName, cchNameBufferSize);
}

/**** InstallDLC****/
void Apps_STEAMAPPS_INTERFACE_VERSION008_InstallDLC(AppId_t nAppID) {
    // FIXME: implement
    STUB();
}

void Apps_STEAMAPPS_INTERFACE_VERSION007_InstallDLC(AppId_t nAppID) {
    return Apps_STEAMAPPS_INTERFACE_VERSION008_InstallDLC(nAppID);
}

void Apps_STEAMAPPS_INTERFACE_VERSION006_InstallDLC(AppId_t nAppID) {
    return Apps_STEAMAPPS_INTERFACE_VERSION007_InstallDLC(nAppID);
}

void Apps_STEAMAPPS_INTERFACE_VERSION005_InstallDLC(AppId_t nAppID) {
    return Apps_STEAMAPPS_INTERFACE_VERSION006_InstallDLC(nAppID);
}

void Apps_STEAMAPPS_INTERFACE_VERSION004_InstallDLC(AppId_t nAppID) {
    return Apps_STEAMAPPS_INTERFACE_VERSION005_InstallDLC(nAppID);
}

/**** UninstallDLC****/
void Apps_STEAMAPPS_INTERFACE_VERSION008_UninstallDLC(AppId_t nAppID) {
    // FIXME: implement
    STUB();
}

void Apps_STEAMAPPS_INTERFACE_VERSION007_UninstallDLC(AppId_t nAppID) {
    return Apps_STEAMAPPS_INTERFACE_VERSION008_UninstallDLC(nAppID);
}

void Apps_STEAMAPPS_INTERFACE_VERSION006_UninstallDLC(AppId_t nAppID) {
    return Apps_STEAMAPPS_INTERFACE_VERSION007_UninstallDLC(nAppID);
}

void Apps_STEAMAPPS_INTERFACE_VERSION005_UninstallDLC(AppId_t nAppID) {
    return Apps_STEAMAPPS_INTERFACE_VERSION006_UninstallDLC(nAppID);
}

void Apps_STEAMAPPS_INTERFACE_VERSION004_UninstallDLC(AppId_t nAppID) {
    return Apps_STEAMAPPS_INTERFACE_VERSION005_UninstallDLC(nAppID);
}

/**** RequestAppProofOfPurchaseKey****/
void Apps_STEAMAPPS_INTERFACE_VERSION008_RequestAppProofOfPurchaseKey(AppId_t nAppID) {
    // FIXME: implement
    STUB();
}

void Apps_STEAMAPPS_INTERFACE_VERSION007_RequestAppProofOfPurchaseKey(AppId_t nAppID) {
    return Apps_STEAMAPPS_INTERFACE_VERSION008_RequestAppProofOfPurchaseKey(nAppID);
}

void Apps_STEAMAPPS_INTERFACE_VERSION006_RequestAppProofOfPurchaseKey(AppId_t nAppID) {
    return Apps_STEAMAPPS_INTERFACE_VERSION007_RequestAppProofOfPurchaseKey(nAppID);
}

void Apps_STEAMAPPS_INTERFACE_VERSION005_RequestAppProofOfPurchaseKey(AppId_t nAppID) {
    return Apps_STEAMAPPS_INTERFACE_VERSION006_RequestAppProofOfPurchaseKey(nAppID);
}

/**** GetCurrentBetaName****/
bool Apps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentBetaName(char* pchName, int cchNameBufferSize) {
    // FIXME: implement
    STUB();
    return false;
}

bool Apps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentBetaName(char* pchName, int cchNameBufferSize) {
    return Apps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentBetaName(pchName, cchNameBufferSize);
}

bool Apps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentBetaName(char* pchName, int cchNameBufferSize) {
    return Apps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentBetaName(pchName, cchNameBufferSize);
}

bool Apps_STEAMAPPS_INTERFACE_VERSION005_GetCurrentBetaName(char* pchName, int cchNameBufferSize) {
    return Apps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentBetaName(pchName, cchNameBufferSize);
}

/**** MarkContentCorrupt****/
bool Apps_STEAMAPPS_INTERFACE_VERSION008_MarkContentCorrupt(bool bMissingFilesOnly) {
    // FIXME: implement
    STUB();
    return false;
}

bool Apps_STEAMAPPS_INTERFACE_VERSION007_MarkContentCorrupt(bool bMissingFilesOnly) {
    return Apps_STEAMAPPS_INTERFACE_VERSION008_MarkContentCorrupt(bMissingFilesOnly);
}

bool Apps_STEAMAPPS_INTERFACE_VERSION006_MarkContentCorrupt(bool bMissingFilesOnly) {
    return Apps_STEAMAPPS_INTERFACE_VERSION007_MarkContentCorrupt(bMissingFilesOnly);
}

bool Apps_STEAMAPPS_INTERFACE_VERSION005_MarkContentCorrupt(bool bMissingFilesOnly) {
    return Apps_STEAMAPPS_INTERFACE_VERSION006_MarkContentCorrupt(bMissingFilesOnly);
}

/**** GetInstalledDepots****/
uint32 Apps_STEAMAPPS_INTERFACE_VERSION008_GetInstalledDepots(AppId_t appID, DepotId_t* pvecDepots, uint32 cMaxDepots) {
    // FIXME: implement
    STUB();
    return 0;
}

uint32 Apps_STEAMAPPS_INTERFACE_VERSION007_GetInstalledDepots(AppId_t appID, DepotId_t* pvecDepots, uint32 cMaxDepots) {
    return Apps_STEAMAPPS_INTERFACE_VERSION008_GetInstalledDepots(appID, pvecDepots, cMaxDepots);
}

uint32 Apps_STEAMAPPS_INTERFACE_VERSION006_GetInstalledDepots(AppId_t appID, DepotId_t* pvecDepots, uint32 cMaxDepots) {
    return Apps_STEAMAPPS_INTERFACE_VERSION007_GetInstalledDepots(appID, pvecDepots, cMaxDepots);
}

uint32 Apps_STEAMAPPS_INTERFACE_VERSION005_GetInstalledDepots(DepotId_t* pvecDepots, uint32 cMaxDepots) {
    // FIXME: probably wrong
    AppId_t appId = 0;
    return Apps_STEAMAPPS_INTERFACE_VERSION006_GetInstalledDepots(appId, pvecDepots, cMaxDepots);
}

/**** GetAppInstallDir****/
uint32 Apps_STEAMAPPS_INTERFACE_VERSION008_GetAppInstallDir(AppId_t appID, char* pchFolder, uint32 cchFolderBufferSize) {
    // FIXME: implement
    STUB();
    return 0;
}

uint32 Apps_STEAMAPPS_INTERFACE_VERSION007_GetAppInstallDir(AppId_t appID, char* pchFolder, uint32 cchFolderBufferSize) {
    return Apps_STEAMAPPS_INTERFACE_VERSION008_GetAppInstallDir(appID, pchFolder, cchFolderBufferSize);
}

uint32 Apps_STEAMAPPS_INTERFACE_VERSION006_GetAppInstallDir(AppId_t appID, char* pchFolder, uint32 cchFolderBufferSize) {
    return Apps_STEAMAPPS_INTERFACE_VERSION007_GetAppInstallDir(appID, pchFolder, cchFolderBufferSize);
}

uint32 Apps_STEAMAPPS_INTERFACE_VERSION005_GetAppInstallDir(AppId_t appID, char* pchFolder, uint32 cchFolderBufferSize) {
    return Apps_STEAMAPPS_INTERFACE_VERSION006_GetAppInstallDir(appID, pchFolder, cchFolderBufferSize);
}

/**** BIsAppInstalled****/
bool Apps_STEAMAPPS_INTERFACE_VERSION008_BIsAppInstalled(AppId_t appID) {
    // FIXME: implement
    STUB();
    return false;
}

bool Apps_STEAMAPPS_INTERFACE_VERSION007_BIsAppInstalled(AppId_t appID) {
    return Apps_STEAMAPPS_INTERFACE_VERSION008_BIsAppInstalled(appID);
}

bool Apps_STEAMAPPS_INTERFACE_VERSION006_BIsAppInstalled(AppId_t appID) {
    return Apps_STEAMAPPS_INTERFACE_VERSION007_BIsAppInstalled(appID);
}

bool Apps_STEAMAPPS_INTERFACE_VERSION005_BIsAppInstalled(AppId_t appID) {
    return Apps_STEAMAPPS_INTERFACE_VERSION006_BIsAppInstalled(appID);
}

/**** GetAppOwner****/
CSteamID Apps_STEAMAPPS_INTERFACE_VERSION008_GetAppOwner() {
    // FIXME: implement
    STUB();
    return CSteamID();
}

CSteamID Apps_STEAMAPPS_INTERFACE_VERSION007_GetAppOwner() {
    return Apps_STEAMAPPS_INTERFACE_VERSION008_GetAppOwner();
}

CSteamID Apps_STEAMAPPS_INTERFACE_VERSION006_GetAppOwner() {
    return Apps_STEAMAPPS_INTERFACE_VERSION007_GetAppOwner();
}

/**** GetLaunchQueryParam****/
const char * Apps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchQueryParam(char* pchKey) {
    // FIXME: implement
    STUB();
    return NULL;
}

const char * Apps_STEAMAPPS_INTERFACE_VERSION007_GetLaunchQueryParam(char* pchKey) {
    return Apps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchQueryParam(pchKey);
}

const char * Apps_STEAMAPPS_INTERFACE_VERSION006_GetLaunchQueryParam(char* pchKey) {
    return Apps_STEAMAPPS_INTERFACE_VERSION007_GetLaunchQueryParam(pchKey);
}

/**** GetDlcDownloadProgress****/
bool Apps_STEAMAPPS_INTERFACE_VERSION008_GetDlcDownloadProgress(AppId_t nAppID, uint64* punBytesDownloaded, uint64* punBytesTotal) {
    // FIXME: implement
    STUB();
    return false;
}

bool Apps_STEAMAPPS_INTERFACE_VERSION007_GetDlcDownloadProgress(AppId_t nAppID, uint64* punBytesDownloaded, uint64* punBytesTotal) {
    return Apps_STEAMAPPS_INTERFACE_VERSION008_GetDlcDownloadProgress(nAppID, punBytesDownloaded, punBytesTotal);
}

/**** GetAppBuildId****/
int Apps_STEAMAPPS_INTERFACE_VERSION008_GetAppBuildId() {
    // FIXME: implement
    STUB();
    return 0;
}

int Apps_STEAMAPPS_INTERFACE_VERSION007_GetAppBuildId() {
    return Apps_STEAMAPPS_INTERFACE_VERSION008_GetAppBuildId();
}

/**** RequestAllProofOfPurchaseKeys****/
void Apps_STEAMAPPS_INTERFACE_VERSION008_RequestAllProofOfPurchaseKeys() {
    // FIXME: implement
    STUB();
}

/**** GetFileDetails****/
SteamAPICall_t Apps_STEAMAPPS_INTERFACE_VERSION008_GetFileDetails(char* pszFileName) {
    // FIXME: implement
    STUB();
    return 0;
}

