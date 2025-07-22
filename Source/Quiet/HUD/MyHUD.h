// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MyHUD.generated.h"

/**
 * 
 */
UCLASS()
class QUIET_API AMyHUD : public AHUD
{
	GENERATED_BODY()

	virtual void BeginPlay() override;
public:
	//±³°ü
	UPROPERTY(EditAnywhere, Category = "Backpackclass")
	TSubclassOf<class UUserWidget> BackpackOverlayclass;
	UPROPERTY(BlueprintReadOnly)
	class UBackpackOverlay* BackpackOverlay;

	UPROPERTY(EditAnywhere, Category = "Backpackclass")
	TSubclassOf<class UUserWidget> ItemViewOverlayclass;
	UPROPERTY(BlueprintReadOnly)
	class UItemViewOverlay* ItemViewOverlay;

	UPROPERTY(EditAnywhere, Category = "MainMenu")
	TSubclassOf<class UUserWidget> MainMenuOverlayclass;
	UPROPERTY(BlueprintReadOnly)
	class UMainMenuOverlay* MainMenuOverlay;


	UPROPERTY(EditAnywhere, Category = "Backpackclass")
	TSubclassOf<class UInventoryGridOverlay> InventoryGridOverlayclass;
	UPROPERTY(BlueprintReadOnly)
	class UInventoryGridOverlay* InventoryGridOverlay;

	UPROPERTY(EditAnywhere, Category = "Settting")
	TSubclassOf<class UGameSetOverlay> GameSetOverlayclass;
	UPROPERTY(BlueprintReadOnly)
	class UGameSetOverlay* GameSetOverlay;

	UPROPERTY(EditAnywhere, Category = "Settting")
	TSubclassOf<class UUserWidget> ESCOverlayclass;
	UPROPERTY(BlueprintReadOnly)
	class UUserWidget* ESCOverlay;
	
	UPROPERTY(EditAnywhere, Category = "Lobby")
	TSubclassOf<class UUserWidget> LobbyHUDClass;
	UPROPERTY(EditAnywhere)
	class UUserWidget* LobbyHUD;

	UPROPERTY(EditAnywhere, Category = "Lobby")
	TSubclassOf<class UUserWidget> LevelHUDClass;
	UPROPERTY(BlueprintReadOnly)
	class UUserWidget* LevelHUD;

	UPROPERTY(EditAnywhere, Category = "Lobby")
	TSubclassOf<class UUserWidget> CardHUDClass;
	UPROPERTY(BlueprintReadOnly)
	class UUserWidget* CardHUD;

	UPROPERTY(EditAnywhere, Category = "Shop")
	TSubclassOf<class UUserWidget> ShopHUDClass;
	UPROPERTY(BlueprintReadOnly)
	class UUserWidget* ShopHUD;
};
