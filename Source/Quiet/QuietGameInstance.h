// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Quiet/Structs/Structs.h"
#include "QuietGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class QUIET_API UQuietGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	FGameSets PlayerSet;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UGameUserSettings* GameLocalSetting;

	UFUNCTION(BlueprintCallable)
	void LodingLocalSettings();

	UFUNCTION(BlueprintCallable)
	void LodingLocalArchive();

	UFUNCTION(BlueprintCallable)
	void SaveLocalArchive();

	UFUNCTION(BlueprintCallable)
	void SaveLocalGameSetting();

	UFUNCTION(BlueprintCallable)
	void CreateANewArchive();

	UPROPERTY(EditAnywhere, Category = "Archive")
	TSubclassOf<class USaveGame> SaveGameSettingclass;
	UPROPERTY(BlueprintReadOnly)
	class USaveGameSetting* SaveGameSetting;

	UPROPERTY(EditAnywhere, Category = "Archive")
	TSubclassOf<class USaveGame> SavePlayerDatagclass;
	UPROPERTY(BlueprintReadOnly)
	class USaveGamePlayerInGame* SavePlayerData;

	UPROPERTY(BlueprintReadWrite)
	FPlayerData InGamePlayerSave;

	//第一次进入游戏
	UPROPERTY(BlueprintReadWrite)
	bool FirstTime;

	UPROPERTY(BlueprintReadWrite, Category = "CurrentLevel")
	FString CurrentLevelName;

	UPROPERTY(BlueprintReadWrite, Category = "CurrentLevel")
	FString CurrentLevelDifficulty;
};
