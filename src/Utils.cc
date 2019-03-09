#include "steam_api.h"

Utils_SteamUtils007::Utils_SteamUtils007()
{
}

uint32 Utils_SteamUtils007::GetSecondsSinceAppActive()
{
    STUB();
    return 0;
}

uint32 Utils_SteamUtils007::GetSecondsSinceComputerActive()
{
    STUB();
    return 0;
}

EUniverse_v1 Utils_SteamUtils007::GetConnectedUniverse()
{
    STUB();
}

uint32 Utils_SteamUtils007::GetServerRealTime()
{
    STUB();
    return 0;
}

const char * Utils_SteamUtils007::GetIPCountry()
{
    STUB();
}

bool Utils_SteamUtils007::GetImageSize(int iImage, uint32* pnWidth, uint32* pnHeight)
{
    STUB();
    return false;
}

bool Utils_SteamUtils007::GetImageRGBA(int iImage, uint8* pubDest, int nDestBufferSize)
{
    STUB();
    return false;
}

bool Utils_SteamUtils007::GetCSERIPPort(uint32* unIP, uint16* usPort)
{
    STUB();
    return false;
}

uint8 Utils_SteamUtils007::GetCurrentBatteryPower()
{
    STUB();
    return 0;
}

uint32 Utils_SteamUtils007::GetAppID()
{
    STUB();
    return 0;
}

void Utils_SteamUtils007::SetOverlayNotificationPosition(ENotificationPosition_v1 eNotificationPosition)
{
    STUB();
}

bool Utils_SteamUtils007::IsAPICallCompleted(SteamAPICall_t hSteamAPICall, bool* pbFailed)
{
    STUB();
    return false;
}

ESteamAPICallFailure_v1 Utils_SteamUtils007::GetAPICallFailureReason(SteamAPICall_t hSteamAPICall)
{
    STUB();
}

bool Utils_SteamUtils007::GetAPICallResult(SteamAPICall_t hSteamAPICall, void* pCallback, int cubCallback, int iCallbackExpected, bool* pbFailed)
{
    STUB();
    return false;
}

void Utils_SteamUtils007::RunFrame()
{
    STUB();
}

uint32 Utils_SteamUtils007::GetIPCCallCount()
{
    STUB();
    return 0;
}

void Utils_SteamUtils007::SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction)
{
    STUB();
}

bool Utils_SteamUtils007::IsOverlayEnabled()
{
    STUB();
    return false;
}

bool Utils_SteamUtils007::BOverlayNeedsPresent()
{
    STUB();
    return false;
}

SteamAPICall_t Utils_SteamUtils007::CheckFileSignature(char* szFileName)
{
    STUB();
    return 0;
}

bool Utils_SteamUtils007::ShowGamepadTextInput(EGamepadTextInputMode_v1 eInputMode, EGamepadTextInputLineMode_v1 eLineInputMode, char* pchDescription, uint32 unCharMax, char* pchExistingText)
{
    STUB();
    return false;
}

uint32 Utils_SteamUtils007::GetEnteredGamepadTextLength()
{
    STUB();
    return 0;
}

bool Utils_SteamUtils007::GetEnteredGamepadTextInput(char* pchText, uint32 cchText)
{
    STUB();
    return false;
}

const char * Utils_SteamUtils007::GetSteamUILanguage()
{
    STUB();
}

bool Utils_SteamUtils007::IsSteamRunningInVR()
{
    STUB();
    return false;
}

void Utils_SteamUtils007::SetOverlayNotificationInset(int nHorizontalInset, int nVerticalInset)
{
    STUB();
}

