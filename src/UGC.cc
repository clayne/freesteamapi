#include "steam_api.h"

/**** CreateQueryUserUGCRequest****/
UGCQueryHandle_t UGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryUserUGCRequest(AccountID_t unAccountID, EUserUGCList_v1 eListType, EUGCMatchingUGCType_v1 eMatchingUGCType, EUserUGCListSortOrder_v1 eSortOrder, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage) {
    // FIXME: implement
    STUB();
    return 0;
}

UGCQueryHandle_t UGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryUserUGCRequest(AccountID_t unAccountID, EUserUGCList_v1 eListType, EUGCMatchingUGCType_v1 eMatchingUGCType, EUserUGCListSortOrder_v1 eSortOrder, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryUserUGCRequest(unAccountID, eListType, eMatchingUGCType, eSortOrder, nCreatorAppID, nConsumerAppID, unPage);
}

UGCQueryHandle_t UGC_STEAMUGC_INTERFACE_VERSION008_CreateQueryUserUGCRequest(AccountID_t unAccountID, EUserUGCList_v1 eListType, EUGCMatchingUGCType_v1 eMatchingUGCType, EUserUGCListSortOrder_v1 eSortOrder, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryUserUGCRequest(unAccountID, eListType, eMatchingUGCType, eSortOrder, nCreatorAppID, nConsumerAppID, unPage);
}

UGCQueryHandle_t UGC_STEAMUGC_INTERFACE_VERSION007_CreateQueryUserUGCRequest(AccountID_t unAccountID, EUserUGCList_v1 eListType, EUGCMatchingUGCType_v1 eMatchingUGCType, EUserUGCListSortOrder_v1 eSortOrder, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_CreateQueryUserUGCRequest(unAccountID, eListType, eMatchingUGCType, eSortOrder, nCreatorAppID, nConsumerAppID, unPage);
}

UGCQueryHandle_t UGC_STEAMUGC_INTERFACE_VERSION005_CreateQueryUserUGCRequest(AccountID_t unAccountID, EUserUGCList_v1 eListType, EUGCMatchingUGCType_v1 eMatchingUGCType, EUserUGCListSortOrder_v1 eSortOrder, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage) {
    return UGC_STEAMUGC_INTERFACE_VERSION007_CreateQueryUserUGCRequest(unAccountID, eListType, eMatchingUGCType, eSortOrder, nCreatorAppID, nConsumerAppID, unPage);
}

UGCQueryHandle_t UGC_STEAMUGC_INTERFACE_VERSION003_CreateQueryUserUGCRequest(AccountID_t unAccountID, EUserUGCList_v1 eListType, EUGCMatchingUGCType_v1 eMatchingUGCType, EUserUGCListSortOrder_v1 eSortOrder, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage) {
    return UGC_STEAMUGC_INTERFACE_VERSION005_CreateQueryUserUGCRequest(unAccountID, eListType, eMatchingUGCType, eSortOrder, nCreatorAppID, nConsumerAppID, unPage);
}

UGCQueryHandle_t UGC_STEAMUGC_INTERFACE_VERSION002_CreateQueryUserUGCRequest(AccountID_t unAccountID, EUserUGCList_v1 eListType, EUGCMatchingUGCType_v1 eMatchingUGCType, EUserUGCListSortOrder_v1 eSortOrder, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage) {
    return UGC_STEAMUGC_INTERFACE_VERSION003_CreateQueryUserUGCRequest(unAccountID, eListType, eMatchingUGCType, eSortOrder, nCreatorAppID, nConsumerAppID, unPage);
}

UGCQueryHandle_t UGC_STEAMUGC_INTERFACE_VERSION001_CreateQueryUserUGCRequest(AccountID_t unAccountID, EUserUGCList_v1 eListType, EUGCMatchingUGCType_v1 eMatchingUGCType, EUserUGCListSortOrder_v1 eSortOrder, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage) {
    return UGC_STEAMUGC_INTERFACE_VERSION002_CreateQueryUserUGCRequest(unAccountID, eListType, eMatchingUGCType, eSortOrder, nCreatorAppID, nConsumerAppID, unPage);
}

/**** CreateQueryAllUGCRequest****/
UGCQueryHandle_t UGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryAllUGCRequest(EUGCQuery_v1 eQueryType, EUGCMatchingUGCType_v1 eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage) {
    // FIXME: implement
    STUB();
    return 0;
}

UGCQueryHandle_t UGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryAllUGCRequest(EUGCQuery_v1 eQueryType, EUGCMatchingUGCType_v1 eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryAllUGCRequest(eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, unPage);
}

UGCQueryHandle_t UGC_STEAMUGC_INTERFACE_VERSION008_CreateQueryAllUGCRequest(EUGCQuery_v1 eQueryType, EUGCMatchingUGCType_v1 eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryAllUGCRequest(eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, unPage);
}

UGCQueryHandle_t UGC_STEAMUGC_INTERFACE_VERSION007_CreateQueryAllUGCRequest(EUGCQuery_v1 eQueryType, EUGCMatchingUGCType_v1 eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_CreateQueryAllUGCRequest(eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, unPage);
}

UGCQueryHandle_t UGC_STEAMUGC_INTERFACE_VERSION005_CreateQueryAllUGCRequest(EUGCQuery_v1 eQueryType, EUGCMatchingUGCType_v1 eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage) {
    return UGC_STEAMUGC_INTERFACE_VERSION007_CreateQueryAllUGCRequest(eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, unPage);
}

UGCQueryHandle_t UGC_STEAMUGC_INTERFACE_VERSION003_CreateQueryAllUGCRequest(EUGCQuery_v1 eQueryType, EUGCMatchingUGCType_v1 eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage) {
    return UGC_STEAMUGC_INTERFACE_VERSION005_CreateQueryAllUGCRequest(eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, unPage);
}

UGCQueryHandle_t UGC_STEAMUGC_INTERFACE_VERSION002_CreateQueryAllUGCRequest(EUGCQuery_v1 eQueryType, EUGCMatchingUGCType_v1 eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage) {
    return UGC_STEAMUGC_INTERFACE_VERSION003_CreateQueryAllUGCRequest(eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, unPage);
}

UGCQueryHandle_t UGC_STEAMUGC_INTERFACE_VERSION001_CreateQueryAllUGCRequest(EUGCQuery_v1 eQueryType, EUGCMatchingUGCType_v1 eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage) {
    return UGC_STEAMUGC_INTERFACE_VERSION002_CreateQueryAllUGCRequest(eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, unPage);
}

/**** SendQueryUGCRequest****/
SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION010_SendQueryUGCRequest(UGCQueryHandle_t handle) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION009_SendQueryUGCRequest(UGCQueryHandle_t handle) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_SendQueryUGCRequest(handle);
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION008_SendQueryUGCRequest(UGCQueryHandle_t handle) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_SendQueryUGCRequest(handle);
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION007_SendQueryUGCRequest(UGCQueryHandle_t handle) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_SendQueryUGCRequest(handle);
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION005_SendQueryUGCRequest(UGCQueryHandle_t handle) {
    return UGC_STEAMUGC_INTERFACE_VERSION007_SendQueryUGCRequest(handle);
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION003_SendQueryUGCRequest(UGCQueryHandle_t handle) {
    return UGC_STEAMUGC_INTERFACE_VERSION005_SendQueryUGCRequest(handle);
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION002_SendQueryUGCRequest(UGCQueryHandle_t handle) {
    return UGC_STEAMUGC_INTERFACE_VERSION003_SendQueryUGCRequest(handle);
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION001_SendQueryUGCRequest(UGCQueryHandle_t handle) {
    return UGC_STEAMUGC_INTERFACE_VERSION002_SendQueryUGCRequest(handle);
}

/**** GetQueryUGCResult****/
bool UGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCResult(UGCQueryHandle_t handle, uint32 index, SteamUGCDetails_t_v1* pDetails) {
    // FIXME: implement
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCResult(UGCQueryHandle_t handle, uint32 index, SteamUGCDetails_t_v1* pDetails) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCResult(handle, index, pDetails);
}

bool UGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCResult(UGCQueryHandle_t handle, uint32 index, SteamUGCDetails_t_v1* pDetails) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCResult(handle, index, pDetails);
}

bool UGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCResult(UGCQueryHandle_t handle, uint32 index, SteamUGCDetails_t_v1* pDetails) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCResult(handle, index, pDetails);
}

bool UGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCResult(UGCQueryHandle_t handle, uint32 index, SteamUGCDetails_t_v1* pDetails) {
    return UGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCResult(handle, index, pDetails);
}

bool UGC_STEAMUGC_INTERFACE_VERSION003_GetQueryUGCResult(UGCQueryHandle_t handle, uint32 index, SteamUGCDetails_t_v1* pDetails) {
    return UGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCResult(handle, index, pDetails);
}

bool UGC_STEAMUGC_INTERFACE_VERSION002_GetQueryUGCResult(UGCQueryHandle_t handle, uint32 index, SteamUGCDetails_t_v1* pDetails) {
    return UGC_STEAMUGC_INTERFACE_VERSION003_GetQueryUGCResult(handle, index, pDetails);
}

bool UGC_STEAMUGC_INTERFACE_VERSION001_GetQueryUGCResult(UGCQueryHandle_t handle, uint32 index, SteamUGCDetails_t_v1* pDetails) {
    return UGC_STEAMUGC_INTERFACE_VERSION002_GetQueryUGCResult(handle, index, pDetails);
}

/**** ReleaseQueryUGCRequest****/
bool UGC_STEAMUGC_INTERFACE_VERSION010_ReleaseQueryUGCRequest(UGCQueryHandle_t handle) {
    // FIXME: implement
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION009_ReleaseQueryUGCRequest(UGCQueryHandle_t handle) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_ReleaseQueryUGCRequest(handle);
}

bool UGC_STEAMUGC_INTERFACE_VERSION008_ReleaseQueryUGCRequest(UGCQueryHandle_t handle) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_ReleaseQueryUGCRequest(handle);
}

bool UGC_STEAMUGC_INTERFACE_VERSION007_ReleaseQueryUGCRequest(UGCQueryHandle_t handle) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_ReleaseQueryUGCRequest(handle);
}

bool UGC_STEAMUGC_INTERFACE_VERSION005_ReleaseQueryUGCRequest(UGCQueryHandle_t handle) {
    return UGC_STEAMUGC_INTERFACE_VERSION007_ReleaseQueryUGCRequest(handle);
}

bool UGC_STEAMUGC_INTERFACE_VERSION003_ReleaseQueryUGCRequest(UGCQueryHandle_t handle) {
    return UGC_STEAMUGC_INTERFACE_VERSION005_ReleaseQueryUGCRequest(handle);
}

bool UGC_STEAMUGC_INTERFACE_VERSION002_ReleaseQueryUGCRequest(UGCQueryHandle_t handle) {
    return UGC_STEAMUGC_INTERFACE_VERSION003_ReleaseQueryUGCRequest(handle);
}

bool UGC_STEAMUGC_INTERFACE_VERSION001_ReleaseQueryUGCRequest(UGCQueryHandle_t handle) {
    return UGC_STEAMUGC_INTERFACE_VERSION002_ReleaseQueryUGCRequest(handle);
}

/**** AddRequiredTag****/
bool UGC_STEAMUGC_INTERFACE_VERSION010_AddRequiredTag(UGCQueryHandle_t handle, char* pTagName) {
    // FIXME: implement
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION009_AddRequiredTag(UGCQueryHandle_t handle, char* pTagName) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_AddRequiredTag(handle, pTagName);
}

