#include "steam_api.h"

/**** FileWrite****/
bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWrite(char* pchFile, void* pvData, int32 cubData) {
    // FIXME: implement
    STUB();
    return false;
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWrite(char* pchFile, void* pvData, int32 cubData) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWrite(pchFile, pvData, cubData);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWrite(char* pchFile, void* pvData, int32 cubData) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWrite(pchFile, pvData, cubData);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWrite(char* pchFile, void* pvData, int32 cubData) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWrite(pchFile, pvData, cubData);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWrite(char* pchFile, void* pvData, int32 cubData) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWrite(pchFile, pvData, cubData);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWrite(char* pchFile, void* pvData, int32 cubData) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWrite(pchFile, pvData, cubData);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileWrite(char* pchFile, void* pvData, int32 cubData) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWrite(pchFile, pvData, cubData);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileWrite(char* pchFile, void* pvData, int32 cubData) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileWrite(pchFile, pvData, cubData);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileWrite(char* pchFile, void* pvData, int32 cubData) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileWrite(pchFile, pvData, cubData);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileWrite(char* pchFile, void* pvData, int32 cubData) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileWrite(pchFile, pvData, cubData);
}

/**** GetFileSize****/
int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileSize(char* pchFile) {
    // FIXME: implement
    STUB();
    return 0;
}

int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileSize(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileSize(pchFile);
}

int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileSize(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileSize(pchFile);
}

int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileSize(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileSize(pchFile);
}

int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileSize(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileSize(pchFile);
}

int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileSize(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileSize(pchFile);
}

int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileSize(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileSize(pchFile);
}

int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileSize(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileSize(pchFile);
}

int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileSize(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileSize(pchFile);
}

int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileSize(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileSize(pchFile);
}

/**** FileRead****/
int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileRead(char* pchFile, void* pvData, int32 cubDataToRead) {
    // FIXME: implement
    STUB();
    return 0;
}

int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileRead(char* pchFile, void* pvData, int32 cubDataToRead) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileRead(pchFile, pvData, cubDataToRead);
}

int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileRead(char* pchFile, void* pvData, int32 cubDataToRead) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileRead(pchFile, pvData, cubDataToRead);
}

int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileRead(char* pchFile, void* pvData, int32 cubDataToRead) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileRead(pchFile, pvData, cubDataToRead);
}

int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileRead(char* pchFile, void* pvData, int32 cubDataToRead) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileRead(pchFile, pvData, cubDataToRead);
}

int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileRead(char* pchFile, void* pvData, int32 cubDataToRead) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileRead(pchFile, pvData, cubDataToRead);
}

int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileRead(char* pchFile, void* pvData, int32 cubDataToRead) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileRead(pchFile, pvData, cubDataToRead);
}

int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileRead(char* pchFile, void* pvData, int32 cubDataToRead) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileRead(pchFile, pvData, cubDataToRead);
}

int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileRead(char* pchFile, void* pvData, int32 cubDataToRead) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileRead(pchFile, pvData, cubDataToRead);
}

int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileRead(char* pchFile, void* pvData, int32 cubDataToRead) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileRead(pchFile, pvData, cubDataToRead);
}

/**** FileExists****/
bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileExists(char* pchFile) {
    // FIXME: implement
    STUB();
    return false;
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileExists(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileExists(pchFile);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileExists(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileExists(pchFile);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileExists(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileExists(pchFile);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileExists(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileExists(pchFile);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileExists(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileExists(pchFile);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileExists(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileExists(pchFile);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileExists(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileExists(pchFile);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileExists(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileExists(pchFile);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileExists(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileExists(pchFile);
}

/**** GetFileCount****/
int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileCount() {
    // FIXME: implement
    STUB();
    return 0;
}

int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileCount() {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileCount();
}

int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileCount() {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileCount();
}

int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileCount() {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileCount();
}

int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileCount() {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileCount();
}

int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileCount() {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileCount();
}

int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileCount() {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileCount();
}

int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileCount() {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileCount();
}

int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileCount() {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileCount();
}

int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileCount() {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileCount();
}

/**** GetFileNameAndSize****/
const char * RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileNameAndSize(int iFile, int32* pnFileSizeInBytes) {
    // FIXME: implement
    STUB();
    return NULL;
}

const char * RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileNameAndSize(int iFile, int32* pnFileSizeInBytes) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileNameAndSize(iFile, pnFileSizeInBytes);
}

const char * RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileNameAndSize(int iFile, int32* pnFileSizeInBytes) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileNameAndSize(iFile, pnFileSizeInBytes);
}

const char * RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileNameAndSize(int iFile, int32* pnFileSizeInBytes) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileNameAndSize(iFile, pnFileSizeInBytes);
}

const char * RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileNameAndSize(int iFile, int32* pnFileSizeInBytes) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileNameAndSize(iFile, pnFileSizeInBytes);
}

const char * RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileNameAndSize(int iFile, int32* pnFileSizeInBytes) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileNameAndSize(iFile, pnFileSizeInBytes);
}

const char * RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileNameAndSize(int iFile, int32* pnFileSizeInBytes) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileNameAndSize(iFile, pnFileSizeInBytes);
}

const char * RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileNameAndSize(int iFile, int32* pnFileSizeInBytes) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileNameAndSize(iFile, pnFileSizeInBytes);
}

const char * RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileNameAndSize(int iFile, int32* pnFileSizeInBytes) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileNameAndSize(iFile, pnFileSizeInBytes);
}

const char * RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileNameAndSize(int iFile, int32* pnFileSizeInBytes) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileNameAndSize(iFile, pnFileSizeInBytes);
}

/**** GetQuota****/
bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetQuota(int32* pnTotalBytes, int32* puAvailableBytes) {
    // FIXME: implement
    STUB();
    return false;
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetQuota(int32* pnTotalBytes, int32* puAvailableBytes) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetQuota(pnTotalBytes, puAvailableBytes);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetQuota(int32* pnTotalBytes, int32* puAvailableBytes) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetQuota(pnTotalBytes, puAvailableBytes);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetQuota(int32* pnTotalBytes, int32* puAvailableBytes) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetQuota(pnTotalBytes, puAvailableBytes);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetQuota(int32* pnTotalBytes, int32* puAvailableBytes) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetQuota(pnTotalBytes, puAvailableBytes);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetQuota(int32* pnTotalBytes, int32* puAvailableBytes) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetQuota(pnTotalBytes, puAvailableBytes);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetQuota(int32* pnTotalBytes, int32* puAvailableBytes) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetQuota(pnTotalBytes, puAvailableBytes);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetQuota(int32* pnTotalBytes, int32* puAvailableBytes) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetQuota(pnTotalBytes, puAvailableBytes);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetQuota(int32* pnTotalBytes, int32* puAvailableBytes) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetQuota(pnTotalBytes, puAvailableBytes);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetQuota(int32* pnTotalBytes, int32* puAvailableBytes) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetQuota(pnTotalBytes, puAvailableBytes);
}

