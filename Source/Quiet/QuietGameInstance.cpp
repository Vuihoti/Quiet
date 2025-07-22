// Fill out your copyright notice in the Description page of Project Settings.


#include "QuietGameInstance.h"
#include "Quiet/Archive/SaveGameSetting.h"
#include "Quiet/Archive/SaveGamePlayerInGame.h"
#include "Kismet/GamePlayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Quiet/PlayerController/QuietPlayerController.h"
#include "GameFramework/GameUserSettings.h"
void UQuietGameInstance::LodingLocalSettings()
{
	GameLocalSetting = UGameUserSettings::GetGameUserSettings();
	switch (GameLocalSetting->GetFullscreenMode())
	{
	case EWindowMode::Fullscreen:
		PlayerSet.WindowMode = "FullScreen";
		break;
	case EWindowMode::WindowedFullscreen:
		PlayerSet.WindowMode = "WindowedFullscreen";
		break;
	case EWindowMode::Windowed:
		PlayerSet.WindowMode = "Windowed";
		break;
	}
	PlayerSet.Resolution =  GameLocalSetting->GetScreenResolution();
	if (GameLocalSetting->GetFrameRateLimit()==1000.f) {
		PlayerSet.MaxFPS = "NoLimit";
	}
	else {
		PlayerSet.MaxFPS = FString::FromInt(GameLocalSetting->GetFrameRateLimit());
	}
	PlayerSet.VSync = GameLocalSetting->IsVSyncEnabled();

	PlayerSet.ViewDistance = GameLocalSetting->GetViewDistanceQuality();
	PlayerSet.GlobalIllumination = GameLocalSetting->GetGlobalIlluminationQuality();
	PlayerSet.AntiAliasing = GameLocalSetting->GetAntiAliasingQuality();
	PlayerSet.PostProcessing = GameLocalSetting->GetPostProcessingQuality();
	PlayerSet.Reflection = GameLocalSetting->GetReflectionQuality();
	PlayerSet.Texture = GameLocalSetting->GetTextureQuality();
	PlayerSet.Shadow = GameLocalSetting->GetShadowQuality();
	PlayerSet.Shading = GameLocalSetting->GetShadingQuality();

	if (UGameplayStatics::DoesSaveGameExist("SG_Setting", 0)) {
		SaveGameSetting = Cast<USaveGameSetting>(UGameplayStatics::LoadGameFromSlot("SG_Setting", 0));
		PlayerSet = SaveGameSetting->LocalGameSetting;
	}
	else {
		SaveGameSetting = SaveGameSetting == nullptr ? Cast<USaveGameSetting>(UGameplayStatics::CreateSaveGameObject(SaveGameSettingclass)) : SaveGameSetting;
		SaveGameSetting->LocalGameSetting = PlayerSet;
		UGameplayStatics::SaveGameToSlot(SaveGameSetting, "SG_Setting", 0);
	}
}

void UQuietGameInstance::LodingLocalArchive()
{
	SavePlayerData = Cast<USaveGamePlayerInGame>(UGameplayStatics::LoadGameFromSlot("SG_Player", 0));
	InGamePlayerSave = SavePlayerData->PlayerData;
}

void UQuietGameInstance::SaveLocalArchive()
{
	SavePlayerData = Cast<USaveGamePlayerInGame>(UGameplayStatics::LoadGameFromSlot("SG_Player", 0));
	SavePlayerData->PlayerData = InGamePlayerSave;
	UGameplayStatics::SaveGameToSlot(SavePlayerData, "SG_Player", 0);
}

void UQuietGameInstance::SaveLocalGameSetting()
{
	if (UGameplayStatics::DoesSaveGameExist("SG_Setting", 0)) {
		SaveGameSetting = Cast<USaveGameSetting>(UGameplayStatics::LoadGameFromSlot("SG_Setting", 0));
		SaveGameSetting->LocalGameSetting = PlayerSet;
		UGameplayStatics::SaveGameToSlot(SaveGameSetting, "SG_Setting", 0);
	}
}

void UQuietGameInstance::CreateANewArchive()
{
	SavePlayerData =Cast<USaveGamePlayerInGame>(UGameplayStatics::CreateSaveGameObject(SavePlayerDatagclass));
	SavePlayerData->PlayerData = InGamePlayerSave;
	UGameplayStatics::SaveGameToSlot(SavePlayerData, "SG_Player", 0);
}