bool UGC_STEAMUGC_INTERFACE_VERSION008_AddRequiredTag(UGCQueryHandle_t handle, char* pTagName) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_AddRequiredTag(handle, pTagName);
}

bool UGC_STEAMUGC_INTERFACE_VERSION007_AddRequiredTag(UGCQueryHandle_t handle, char* pTagName) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_AddRequiredTag(handle, pTagName);
}

bool UGC_STEAMUGC_INTERFACE_VERSION005_AddRequiredTag(UGCQueryHandle_t handle, char* pTagName) {
    return UGC_STEAMUGC_INTERFACE_VERSION007_AddRequiredTag(handle, pTagName);
}

bool UGC_STEAMUGC_INTERFACE_VERSION003_AddRequiredTag(UGCQueryHandle_t handle, char* pTagName) {
    return UGC_STEAMUGC_INTERFACE_VERSION005_AddRequiredTag(handle, pTagName);
}

bool UGC_STEAMUGC_INTERFACE_VERSION002_AddRequiredTag(UGCQueryHandle_t handle, char* pTagName) {
    return UGC_STEAMUGC_INTERFACE_VERSION003_AddRequiredTag(handle, pTagName);
}

bool UGC_STEAMUGC_INTERFACE_VERSION001_AddRequiredTag(UGCQueryHandle_t handle, char* pTagName) {
    return UGC_STEAMUGC_INTERFACE_VERSION002_AddRequiredTag(handle, pTagName);
}

/**** AddExcludedTag****/
bool UGC_STEAMUGC_INTERFACE_VERSION010_AddExcludedTag(UGCQueryHandle_t handle, char* pTagName) {
    // FIXME: implement
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION009_AddExcludedTag(UGCQueryHandle_t handle, char* pTagName) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_AddExcludedTag(handle, pTagName);
}

bool UGC_STEAMUGC_INTERFACE_VERSION008_AddExcludedTag(UGCQueryHandle_t handle, char* pTagName) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_AddExcludedTag(handle, pTagName);
}

bool UGC_STEAMUGC_INTERFACE_VERSION007_AddExcludedTag(UGCQueryHandle_t handle, char* pTagName) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_AddExcludedTag(handle, pTagName);
}

bool UGC_STEAMUGC_INTERFACE_VERSION005_AddExcludedTag(UGCQueryHandle_t handle, char* pTagName) {
    return UGC_STEAMUGC_INTERFACE_VERSION007_AddExcludedTag(handle, pTagName);
}

bool UGC_STEAMUGC_INTERFACE_VERSION003_AddExcludedTag(UGCQueryHandle_t handle, char* pTagName) {
    return UGC_STEAMUGC_INTERFACE_VERSION005_AddExcludedTag(handle, pTagName);
}

bool UGC_STEAMUGC_INTERFACE_VERSION002_AddExcludedTag(UGCQueryHandle_t handle, char* pTagName) {
    return UGC_STEAMUGC_INTERFACE_VERSION003_AddExcludedTag(handle, pTagName);
}

bool UGC_STEAMUGC_INTERFACE_VERSION001_AddExcludedTag(UGCQueryHandle_t handle, char* pTagName) {
    return UGC_STEAMUGC_INTERFACE_VERSION002_AddExcludedTag(handle, pTagName);
}

/**** SetReturnLongDescription****/
bool UGC_STEAMUGC_INTERFACE_VERSION010_SetReturnLongDescription(UGCQueryHandle_t handle, bool bReturnLongDescription) {
    // FIXME: implement
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION009_SetReturnLongDescription(UGCQueryHandle_t handle, bool bReturnLongDescription) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_SetReturnLongDescription(handle, bReturnLongDescription);
}

bool UGC_STEAMUGC_INTERFACE_VERSION008_SetReturnLongDescription(UGCQueryHandle_t handle, bool bReturnLongDescription) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_SetReturnLongDescription(handle, bReturnLongDescription);
}

bool UGC_STEAMUGC_INTERFACE_VERSION007_SetReturnLongDescription(UGCQueryHandle_t handle, bool bReturnLongDescription) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_SetReturnLongDescription(handle, bReturnLongDescription);
}

bool UGC_STEAMUGC_INTERFACE_VERSION005_SetReturnLongDescription(UGCQueryHandle_t handle, bool bReturnLongDescription) {
    return UGC_STEAMUGC_INTERFACE_VERSION007_SetReturnLongDescription(handle, bReturnLongDescription);
}

bool UGC_STEAMUGC_INTERFACE_VERSION003_SetReturnLongDescription(UGCQueryHandle_t handle, bool bReturnLongDescription) {
    return UGC_STEAMUGC_INTERFACE_VERSION005_SetReturnLongDescription(handle, bReturnLongDescription);
}

bool UGC_STEAMUGC_INTERFACE_VERSION002_SetReturnLongDescription(UGCQueryHandle_t handle, bool bReturnLongDescription) {
    return UGC_STEAMUGC_INTERFACE_VERSION003_SetReturnLongDescription(handle, bReturnLongDescription);
}

bool UGC_STEAMUGC_INTERFACE_VERSION001_SetReturnLongDescription(UGCQueryHandle_t handle, bool bReturnLongDescription) {
    return UGC_STEAMUGC_INTERFACE_VERSION002_SetReturnLongDescription(handle, bReturnLongDescription);
}

/**** SetReturnTotalOnly****/
bool UGC_STEAMUGC_INTERFACE_VERSION010_SetReturnTotalOnly(UGCQueryHandle_t handle, bool bReturnTotalOnly) {
    // FIXME: implement
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION009_SetReturnTotalOnly(UGCQueryHandle_t handle, bool bReturnTotalOnly) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_SetReturnTotalOnly(handle, bReturnTotalOnly);
}

bool UGC_STEAMUGC_INTERFACE_VERSION008_SetReturnTotalOnly(UGCQueryHandle_t handle, bool bReturnTotalOnly) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_SetReturnTotalOnly(handle, bReturnTotalOnly);
}

bool UGC_STEAMUGC_INTERFACE_VERSION007_SetReturnTotalOnly(UGCQueryHandle_t handle, bool bReturnTotalOnly) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_SetReturnTotalOnly(handle, bReturnTotalOnly);
}

bool UGC_STEAMUGC_INTERFACE_VERSION005_SetReturnTotalOnly(UGCQueryHandle_t handle, bool bReturnTotalOnly) {
    return UGC_STEAMUGC_INTERFACE_VERSION007_SetReturnTotalOnly(handle, bReturnTotalOnly);
}

bool UGC_STEAMUGC_INTERFACE_VERSION003_SetReturnTotalOnly(UGCQueryHandle_t handle, bool bReturnTotalOnly) {
    return UGC_STEAMUGC_INTERFACE_VERSION005_SetReturnTotalOnly(handle, bReturnTotalOnly);
}

bool UGC_STEAMUGC_INTERFACE_VERSION002_SetReturnTotalOnly(UGCQueryHandle_t handle, bool bReturnTotalOnly) {
    return UGC_STEAMUGC_INTERFACE_VERSION003_SetReturnTotalOnly(handle, bReturnTotalOnly);
}

bool UGC_STEAMUGC_INTERFACE_VERSION001_SetReturnTotalOnly(UGCQueryHandle_t handle, bool bReturnTotalOnly) {
    return UGC_STEAMUGC_INTERFACE_VERSION002_SetReturnTotalOnly(handle, bReturnTotalOnly);
}

/**** SetCloudFileNameFilter****/
bool UGC_STEAMUGC_INTERFACE_VERSION010_SetCloudFileNameFilter(UGCQueryHandle_t handle, char* pMatchCloudFileName) {
    // FIXME: implement
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION009_SetCloudFileNameFilter(UGCQueryHandle_t handle, char* pMatchCloudFileName) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_SetCloudFileNameFilter(handle, pMatchCloudFileName);
}

bool UGC_STEAMUGC_INTERFACE_VERSION008_SetCloudFileNameFilter(UGCQueryHandle_t handle, char* pMatchCloudFileName) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_SetCloudFileNameFilter(handle, pMatchCloudFileName);
}

bool UGC_STEAMUGC_INTERFACE_VERSION007_SetCloudFileNameFilter(UGCQueryHandle_t handle, char* pMatchCloudFileName) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_SetCloudFileNameFilter(handle, pMatchCloudFileName);
}

bool UGC_STEAMUGC_INTERFACE_VERSION005_SetCloudFileNameFilter(UGCQueryHandle_t handle, char* pMatchCloudFileName) {
    return UGC_STEAMUGC_INTERFACE_VERSION007_SetCloudFileNameFilter(handle, pMatchCloudFileName);
}

bool UGC_STEAMUGC_INTERFACE_VERSION003_SetCloudFileNameFilter(UGCQueryHandle_t handle, char* pMatchCloudFileName) {
    return UGC_STEAMUGC_INTERFACE_VERSION005_SetCloudFileNameFilter(handle, pMatchCloudFileName);
}

bool UGC_STEAMUGC_INTERFACE_VERSION002_SetCloudFileNameFilter(UGCQueryHandle_t handle, char* pMatchCloudFileName) {
    return UGC_STEAMUGC_INTERFACE_VERSION003_SetCloudFileNameFilter(handle, pMatchCloudFileName);
}

bool UGC_STEAMUGC_INTERFACE_VERSION001_SetCloudFileNameFilter(UGCQueryHandle_t handle, char* pMatchCloudFileName) {
    return UGC_STEAMUGC_INTERFACE_VERSION002_SetCloudFileNameFilter(handle, pMatchCloudFileName);
}

/**** SetMatchAnyTag****/
bool UGC_STEAMUGC_INTERFACE_VERSION010_SetMatchAnyTag(UGCQueryHandle_t handle, bool bMatchAnyTag) {
    // FIXME: implement
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION009_SetMatchAnyTag(UGCQueryHandle_t handle, bool bMatchAnyTag) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_SetMatchAnyTag(handle, bMatchAnyTag);
}

bool UGC_STEAMUGC_INTERFACE_VERSION008_SetMatchAnyTag(UGCQueryHandle_t handle, bool bMatchAnyTag) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_SetMatchAnyTag(handle, bMatchAnyTag);
}

bool UGC_STEAMUGC_INTERFACE_VERSION007_SetMatchAnyTag(UGCQueryHandle_t handle, bool bMatchAnyTag) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_SetMatchAnyTag(handle, bMatchAnyTag);
}

bool UGC_STEAMUGC_INTERFACE_VERSION005_SetMatchAnyTag(UGCQueryHandle_t handle, bool bMatchAnyTag) {
    return UGC_STEAMUGC_INTERFACE_VERSION007_SetMatchAnyTag(handle, bMatchAnyTag);
}

bool UGC_STEAMUGC_INTERFACE_VERSION003_SetMatchAnyTag(UGCQueryHandle_t handle, bool bMatchAnyTag) {
    return UGC_STEAMUGC_INTERFACE_VERSION005_SetMatchAnyTag(handle, bMatchAnyTag);
}

bool UGC_STEAMUGC_INTERFACE_VERSION002_SetMatchAnyTag(UGCQueryHandle_t handle, bool bMatchAnyTag) {
    return UGC_STEAMUGC_INTERFACE_VERSION003_SetMatchAnyTag(handle, bMatchAnyTag);
}

bool UGC_STEAMUGC_INTERFACE_VERSION001_SetMatchAnyTag(UGCQueryHandle_t handle, bool bMatchAnyTag) {
    return UGC_STEAMUGC_INTERFACE_VERSION002_SetMatchAnyTag(handle, bMatchAnyTag);
}