/**** FileForget****/
bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileForget(char* pchFile) {
    // FIXME: implement
    STUB();
    return false;
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileForget(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileForget(pchFile);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileForget(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileForget(pchFile);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileForget(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileForget(pchFile);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileForget(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileForget(pchFile);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileForget(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileForget(pchFile);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileForget(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileForget(pchFile);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileForget(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileForget(pchFile);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileForget(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileForget(pchFile);
}

/**** FileDelete****/
bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileDelete(char* pchFile) {
    // FIXME: implement
    STUB();
    return false;
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileDelete(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileDelete(pchFile);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileDelete(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileDelete(pchFile);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileDelete(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileDelete(pchFile);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileDelete(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileDelete(pchFile);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileDelete(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileDelete(pchFile);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileDelete(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileDelete(pchFile);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileDelete(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileDelete(pchFile);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileDelete(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileDelete(pchFile);
}

/**** FileShare****/
SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileShare(char* pchFile) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileShare(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileShare(pchFile);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileShare(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileShare(pchFile);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileShare(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileShare(pchFile);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileShare(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileShare(pchFile);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileShare(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileShare(pchFile);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileShare(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileShare(pchFile);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileShare(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileShare(pchFile);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileShare(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileShare(pchFile);
}

/**** SetSyncPlatforms****/
bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SetSyncPlatforms(char* pchFile, ERemoteStoragePlatform_v2 eRemoteStoragePlatform) {
    // FIXME: implement
    STUB();
    return false;
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SetSyncPlatforms(char* pchFile, ERemoteStoragePlatform_v2 eRemoteStoragePlatform) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SetSyncPlatforms(pchFile, eRemoteStoragePlatform);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SetSyncPlatforms(char* pchFile, ERemoteStoragePlatform_v2 eRemoteStoragePlatform) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SetSyncPlatforms(pchFile, eRemoteStoragePlatform);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetSyncPlatforms(char* pchFile, ERemoteStoragePlatform_v2 eRemoteStoragePlatform) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SetSyncPlatforms(pchFile, eRemoteStoragePlatform);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetSyncPlatforms(char* pchFile, ERemoteStoragePlatform_v1 eRemoteStoragePlatform) {
    // FIXME: probably wrong
    ERemoteStoragePlatform_v2 remoteStoragePlatform = static_cast<ERemoteStoragePlatform_v2>(eRemoteStoragePlatform);
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetSyncPlatforms(pchFile, remoteStoragePlatform);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetSyncPlatforms(char* pchFile, ERemoteStoragePlatform_v1 eRemoteStoragePlatform) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetSyncPlatforms(pchFile, eRemoteStoragePlatform);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetSyncPlatforms(char* pchFile, ERemoteStoragePlatform_v1 eRemoteStoragePlatform) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetSyncPlatforms(pchFile, eRemoteStoragePlatform);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SetSyncPlatforms(char* pchFile, ERemoteStoragePlatform_v1 eRemoteStoragePlatform) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetSyncPlatforms(pchFile, eRemoteStoragePlatform);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_SetSyncPlatforms(char* pchFile, ERemoteStoragePlatform_v1 eRemoteStoragePlatform) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SetSyncPlatforms(pchFile, eRemoteStoragePlatform);
}

/**** FilePersisted****/
bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FilePersisted(char* pchFile) {
    // FIXME: implement
    STUB();
    return false;
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FilePersisted(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FilePersisted(pchFile);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FilePersisted(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FilePersisted(pchFile);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FilePersisted(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FilePersisted(pchFile);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FilePersisted(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FilePersisted(pchFile);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FilePersisted(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FilePersisted(pchFile);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FilePersisted(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FilePersisted(pchFile);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FilePersisted(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FilePersisted(pchFile);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FilePersisted(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FilePersisted(pchFile);
}

/**** GetFileTimestamp****/
int64 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileTimestamp(char* pchFile) {
    // FIXME: implement
    STUB();
    return 0;
}

int64 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileTimestamp(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileTimestamp(pchFile);
}

int64 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileTimestamp(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileTimestamp(pchFile);
}

int64 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileTimestamp(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileTimestamp(pchFile);
}

int64 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileTimestamp(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileTimestamp(pchFile);
}

int64 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileTimestamp(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileTimestamp(pchFile);
}

int64 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileTimestamp(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileTimestamp(pchFile);
}

int64 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileTimestamp(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileTimestamp(pchFile);
}

int64 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileTimestamp(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileTimestamp(pchFile);
}

/**** GetSyncPlatforms****/
ERemoteStoragePlatform_v2 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetSyncPlatforms(char* pchFile) {
    // FIXME: implement
    STUB();
    return k_ERemoteStoragePlatformNone_v2;
}

ERemoteStoragePlatform_v2 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetSyncPlatforms(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetSyncPlatforms(pchFile);
}

ERemoteStoragePlatform_v2 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetSyncPlatforms(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetSyncPlatforms(pchFile);
}

ERemoteStoragePlatform_v2 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetSyncPlatforms(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetSyncPlatforms(pchFile);
}

ERemoteStoragePlatform_v2 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetSyncPlatforms(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetSyncPlatforms(pchFile);
}

ERemoteStoragePlatform_v2 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetSyncPlatforms(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetSyncPlatforms(pchFile);
}

ERemoteStoragePlatform_v2 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetSyncPlatforms(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetSyncPlatforms(pchFile);
}

ERemoteStoragePlatform_v2 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetSyncPlatforms(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetSyncPlatforms(pchFile);
}

ERemoteStoragePlatform_v2 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetSyncPlatforms(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetSyncPlatforms(pchFile);
}

/**** IsCloudEnabledForAccount****/
bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_IsCloudEnabledForAccount() {
    // FIXME: implement
    STUB();
    return false;
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_IsCloudEnabledForAccount() {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_IsCloudEnabledForAccount();
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_IsCloudEnabledForAccount() {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_IsCloudEnabledForAccount();
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForAccount() {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_IsCloudEnabledForAccount();
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_IsCloudEnabledForAccount() {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForAccount();
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_IsCloudEnabledForAccount() {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_IsCloudEnabledForAccount();
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_IsCloudEnabledForAccount() {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_IsCloudEnabledForAccount();
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_IsCloudEnabledForAccount() {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_IsCloudEnabledForAccount();
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_IsCloudEnabledForAccount() {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_IsCloudEnabledForAccount();
}

/**** IsCloudEnabledForApp****/
bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_IsCloudEnabledForApp() {
    // FIXME: implement
    STUB();
    return false;
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_IsCloudEnabledForApp() {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_IsCloudEnabledForApp();
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_IsCloudEnabledForApp() {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_IsCloudEnabledForApp();
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForApp() {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_IsCloudEnabledForApp();
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_IsCloudEnabledForApp() {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForApp();
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_IsCloudEnabledForApp() {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_IsCloudEnabledForApp();
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_IsCloudEnabledForApp() {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_IsCloudEnabledForApp();
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_IsCloudEnabledForApp() {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_IsCloudEnabledForApp();
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_IsCloudEnabledForApp() {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_IsCloudEnabledForApp();
}

/**** SetCloudEnabledForApp****/
void RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SetCloudEnabledForApp(bool bEnabled) {
    // FIXME: implement
    STUB();
}

void RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SetCloudEnabledForApp(bool bEnabled) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SetCloudEnabledForApp(bEnabled);
}

void RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SetCloudEnabledForApp(bool bEnabled) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SetCloudEnabledForApp(bEnabled);
}

void RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetCloudEnabledForApp(bool bEnabled) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SetCloudEnabledForApp(bEnabled);
}

void RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetCloudEnabledForApp(bool bEnabled) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetCloudEnabledForApp(bEnabled);
}

void RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetCloudEnabledForApp(bool bEnabled) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetCloudEnabledForApp(bEnabled);
}

void RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetCloudEnabledForApp(bool bEnabled) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetCloudEnabledForApp(bEnabled);
}

void RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SetCloudEnabledForApp(bool bEnabled) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetCloudEnabledForApp(bEnabled);
}

void RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_SetCloudEnabledForApp(bool bEnabled) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SetCloudEnabledForApp(bEnabled);
}

/**** UGCDownload****/
SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UGCDownload(UGCHandle_t hContent, uint32 unPriority) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UGCDownload(UGCHandle_t hContent, uint32 unPriority) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UGCDownload(hContent, unPriority);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UGCDownload(UGCHandle_t hContent, uint32 unPriority) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UGCDownload(hContent, unPriority);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownload(UGCHandle_t hContent, uint32 unPriority) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UGCDownload(hContent, unPriority);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCDownload(UGCHandle_t hContent, uint32 unPriority) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownload(hContent, unPriority);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UGCDownload(UGCHandle_t hContent) {
    // FIXME: probably wrong
    uint32 unPriority = 0;
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCDownload(hContent, unPriority);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UGCDownload(UGCHandle_t hContent) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UGCDownload(hContent);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UGCDownload(UGCHandle_t hContent) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UGCDownload(hContent);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_UGCDownload(UGCHandle_t hContent) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UGCDownload(hContent);
}

/**** GetUGCDetails****/
bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetUGCDetails(UGCHandle_t hContent, AppId_t* pnAppID, char** ppchName, int32* pnFileSizeInBytes, CSteamID* pSteamIDOwner) {
    // FIXME: implement
    STUB();
    return false;
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetUGCDetails(UGCHandle_t hContent, AppId_t* pnAppID, char** ppchName, int32* pnFileSizeInBytes, CSteamID* pSteamIDOwner) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetUGCDetails(hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetUGCDetails(UGCHandle_t hContent, AppId_t* pnAppID, char** ppchName, int32* pnFileSizeInBytes, CSteamID* pSteamIDOwner) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetUGCDetails(hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUGCDetails(UGCHandle_t hContent, AppId_t* pnAppID, char** ppchName, int32* pnFileSizeInBytes, CSteamID* pSteamIDOwner) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetUGCDetails(hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUGCDetails(UGCHandle_t hContent, AppId_t* pnAppID, char** ppchName, int32* pnFileSizeInBytes, CSteamID* pSteamIDOwner) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUGCDetails(hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUGCDetails(UGCHandle_t hContent, AppId_t* pnAppID, char** ppchName, int32* pnFileSizeInBytes, CSteamID* pSteamIDOwner) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUGCDetails(hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUGCDetails(UGCHandle_t hContent, AppId_t* pnAppID, char** ppchName, int32* pnFileSizeInBytes, CSteamID* pSteamIDOwner) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUGCDetails(hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetUGCDetails(UGCHandle_t hContent, AppId_t* pnAppID, char** ppchName, int32* pnFileSizeInBytes, CSteamID* pSteamIDOwner) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUGCDetails(hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetUGCDetails(UGCHandle_t hContent, AppId_t* pnAppID, char** ppchName, int32* pnFileSizeInBytes, CSteamID* pSteamIDOwner) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetUGCDetails(hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
}

/**** UGCRead****/
int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UGCRead(UGCHandle_t hContent, void* pvData, int32 cubDataToRead, uint32 cOffset, EUGCReadAction_v1 eAction) {
    // FIXME: implement
    STUB();
    return 0;
}

int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UGCRead(UGCHandle_t hContent, void* pvData, int32 cubDataToRead, uint32 cOffset, EUGCReadAction_v1 eAction) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UGCRead(hContent, pvData, cubDataToRead, cOffset, eAction);
}

int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UGCRead(UGCHandle_t hContent, void* pvData, int32 cubDataToRead, uint32 cOffset, EUGCReadAction_v1 eAction) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UGCRead(hContent, pvData, cubDataToRead, cOffset, eAction);
}

int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCRead(UGCHandle_t hContent, void* pvData, int32 cubDataToRead, uint32 cOffset) {
    // FIXME: probably wrong
    EUGCReadAction_v1 action = k_EUGCRead_ContinueReadingUntilFinished_v1;
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UGCRead(hContent, pvData, cubDataToRead, cOffset, action);
}

int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCRead(UGCHandle_t hContent, void* pvData, int32 cubDataToRead, uint32 cOffset) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCRead(hContent, pvData, cubDataToRead, cOffset);
}

int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UGCRead(UGCHandle_t hContent, void* pvData, int32 cubDataToRead) {
    // FIXME: probably wrong
    uint32 offset = 0;
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCRead(hContent, pvData, cubDataToRead, offset);
}

int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UGCRead(UGCHandle_t hContent, void* pvData, int32 cubDataToRead) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UGCRead(hContent, pvData, cubDataToRead);
}

int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UGCRead(UGCHandle_t hContent, void* pvData, int32 cubDataToRead) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UGCRead(hContent, pvData, cubDataToRead);
}

int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_UGCRead(UGCHandle_t hContent, void* pvData, int32 cubDataToRead) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UGCRead(hContent, pvData, cubDataToRead);
}

/**** GetCachedUGCCount****/
int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetCachedUGCCount() {
    // FIXME: implement
    STUB();
    return 0;
}

int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetCachedUGCCount() {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetCachedUGCCount();
}

int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetCachedUGCCount() {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetCachedUGCCount();
}

int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCCount() {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetCachedUGCCount();
}

int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetCachedUGCCount() {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCCount();
}

int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetCachedUGCCount() {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetCachedUGCCount();
}

int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetCachedUGCCount() {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetCachedUGCCount();
}

int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetCachedUGCCount() {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetCachedUGCCount();
}

int32 RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetCachedUGCCount() {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetCachedUGCCount();
}

/**** GetCachedUGCHandle****/
UGCHandle_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetCachedUGCHandle(int32 iCachedContent) {
    // FIXME: implement
    STUB();
    return 0;
}

UGCHandle_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetCachedUGCHandle(int32 iCachedContent) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetCachedUGCHandle(iCachedContent);
}

UGCHandle_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetCachedUGCHandle(int32 iCachedContent) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetCachedUGCHandle(iCachedContent);
}

UGCHandle_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCHandle(int32 iCachedContent) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetCachedUGCHandle(iCachedContent);
}

UGCHandle_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetCachedUGCHandle(int32 iCachedContent) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCHandle(iCachedContent);
}

UGCHandle_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetCachedUGCHandle(int32 iCachedContent) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetCachedUGCHandle(iCachedContent);
}

UGCHandle_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetCachedUGCHandle(int32 iCachedContent) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetCachedUGCHandle(iCachedContent);
}

UGCHandle_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetCachedUGCHandle(int32 iCachedContent) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetCachedUGCHandle(iCachedContent);
}

UGCHandle_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetCachedUGCHandle(int32 iCachedContent) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetCachedUGCHandle(iCachedContent);
}

/**** PublishFile****/
SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_PublishFile(char* pchFile, char* pchPreviewFile, AppId_t nConsumerAppId, char* pchTitle, char* pchDescription, ERemoteStoragePublishedFileVisibility_v1 eVisibility, SteamParamStringArray_t_v1* pTags) {
    // FIXME: implement
    STUB();
    return 0;
}

/**** PublishWorkshopFile****/
SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_PublishWorkshopFile(char* pchFile, char* pchPreviewFile, AppId_t nConsumerAppId, char* pchTitle, char* pchDescription, ERemoteStoragePublishedFileVisibility_v1 eVisibility, SteamParamStringArray_t_v1* pTags, EWorkshopFileType_v1 eWorkshopFileType) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_PublishWorkshopFile(char* pchFile, char* pchPreviewFile, AppId_t nConsumerAppId, char* pchTitle, char* pchDescription, ERemoteStoragePublishedFileVisibility_v1 eVisibility, SteamParamStringArray_t_v1* pTags, EWorkshopFileType_v1 eWorkshopFileType) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_PublishWorkshopFile(pchFile, pchPreviewFile, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags, eWorkshopFileType);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_PublishWorkshopFile(char* pchFile, char* pchPreviewFile, AppId_t nConsumerAppId, char* pchTitle, char* pchDescription, ERemoteStoragePublishedFileVisibility_v1 eVisibility, SteamParamStringArray_t_v1* pTags, EWorkshopFileType_v1 eWorkshopFileType) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_PublishWorkshopFile(pchFile, pchPreviewFile, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags, eWorkshopFileType);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishWorkshopFile(char* pchFile, char* pchPreviewFile, AppId_t nConsumerAppId, char* pchTitle, char* pchDescription, ERemoteStoragePublishedFileVisibility_v1 eVisibility, SteamParamStringArray_t_v1* pTags, EWorkshopFileType_v1 eWorkshopFileType) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_PublishWorkshopFile(pchFile, pchPreviewFile, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags, eWorkshopFileType);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_PublishWorkshopFile(char* pchFile, char* pchPreviewFile, AppId_t nConsumerAppId, char* pchTitle, char* pchDescription, ERemoteStoragePublishedFileVisibility_v1 eVisibility, SteamParamStringArray_t_v1* pTags, EWorkshopFileType_v2 eWorkshopFileType) {
    // FIXME: probably wrong
    EWorkshopFileType_v1 workshopFileType = static_cast<EWorkshopFileType_v1>(eWorkshopFileType);
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishWorkshopFile(pchFile, pchPreviewFile, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags, workshopFileType);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_PublishWorkshopFile(char* pchFile, char* pchPreviewFile, AppId_t nConsumerAppId, char* pchTitle, char* pchDescription, ERemoteStoragePublishedFileVisibility_v1 eVisibility, SteamParamStringArray_t_v1* pTags, EWorkshopFileType_v1 eWorkshopFileType) {
    // FIXME: probably wrong
    EWorkshopFileType_v2 workshopFileType = static_cast<EWorkshopFileType_v2>(eWorkshopFileType);
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_PublishWorkshopFile(pchFile, pchPreviewFile, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags, workshopFileType);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_PublishWorkshopFile(char* pchFile, char* pchPreviewFile, AppId_t nConsumerAppId, char* pchTitle, char* pchDescription, ERemoteStoragePublishedFileVisibility_v1 eVisibility, SteamParamStringArray_t_v1* pTags, EWorkshopFileType_v1 eWorkshopFileType) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_PublishWorkshopFile(pchFile, pchPreviewFile, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags, eWorkshopFileType);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_PublishWorkshopFile(char* pchFile, char* pchPreviewFile, AppId_t nConsumerAppId, char* pchTitle, char* pchDescription, SteamParamStringArray_t_v1* pTags) {
    // FIXME: probably wrong
    ERemoteStoragePublishedFileVisibility_v1 visibility = k_ERemoteStoragePublishedFileVisibilityPublic_v1;
    EWorkshopFileType_v1 workshopFileType = k_EWorkshopFileTypeCommunity_v1;
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_PublishWorkshopFile(pchFile, pchPreviewFile, nConsumerAppId, pchTitle, pchDescription, visibility, pTags, workshopFileType);
}

/**** UpdatePublishedFile****/
SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UpdatePublishedFile(RemoteStorageUpdatePublishedFileRequest_t_v1 updatePublishedFileRequest) {
    // FIXME: implement
    STUB();
    return 0;
}

/**** GetPublishedFileDetails****/
SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetPublishedFileDetails(PublishedFileId_t unPublishedFileId, uint32 unMaxSecondsOld) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetPublishedFileDetails(PublishedFileId_t unPublishedFileId, uint32 unMaxSecondsOld) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetPublishedFileDetails(unPublishedFileId, unMaxSecondsOld);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetPublishedFileDetails(PublishedFileId_t unPublishedFileId, uint32 unMaxSecondsOld) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetPublishedFileDetails(unPublishedFileId, unMaxSecondsOld);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedFileDetails(PublishedFileId_t unPublishedFileId, uint32 unMaxSecondsOld) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetPublishedFileDetails(unPublishedFileId, unMaxSecondsOld);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetPublishedFileDetails(PublishedFileId_t unPublishedFileId) {
    // FIXME: probably wrong
    uint32 maxSecondsOld = 0;
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedFileDetails(unPublishedFileId, maxSecondsOld);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetPublishedFileDetails(PublishedFileId_t unPublishedFileId) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetPublishedFileDetails(unPublishedFileId);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetPublishedFileDetails(PublishedFileId_t unPublishedFileId) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetPublishedFileDetails(unPublishedFileId);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetPublishedFileDetails(PublishedFileId_t unPublishedFileId) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetPublishedFileDetails(unPublishedFileId);
}

/**** DeletePublishedFile****/
SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_DeletePublishedFile(PublishedFileId_t unPublishedFileId) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_DeletePublishedFile(PublishedFileId_t unPublishedFileId) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_DeletePublishedFile(unPublishedFileId);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_DeletePublishedFile(PublishedFileId_t unPublishedFileId) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_DeletePublishedFile(unPublishedFileId);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_DeletePublishedFile(PublishedFileId_t unPublishedFileId) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_DeletePublishedFile(unPublishedFileId);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_DeletePublishedFile(PublishedFileId_t unPublishedFileId) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_DeletePublishedFile(unPublishedFileId);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_DeletePublishedFile(PublishedFileId_t unPublishedFileId) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_DeletePublishedFile(unPublishedFileId);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_DeletePublishedFile(PublishedFileId_t unPublishedFileId) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_DeletePublishedFile(unPublishedFileId);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_DeletePublishedFile(PublishedFileId_t unPublishedFileId) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_DeletePublishedFile(unPublishedFileId);
}

/**** EnumerateUserPublishedFiles****/
SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumerateUserPublishedFiles(uint32 unStartIndex) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumerateUserPublishedFiles(uint32 unStartIndex) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumerateUserPublishedFiles(unStartIndex);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumerateUserPublishedFiles(uint32 unStartIndex) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumerateUserPublishedFiles(unStartIndex);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserPublishedFiles(uint32 unStartIndex) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumerateUserPublishedFiles(unStartIndex);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserPublishedFiles(uint32 unStartIndex) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserPublishedFiles(unStartIndex);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserPublishedFiles(uint32 unStartIndex) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserPublishedFiles(unStartIndex);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserPublishedFiles(uint32 unStartIndex) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserPublishedFiles(unStartIndex);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_EnumerateUserPublishedFiles(uint32 unStartIndex) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserPublishedFiles(unStartIndex);
}

/**** SubscribePublishedFile****/
SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SubscribePublishedFile(PublishedFileId_t unPublishedFileId) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SubscribePublishedFile(PublishedFileId_t unPublishedFileId) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SubscribePublishedFile(unPublishedFileId);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SubscribePublishedFile(PublishedFileId_t unPublishedFileId) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SubscribePublishedFile(unPublishedFileId);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SubscribePublishedFile(PublishedFileId_t unPublishedFileId) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SubscribePublishedFile(unPublishedFileId);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SubscribePublishedFile(PublishedFileId_t unPublishedFileId) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SubscribePublishedFile(unPublishedFileId);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SubscribePublishedFile(PublishedFileId_t unPublishedFileId) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SubscribePublishedFile(unPublishedFileId);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SubscribePublishedFile(PublishedFileId_t unPublishedFileId) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SubscribePublishedFile(unPublishedFileId);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SubscribePublishedFile(PublishedFileId_t unPublishedFileId) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SubscribePublishedFile(unPublishedFileId);
}

/**** EnumerateUserSubscribedFiles****/
SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumerateUserSubscribedFiles(uint32 unStartIndex) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumerateUserSubscribedFiles(uint32 unStartIndex) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumerateUserSubscribedFiles(unStartIndex);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumerateUserSubscribedFiles(uint32 unStartIndex) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumerateUserSubscribedFiles(unStartIndex);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSubscribedFiles(uint32 unStartIndex) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumerateUserSubscribedFiles(unStartIndex);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserSubscribedFiles(uint32 unStartIndex) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSubscribedFiles(unStartIndex);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserSubscribedFiles(uint32 unStartIndex) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserSubscribedFiles(unStartIndex);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserSubscribedFiles(uint32 unStartIndex) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserSubscribedFiles(unStartIndex);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_EnumerateUserSubscribedFiles(uint32 unStartIndex) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserSubscribedFiles(unStartIndex);
}

/**** UnsubscribePublishedFile****/
SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UnsubscribePublishedFile(PublishedFileId_t unPublishedFileId) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UnsubscribePublishedFile(PublishedFileId_t unPublishedFileId) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UnsubscribePublishedFile(unPublishedFileId);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UnsubscribePublishedFile(PublishedFileId_t unPublishedFileId) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UnsubscribePublishedFile(unPublishedFileId);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UnsubscribePublishedFile(PublishedFileId_t unPublishedFileId) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UnsubscribePublishedFile(unPublishedFileId);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UnsubscribePublishedFile(PublishedFileId_t unPublishedFileId) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UnsubscribePublishedFile(unPublishedFileId);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UnsubscribePublishedFile(PublishedFileId_t unPublishedFileId) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UnsubscribePublishedFile(unPublishedFileId);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UnsubscribePublishedFile(PublishedFileId_t unPublishedFileId) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UnsubscribePublishedFile(unPublishedFileId);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UnsubscribePublishedFile(PublishedFileId_t unPublishedFileId) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UnsubscribePublishedFile(unPublishedFileId);
}

/**** GetUGCDownloadProgress****/
bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetUGCDownloadProgress(UGCHandle_t hContent, int32* pnBytesDownloaded, int32* pnBytesExpected) {
    // FIXME: implement
    STUB();
    return false;
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetUGCDownloadProgress(UGCHandle_t hContent, int32* pnBytesDownloaded, int32* pnBytesExpected) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetUGCDownloadProgress(hContent, pnBytesDownloaded, pnBytesExpected);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetUGCDownloadProgress(UGCHandle_t hContent, int32* pnBytesDownloaded, int32* pnBytesExpected) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetUGCDownloadProgress(hContent, pnBytesDownloaded, pnBytesExpected);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUGCDownloadProgress(UGCHandle_t hContent, int32* pnBytesDownloaded, int32* pnBytesExpected) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetUGCDownloadProgress(hContent, pnBytesDownloaded, pnBytesExpected);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUGCDownloadProgress(UGCHandle_t hContent, int32* pnBytesDownloaded, int32* pnBytesExpected) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUGCDownloadProgress(hContent, pnBytesDownloaded, pnBytesExpected);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUGCDownloadProgress(UGCHandle_t hContent, int32* pnBytesDownloaded, int32* pnBytesExpected) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUGCDownloadProgress(hContent, pnBytesDownloaded, pnBytesExpected);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUGCDownloadProgress(UGCHandle_t hContent, int32* pnBytesDownloaded, int32* pnBytesExpected) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUGCDownloadProgress(hContent, pnBytesDownloaded, pnBytesExpected);
}

/**** CreatePublishedFileUpdateRequest****/
PublishedFileUpdateHandle_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_CreatePublishedFileUpdateRequest(PublishedFileId_t unPublishedFileId) {
    // FIXME: implement
    STUB();
    return 0;
}

PublishedFileUpdateHandle_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_CreatePublishedFileUpdateRequest(PublishedFileId_t unPublishedFileId) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_CreatePublishedFileUpdateRequest(unPublishedFileId);
}

PublishedFileUpdateHandle_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_CreatePublishedFileUpdateRequest(PublishedFileId_t unPublishedFileId) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_CreatePublishedFileUpdateRequest(unPublishedFileId);
}

PublishedFileUpdateHandle_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CreatePublishedFileUpdateRequest(PublishedFileId_t unPublishedFileId) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_CreatePublishedFileUpdateRequest(unPublishedFileId);
}

PublishedFileUpdateHandle_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_CreatePublishedFileUpdateRequest(PublishedFileId_t unPublishedFileId) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CreatePublishedFileUpdateRequest(unPublishedFileId);
}

PublishedFileUpdateHandle_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_CreatePublishedFileUpdateRequest(PublishedFileId_t unPublishedFileId) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_CreatePublishedFileUpdateRequest(unPublishedFileId);
}

PublishedFileUpdateHandle_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_CreatePublishedFileUpdateRequest(PublishedFileId_t unPublishedFileId) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_CreatePublishedFileUpdateRequest(unPublishedFileId);
}

/**** UpdatePublishedFileFile****/
bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileFile(PublishedFileUpdateHandle_t updateHandle, char* pchFile) {
    // FIXME: implement
    STUB();
    return false;
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileFile(PublishedFileUpdateHandle_t updateHandle, char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileFile(updateHandle, pchFile);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileFile(PublishedFileUpdateHandle_t updateHandle, char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileFile(updateHandle, pchFile);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileFile(PublishedFileUpdateHandle_t updateHandle, char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileFile(updateHandle, pchFile);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileFile(PublishedFileUpdateHandle_t updateHandle, char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileFile(updateHandle, pchFile);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileFile(PublishedFileUpdateHandle_t updateHandle, char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileFile(updateHandle, pchFile);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileFile(PublishedFileUpdateHandle_t updateHandle, char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileFile(updateHandle, pchFile);
}

/**** UpdatePublishedFilePreviewFile****/
bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFilePreviewFile(PublishedFileUpdateHandle_t updateHandle, char* pchPreviewFile) {
    // FIXME: implement
    STUB();
    return false;
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFilePreviewFile(PublishedFileUpdateHandle_t updateHandle, char* pchPreviewFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFilePreviewFile(updateHandle, pchPreviewFile);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFilePreviewFile(PublishedFileUpdateHandle_t updateHandle, char* pchPreviewFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFilePreviewFile(updateHandle, pchPreviewFile);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFilePreviewFile(PublishedFileUpdateHandle_t updateHandle, char* pchPreviewFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFilePreviewFile(updateHandle, pchPreviewFile);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFilePreviewFile(PublishedFileUpdateHandle_t updateHandle, char* pchPreviewFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFilePreviewFile(updateHandle, pchPreviewFile);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFilePreviewFile(PublishedFileUpdateHandle_t updateHandle, char* pchPreviewFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFilePreviewFile(updateHandle, pchPreviewFile);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFilePreviewFile(PublishedFileUpdateHandle_t updateHandle, char* pchPreviewFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFilePreviewFile(updateHandle, pchPreviewFile);
}

/**** UpdatePublishedFileTitle****/
bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileTitle(PublishedFileUpdateHandle_t updateHandle, char* pchTitle) {
    // FIXME: implement
    STUB();
    return false;
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileTitle(PublishedFileUpdateHandle_t updateHandle, char* pchTitle) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileTitle(updateHandle, pchTitle);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileTitle(PublishedFileUpdateHandle_t updateHandle, char* pchTitle) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileTitle(updateHandle, pchTitle);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTitle(PublishedFileUpdateHandle_t updateHandle, char* pchTitle) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileTitle(updateHandle, pchTitle);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileTitle(PublishedFileUpdateHandle_t updateHandle, char* pchTitle) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTitle(updateHandle, pchTitle);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileTitle(PublishedFileUpdateHandle_t updateHandle, char* pchTitle) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileTitle(updateHandle, pchTitle);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileTitle(PublishedFileUpdateHandle_t updateHandle, char* pchTitle) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileTitle(updateHandle, pchTitle);
}

/**** UpdatePublishedFileDescription****/
bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileDescription(PublishedFileUpdateHandle_t updateHandle, char* pchDescription) {
    // FIXME: implement
    STUB();
    return false;
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileDescription(PublishedFileUpdateHandle_t updateHandle, char* pchDescription) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileDescription(updateHandle, pchDescription);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileDescription(PublishedFileUpdateHandle_t updateHandle, char* pchDescription) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileDescription(updateHandle, pchDescription);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileDescription(PublishedFileUpdateHandle_t updateHandle, char* pchDescription) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileDescription(updateHandle, pchDescription);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileDescription(PublishedFileUpdateHandle_t updateHandle, char* pchDescription) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileDescription(updateHandle, pchDescription);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileDescription(PublishedFileUpdateHandle_t updateHandle, char* pchDescription) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileDescription(updateHandle, pchDescription);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileDescription(PublishedFileUpdateHandle_t updateHandle, char* pchDescription) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileDescription(updateHandle, pchDescription);
}

/**** UpdatePublishedFileVisibility****/
bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileVisibility(PublishedFileUpdateHandle_t updateHandle, ERemoteStoragePublishedFileVisibility_v1 eVisibility) {
    // FIXME: implement
    STUB();
    return false;
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileVisibility(PublishedFileUpdateHandle_t updateHandle, ERemoteStoragePublishedFileVisibility_v1 eVisibility) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileVisibility(updateHandle, eVisibility);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileVisibility(PublishedFileUpdateHandle_t updateHandle, ERemoteStoragePublishedFileVisibility_v1 eVisibility) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileVisibility(updateHandle, eVisibility);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileVisibility(PublishedFileUpdateHandle_t updateHandle, ERemoteStoragePublishedFileVisibility_v1 eVisibility) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileVisibility(updateHandle, eVisibility);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileVisibility(PublishedFileUpdateHandle_t updateHandle, ERemoteStoragePublishedFileVisibility_v1 eVisibility) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileVisibility(updateHandle, eVisibility);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileVisibility(PublishedFileUpdateHandle_t updateHandle, ERemoteStoragePublishedFileVisibility_v1 eVisibility) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileVisibility(updateHandle, eVisibility);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileVisibility(PublishedFileUpdateHandle_t updateHandle, ERemoteStoragePublishedFileVisibility_v1 eVisibility) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileVisibility(updateHandle, eVisibility);
}

/**** UpdatePublishedFileTags****/
bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileTags(PublishedFileUpdateHandle_t updateHandle, SteamParamStringArray_t_v1* pTags) {
    // FIXME: implement
    STUB();
    return false;
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileTags(PublishedFileUpdateHandle_t updateHandle, SteamParamStringArray_t_v1* pTags) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileTags(updateHandle, pTags);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileTags(PublishedFileUpdateHandle_t updateHandle, SteamParamStringArray_t_v1* pTags) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileTags(updateHandle, pTags);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTags(PublishedFileUpdateHandle_t updateHandle, SteamParamStringArray_t_v1* pTags) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileTags(updateHandle, pTags);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileTags(PublishedFileUpdateHandle_t updateHandle, SteamParamStringArray_t_v1* pTags) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTags(updateHandle, pTags);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileTags(PublishedFileUpdateHandle_t updateHandle, SteamParamStringArray_t_v1* pTags) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileTags(updateHandle, pTags);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileTags(PublishedFileUpdateHandle_t updateHandle, SteamParamStringArray_t_v1* pTags) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileTags(updateHandle, pTags);
}

/**** CommitPublishedFileUpdate****/
SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_CommitPublishedFileUpdate(PublishedFileUpdateHandle_t updateHandle) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_CommitPublishedFileUpdate(PublishedFileUpdateHandle_t updateHandle) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_CommitPublishedFileUpdate(updateHandle);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_CommitPublishedFileUpdate(PublishedFileUpdateHandle_t updateHandle) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_CommitPublishedFileUpdate(updateHandle);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CommitPublishedFileUpdate(PublishedFileUpdateHandle_t updateHandle) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_CommitPublishedFileUpdate(updateHandle);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_CommitPublishedFileUpdate(PublishedFileUpdateHandle_t updateHandle) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CommitPublishedFileUpdate(updateHandle);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_CommitPublishedFileUpdate(PublishedFileUpdateHandle_t updateHandle) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_CommitPublishedFileUpdate(updateHandle);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_CommitPublishedFileUpdate(PublishedFileUpdateHandle_t updateHandle) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_CommitPublishedFileUpdate(updateHandle);
}

/**** UpdatePublishedFileSetChangeDescription****/
bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileSetChangeDescription(PublishedFileUpdateHandle_t updateHandle, char* pchChangeDescription) {
    // FIXME: implement
    STUB();
    return false;
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileSetChangeDescription(PublishedFileUpdateHandle_t updateHandle, char* pchChangeDescription) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileSetChangeDescription(updateHandle, pchChangeDescription);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileSetChangeDescription(PublishedFileUpdateHandle_t updateHandle, char* pchChangeDescription) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileSetChangeDescription(updateHandle, pchChangeDescription);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileSetChangeDescription(PublishedFileUpdateHandle_t updateHandle, char* pchChangeDescription) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileSetChangeDescription(updateHandle, pchChangeDescription);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileSetChangeDescription(PublishedFileUpdateHandle_t updateHandle, char* pchChangeDescription) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileSetChangeDescription(updateHandle, pchChangeDescription);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileSetChangeDescription(PublishedFileUpdateHandle_t updateHandle, char* pchChangeDescription) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileSetChangeDescription(updateHandle, pchChangeDescription);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileSetChangeDescription(PublishedFileUpdateHandle_t updateHandle, char* pchChangeDescription) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileSetChangeDescription(updateHandle, pchChangeDescription);
}

/**** GetPublishedItemVoteDetails****/
SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetPublishedItemVoteDetails(PublishedFileId_t unPublishedFileId) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetPublishedItemVoteDetails(PublishedFileId_t unPublishedFileId) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetPublishedItemVoteDetails(unPublishedFileId);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetPublishedItemVoteDetails(PublishedFileId_t unPublishedFileId) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetPublishedItemVoteDetails(unPublishedFileId);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedItemVoteDetails(PublishedFileId_t unPublishedFileId) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetPublishedItemVoteDetails(unPublishedFileId);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetPublishedItemVoteDetails(PublishedFileId_t unPublishedFileId) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedItemVoteDetails(unPublishedFileId);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetPublishedItemVoteDetails(PublishedFileId_t unPublishedFileId) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetPublishedItemVoteDetails(unPublishedFileId);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetPublishedItemVoteDetails(PublishedFileId_t unPublishedFileId) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetPublishedItemVoteDetails(unPublishedFileId);
}

/**** UpdateUserPublishedItemVote****/
SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdateUserPublishedItemVote(PublishedFileId_t unPublishedFileId, bool bVoteUp) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdateUserPublishedItemVote(PublishedFileId_t unPublishedFileId, bool bVoteUp) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdateUserPublishedItemVote(unPublishedFileId, bVoteUp);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdateUserPublishedItemVote(PublishedFileId_t unPublishedFileId, bool bVoteUp) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdateUserPublishedItemVote(unPublishedFileId, bVoteUp);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdateUserPublishedItemVote(PublishedFileId_t unPublishedFileId, bool bVoteUp) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdateUserPublishedItemVote(unPublishedFileId, bVoteUp);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdateUserPublishedItemVote(PublishedFileId_t unPublishedFileId, bool bVoteUp) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdateUserPublishedItemVote(unPublishedFileId, bVoteUp);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdateUserPublishedItemVote(PublishedFileId_t unPublishedFileId, bool bVoteUp) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdateUserPublishedItemVote(unPublishedFileId, bVoteUp);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdateUserPublishedItemVote(PublishedFileId_t unPublishedFileId, bool bVoteUp) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdateUserPublishedItemVote(unPublishedFileId, bVoteUp);
}

/**** GetUserPublishedItemVoteDetails****/
SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetUserPublishedItemVoteDetails(PublishedFileId_t unPublishedFileId) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetUserPublishedItemVoteDetails(PublishedFileId_t unPublishedFileId) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetUserPublishedItemVoteDetails(unPublishedFileId);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetUserPublishedItemVoteDetails(PublishedFileId_t unPublishedFileId) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetUserPublishedItemVoteDetails(unPublishedFileId);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUserPublishedItemVoteDetails(PublishedFileId_t unPublishedFileId) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetUserPublishedItemVoteDetails(unPublishedFileId);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUserPublishedItemVoteDetails(PublishedFileId_t unPublishedFileId) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUserPublishedItemVoteDetails(unPublishedFileId);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUserPublishedItemVoteDetails(PublishedFileId_t unPublishedFileId) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUserPublishedItemVoteDetails(unPublishedFileId);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUserPublishedItemVoteDetails(PublishedFileId_t unPublishedFileId) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUserPublishedItemVoteDetails(unPublishedFileId);
}

/**** EnumerateUserSharedWorkshopFiles****/
SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumerateUserSharedWorkshopFiles(CSteamID steamId, uint32 unStartIndex, SteamParamStringArray_t_v1* pRequiredTags, SteamParamStringArray_t_v1* pExcludedTags) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumerateUserSharedWorkshopFiles(CSteamID steamId, uint32 unStartIndex, SteamParamStringArray_t_v1* pRequiredTags, SteamParamStringArray_t_v1* pExcludedTags) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumerateUserSharedWorkshopFiles(steamId, unStartIndex, pRequiredTags, pExcludedTags);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumerateUserSharedWorkshopFiles(CSteamID steamId, uint32 unStartIndex, SteamParamStringArray_t_v1* pRequiredTags, SteamParamStringArray_t_v1* pExcludedTags) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumerateUserSharedWorkshopFiles(steamId, unStartIndex, pRequiredTags, pExcludedTags);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSharedWorkshopFiles(CSteamID steamId, uint32 unStartIndex, SteamParamStringArray_t_v1* pRequiredTags, SteamParamStringArray_t_v1* pExcludedTags) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumerateUserSharedWorkshopFiles(steamId, unStartIndex, pRequiredTags, pExcludedTags);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserSharedWorkshopFiles(CSteamID steamId, uint32 unStartIndex, SteamParamStringArray_t_v1* pRequiredTags, SteamParamStringArray_t_v1* pExcludedTags) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSharedWorkshopFiles(steamId, unStartIndex, pRequiredTags, pExcludedTags);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserSharedWorkshopFiles(CSteamID steamId, uint32 unStartIndex, SteamParamStringArray_t_v1* pRequiredTags, SteamParamStringArray_t_v1* pExcludedTags) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserSharedWorkshopFiles(steamId, unStartIndex, pRequiredTags, pExcludedTags);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserSharedWorkshopFiles(CSteamID steamId, uint32 unStartIndex, SteamParamStringArray_t_v1* pRequiredTags, SteamParamStringArray_t_v1* pExcludedTags) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserSharedWorkshopFiles(steamId, unStartIndex, pRequiredTags, pExcludedTags);
}

/**** PublishVideo****/
SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_PublishVideo(EWorkshopVideoProvider_v1 eVideoProvider, char* pchVideoAccount, char* pchVideoIdentifier, char* pchPreviewFile, AppId_t nConsumerAppId, char* pchTitle, char* pchDescription, ERemoteStoragePublishedFileVisibility_v1 eVisibility, SteamParamStringArray_t_v1* pTags) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_PublishVideo(EWorkshopVideoProvider_v1 eVideoProvider, char* pchVideoAccount, char* pchVideoIdentifier, char* pchPreviewFile, AppId_t nConsumerAppId, char* pchTitle, char* pchDescription, ERemoteStoragePublishedFileVisibility_v1 eVisibility, SteamParamStringArray_t_v1* pTags) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_PublishVideo(eVideoProvider, pchVideoAccount, pchVideoIdentifier, pchPreviewFile, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_PublishVideo(EWorkshopVideoProvider_v1 eVideoProvider, char* pchVideoAccount, char* pchVideoIdentifier, char* pchPreviewFile, AppId_t nConsumerAppId, char* pchTitle, char* pchDescription, ERemoteStoragePublishedFileVisibility_v1 eVisibility, SteamParamStringArray_t_v1* pTags) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_PublishVideo(eVideoProvider, pchVideoAccount, pchVideoIdentifier, pchPreviewFile, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishVideo(EWorkshopVideoProvider_v1 eVideoProvider, char* pchVideoAccount, char* pchVideoIdentifier, char* pchPreviewFile, AppId_t nConsumerAppId, char* pchTitle, char* pchDescription, ERemoteStoragePublishedFileVisibility_v1 eVisibility, SteamParamStringArray_t_v1* pTags) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_PublishVideo(eVideoProvider, pchVideoAccount, pchVideoIdentifier, pchPreviewFile, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_PublishVideo(EWorkshopVideoProvider_v1 eVideoProvider, char* pchVideoAccount, char* pchVideoIdentifier, char* pchPreviewFile, AppId_t nConsumerAppId, char* pchTitle, char* pchDescription, ERemoteStoragePublishedFileVisibility_v1 eVisibility, SteamParamStringArray_t_v1* pTags) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishVideo(eVideoProvider, pchVideoAccount, pchVideoIdentifier, pchPreviewFile, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_PublishVideo(EWorkshopVideoProvider_v1 eVideoProvider, char* pchVideoAccount, char* pchVideoIdentifier, char* pchPreviewFile, AppId_t nConsumerAppId, char* pchTitle, char* pchDescription, ERemoteStoragePublishedFileVisibility_v1 eVisibility, SteamParamStringArray_t_v1* pTags) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_PublishVideo(eVideoProvider, pchVideoAccount, pchVideoIdentifier, pchPreviewFile, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_PublishVideo(char* pchVideoURL, char* pchPreviewFile, AppId_t nConsumerAppId, char* pchTitle, char* pchDescription, ERemoteStoragePublishedFileVisibility_v1 eVisibility, SteamParamStringArray_t_v1* pTags) {
    // FIXME: probably wrong
    EWorkshopVideoProvider_v1 videoProvider = k_EWorkshopVideoProviderYoutube_v1;
    char* videoAccount = pchVideoURL;
    char* videoIdentifier = pchVideoURL;
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_PublishVideo(videoProvider, videoAccount, videoIdentifier, pchPreviewFile, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags);
}

/**** SetUserPublishedFileAction****/
SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SetUserPublishedFileAction(PublishedFileId_t unPublishedFileId, EWorkshopFileAction_v1 eAction) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SetUserPublishedFileAction(PublishedFileId_t unPublishedFileId, EWorkshopFileAction_v1 eAction) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SetUserPublishedFileAction(unPublishedFileId, eAction);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SetUserPublishedFileAction(PublishedFileId_t unPublishedFileId, EWorkshopFileAction_v1 eAction) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SetUserPublishedFileAction(unPublishedFileId, eAction);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetUserPublishedFileAction(PublishedFileId_t unPublishedFileId, EWorkshopFileAction_v1 eAction) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SetUserPublishedFileAction(unPublishedFileId, eAction);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetUserPublishedFileAction(PublishedFileId_t unPublishedFileId, EWorkshopFileAction_v1 eAction) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetUserPublishedFileAction(unPublishedFileId, eAction);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetUserPublishedFileAction(PublishedFileId_t unPublishedFileId, EWorkshopFileAction_v1 eAction) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetUserPublishedFileAction(unPublishedFileId, eAction);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetUserPublishedFileAction(PublishedFileId_t unPublishedFileId, EWorkshopFileAction_v1 eAction) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetUserPublishedFileAction(unPublishedFileId, eAction);
}

/**** EnumeratePublishedFilesByUserAction****/
SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumeratePublishedFilesByUserAction(EWorkshopFileAction_v1 eAction, uint32 unStartIndex) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumeratePublishedFilesByUserAction(EWorkshopFileAction_v1 eAction, uint32 unStartIndex) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumeratePublishedFilesByUserAction(eAction, unStartIndex);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumeratePublishedFilesByUserAction(EWorkshopFileAction_v1 eAction, uint32 unStartIndex) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumeratePublishedFilesByUserAction(eAction, unStartIndex);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedFilesByUserAction(EWorkshopFileAction_v1 eAction, uint32 unStartIndex) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumeratePublishedFilesByUserAction(eAction, unStartIndex);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumeratePublishedFilesByUserAction(EWorkshopFileAction_v1 eAction, uint32 unStartIndex) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedFilesByUserAction(eAction, unStartIndex);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumeratePublishedFilesByUserAction(EWorkshopFileAction_v1 eAction, uint32 unStartIndex) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumeratePublishedFilesByUserAction(eAction, unStartIndex);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumeratePublishedFilesByUserAction(EWorkshopFileAction_v1 eAction, uint32 unStartIndex) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumeratePublishedFilesByUserAction(eAction, unStartIndex);
}

/**** EnumeratePublishedWorkshopFiles****/
SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumeratePublishedWorkshopFiles(EWorkshopEnumerationType_v1 eEnumerationType, uint32 unStartIndex, uint32 unCount, uint32 unDays, SteamParamStringArray_t_v1* pTags, SteamParamStringArray_t_v1* pUserTags) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumeratePublishedWorkshopFiles(EWorkshopEnumerationType_v1 eEnumerationType, uint32 unStartIndex, uint32 unCount, uint32 unDays, SteamParamStringArray_t_v1* pTags, SteamParamStringArray_t_v1* pUserTags) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumeratePublishedWorkshopFiles(eEnumerationType, unStartIndex, unCount, unDays, pTags, pUserTags);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumeratePublishedWorkshopFiles(EWorkshopEnumerationType_v1 eEnumerationType, uint32 unStartIndex, uint32 unCount, uint32 unDays, SteamParamStringArray_t_v1* pTags, SteamParamStringArray_t_v1* pUserTags) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumeratePublishedWorkshopFiles(eEnumerationType, unStartIndex, unCount, unDays, pTags, pUserTags);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedWorkshopFiles(EWorkshopEnumerationType_v1 eEnumerationType, uint32 unStartIndex, uint32 unCount, uint32 unDays, SteamParamStringArray_t_v1* pTags, SteamParamStringArray_t_v1* pUserTags) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumeratePublishedWorkshopFiles(eEnumerationType, unStartIndex, unCount, unDays, pTags, pUserTags);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumeratePublishedWorkshopFiles(EWorkshopEnumerationType_v1 eEnumerationType, uint32 unStartIndex, uint32 unCount, uint32 unDays, SteamParamStringArray_t_v1* pTags, SteamParamStringArray_t_v1* pUserTags) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedWorkshopFiles(eEnumerationType, unStartIndex, unCount, unDays, pTags, pUserTags);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumeratePublishedWorkshopFiles(EWorkshopEnumerationType_v1 eEnumerationType, uint32 unStartIndex, uint32 unCount, uint32 unDays, SteamParamStringArray_t_v1* pTags, SteamParamStringArray_t_v1* pUserTags) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumeratePublishedWorkshopFiles(eEnumerationType, unStartIndex, unCount, unDays, pTags, pUserTags);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumeratePublishedWorkshopFiles(EWorkshopEnumerationType_v1 eEnumerationType, uint32 unStartIndex, uint32 unCount, uint32 unDays, SteamParamStringArray_t_v1* pTags, SteamParamStringArray_t_v1* pUserTags) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumeratePublishedWorkshopFiles(eEnumerationType, unStartIndex, unCount, unDays, pTags, pUserTags);
}

/**** FileWriteStreamOpen****/
UGCFileWriteStreamHandle_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamOpen(char* pchFile) {
    // FIXME: implement
    STUB();
    return 0;
}

UGCFileWriteStreamHandle_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamOpen(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamOpen(pchFile);
}

UGCFileWriteStreamHandle_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamOpen(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamOpen(pchFile);
}

UGCFileWriteStreamHandle_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamOpen(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamOpen(pchFile);
}

UGCFileWriteStreamHandle_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamOpen(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamOpen(pchFile);
}

UGCFileWriteStreamHandle_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamOpen(char* pchFile) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamOpen(pchFile);
}

/**** FileWriteStreamWriteChunk****/
bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamWriteChunk(UGCFileWriteStreamHandle_t writeHandle, void* pvData, int32 cubData) {
    // FIXME: implement
    STUB();
    return false;
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamWriteChunk(UGCFileWriteStreamHandle_t writeHandle, void* pvData, int32 cubData) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamWriteChunk(writeHandle, pvData, cubData);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamWriteChunk(UGCFileWriteStreamHandle_t writeHandle, void* pvData, int32 cubData) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamWriteChunk(writeHandle, pvData, cubData);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamWriteChunk(UGCFileWriteStreamHandle_t writeHandle, void* pvData, int32 cubData) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamWriteChunk(writeHandle, pvData, cubData);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamWriteChunk(UGCFileWriteStreamHandle_t writeHandle, void* pvData, int32 cubData) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamWriteChunk(writeHandle, pvData, cubData);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamWriteChunk(UGCFileWriteStreamHandle_t writeHandle, void* pvData, int32 cubData) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamWriteChunk(writeHandle, pvData, cubData);
}

/**** FileWriteStreamClose****/
bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamClose(UGCFileWriteStreamHandle_t writeHandle) {
    // FIXME: implement
    STUB();
    return false;
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamClose(UGCFileWriteStreamHandle_t writeHandle) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamClose(writeHandle);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamClose(UGCFileWriteStreamHandle_t writeHandle) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamClose(writeHandle);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamClose(UGCFileWriteStreamHandle_t writeHandle) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamClose(writeHandle);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamClose(UGCFileWriteStreamHandle_t writeHandle) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamClose(writeHandle);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamClose(UGCFileWriteStreamHandle_t writeHandle) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamClose(writeHandle);
}

/**** FileWriteStreamCancel****/
bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamCancel(UGCFileWriteStreamHandle_t writeHandle) {
    // FIXME: implement
    STUB();
    return false;
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamCancel(UGCFileWriteStreamHandle_t writeHandle) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamCancel(writeHandle);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamCancel(UGCFileWriteStreamHandle_t writeHandle) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamCancel(writeHandle);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamCancel(UGCFileWriteStreamHandle_t writeHandle) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamCancel(writeHandle);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamCancel(UGCFileWriteStreamHandle_t writeHandle) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamCancel(writeHandle);
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamCancel(UGCFileWriteStreamHandle_t writeHandle) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamCancel(writeHandle);
}

/**** UGCDownloadToLocation****/
SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UGCDownloadToLocation(UGCHandle_t hContent, char* pchLocation, uint32 unPriority) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UGCDownloadToLocation(UGCHandle_t hContent, char* pchLocation, uint32 unPriority) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UGCDownloadToLocation(hContent, pchLocation, unPriority);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UGCDownloadToLocation(UGCHandle_t hContent, char* pchLocation, uint32 unPriority) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UGCDownloadToLocation(hContent, pchLocation, unPriority);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownloadToLocation(UGCHandle_t hContent, char* pchLocation, uint32 unPriority) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UGCDownloadToLocation(hContent, pchLocation, unPriority);
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCDownloadToLocation(UGCHandle_t hContent, char* pchLocation, uint32 unPriority) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownloadToLocation(hContent, pchLocation, unPriority);
}

/**** FileWriteAsync****/
SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteAsync(char* pchFile, void* pvData, uint32 cubData) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteAsync(char* pchFile, void* pvData, uint32 cubData) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteAsync(pchFile, pvData, cubData);
}

/**** FileReadAsync****/
SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileReadAsync(char* pchFile, uint32 nOffset, uint32 cubToRead) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileReadAsync(char* pchFile, uint32 nOffset, uint32 cubToRead) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileReadAsync(pchFile, nOffset, cubToRead);
}

/**** FileReadAsyncComplete****/
bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileReadAsyncComplete(SteamAPICall_t hReadCall, void* pvBuffer, uint32 cubToRead) {
    // FIXME: implement
    STUB();
    return false;
}

bool RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileReadAsyncComplete(SteamAPICall_t hReadCall, void* pvBuffer, uint32 cubToRead) {
    return RemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileReadAsyncComplete(hReadCall, pvBuffer, cubToRead);
}

