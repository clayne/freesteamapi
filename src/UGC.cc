#include "steam_api.h"

UGC_STEAMUGC_INTERFACE_VERSION007::UGC_STEAMUGC_INTERFACE_VERSION007()
{
}

UGCQueryHandle_t UGC_STEAMUGC_INTERFACE_VERSION007::CreateQueryUserUGCRequest(AccountID_t unAccountID, EUserUGCList_v1 eListType, EUGCMatchingUGCType_v2 eMatchingUGCType, EUserUGCListSortOrder_v1 eSortOrder, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    STUB();
    return 0;
}

UGCQueryHandle_t UGC_STEAMUGC_INTERFACE_VERSION007::CreateQueryAllUGCRequest(EUGCQuery_v1 eQueryType, EUGCMatchingUGCType_v2 eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    STUB();
    return 0;
}

UGCQueryHandle_t UGC_STEAMUGC_INTERFACE_VERSION007::CreateQueryUGCDetailsRequest(PublishedFileId_t* pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
    STUB();
    return 0;
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION007::SendQueryUGCRequest(UGCQueryHandle_t handle)
{
    STUB();
    return 0;
}

bool UGC_STEAMUGC_INTERFACE_VERSION007::GetQueryUGCResult(UGCQueryHandle_t handle, uint32 index, SteamUGCDetails_t_v1* pDetails)
{
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION007::GetQueryUGCPreviewURL(UGCQueryHandle_t handle, uint32 index, char* pchURL, uint32 cchURLSize)
{
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION007::GetQueryUGCMetadata(UGCQueryHandle_t handle, uint32 index, char* pchMetadata, uint32 cchMetadatasize)
{
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION007::GetQueryUGCChildren(UGCQueryHandle_t handle, uint32 index, PublishedFileId_t* pvecPublishedFileID, uint32 cMaxEntries)
{
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION007::GetQueryUGCStatistic(UGCQueryHandle_t handle, uint32 index, EItemStatistic_v1 eStatType, uint32* pStatValue)
{
    STUB();
    return false;
}

uint32 UGC_STEAMUGC_INTERFACE_VERSION007::GetQueryUGCNumAdditionalPreviews(UGCQueryHandle_t handle, uint32 index)
{
    STUB();
    return 0;
}

bool UGC_STEAMUGC_INTERFACE_VERSION007::GetQueryUGCAdditionalPreview(UGCQueryHandle_t handle, uint32 index, uint32 previewIndex, char* pchURLOrVideoID, uint32 cchURLSize, bool* pbIsImage)
{
    STUB();
    return false;
}

uint32 UGC_STEAMUGC_INTERFACE_VERSION007::GetQueryUGCNumKeyValueTags(UGCQueryHandle_t handle, uint32 index)
{
    STUB();
    return 0;
}

bool UGC_STEAMUGC_INTERFACE_VERSION007::GetQueryUGCKeyValueTag(UGCQueryHandle_t handle, uint32 index, uint32 keyValueTagIndex, char* pchKey, uint32 cchKeySize, char* pchValue, uint32 cchValueSize)
{
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION007::ReleaseQueryUGCRequest(UGCQueryHandle_t handle)
{
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION007::AddRequiredTag(UGCQueryHandle_t handle, char* pTagName)
{
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION007::AddExcludedTag(UGCQueryHandle_t handle, char* pTagName)
{
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION007::SetReturnKeyValueTags(UGCQueryHandle_t handle, bool bReturnKeyValueTags)
{
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION007::SetReturnLongDescription(UGCQueryHandle_t handle, bool bReturnLongDescription)
{
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION007::SetReturnMetadata(UGCQueryHandle_t handle, bool bReturnMetadata)
{
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION007::SetReturnChildren(UGCQueryHandle_t handle, bool bReturnChildren)
{
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION007::SetReturnAdditionalPreviews(UGCQueryHandle_t handle, bool bReturnAdditionalPreviews)
{
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION007::SetReturnTotalOnly(UGCQueryHandle_t handle, bool bReturnTotalOnly)
{
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION007::SetLanguage(UGCQueryHandle_t handle, char* pchLanguage)
{
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION007::SetAllowCachedResponse(UGCQueryHandle_t handle, uint32 unMaxAgeSeconds)
{
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION007::SetCloudFileNameFilter(UGCQueryHandle_t handle, char* pMatchCloudFileName)
{
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION007::SetMatchAnyTag(UGCQueryHandle_t handle, bool bMatchAnyTag)
{
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION007::SetSearchText(UGCQueryHandle_t handle, char* pSearchText)
{
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION007::SetRankedByTrendDays(UGCQueryHandle_t handle, uint32 unDays)
{
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION007::AddRequiredKeyValueTag(UGCQueryHandle_t handle, char* pKey, char* pValue)
{
    STUB();
    return false;
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION007::RequestUGCDetails(PublishedFileId_t nPublishedFileID, uint32 unMaxAgeSeconds)
{
    STUB();
    return 0;
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION007::CreateItem(AppId_t nConsumerAppId, EWorkshopFileType_v1 eFileType)
{
    STUB();
    return 0;
}

UGCUpdateHandle_t UGC_STEAMUGC_INTERFACE_VERSION007::StartItemUpdate(AppId_t nConsumerAppId, PublishedFileId_t nPublishedFileID)
{
    STUB();
    return 0;
}

bool UGC_STEAMUGC_INTERFACE_VERSION007::SetItemTitle(UGCUpdateHandle_t handle, char* pchTitle)
{
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION007::SetItemDescription(UGCUpdateHandle_t handle, char* pchDescription)
{
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION007::SetItemUpdateLanguage(UGCUpdateHandle_t handle, char* pchLanguage)
{
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION007::SetItemMetadata(UGCUpdateHandle_t handle, char* pchMetaData)
{
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION007::SetItemVisibility(UGCUpdateHandle_t handle, ERemoteStoragePublishedFileVisibility_v1 eVisibility)
{
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION007::SetItemTags(UGCUpdateHandle_t updateHandle, SteamParamStringArray_t_v1* pTags)
{
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION007::SetItemContent(UGCUpdateHandle_t handle, char* pszContentFolder)
{
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION007::SetItemPreview(UGCUpdateHandle_t handle, char* pszPreviewFile)
{
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION007::RemoveItemKeyValueTags(UGCUpdateHandle_t handle, char* pchKey)
{
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION007::AddItemKeyValueTag(UGCUpdateHandle_t handle, char* pchKey, char* pchValue)
{
    STUB();
    return false;
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION007::SubmitItemUpdate(UGCUpdateHandle_t handle, char* pchChangeNote)
{
    STUB();
    return 0;
}

EItemUpdateStatus_v1 UGC_STEAMUGC_INTERFACE_VERSION007::GetItemUpdateProgress(UGCUpdateHandle_t handle, uint64* punBytesProcessed, uint64* punBytesTotal)
{
    STUB();
    return k_EItemUpdateStatusInvalid_v1;
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION007::SetUserItemVote(PublishedFileId_t nPublishedFileID, bool bVoteUp)
{
    STUB();
    return 0;
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION007::GetUserItemVote(PublishedFileId_t nPublishedFileID)
{
    STUB();
    return 0;
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION007::AddItemToFavorites(AppId_t nAppId, PublishedFileId_t nPublishedFileID)
{
    STUB();
    return 0;
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION007::RemoveItemFromFavorites(AppId_t nAppId, PublishedFileId_t nPublishedFileID)
{
    STUB();
    return 0;
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION007::SubscribeItem(PublishedFileId_t nPublishedFileID)
{
    STUB();
    return 0;
}

SteamAPICall_t UGC_STEAMUGC_INTERFACE_VERSION007::UnsubscribeItem(PublishedFileId_t nPublishedFileID)
{
    STUB();
    return 0;
}

uint32 UGC_STEAMUGC_INTERFACE_VERSION007::GetNumSubscribedItems()
{
    STUB();
    return 0;
}

uint32 UGC_STEAMUGC_INTERFACE_VERSION007::GetSubscribedItems(PublishedFileId_t* pvecPublishedFileID, uint32 cMaxEntries)
{
    STUB();
    return 0;
}

uint32 UGC_STEAMUGC_INTERFACE_VERSION007::GetItemState(PublishedFileId_t nPublishedFileID)
{
    STUB();
    return 0;
}

bool UGC_STEAMUGC_INTERFACE_VERSION007::GetItemInstallInfo(PublishedFileId_t nPublishedFileID, uint64* punSizeOnDisk, char* pchFolder, uint32 cchFolderSize, bool* pbLegacyItem)
{
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION007::GetItemDownloadInfo(PublishedFileId_t nPublishedFileID, uint64* punBytesDownloaded, uint64* punBytesTotal)
{
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION007::DownloadItem(PublishedFileId_t nPublishedFileID, bool bHighPriority)
{
    STUB();
    return false;
}

bool UGC_STEAMUGC_INTERFACE_VERSION007::BInitWorkshopForGameServer(DepotId_t unWorkshopDepotID, char* pszFolder)
{
    STUB();
    return false;
}

void UGC_STEAMUGC_INTERFACE_VERSION007::SuspendDownloads(bool bSuspend)
{
    STUB();
}