/**** SetSearchText****/
bool UGC_STEAMUGC_INTERFACE_VERSION010_SetSearchText(UGCQueryHandle_t handle, char* pSearchText) {
    // FIXME: implement
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION009_SetSearchText(UGCQueryHandle_t handle, char* pSearchText) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_SetSearchText(handle, pSearchText);
}

bool UGC_STEAMUGC_INTERFACE_VERSION008_SetSearchText(UGCQueryHandle_t handle, char* pSearchText) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_SetSearchText(handle, pSearchText);
}

bool UGC_STEAMUGC_INTERFACE_VERSION007_SetSearchText(UGCQueryHandle_t handle, char* pSearchText) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_SetSearchText(handle, pSearchText);
}

bool UGC_STEAMUGC_INTERFACE_VERSION005_SetSearchText(UGCQueryHandle_t handle, char* pSearchText) {
    return UGC_STEAMUGC_INTERFACE_VERSION007_SetSearchText(handle, pSearchText);
}

bool UGC_STEAMUGC_INTERFACE_VERSION003_SetSearchText(UGCQueryHandle_t handle, char* pSearchText) {
    return UGC_STEAMUGC_INTERFACE_VERSION005_SetSearchText(handle, pSearchText);
}

bool UGC_STEAMUGC_INTERFACE_VERSION002_SetSearchText(UGCQueryHandle_t handle, char* pSearchText) {
    return UGC_STEAMUGC_INTERFACE_VERSION003_SetSearchText(handle, pSearchText);
}

bool UGC_STEAMUGC_INTERFACE_VERSION001_SetSearchText(UGCQueryHandle_t handle, char* pSearchText) {
    return UGC_STEAMUGC_INTERFACE_VERSION002_SetSearchText(handle, pSearchText);
}

/**** SetRankedByTrendDays****/
bool UGC_STEAMUGC_INTERFACE_VERSION010_SetRankedByTrendDays(UGCQueryHandle_t handle, uint32 unDays) {
    // FIXME: implement
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION009_SetRankedByTrendDays(UGCQueryHandle_t handle, uint32 unDays) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_SetRankedByTrendDays(handle, unDays);
}

bool UGC_STEAMUGC_INTERFACE_VERSION008_SetRankedByTrendDays(UGCQueryHandle_t handle, uint32 unDays) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_SetRankedByTrendDays(handle, unDays);
}

bool UGC_STEAMUGC_INTERFACE_VERSION007_SetRankedByTrendDays(UGCQueryHandle_t handle, uint32 unDays) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_SetRankedByTrendDays(handle, unDays);
}

bool UGC_STEAMUGC_INTERFACE_VERSION005_SetRankedByTrendDays(UGCQueryHandle_t handle, uint32 unDays) {
    return UGC_STEAMUGC_INTERFACE_VERSION007_SetRankedByTrendDays(handle, unDays);
}

bool UGC_STEAMUGC_INTERFACE_VERSION003_SetRankedByTrendDays(UGCQueryHandle_t handle, uint32 unDays) {
    return UGC_STEAMUGC_INTERFACE_VERSION005_SetRankedByTrendDays(handle, unDays);
}

bool UGC_STEAMUGC_INTERFACE_VERSION002_SetRankedByTrendDays(UGCQueryHandle_t handle, uint32 unDays) {
    return UGC_STEAMUGC_INTERFACE_VERSION003_SetRankedByTrendDays(handle, unDays);
}

bool UGC_STEAMUGC_INTERFACE_VERSION001_SetRankedByTrendDays(UGCQueryHandle_t handle, uint32 unDays) {
    return UGC_STEAMUGC_INTERFACE_VERSION002_SetRankedByTrendDays(handle, unDays);
}

/**** RequestUGCDetails****/
SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION010_RequestUGCDetails(PublishedFileId_t nPublishedFileID, uint32 unMaxAgeSeconds) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION009_RequestUGCDetails(PublishedFileId_t nPublishedFileID, uint32 unMaxAgeSeconds) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_RequestUGCDetails(nPublishedFileID, unMaxAgeSeconds);
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION008_RequestUGCDetails(PublishedFileId_t nPublishedFileID, uint32 unMaxAgeSeconds) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_RequestUGCDetails(nPublishedFileID, unMaxAgeSeconds);
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION007_RequestUGCDetails(PublishedFileId_t nPublishedFileID, uint32 unMaxAgeSeconds) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_RequestUGCDetails(nPublishedFileID, unMaxAgeSeconds);
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION005_RequestUGCDetails(PublishedFileId_t nPublishedFileID, uint32 unMaxAgeSeconds) {
    return UGC_STEAMUGC_INTERFACE_VERSION007_RequestUGCDetails(nPublishedFileID, unMaxAgeSeconds);
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION003_RequestUGCDetails(PublishedFileId_t nPublishedFileID, uint32 unMaxAgeSeconds) {
    return UGC_STEAMUGC_INTERFACE_VERSION005_RequestUGCDetails(nPublishedFileID, unMaxAgeSeconds);
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION002_RequestUGCDetails(PublishedFileId_t nPublishedFileID, uint32 unMaxAgeSeconds) {
    return UGC_STEAMUGC_INTERFACE_VERSION003_RequestUGCDetails(nPublishedFileID, unMaxAgeSeconds);
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION001_RequestUGCDetails(PublishedFileId_t nPublishedFileID) {
    // FIXME: probably wrong
    uint32 unMaxAgeSeconds = -1;
    return UGC_STEAMUGC_INTERFACE_VERSION002_RequestUGCDetails(nPublishedFileID, unMaxAgeSeconds);
}

/**** SetAllowCachedResponse****/
bool UGC_STEAMUGC_INTERFACE_VERSION010_SetAllowCachedResponse(UGCQueryHandle_t handle, uint32 unMaxAgeSeconds) {
    // FIXME: implement
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION009_SetAllowCachedResponse(UGCQueryHandle_t handle, uint32 unMaxAgeSeconds) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_SetAllowCachedResponse(handle, unMaxAgeSeconds);
}

bool UGC_STEAMUGC_INTERFACE_VERSION008_SetAllowCachedResponse(UGCQueryHandle_t handle, uint32 unMaxAgeSeconds) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_SetAllowCachedResponse(handle, unMaxAgeSeconds);
}

bool UGC_STEAMUGC_INTERFACE_VERSION007_SetAllowCachedResponse(UGCQueryHandle_t handle, uint32 unMaxAgeSeconds) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_SetAllowCachedResponse(handle, unMaxAgeSeconds);
}

bool UGC_STEAMUGC_INTERFACE_VERSION005_SetAllowCachedResponse(UGCQueryHandle_t handle, uint32 unMaxAgeSeconds) {
    return UGC_STEAMUGC_INTERFACE_VERSION007_SetAllowCachedResponse(handle, unMaxAgeSeconds);
}

bool UGC_STEAMUGC_INTERFACE_VERSION003_SetAllowCachedResponse(UGCQueryHandle_t handle, uint32 unMaxAgeSeconds) {
    return UGC_STEAMUGC_INTERFACE_VERSION005_SetAllowCachedResponse(handle, unMaxAgeSeconds);
}

bool UGC_STEAMUGC_INTERFACE_VERSION002_SetAllowCachedResponse(UGCQueryHandle_t handle, uint32 unMaxAgeSeconds) {
    return UGC_STEAMUGC_INTERFACE_VERSION003_SetAllowCachedResponse(handle, unMaxAgeSeconds);
}

/**** CreateItem****/
SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION010_CreateItem(AppId_t nConsumerAppId, EWorkshopFileType_v1 eFileType) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION009_CreateItem(AppId_t nConsumerAppId, EWorkshopFileType_v1 eFileType) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_CreateItem(nConsumerAppId, eFileType);
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION008_CreateItem(AppId_t nConsumerAppId, EWorkshopFileType_v1 eFileType) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_CreateItem(nConsumerAppId, eFileType);
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION007_CreateItem(AppId_t nConsumerAppId, EWorkshopFileType_v1 eFileType) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_CreateItem(nConsumerAppId, eFileType);
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION005_CreateItem(AppId_t nConsumerAppId, EWorkshopFileType_v1 eFileType) {
    return UGC_STEAMUGC_INTERFACE_VERSION007_CreateItem(nConsumerAppId, eFileType);
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION003_CreateItem(AppId_t nConsumerAppId, EWorkshopFileType_v1 eFileType) {
    return UGC_STEAMUGC_INTERFACE_VERSION005_CreateItem(nConsumerAppId, eFileType);
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION002_CreateItem(AppId_t nConsumerAppId, EWorkshopFileType_v1 eFileType) {
    return UGC_STEAMUGC_INTERFACE_VERSION003_CreateItem(nConsumerAppId, eFileType);
}

/**** StartItemUpdate****/
UGCUpdateHandle_t UGC_STEAMUGC_INTERFACE_VERSION010_StartItemUpdate(AppId_t nConsumerAppId, PublishedFileId_t nPublishedFileID) {
    // FIXME: implement
    STUB();
    return 0;
}

UGCUpdateHandle_t UGC_STEAMUGC_INTERFACE_VERSION009_StartItemUpdate(AppId_t nConsumerAppId, PublishedFileId_t nPublishedFileID) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_StartItemUpdate(nConsumerAppId, nPublishedFileID);
}

UGCUpdateHandle_t UGC_STEAMUGC_INTERFACE_VERSION008_StartItemUpdate(AppId_t nConsumerAppId, PublishedFileId_t nPublishedFileID) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_StartItemUpdate(nConsumerAppId, nPublishedFileID);
}

UGCUpdateHandle_t UGC_STEAMUGC_INTERFACE_VERSION007_StartItemUpdate(AppId_t nConsumerAppId, PublishedFileId_t nPublishedFileID) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_StartItemUpdate(nConsumerAppId, nPublishedFileID);
}

UGCUpdateHandle_t UGC_STEAMUGC_INTERFACE_VERSION005_StartItemUpdate(AppId_t nConsumerAppId, PublishedFileId_t nPublishedFileID) {
    return UGC_STEAMUGC_INTERFACE_VERSION007_StartItemUpdate(nConsumerAppId, nPublishedFileID);
}

UGCUpdateHandle_t UGC_STEAMUGC_INTERFACE_VERSION003_StartItemUpdate(AppId_t nConsumerAppId, PublishedFileId_t nPublishedFileID) {
    return UGC_STEAMUGC_INTERFACE_VERSION005_StartItemUpdate(nConsumerAppId, nPublishedFileID);
}

UGCUpdateHandle_t UGC_STEAMUGC_INTERFACE_VERSION002_StartItemUpdate(AppId_t nConsumerAppId, PublishedFileId_t nPublishedFileID) {
    return UGC_STEAMUGC_INTERFACE_VERSION003_StartItemUpdate(nConsumerAppId, nPublishedFileID);
}

/**** SetItemTitle****/
bool UGC_STEAMUGC_INTERFACE_VERSION010_SetItemTitle(UGCUpdateHandle_t handle, char* pchTitle) {
    // FIXME: implement
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION009_SetItemTitle(UGCUpdateHandle_t handle, char* pchTitle) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_SetItemTitle(handle, pchTitle);
}

bool UGC_STEAMUGC_INTERFACE_VERSION008_SetItemTitle(UGCUpdateHandle_t handle, char* pchTitle) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_SetItemTitle(handle, pchTitle);
}

bool UGC_STEAMUGC_INTERFACE_VERSION007_SetItemTitle(UGCUpdateHandle_t handle, char* pchTitle) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_SetItemTitle(handle, pchTitle);
}

bool UGC_STEAMUGC_INTERFACE_VERSION005_SetItemTitle(UGCUpdateHandle_t handle, char* pchTitle) {
    return UGC_STEAMUGC_INTERFACE_VERSION007_SetItemTitle(handle, pchTitle);
}

bool UGC_STEAMUGC_INTERFACE_VERSION003_SetItemTitle(UGCUpdateHandle_t handle, char* pchTitle) {
    return UGC_STEAMUGC_INTERFACE_VERSION005_SetItemTitle(handle, pchTitle);
}

bool UGC_STEAMUGC_INTERFACE_VERSION002_SetItemTitle(UGCUpdateHandle_t handle, char* pchTitle) {
    return UGC_STEAMUGC_INTERFACE_VERSION003_SetItemTitle(handle, pchTitle);
}

/**** SetItemDescription****/
bool UGC_STEAMUGC_INTERFACE_VERSION010_SetItemDescription(UGCUpdateHandle_t handle, char* pchDescription) {
    // FIXME: implement
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION009_SetItemDescription(UGCUpdateHandle_t handle, char* pchDescription) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_SetItemDescription(handle, pchDescription);
}

bool UGC_STEAMUGC_INTERFACE_VERSION008_SetItemDescription(UGCUpdateHandle_t handle, char* pchDescription) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_SetItemDescription(handle, pchDescription);
}

bool UGC_STEAMUGC_INTERFACE_VERSION007_SetItemDescription(UGCUpdateHandle_t handle, char* pchDescription) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_SetItemDescription(handle, pchDescription);
}

bool UGC_STEAMUGC_INTERFACE_VERSION005_SetItemDescription(UGCUpdateHandle_t handle, char* pchDescription) {
    return UGC_STEAMUGC_INTERFACE_VERSION007_SetItemDescription(handle, pchDescription);
}

bool UGC_STEAMUGC_INTERFACE_VERSION003_SetItemDescription(UGCUpdateHandle_t handle, char* pchDescription) {
    return UGC_STEAMUGC_INTERFACE_VERSION005_SetItemDescription(handle, pchDescription);
}

bool UGC_STEAMUGC_INTERFACE_VERSION002_SetItemDescription(UGCUpdateHandle_t handle, char* pchDescription) {
    return UGC_STEAMUGC_INTERFACE_VERSION003_SetItemDescription(handle, pchDescription);
}

/**** SetItemVisibility****/
bool UGC_STEAMUGC_INTERFACE_VERSION010_SetItemVisibility(UGCUpdateHandle_t handle, ERemoteStoragePublishedFileVisibility_v1 eVisibility) {
    // FIXME: implement
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION009_SetItemVisibility(UGCUpdateHandle_t handle, ERemoteStoragePublishedFileVisibility_v1 eVisibility) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_SetItemVisibility(handle, eVisibility);
}

bool UGC_STEAMUGC_INTERFACE_VERSION008_SetItemVisibility(UGCUpdateHandle_t handle, ERemoteStoragePublishedFileVisibility_v1 eVisibility) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_SetItemVisibility(handle, eVisibility);
}

bool UGC_STEAMUGC_INTERFACE_VERSION007_SetItemVisibility(UGCUpdateHandle_t handle, ERemoteStoragePublishedFileVisibility_v1 eVisibility) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_SetItemVisibility(handle, eVisibility);
}

bool UGC_STEAMUGC_INTERFACE_VERSION005_SetItemVisibility(UGCUpdateHandle_t handle, ERemoteStoragePublishedFileVisibility_v1 eVisibility) {
    return UGC_STEAMUGC_INTERFACE_VERSION007_SetItemVisibility(handle, eVisibility);
}

bool UGC_STEAMUGC_INTERFACE_VERSION003_SetItemVisibility(UGCUpdateHandle_t handle, ERemoteStoragePublishedFileVisibility_v1 eVisibility) {
    return UGC_STEAMUGC_INTERFACE_VERSION005_SetItemVisibility(handle, eVisibility);
}

bool UGC_STEAMUGC_INTERFACE_VERSION002_SetItemVisibility(UGCUpdateHandle_t handle, ERemoteStoragePublishedFileVisibility_v1 eVisibility) {
    return UGC_STEAMUGC_INTERFACE_VERSION003_SetItemVisibility(handle, eVisibility);
}

/**** SetItemTags****/
bool UGC_STEAMUGC_INTERFACE_VERSION010_SetItemTags(UGCUpdateHandle_t updateHandle, SteamParamStringArray_t_v1* pTags) {
    // FIXME: implement
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION009_SetItemTags(UGCUpdateHandle_t updateHandle, SteamParamStringArray_t_v1* pTags) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_SetItemTags(updateHandle, pTags);
}

bool UGC_STEAMUGC_INTERFACE_VERSION008_SetItemTags(UGCUpdateHandle_t updateHandle, SteamParamStringArray_t_v1* pTags) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_SetItemTags(updateHandle, pTags);
}

bool UGC_STEAMUGC_INTERFACE_VERSION007_SetItemTags(UGCUpdateHandle_t updateHandle, SteamParamStringArray_t_v1* pTags) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_SetItemTags(updateHandle, pTags);
}

bool UGC_STEAMUGC_INTERFACE_VERSION005_SetItemTags(UGCUpdateHandle_t updateHandle, SteamParamStringArray_t_v1* pTags) {
    return UGC_STEAMUGC_INTERFACE_VERSION007_SetItemTags(updateHandle, pTags);
}

bool UGC_STEAMUGC_INTERFACE_VERSION003_SetItemTags(UGCUpdateHandle_t updateHandle, SteamParamStringArray_t_v1* pTags) {
    return UGC_STEAMUGC_INTERFACE_VERSION005_SetItemTags(updateHandle, pTags);
}

bool UGC_STEAMUGC_INTERFACE_VERSION002_SetItemTags(UGCUpdateHandle_t updateHandle, SteamParamStringArray_t_v1* pTags) {
    return UGC_STEAMUGC_INTERFACE_VERSION003_SetItemTags(updateHandle, pTags);
}

/**** SetItemContent****/
bool UGC_STEAMUGC_INTERFACE_VERSION010_SetItemContent(UGCUpdateHandle_t handle, char* pszContentFolder) {
    // FIXME: implement
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION009_SetItemContent(UGCUpdateHandle_t handle, char* pszContentFolder) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_SetItemContent(handle, pszContentFolder);
}

bool UGC_STEAMUGC_INTERFACE_VERSION008_SetItemContent(UGCUpdateHandle_t handle, char* pszContentFolder) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_SetItemContent(handle, pszContentFolder);
}

bool UGC_STEAMUGC_INTERFACE_VERSION007_SetItemContent(UGCUpdateHandle_t handle, char* pszContentFolder) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_SetItemContent(handle, pszContentFolder);
}

bool UGC_STEAMUGC_INTERFACE_VERSION005_SetItemContent(UGCUpdateHandle_t handle, char* pszContentFolder) {
    return UGC_STEAMUGC_INTERFACE_VERSION007_SetItemContent(handle, pszContentFolder);
}

bool UGC_STEAMUGC_INTERFACE_VERSION003_SetItemContent(UGCUpdateHandle_t handle, char* pszContentFolder) {
    return UGC_STEAMUGC_INTERFACE_VERSION005_SetItemContent(handle, pszContentFolder);
}

bool UGC_STEAMUGC_INTERFACE_VERSION002_SetItemContent(UGCUpdateHandle_t handle, char* pszContentFolder) {
    return UGC_STEAMUGC_INTERFACE_VERSION003_SetItemContent(handle, pszContentFolder);
}

/**** SetItemPreview****/
bool UGC_STEAMUGC_INTERFACE_VERSION010_SetItemPreview(UGCUpdateHandle_t handle, char* pszPreviewFile) {
    // FIXME: implement
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION009_SetItemPreview(UGCUpdateHandle_t handle, char* pszPreviewFile) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_SetItemPreview(handle, pszPreviewFile);
}

bool UGC_STEAMUGC_INTERFACE_VERSION008_SetItemPreview(UGCUpdateHandle_t handle, char* pszPreviewFile) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_SetItemPreview(handle, pszPreviewFile);
}

bool UGC_STEAMUGC_INTERFACE_VERSION007_SetItemPreview(UGCUpdateHandle_t handle, char* pszPreviewFile) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_SetItemPreview(handle, pszPreviewFile);
}

bool UGC_STEAMUGC_INTERFACE_VERSION005_SetItemPreview(UGCUpdateHandle_t handle, char* pszPreviewFile) {
    return UGC_STEAMUGC_INTERFACE_VERSION007_SetItemPreview(handle, pszPreviewFile);
}

bool UGC_STEAMUGC_INTERFACE_VERSION003_SetItemPreview(UGCUpdateHandle_t handle, char* pszPreviewFile) {
    return UGC_STEAMUGC_INTERFACE_VERSION005_SetItemPreview(handle, pszPreviewFile);
}

bool UGC_STEAMUGC_INTERFACE_VERSION002_SetItemPreview(UGCUpdateHandle_t handle, char* pszPreviewFile) {
    return UGC_STEAMUGC_INTERFACE_VERSION003_SetItemPreview(handle, pszPreviewFile);
}

/**** SubmitItemUpdate****/
SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION010_SubmitItemUpdate(UGCUpdateHandle_t handle, char* pchChangeNote) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION009_SubmitItemUpdate(UGCUpdateHandle_t handle, char* pchChangeNote) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_SubmitItemUpdate(handle, pchChangeNote);
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION008_SubmitItemUpdate(UGCUpdateHandle_t handle, char* pchChangeNote) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_SubmitItemUpdate(handle, pchChangeNote);
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION007_SubmitItemUpdate(UGCUpdateHandle_t handle, char* pchChangeNote) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_SubmitItemUpdate(handle, pchChangeNote);
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION005_SubmitItemUpdate(UGCUpdateHandle_t handle, char* pchChangeNote) {
    return UGC_STEAMUGC_INTERFACE_VERSION007_SubmitItemUpdate(handle, pchChangeNote);
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION003_SubmitItemUpdate(UGCUpdateHandle_t handle, char* pchChangeNote) {
    return UGC_STEAMUGC_INTERFACE_VERSION005_SubmitItemUpdate(handle, pchChangeNote);
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION002_SubmitItemUpdate(UGCUpdateHandle_t handle, char* pchChangeNote) {
    return UGC_STEAMUGC_INTERFACE_VERSION003_SubmitItemUpdate(handle, pchChangeNote);
}

/**** GetItemUpdateProgress****/
EItemUpdateStatus_v1 UGC_STEAMUGC_INTERFACE_VERSION010_GetItemUpdateProgress(UGCUpdateHandle_t handle, uint64* punBytesProcessed, uint64* punBytesTotal) {
    // FIXME: implement
    STUB();
    return k_EItemUpdateStatusInvalid_v1;
}

EItemUpdateStatus_v1 UGC_STEAMUGC_INTERFACE_VERSION009_GetItemUpdateProgress(UGCUpdateHandle_t handle, uint64* punBytesProcessed, uint64* punBytesTotal) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_GetItemUpdateProgress(handle, punBytesProcessed, punBytesTotal);
}

EItemUpdateStatus_v1 UGC_STEAMUGC_INTERFACE_VERSION008_GetItemUpdateProgress(UGCUpdateHandle_t handle, uint64* punBytesProcessed, uint64* punBytesTotal) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_GetItemUpdateProgress(handle, punBytesProcessed, punBytesTotal);
}

EItemUpdateStatus_v1 UGC_STEAMUGC_INTERFACE_VERSION007_GetItemUpdateProgress(UGCUpdateHandle_t handle, uint64* punBytesProcessed, uint64* punBytesTotal) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_GetItemUpdateProgress(handle, punBytesProcessed, punBytesTotal);
}

EItemUpdateStatus_v1 UGC_STEAMUGC_INTERFACE_VERSION005_GetItemUpdateProgress(UGCUpdateHandle_t handle, uint64* punBytesProcessed, uint64* punBytesTotal) {
    return UGC_STEAMUGC_INTERFACE_VERSION007_GetItemUpdateProgress(handle, punBytesProcessed, punBytesTotal);
}

EItemUpdateStatus_v1 UGC_STEAMUGC_INTERFACE_VERSION003_GetItemUpdateProgress(UGCUpdateHandle_t handle, uint64* punBytesProcessed, uint64* punBytesTotal) {
    return UGC_STEAMUGC_INTERFACE_VERSION005_GetItemUpdateProgress(handle, punBytesProcessed, punBytesTotal);
}

EItemUpdateStatus_v1 UGC_STEAMUGC_INTERFACE_VERSION002_GetItemUpdateProgress(UGCUpdateHandle_t handle, uint64* punBytesProcessed, uint64* punBytesTotal) {
    return UGC_STEAMUGC_INTERFACE_VERSION003_GetItemUpdateProgress(handle, punBytesProcessed, punBytesTotal);
}

/**** SubscribeItem****/
SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION010_SubscribeItem(PublishedFileId_t nPublishedFileID) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION009_SubscribeItem(PublishedFileId_t nPublishedFileID) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_SubscribeItem(nPublishedFileID);
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION008_SubscribeItem(PublishedFileId_t nPublishedFileID) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_SubscribeItem(nPublishedFileID);
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION007_SubscribeItem(PublishedFileId_t nPublishedFileID) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_SubscribeItem(nPublishedFileID);
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION005_SubscribeItem(PublishedFileId_t nPublishedFileID) {
    return UGC_STEAMUGC_INTERFACE_VERSION007_SubscribeItem(nPublishedFileID);
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION003_SubscribeItem(PublishedFileId_t nPublishedFileID) {
    return UGC_STEAMUGC_INTERFACE_VERSION005_SubscribeItem(nPublishedFileID);
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION002_SubscribeItem(PublishedFileId_t nPublishedFileID) {
    return UGC_STEAMUGC_INTERFACE_VERSION003_SubscribeItem(nPublishedFileID);
}

/**** UnsubscribeItem****/
SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION010_UnsubscribeItem(PublishedFileId_t nPublishedFileID) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION009_UnsubscribeItem(PublishedFileId_t nPublishedFileID) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_UnsubscribeItem(nPublishedFileID);
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION008_UnsubscribeItem(PublishedFileId_t nPublishedFileID) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_UnsubscribeItem(nPublishedFileID);
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION007_UnsubscribeItem(PublishedFileId_t nPublishedFileID) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_UnsubscribeItem(nPublishedFileID);
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION005_UnsubscribeItem(PublishedFileId_t nPublishedFileID) {
    return UGC_STEAMUGC_INTERFACE_VERSION007_UnsubscribeItem(nPublishedFileID);
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION003_UnsubscribeItem(PublishedFileId_t nPublishedFileID) {
    return UGC_STEAMUGC_INTERFACE_VERSION005_UnsubscribeItem(nPublishedFileID);
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION002_UnsubscribeItem(PublishedFileId_t nPublishedFileID) {
    return UGC_STEAMUGC_INTERFACE_VERSION003_UnsubscribeItem(nPublishedFileID);
}

/**** GetNumSubscribedItems****/
uint32 UGC_STEAMUGC_INTERFACE_VERSION010_GetNumSubscribedItems() {
    // FIXME: implement
    STUB();
    return 0;
}

uint32 UGC_STEAMUGC_INTERFACE_VERSION009_GetNumSubscribedItems() {
    return UGC_STEAMUGC_INTERFACE_VERSION010_GetNumSubscribedItems();
}

uint32 UGC_STEAMUGC_INTERFACE_VERSION008_GetNumSubscribedItems() {
    return UGC_STEAMUGC_INTERFACE_VERSION009_GetNumSubscribedItems();
}

uint32 UGC_STEAMUGC_INTERFACE_VERSION007_GetNumSubscribedItems() {
    return UGC_STEAMUGC_INTERFACE_VERSION008_GetNumSubscribedItems();
}

uint32 UGC_STEAMUGC_INTERFACE_VERSION005_GetNumSubscribedItems() {
    return UGC_STEAMUGC_INTERFACE_VERSION007_GetNumSubscribedItems();
}

uint32 UGC_STEAMUGC_INTERFACE_VERSION003_GetNumSubscribedItems() {
    return UGC_STEAMUGC_INTERFACE_VERSION005_GetNumSubscribedItems();
}

uint32 UGC_STEAMUGC_INTERFACE_VERSION002_GetNumSubscribedItems() {
    return UGC_STEAMUGC_INTERFACE_VERSION003_GetNumSubscribedItems();
}

/**** GetSubscribedItems****/
uint32 UGC_STEAMUGC_INTERFACE_VERSION010_GetSubscribedItems(PublishedFileId_t* pvecPublishedFileID, uint32 cMaxEntries) {
    // FIXME: implement
    STUB();
    return 0;
}

uint32 UGC_STEAMUGC_INTERFACE_VERSION009_GetSubscribedItems(PublishedFileId_t* pvecPublishedFileID, uint32 cMaxEntries) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_GetSubscribedItems(pvecPublishedFileID, cMaxEntries);
}

uint32 UGC_STEAMUGC_INTERFACE_VERSION008_GetSubscribedItems(PublishedFileId_t* pvecPublishedFileID, uint32 cMaxEntries) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_GetSubscribedItems(pvecPublishedFileID, cMaxEntries);
}

uint32 UGC_STEAMUGC_INTERFACE_VERSION007_GetSubscribedItems(PublishedFileId_t* pvecPublishedFileID, uint32 cMaxEntries) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_GetSubscribedItems(pvecPublishedFileID, cMaxEntries);
}

uint32 UGC_STEAMUGC_INTERFACE_VERSION005_GetSubscribedItems(PublishedFileId_t* pvecPublishedFileID, uint32 cMaxEntries) {
    return UGC_STEAMUGC_INTERFACE_VERSION007_GetSubscribedItems(pvecPublishedFileID, cMaxEntries);
}

uint32 UGC_STEAMUGC_INTERFACE_VERSION003_GetSubscribedItems(PublishedFileId_t* pvecPublishedFileID, uint32 cMaxEntries) {
    return UGC_STEAMUGC_INTERFACE_VERSION005_GetSubscribedItems(pvecPublishedFileID, cMaxEntries);
}

uint32 UGC_STEAMUGC_INTERFACE_VERSION002_GetSubscribedItems(PublishedFileId_t* pvecPublishedFileID, uint32 cMaxEntries) {
    return UGC_STEAMUGC_INTERFACE_VERSION003_GetSubscribedItems(pvecPublishedFileID, cMaxEntries);
}

/**** GetItemInstallInfo****/
bool UGC_STEAMUGC_INTERFACE_VERSION010_GetItemInstallInfo(PublishedFileId_t nPublishedFileID, uint64* punSizeOnDisk, char* pchFolder, uint32 cchFolderSize, bool* pbLegacyItem) {
    // FIXME: implement
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION009_GetItemInstallInfo(PublishedFileId_t nPublishedFileID, uint64* punSizeOnDisk, char* pchFolder, uint32 cchFolderSize, bool* pbLegacyItem) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_GetItemInstallInfo(nPublishedFileID, punSizeOnDisk, pchFolder, cchFolderSize, pbLegacyItem);
}

bool UGC_STEAMUGC_INTERFACE_VERSION008_GetItemInstallInfo(PublishedFileId_t nPublishedFileID, uint64* punSizeOnDisk, char* pchFolder, uint32 cchFolderSize, bool* pbLegacyItem) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_GetItemInstallInfo(nPublishedFileID, punSizeOnDisk, pchFolder, cchFolderSize, pbLegacyItem);
}

bool UGC_STEAMUGC_INTERFACE_VERSION007_GetItemInstallInfo(PublishedFileId_t nPublishedFileID, uint64* punSizeOnDisk, char* pchFolder, uint32 cchFolderSize, bool* pbLegacyItem) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_GetItemInstallInfo(nPublishedFileID, punSizeOnDisk, pchFolder, cchFolderSize, pbLegacyItem);
}

bool UGC_STEAMUGC_INTERFACE_VERSION005_GetItemInstallInfo(PublishedFileId_t nPublishedFileID, uint64* punSizeOnDisk, char* pchFolder, uint32 cchFolderSize, bool* pbLegacyItem) {
    return UGC_STEAMUGC_INTERFACE_VERSION007_GetItemInstallInfo(nPublishedFileID, punSizeOnDisk, pchFolder, cchFolderSize, pbLegacyItem);
}

bool UGC_STEAMUGC_INTERFACE_VERSION003_GetItemInstallInfo(PublishedFileId_t nPublishedFileID, uint64* punSizeOnDisk, char* pchFolder, uint32 cchFolderSize, bool* pbLegacyItem) {
    return UGC_STEAMUGC_INTERFACE_VERSION005_GetItemInstallInfo(nPublishedFileID, punSizeOnDisk, pchFolder, cchFolderSize, pbLegacyItem);
}

bool UGC_STEAMUGC_INTERFACE_VERSION002_GetItemInstallInfo(PublishedFileId_t nPublishedFileID, uint64* punSizeOnDisk, char* pchFolder, uint32 cchFolderSize) {
    bool pbLegacyItem;
    return UGC_STEAMUGC_INTERFACE_VERSION003_GetItemInstallInfo(nPublishedFileID, punSizeOnDisk, pchFolder, cchFolderSize, &pbLegacyItem);
}

/**** GetItemUpdateInfo****/
bool UGC_STEAMUGC_INTERFACE_VERSION003_GetItemUpdateInfo(PublishedFileId_t nPublishedFileID, bool* pbNeedsUpdate, bool* pbIsDownloading, uint64* punBytesDownloaded, uint64* punBytesTotal) {
    // FIXME: implement
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION002_GetItemUpdateInfo(PublishedFileId_t nPublishedFileID, bool* pbNeedsUpdate, bool* pbIsDownloading, uint64* punBytesDownloaded, uint64* punBytesTotal) {
    return UGC_STEAMUGC_INTERFACE_VERSION003_GetItemUpdateInfo(nPublishedFileID, pbNeedsUpdate, pbIsDownloading, punBytesDownloaded, punBytesTotal);
}

/**** CreateQueryUGCDetailsRequest****/
UGCQueryHandle_t UGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryUGCDetailsRequest(PublishedFileId_t* pvecPublishedFileID, uint32 unNumPublishedFileIDs) {
    // FIXME: implement
    STUB();
    return 0;
}

UGCQueryHandle_t UGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryUGCDetailsRequest(PublishedFileId_t* pvecPublishedFileID, uint32 unNumPublishedFileIDs) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryUGCDetailsRequest(pvecPublishedFileID, unNumPublishedFileIDs);
}

UGCQueryHandle_t UGC_STEAMUGC_INTERFACE_VERSION008_CreateQueryUGCDetailsRequest(PublishedFileId_t* pvecPublishedFileID, uint32 unNumPublishedFileIDs) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryUGCDetailsRequest(pvecPublishedFileID, unNumPublishedFileIDs);
}

UGCQueryHandle_t UGC_STEAMUGC_INTERFACE_VERSION007_CreateQueryUGCDetailsRequest(PublishedFileId_t* pvecPublishedFileID, uint32 unNumPublishedFileIDs) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_CreateQueryUGCDetailsRequest(pvecPublishedFileID, unNumPublishedFileIDs);
}

UGCQueryHandle_t UGC_STEAMUGC_INTERFACE_VERSION005_CreateQueryUGCDetailsRequest(PublishedFileId_t* pvecPublishedFileID, uint32 unNumPublishedFileIDs) {
    return UGC_STEAMUGC_INTERFACE_VERSION007_CreateQueryUGCDetailsRequest(pvecPublishedFileID, unNumPublishedFileIDs);
}

/**** GetQueryUGCPreviewURL****/
bool UGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCPreviewURL(UGCQueryHandle_t handle, uint32 index, char* pchURL, uint32 cchURLSize) {
    // FIXME: implement
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCPreviewURL(UGCQueryHandle_t handle, uint32 index, char* pchURL, uint32 cchURLSize) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCPreviewURL(handle, index, pchURL, cchURLSize);
}

bool UGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCPreviewURL(UGCQueryHandle_t handle, uint32 index, char* pchURL, uint32 cchURLSize) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCPreviewURL(handle, index, pchURL, cchURLSize);
}

bool UGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCPreviewURL(UGCQueryHandle_t handle, uint32 index, char* pchURL, uint32 cchURLSize) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCPreviewURL(handle, index, pchURL, cchURLSize);
}

bool UGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCPreviewURL(UGCQueryHandle_t handle, uint32 index, char* pchURL, uint32 cchURLSize) {
    return UGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCPreviewURL(handle, index, pchURL, cchURLSize);
}

/**** GetQueryUGCMetadata****/
bool UGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCMetadata(UGCQueryHandle_t handle, uint32 index, char* pchMetadata, uint32 cchMetadatasize) {
    // FIXME: implement
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCMetadata(UGCQueryHandle_t handle, uint32 index, char* pchMetadata, uint32 cchMetadatasize) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCMetadata(handle, index, pchMetadata, cchMetadatasize);
}

bool UGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCMetadata(UGCQueryHandle_t handle, uint32 index, char* pchMetadata, uint32 cchMetadatasize) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCMetadata(handle, index, pchMetadata, cchMetadatasize);
}

bool UGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCMetadata(UGCQueryHandle_t handle, uint32 index, char* pchMetadata, uint32 cchMetadatasize) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCMetadata(handle, index, pchMetadata, cchMetadatasize);
}

bool UGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCMetadata(UGCQueryHandle_t handle, uint32 index, char* pchMetadata, uint32 cchMetadatasize) {
    return UGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCMetadata(handle, index, pchMetadata, cchMetadatasize);
}

/**** GetQueryUGCChildren****/
bool UGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCChildren(UGCQueryHandle_t handle, uint32 index, PublishedFileId_t* pvecPublishedFileID, uint32 cMaxEntries) {
    // FIXME: implement
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCChildren(UGCQueryHandle_t handle, uint32 index, PublishedFileId_t* pvecPublishedFileID, uint32 cMaxEntries) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCChildren(handle, index, pvecPublishedFileID, cMaxEntries);
}

bool UGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCChildren(UGCQueryHandle_t handle, uint32 index, PublishedFileId_t* pvecPublishedFileID, uint32 cMaxEntries) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCChildren(handle, index, pvecPublishedFileID, cMaxEntries);
}

bool UGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCChildren(UGCQueryHandle_t handle, uint32 index, PublishedFileId_t* pvecPublishedFileID, uint32 cMaxEntries) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCChildren(handle, index, pvecPublishedFileID, cMaxEntries);
}

bool UGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCChildren(UGCQueryHandle_t handle, uint32 index, PublishedFileId_t* pvecPublishedFileID, uint32 cMaxEntries) {
    return UGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCChildren(handle, index, pvecPublishedFileID, cMaxEntries);
}

/**** GetQueryUGCStatistic****/
bool UGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCStatistic(UGCQueryHandle_t handle, uint32 index, EItemStatistic_v1 eStatType, uint64* pStatValue) {
    // FIXME: implement
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCStatistic(UGCQueryHandle_t handle, uint32 index, EItemStatistic_v1 eStatType, uint64* pStatValue) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCStatistic(handle, index, eStatType, pStatValue);
}

bool UGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCStatistic(UGCQueryHandle_t handle, uint32 index, EItemStatistic_v1 eStatType, uint32* pStatValue) {
    uint64 statValue;
    bool res = UGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCStatistic(handle, index, eStatType, &statValue);
    *pStatValue = statValue;
    return res;
}

bool UGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCStatistic(UGCQueryHandle_t handle, uint32 index, EItemStatistic_v1 eStatType, uint32* pStatValue) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCStatistic(handle, index, eStatType, pStatValue);
}

bool UGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCStatistic(UGCQueryHandle_t handle, uint32 index, EItemStatistic_v1 eStatType, uint32* pStatValue) {
    return UGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCStatistic(handle, index, eStatType, pStatValue);
}

/**** GetQueryUGCNumAdditionalPreviews****/
uint32 UGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCNumAdditionalPreviews(UGCQueryHandle_t handle, uint32 index) {
    // FIXME: implement
    STUB();
    return 0;
}

uint32 UGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCNumAdditionalPreviews(UGCQueryHandle_t handle, uint32 index) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCNumAdditionalPreviews(handle, index);
}

uint32 UGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCNumAdditionalPreviews(UGCQueryHandle_t handle, uint32 index) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCNumAdditionalPreviews(handle, index);
}

uint32 UGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCNumAdditionalPreviews(UGCQueryHandle_t handle, uint32 index) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCNumAdditionalPreviews(handle, index);
}

uint32 UGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCNumAdditionalPreviews(UGCQueryHandle_t handle, uint32 index) {
    return UGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCNumAdditionalPreviews(handle, index);
}

/**** GetQueryUGCAdditionalPreview****/
bool UGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCAdditionalPreview(UGCQueryHandle_t handle, uint32 index, uint32 previewIndex, char* pchURLOrVideoID, uint32 cchURLSize, char* pchOriginalFileName, uint32 cchOriginalFileNameSize, EItemPreviewType_v1* pPreviewType) {
    // FIXME: implement
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCAdditionalPreview(UGCQueryHandle_t handle, uint32 index, uint32 previewIndex, char* pchURLOrVideoID, uint32 cchURLSize, char* pchOriginalFileName, uint32 cchOriginalFileNameSize, EItemPreviewType_v1* pPreviewType) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCAdditionalPreview(handle, index, previewIndex, pchURLOrVideoID, cchURLSize, pchOriginalFileName, cchOriginalFileNameSize, pPreviewType);
}

bool UGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCAdditionalPreview(UGCQueryHandle_t handle, uint32 index, uint32 previewIndex, char* pchURLOrVideoID, uint32 cchURLSize, char* pchOriginalFileName, uint32 cchOriginalFileNameSize, EItemPreviewType_v1* pPreviewType) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCAdditionalPreview(handle, index, previewIndex, pchURLOrVideoID, cchURLSize, pchOriginalFileName, cchOriginalFileNameSize, pPreviewType);
}

bool UGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCAdditionalPreview(UGCQueryHandle_t handle, uint32 index, uint32 previewIndex, char* pchURLOrVideoID, uint32 cchURLSize, bool* pbIsImage) {
    // FIXME: probably wrong
    char* pchOriginalFileName = NULL;
    uint32 cchOriginalFileNameSize = 0;
    EItemPreviewType_v1 previewType;
    *pbIsImage = false;
    return UGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCAdditionalPreview(handle, index, previewIndex, pchURLOrVideoID, cchURLSize, pchOriginalFileName, cchOriginalFileNameSize, &previewType);
}

bool UGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCAdditionalPreview(UGCQueryHandle_t handle, uint32 index, uint32 previewIndex, char* pchURLOrVideoID, uint32 cchURLSize, bool* pbIsImage) {
    return UGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCAdditionalPreview(handle, index, previewIndex, pchURLOrVideoID, cchURLSize, pbIsImage);
}

/**** SetReturnMetadata****/
bool UGC_STEAMUGC_INTERFACE_VERSION010_SetReturnMetadata(UGCQueryHandle_t handle, bool bReturnMetadata) {
    // FIXME: implement
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION009_SetReturnMetadata(UGCQueryHandle_t handle, bool bReturnMetadata) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_SetReturnMetadata(handle, bReturnMetadata);
}

bool UGC_STEAMUGC_INTERFACE_VERSION008_SetReturnMetadata(UGCQueryHandle_t handle, bool bReturnMetadata) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_SetReturnMetadata(handle, bReturnMetadata);
}

bool UGC_STEAMUGC_INTERFACE_VERSION007_SetReturnMetadata(UGCQueryHandle_t handle, bool bReturnMetadata) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_SetReturnMetadata(handle, bReturnMetadata);
}

bool UGC_STEAMUGC_INTERFACE_VERSION005_SetReturnMetadata(UGCQueryHandle_t handle, bool bReturnMetadata) {
    return UGC_STEAMUGC_INTERFACE_VERSION007_SetReturnMetadata(handle, bReturnMetadata);
}

/**** SetReturnChildren****/
bool UGC_STEAMUGC_INTERFACE_VERSION010_SetReturnChildren(UGCQueryHandle_t handle, bool bReturnChildren) {
    // FIXME: implement
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION009_SetReturnChildren(UGCQueryHandle_t handle, bool bReturnChildren) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_SetReturnChildren(handle, bReturnChildren);
}

bool UGC_STEAMUGC_INTERFACE_VERSION008_SetReturnChildren(UGCQueryHandle_t handle, bool bReturnChildren) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_SetReturnChildren(handle, bReturnChildren);
}

bool UGC_STEAMUGC_INTERFACE_VERSION007_SetReturnChildren(UGCQueryHandle_t handle, bool bReturnChildren) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_SetReturnChildren(handle, bReturnChildren);
}

bool UGC_STEAMUGC_INTERFACE_VERSION005_SetReturnChildren(UGCQueryHandle_t handle, bool bReturnChildren) {
    return UGC_STEAMUGC_INTERFACE_VERSION007_SetReturnChildren(handle, bReturnChildren);
}

/**** SetReturnAdditionalPreviews****/
bool UGC_STEAMUGC_INTERFACE_VERSION010_SetReturnAdditionalPreviews(UGCQueryHandle_t handle, bool bReturnAdditionalPreviews) {
    // FIXME: implement
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION009_SetReturnAdditionalPreviews(UGCQueryHandle_t handle, bool bReturnAdditionalPreviews) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_SetReturnAdditionalPreviews(handle, bReturnAdditionalPreviews);
}

bool UGC_STEAMUGC_INTERFACE_VERSION008_SetReturnAdditionalPreviews(UGCQueryHandle_t handle, bool bReturnAdditionalPreviews) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_SetReturnAdditionalPreviews(handle, bReturnAdditionalPreviews);
}

bool UGC_STEAMUGC_INTERFACE_VERSION007_SetReturnAdditionalPreviews(UGCQueryHandle_t handle, bool bReturnAdditionalPreviews) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_SetReturnAdditionalPreviews(handle, bReturnAdditionalPreviews);
}

bool UGC_STEAMUGC_INTERFACE_VERSION005_SetReturnAdditionalPreviews(UGCQueryHandle_t handle, bool bReturnAdditionalPreviews) {
    return UGC_STEAMUGC_INTERFACE_VERSION007_SetReturnAdditionalPreviews(handle, bReturnAdditionalPreviews);
}

/**** SetItemMetadata****/
bool UGC_STEAMUGC_INTERFACE_VERSION010_SetItemMetadata(UGCUpdateHandle_t handle, char* pchMetaData) {
    // FIXME: implement
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION009_SetItemMetadata(UGCUpdateHandle_t handle, char* pchMetaData) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_SetItemMetadata(handle, pchMetaData);
}

bool UGC_STEAMUGC_INTERFACE_VERSION008_SetItemMetadata(UGCUpdateHandle_t handle, char* pchMetaData) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_SetItemMetadata(handle, pchMetaData);
}

bool UGC_STEAMUGC_INTERFACE_VERSION007_SetItemMetadata(UGCUpdateHandle_t handle, char* pchMetaData) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_SetItemMetadata(handle, pchMetaData);
}

bool UGC_STEAMUGC_INTERFACE_VERSION005_SetItemMetadata(UGCUpdateHandle_t handle, char* pchMetaData) {
    return UGC_STEAMUGC_INTERFACE_VERSION007_SetItemMetadata(handle, pchMetaData);
}

/**** AddItemToFavorites****/
SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION010_AddItemToFavorites(AppId_t nAppId, PublishedFileId_t nPublishedFileID) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION009_AddItemToFavorites(AppId_t nAppId, PublishedFileId_t nPublishedFileID) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_AddItemToFavorites(nAppId, nPublishedFileID);
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION008_AddItemToFavorites(AppId_t nAppId, PublishedFileId_t nPublishedFileID) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_AddItemToFavorites(nAppId, nPublishedFileID);
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION007_AddItemToFavorites(AppId_t nAppId, PublishedFileId_t nPublishedFileID) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_AddItemToFavorites(nAppId, nPublishedFileID);
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION005_AddItemToFavorites(AppId_t nAppId, PublishedFileId_t nPublishedFileID) {
    return UGC_STEAMUGC_INTERFACE_VERSION007_AddItemToFavorites(nAppId, nPublishedFileID);
}

/**** RemoveItemFromFavorites****/
SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemFromFavorites(AppId_t nAppId, PublishedFileId_t nPublishedFileID) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemFromFavorites(AppId_t nAppId, PublishedFileId_t nPublishedFileID) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemFromFavorites(nAppId, nPublishedFileID);
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION008_RemoveItemFromFavorites(AppId_t nAppId, PublishedFileId_t nPublishedFileID) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemFromFavorites(nAppId, nPublishedFileID);
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION007_RemoveItemFromFavorites(AppId_t nAppId, PublishedFileId_t nPublishedFileID) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_RemoveItemFromFavorites(nAppId, nPublishedFileID);
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION005_RemoveItemFromFavorites(AppId_t nAppId, PublishedFileId_t nPublishedFileID) {
    return UGC_STEAMUGC_INTERFACE_VERSION007_RemoveItemFromFavorites(nAppId, nPublishedFileID);
}

/**** GetItemState****/
uint32 UGC_STEAMUGC_INTERFACE_VERSION010_GetItemState(PublishedFileId_t nPublishedFileID) {
    // FIXME: implement
    STUB();
    return 0;
}

uint32 UGC_STEAMUGC_INTERFACE_VERSION009_GetItemState(PublishedFileId_t nPublishedFileID) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_GetItemState(nPublishedFileID);
}

uint32 UGC_STEAMUGC_INTERFACE_VERSION008_GetItemState(PublishedFileId_t nPublishedFileID) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_GetItemState(nPublishedFileID);
}

uint32 UGC_STEAMUGC_INTERFACE_VERSION007_GetItemState(PublishedFileId_t nPublishedFileID) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_GetItemState(nPublishedFileID);
}

uint32 UGC_STEAMUGC_INTERFACE_VERSION005_GetItemState(PublishedFileId_t nPublishedFileID) {
    return UGC_STEAMUGC_INTERFACE_VERSION007_GetItemState(nPublishedFileID);
}

/**** GetItemDownloadInfo****/
bool UGC_STEAMUGC_INTERFACE_VERSION010_GetItemDownloadInfo(PublishedFileId_t nPublishedFileID, uint64* punBytesDownloaded, uint64* punBytesTotal) {
    // FIXME: implement
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION009_GetItemDownloadInfo(PublishedFileId_t nPublishedFileID, uint64* punBytesDownloaded, uint64* punBytesTotal) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_GetItemDownloadInfo(nPublishedFileID, punBytesDownloaded, punBytesTotal);
}

bool UGC_STEAMUGC_INTERFACE_VERSION008_GetItemDownloadInfo(PublishedFileId_t nPublishedFileID, uint64* punBytesDownloaded, uint64* punBytesTotal) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_GetItemDownloadInfo(nPublishedFileID, punBytesDownloaded, punBytesTotal);
}

bool UGC_STEAMUGC_INTERFACE_VERSION007_GetItemDownloadInfo(PublishedFileId_t nPublishedFileID, uint64* punBytesDownloaded, uint64* punBytesTotal) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_GetItemDownloadInfo(nPublishedFileID, punBytesDownloaded, punBytesTotal);
}

bool UGC_STEAMUGC_INTERFACE_VERSION005_GetItemDownloadInfo(PublishedFileId_t nPublishedFileID, uint64* punBytesDownloaded, uint64* punBytesTotal) {
    return UGC_STEAMUGC_INTERFACE_VERSION007_GetItemDownloadInfo(nPublishedFileID, punBytesDownloaded, punBytesTotal);
}

/**** DownloadItem****/
bool UGC_STEAMUGC_INTERFACE_VERSION010_DownloadItem(PublishedFileId_t nPublishedFileID, bool bHighPriority) {
    // FIXME: implement
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION009_DownloadItem(PublishedFileId_t nPublishedFileID, bool bHighPriority) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_DownloadItem(nPublishedFileID, bHighPriority);
}

bool UGC_STEAMUGC_INTERFACE_VERSION008_DownloadItem(PublishedFileId_t nPublishedFileID, bool bHighPriority) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_DownloadItem(nPublishedFileID, bHighPriority);
}

bool UGC_STEAMUGC_INTERFACE_VERSION007_DownloadItem(PublishedFileId_t nPublishedFileID, bool bHighPriority) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_DownloadItem(nPublishedFileID, bHighPriority);
}

bool UGC_STEAMUGC_INTERFACE_VERSION005_DownloadItem(PublishedFileId_t nPublishedFileID, bool bHighPriority) {
    return UGC_STEAMUGC_INTERFACE_VERSION007_DownloadItem(nPublishedFileID, bHighPriority);
}

/**** GetQueryUGCNumKeyValueTags****/
uint32 UGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCNumKeyValueTags(UGCQueryHandle_t handle, uint32 index) {
    // FIXME: implement
    STUB();
    return 0;
}

uint32 UGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCNumKeyValueTags(UGCQueryHandle_t handle, uint32 index) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCNumKeyValueTags(handle, index);
}

uint32 UGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCNumKeyValueTags(UGCQueryHandle_t handle, uint32 index) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCNumKeyValueTags(handle, index);
}

uint32 UGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCNumKeyValueTags(UGCQueryHandle_t handle, uint32 index) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCNumKeyValueTags(handle, index);
}

/**** GetQueryUGCKeyValueTag****/
bool UGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCKeyValueTag(UGCQueryHandle_t handle, uint32 index, uint32 keyValueTagIndex, char* pchKey, uint32 cchKeySize, char* pchValue, uint32 cchValueSize) {
    // FIXME: implement
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCKeyValueTag(UGCQueryHandle_t handle, uint32 index, uint32 keyValueTagIndex, char* pchKey, uint32 cchKeySize, char* pchValue, uint32 cchValueSize) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCKeyValueTag(handle, index, keyValueTagIndex, pchKey, cchKeySize, pchValue, cchValueSize);
}

bool UGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCKeyValueTag(UGCQueryHandle_t handle, uint32 index, uint32 keyValueTagIndex, char* pchKey, uint32 cchKeySize, char* pchValue, uint32 cchValueSize) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCKeyValueTag(handle, index, keyValueTagIndex, pchKey, cchKeySize, pchValue, cchValueSize);
}

bool UGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCKeyValueTag(UGCQueryHandle_t handle, uint32 index, uint32 keyValueTagIndex, char* pchKey, uint32 cchKeySize, char* pchValue, uint32 cchValueSize) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCKeyValueTag(handle, index, keyValueTagIndex, pchKey, cchKeySize, pchValue, cchValueSize);
}

/**** SetReturnKeyValueTags****/
bool UGC_STEAMUGC_INTERFACE_VERSION010_SetReturnKeyValueTags(UGCQueryHandle_t handle, bool bReturnKeyValueTags) {
    // FIXME: implement
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION009_SetReturnKeyValueTags(UGCQueryHandle_t handle, bool bReturnKeyValueTags) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_SetReturnKeyValueTags(handle, bReturnKeyValueTags);
}

bool UGC_STEAMUGC_INTERFACE_VERSION008_SetReturnKeyValueTags(UGCQueryHandle_t handle, bool bReturnKeyValueTags) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_SetReturnKeyValueTags(handle, bReturnKeyValueTags);
}

bool UGC_STEAMUGC_INTERFACE_VERSION007_SetReturnKeyValueTags(UGCQueryHandle_t handle, bool bReturnKeyValueTags) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_SetReturnKeyValueTags(handle, bReturnKeyValueTags);
}

/**** SetLanguage****/
bool UGC_STEAMUGC_INTERFACE_VERSION010_SetLanguage(UGCQueryHandle_t handle, char* pchLanguage) {
    // FIXME: implement
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION009_SetLanguage(UGCQueryHandle_t handle, char* pchLanguage) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_SetLanguage(handle, pchLanguage);
}

bool UGC_STEAMUGC_INTERFACE_VERSION008_SetLanguage(UGCQueryHandle_t handle, char* pchLanguage) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_SetLanguage(handle, pchLanguage);
}

bool UGC_STEAMUGC_INTERFACE_VERSION007_SetLanguage(UGCQueryHandle_t handle, char* pchLanguage) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_SetLanguage(handle, pchLanguage);
}

/**** AddRequiredKeyValueTag****/
bool UGC_STEAMUGC_INTERFACE_VERSION010_AddRequiredKeyValueTag(UGCQueryHandle_t handle, char* pKey, char* pValue) {
    // FIXME: implement
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION009_AddRequiredKeyValueTag(UGCQueryHandle_t handle, char* pKey, char* pValue) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_AddRequiredKeyValueTag(handle, pKey, pValue);
}

bool UGC_STEAMUGC_INTERFACE_VERSION008_AddRequiredKeyValueTag(UGCQueryHandle_t handle, char* pKey, char* pValue) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_AddRequiredKeyValueTag(handle, pKey, pValue);
}

bool UGC_STEAMUGC_INTERFACE_VERSION007_AddRequiredKeyValueTag(UGCQueryHandle_t handle, char* pKey, char* pValue) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_AddRequiredKeyValueTag(handle, pKey, pValue);
}

/**** SetItemUpdateLanguage****/
bool UGC_STEAMUGC_INTERFACE_VERSION010_SetItemUpdateLanguage(UGCUpdateHandle_t handle, char* pchLanguage) {
    // FIXME: implement
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION009_SetItemUpdateLanguage(UGCUpdateHandle_t handle, char* pchLanguage) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_SetItemUpdateLanguage(handle, pchLanguage);
}

bool UGC_STEAMUGC_INTERFACE_VERSION008_SetItemUpdateLanguage(UGCUpdateHandle_t handle, char* pchLanguage) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_SetItemUpdateLanguage(handle, pchLanguage);
}

bool UGC_STEAMUGC_INTERFACE_VERSION007_SetItemUpdateLanguage(UGCUpdateHandle_t handle, char* pchLanguage) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_SetItemUpdateLanguage(handle, pchLanguage);
}

/**** RemoveItemKeyValueTags****/
bool UGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemKeyValueTags(UGCUpdateHandle_t handle, char* pchKey) {
    // FIXME: implement
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemKeyValueTags(UGCUpdateHandle_t handle, char* pchKey) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemKeyValueTags(handle, pchKey);
}

bool UGC_STEAMUGC_INTERFACE_VERSION008_RemoveItemKeyValueTags(UGCUpdateHandle_t handle, char* pchKey) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemKeyValueTags(handle, pchKey);
}

bool UGC_STEAMUGC_INTERFACE_VERSION007_RemoveItemKeyValueTags(UGCUpdateHandle_t handle, char* pchKey) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_RemoveItemKeyValueTags(handle, pchKey);
}

/**** AddItemKeyValueTag****/
bool UGC_STEAMUGC_INTERFACE_VERSION010_AddItemKeyValueTag(UGCUpdateHandle_t handle, char* pchKey, char* pchValue) {
    // FIXME: implement
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION009_AddItemKeyValueTag(UGCUpdateHandle_t handle, char* pchKey, char* pchValue) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_AddItemKeyValueTag(handle, pchKey, pchValue);
}

bool UGC_STEAMUGC_INTERFACE_VERSION008_AddItemKeyValueTag(UGCUpdateHandle_t handle, char* pchKey, char* pchValue) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_AddItemKeyValueTag(handle, pchKey, pchValue);
}

bool UGC_STEAMUGC_INTERFACE_VERSION007_AddItemKeyValueTag(UGCUpdateHandle_t handle, char* pchKey, char* pchValue) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_AddItemKeyValueTag(handle, pchKey, pchValue);
}

/**** SetUserItemVote****/
SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION010_SetUserItemVote(PublishedFileId_t nPublishedFileID, bool bVoteUp) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION009_SetUserItemVote(PublishedFileId_t nPublishedFileID, bool bVoteUp) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_SetUserItemVote(nPublishedFileID, bVoteUp);
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION008_SetUserItemVote(PublishedFileId_t nPublishedFileID, bool bVoteUp) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_SetUserItemVote(nPublishedFileID, bVoteUp);
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION007_SetUserItemVote(PublishedFileId_t nPublishedFileID, bool bVoteUp) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_SetUserItemVote(nPublishedFileID, bVoteUp);
}

/**** GetUserItemVote****/
SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION010_GetUserItemVote(PublishedFileId_t nPublishedFileID) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION009_GetUserItemVote(PublishedFileId_t nPublishedFileID) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_GetUserItemVote(nPublishedFileID);
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION008_GetUserItemVote(PublishedFileId_t nPublishedFileID) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_GetUserItemVote(nPublishedFileID);
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION007_GetUserItemVote(PublishedFileId_t nPublishedFileID) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_GetUserItemVote(nPublishedFileID);
}

/**** BInitWorkshopForGameServer****/
bool UGC_STEAMUGC_INTERFACE_VERSION010_BInitWorkshopForGameServer(DepotId_t unWorkshopDepotID, char* pszFolder) {
    // FIXME: implement
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION009_BInitWorkshopForGameServer(DepotId_t unWorkshopDepotID, char* pszFolder) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_BInitWorkshopForGameServer(unWorkshopDepotID, pszFolder);
}

bool UGC_STEAMUGC_INTERFACE_VERSION008_BInitWorkshopForGameServer(DepotId_t unWorkshopDepotID, char* pszFolder) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_BInitWorkshopForGameServer(unWorkshopDepotID, pszFolder);
}

bool UGC_STEAMUGC_INTERFACE_VERSION007_BInitWorkshopForGameServer(DepotId_t unWorkshopDepotID, char* pszFolder) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_BInitWorkshopForGameServer(unWorkshopDepotID, pszFolder);
}

/**** SuspendDownloads****/
void UGC_STEAMUGC_INTERFACE_VERSION010_SuspendDownloads(bool bSuspend) {
    // FIXME: implement
    STUB();
}

void UGC_STEAMUGC_INTERFACE_VERSION009_SuspendDownloads(bool bSuspend) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_SuspendDownloads(bSuspend);
}

void UGC_STEAMUGC_INTERFACE_VERSION008_SuspendDownloads(bool bSuspend) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_SuspendDownloads(bSuspend);
}

void UGC_STEAMUGC_INTERFACE_VERSION007_SuspendDownloads(bool bSuspend) {
    return UGC_STEAMUGC_INTERFACE_VERSION008_SuspendDownloads(bSuspend);
}

/**** AddItemPreviewFile****/
bool UGC_STEAMUGC_INTERFACE_VERSION010_AddItemPreviewFile(UGCUpdateHandle_t handle, char* pszPreviewFile, EItemPreviewType_v1 type) {
    // FIXME: implement
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION009_AddItemPreviewFile(UGCUpdateHandle_t handle, char* pszPreviewFile, EItemPreviewType_v1 type) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_AddItemPreviewFile(handle, pszPreviewFile, type);
}

bool UGC_STEAMUGC_INTERFACE_VERSION008_AddItemPreviewFile(UGCUpdateHandle_t handle, char* pszPreviewFile, EItemPreviewType_v1 type) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_AddItemPreviewFile(handle, pszPreviewFile, type);
}

/**** AddItemPreviewVideo****/
bool UGC_STEAMUGC_INTERFACE_VERSION010_AddItemPreviewVideo(UGCUpdateHandle_t handle, char* pszVideoID) {
    // FIXME: implement
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION009_AddItemPreviewVideo(UGCUpdateHandle_t handle, char* pszVideoID) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_AddItemPreviewVideo(handle, pszVideoID);
}

bool UGC_STEAMUGC_INTERFACE_VERSION008_AddItemPreviewVideo(UGCUpdateHandle_t handle, char* pszVideoID) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_AddItemPreviewVideo(handle, pszVideoID);
}

/**** UpdateItemPreviewFile****/
bool UGC_STEAMUGC_INTERFACE_VERSION010_UpdateItemPreviewFile(UGCUpdateHandle_t handle, uint32 index, char* pszPreviewFile) {
    // FIXME: implement
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION009_UpdateItemPreviewFile(UGCUpdateHandle_t handle, uint32 index, char* pszPreviewFile) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_UpdateItemPreviewFile(handle, index, pszPreviewFile);
}

bool UGC_STEAMUGC_INTERFACE_VERSION008_UpdateItemPreviewFile(UGCUpdateHandle_t handle, uint32 index, char* pszPreviewFile) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_UpdateItemPreviewFile(handle, index, pszPreviewFile);
}

/**** UpdateItemPreviewVideo****/
bool UGC_STEAMUGC_INTERFACE_VERSION010_UpdateItemPreviewVideo(UGCUpdateHandle_t handle, uint32 index, char* pszVideoID) {
    // FIXME: implement
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION009_UpdateItemPreviewVideo(UGCUpdateHandle_t handle, uint32 index, char* pszVideoID) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_UpdateItemPreviewVideo(handle, index, pszVideoID);
}

bool UGC_STEAMUGC_INTERFACE_VERSION008_UpdateItemPreviewVideo(UGCUpdateHandle_t handle, uint32 index, char* pszVideoID) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_UpdateItemPreviewVideo(handle, index, pszVideoID);
}

/**** RemoveItemPreview****/
bool UGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemPreview(UGCUpdateHandle_t handle, uint32 index) {
    // FIXME: implement
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemPreview(UGCUpdateHandle_t handle, uint32 index) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemPreview(handle, index);
}

bool UGC_STEAMUGC_INTERFACE_VERSION008_RemoveItemPreview(UGCUpdateHandle_t handle, uint32 index) {
    return UGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemPreview(handle, index);
}

/**** SetReturnOnlyIDs****/
bool UGC_STEAMUGC_INTERFACE_VERSION010_SetReturnOnlyIDs(UGCQueryHandle_t handle, bool bReturnOnlyIDs) {
    // FIXME: implement
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION009_SetReturnOnlyIDs(UGCQueryHandle_t handle, bool bReturnOnlyIDs) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_SetReturnOnlyIDs(handle, bReturnOnlyIDs);
}

/**** StartPlaytimeTracking****/
SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION010_StartPlaytimeTracking(PublishedFileId_t* pvecPublishedFileID, uint32 unNumPublishedFileIDs) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION009_StartPlaytimeTracking(PublishedFileId_t* pvecPublishedFileID, uint32 unNumPublishedFileIDs) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_StartPlaytimeTracking(pvecPublishedFileID, unNumPublishedFileIDs);
}

/**** StopPlaytimeTracking****/
SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION010_StopPlaytimeTracking(PublishedFileId_t* pvecPublishedFileID, uint32 unNumPublishedFileIDs) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION009_StopPlaytimeTracking(PublishedFileId_t* pvecPublishedFileID, uint32 unNumPublishedFileIDs) {
    return UGC_STEAMUGC_INTERFACE_VERSION010_StopPlaytimeTracking(pvecPublishedFileID, unNumPublishedFileIDs);
}

/**** StopPlaytimeTrackingForAllItems****/
SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION010_StopPlaytimeTrackingForAllItems() {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION009_StopPlaytimeTrackingForAllItems() {
    return UGC_STEAMUGC_INTERFACE_VERSION010_StopPlaytimeTrackingForAllItems();
}

/**** SetReturnPlaytimeStats****/
bool UGC_STEAMUGC_INTERFACE_VERSION010_SetReturnPlaytimeStats(UGCQueryHandle_t handle, uint32 unDays) {
    // FIXME: implement
    STUB();
    return false;
}

/**** AddDependency****/
SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION010_AddDependency(PublishedFileId_t nParentPublishedFileID, PublishedFileId_t nChildPublishedFileID) {
    // FIXME: implement
    STUB();
    return 0;
}

/**** RemoveDependency****/
SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION010_RemoveDependency(PublishedFileId_t nParentPublishedFileID, PublishedFileId_t nChildPublishedFileID) {
    // FIXME: implement
    STUB();
    return 0;
}

/**** AddAppDependency****/
SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION010_AddAppDependency(PublishedFileId_t nPublishedFileID, AppId_t nAppID) {
    // FIXME: implement
    STUB();
    return 0;
}

/**** RemoveAppDependency****/
SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION010_RemoveAppDependency(PublishedFileId_t nPublishedFileID, AppId_t nAppID) {
    // FIXME: implement
    STUB();
    return 0;
}

/**** GetAppDependencies****/
SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION010_GetAppDependencies(PublishedFileId_t nPublishedFileID) {
    // FIXME: implement
    STUB();
    return 0;
}

/**** DeleteItem****/
SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION010_DeleteItem(PublishedFileId_t nPublishedFileID) {
    // FIXME: implement
    STUB();
    return 0;
}

