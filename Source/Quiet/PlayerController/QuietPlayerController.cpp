// Fill out your copyright notice in the Description page of Project Settings.


#include "QuietPlayerController.h"
#include "Quiet/CombatComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Quiet/QuietCharacter.h"
#include "Blueprint/UserWidget.h"
#include "Quiet/HUD/MyHUD.h"
#include "Quiet/HUD/BackpackOverlay.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Quiet/HUD/ItemViewOverlay.h"
#include "Quiet/HUD/InventorySlotOverlay.h"
#include "Quiet/HUD/InventoryGridOverlay.h"
#include "Quiet/HUD/MainMenuOverlay.h"
#include "Quiet/HUD/GameSetOverlay.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Quiet/Actor/GameItemActor.h"
#include "AkAudio/Classes/AkGameplayStatics.h"
#include "AkAudio/Public/AkAudioDevice.h" 
void AQuietPlayerController::BeginPlay()
{
	Super::BeginPlay();
	QuietHUD = Cast<AMyHUD>(GetHUD());
	if (QuietHUD && QuietHUD->MainMenuOverlayclass) {
		QuietHUD->MainMenuOverlay = CreateWidget<UMainMenuOverlay>(this, QuietHUD->MainMenuOverlayclass);
		QuietHUD->MainMenuOverlay->AddToViewport();
	}
	if (QuietHUD && QuietHUD->InventoryGridOverlayclass) {
		QuietHUD->InventoryGridOverlay = CreateWidget<UInventoryGridOverlay>(this, QuietHUD->InventoryGridOverlayclass);
	}
	//if (QuietHUD && QuietHUD->BackpackOverlayclass) {
	//	QuietHUD->BackpackOverlay = CreateWidget<UBackpackOverlay>(this, QuietHUD->BackpackOverlayclass);
	//	QuietHUD->BackpackOverlay->LightItemSlot1->UpData(QuietHUD->BackpackOverlay->LightItemSlot1->Item, 1);
		if (BringLightItem.Item) {
			SetHUDLightItemSlot(BringLightItem.Item, BringLightItem.Amount);
		}
		else {
			SetHUDLightItemSlot(Lamp, 1);
		}
	//	//SetHUDActiveItemSlot(BringActiveItem.Item, BringActiveItem.Amount);
	//	SetHUDPassiveItemSlot(BringPassiveItem.Item, 1);
	//	LightItem = QuietHUD->MainMenuOverlay->LightItemSlot->Item;

	//}
	if (QuietHUD && QuietHUD->ItemViewOverlayclass) {
		QuietHUD->ItemViewOverlay = CreateWidget<UItemViewOverlay>(this, QuietHUD->ItemViewOverlayclass);
		QuietHUD->ItemViewOverlay->SetVisibility(ESlateVisibility::Hidden);
		QuietHUD->ItemViewOverlay->AddToViewport();
	}
	

}

void AQuietPlayerController::SetHUDBackpack()
{
	QuietHUD = QuietHUD == nullptr ? Cast<AMyHUD>(GetHUD()) : QuietHUD;
	bool bHUDValid = QuietHUD && QuietHUD->BackpackOverlay;

	//if (bHUDValid) {
	//	if (isBackpack) {
	//		isBackpack = false;
	//		ResetIgnoreLookInput();
	//		bShowMouseCursor = false;
	//		QuietHUD->BackpackOverlay->SetVisibility(ESlateVisibility::Hidden);
	//		UWidgetBlueprintLibrary::SetInputMode_GameOnly(this);
	//	}
	//	else {
	//		isBackpack = true;
	//		SetIgnoreLookInput(true);
	//		bShowMouseCursor = true;
	//		QuietHUD->BackpackOverlay->SetVisibility(ESlateVisibility::Visible);
	//		UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(this, QuietHUD->BackpackOverlay);
	//	}
	//}
	if (QuietHUD && QuietHUD->BackpackOverlayclass) {
		if (isBackpack) {
			QuietHUD->BackpackOverlay->RemoveFromParent();
			QuietHUD->BackpackOverlay = nullptr;
			ShowMainMenu(true);
			isBackpack = false;
			ResetIgnoreLookInput();
			bShowMouseCursor = false;
			UWidgetBlueprintLibrary::SetInputMode_GameOnly(this);
		}
		else {
			if (QuietHUD->BackpackOverlay == nullptr) {
				QuietHUD->BackpackOverlay = CreateWidget<UBackpackOverlay>(this, QuietHUD->BackpackOverlayclass);
				QuietHUD->BackpackOverlay->AddToViewport();
				UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(this, QuietHUD->ShopHUD, EMouseLockMode::DoNotLock, false);
				isBackpack = true;
				SetIgnoreLookInput(true);
				bShowMouseCursor = true;
			}
		}
	}
}

void AQuietPlayerController::SetHUDView()
{
	QuietHUD = QuietHUD == nullptr ? Cast<AMyHUD>(GetHUD()) : QuietHUD;
		if (isPaused) {
			isPaused = false;
			ResetIgnoreLookInput();
			bShowMouseCursor = false;
			QuietHUD->ItemViewOverlay->SetVisibility(ESlateVisibility::Hidden);
			if (isBackpack) {
				QuietHUD->BackpackOverlay->SetVisibility(ESlateVisibility::Visible);
			}
			else {
				ShowMainMenu(true);
			}
		}
		else {
			if (isBackpack) {
				QuietHUD->BackpackOverlay->SetVisibility(ESlateVisibility::Hidden);
			}
			else {
				ShowMainMenu(false);
			}
			isPaused = true;
			SetIgnoreLookInput(true);
			bShowMouseCursor = true;
			QuietHUD->ItemViewOverlay->SetVisibility(ESlateVisibility::Visible);
		}
}

void AQuietPlayerController::SetHUDSetting()
{
	if (QuietHUD && QuietHUD->ESCOverlayclass) {
		FOnAkPostEventCallback nullCallback;
		AkUniqueID bgmEventID = AK::SoundEngine::GetIDFromString("Environment_EV");
		if (QuietHUD->ESCOverlay) {
			QuietHUD->ESCOverlay->RemoveFromParent();
			QuietHUD->ESCOverlay = nullptr;
			UWidgetBlueprintLibrary::SetInputMode_GameOnly(this);
			SetShowMouseCursor(false);
			ShowMainMenu(true);
			UGameplayStatics::SetGamePaused(this, false);
			UAkGameplayStatics::PostEvent(ResumeEvent, nullptr, NULL, nullCallback);
		}
		else {
			QuietHUD->ESCOverlay = CreateWidget<UUserWidget>(this, QuietHUD->ESCOverlayclass);
			QuietHUD->ESCOverlay->AddToViewport();
			UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(this, QuietHUD->ESCOverlay, EMouseLockMode::DoNotLock, false);
			SetShowMouseCursor(true);
			ShowMainMenu(false);
			UGameplayStatics::SetGamePaused(this, true);
			UAkGameplayStatics::PostEvent(PauseEvent, nullptr, NULL, nullCallback);
			
		}
	}
}

void AQuietPlayerController::SetHUDGameSet()
{
	if (QuietHUD && QuietHUD->GameSetOverlayclass) {
		if (QuietHUD->GameSetOverlay) {
			QuietHUD->GameSetOverlay->RemoveFromParent();
			QuietHUD->GameSetOverlay = nullptr;
			Cast<AQuietCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0))->CharacterType = ECharacterType::ECT_Free;
		}
		else {
			QuietHUD->GameSetOverlay = CreateWidget<UGameSetOverlay>(this, QuietHUD->GameSetOverlayclass);
			QuietHUD->GameSetOverlay->AddToViewport();
			UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(this, QuietHUD->GameSetOverlay,EMouseLockMode::DoNotLock,false);
			SetShowMouseCursor(true);
			Cast<AQuietCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0))->CharacterType = ECharacterType::ECT_GameSetting;
		}
	}
	
}

void AQuietPlayerController::ShowItemIntroduce(bool Show)
{
	if (Show) {
		QuietHUD->ItemViewOverlay->SetIntroducePanelOpacity(1);
	}
	else {
		QuietHUD->ItemViewOverlay->SetIntroducePanelOpacity(0);
	}
}

void AQuietPlayerController::SetItemIntroduce(TSubclassOf<class AGameItemActor> Item)
{
	QuietHUD->ItemViewOverlay->Item = Item;
}

void AQuietPlayerController::SetPressETip(bool IsReading)
{
	QuietHUD->ItemViewOverlay->SetPressEText(IsReading);
}

void AQuietPlayerController::ShowMainMenu(bool Show)
{
	if (Show) {
		QuietHUD->MainMenuOverlay->SetVisibility(ESlateVisibility::Visible);
	}
	else {
		QuietHUD->MainMenuOverlay->SetVisibility(ESlateVisibility::Hidden);
	}
}

void AQuietPlayerController::ShowHUDShop(bool Show)
{
	if (QuietHUD && QuietHUD->ShopHUDClass) {
		if (!Show) {
			QuietHUD->ShopHUD->RemoveFromParent();
			QuietHUD->ShopHUD = nullptr;
			UWidgetBlueprintLibrary::SetInputMode_GameOnly(this);
			SetShowMouseCursor(false);
			ResetIgnoreLookInput();
			Cast<AQuietCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0))->GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Walking);
			ShowMainMenu(true);
			Cast<AQuietCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0))->CharacterType = ECharacterType::ECT_Free;
		}
		else {
			if (QuietHUD->ShopHUD == nullptr) {
				QuietHUD->ShopHUD = CreateWidget<UUserWidget>(this, QuietHUD->ShopHUDClass);
				QuietHUD->ShopHUD->AddToViewport();
				UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(this, QuietHUD->ShopHUD, EMouseLockMode::DoNotLock, false);
				SetShowMouseCursor(true);
				SetIgnoreLookInput(true);
				Cast<AQuietCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0))->GetCharacterMovement()->DisableMovement();
				ShowMainMenu(false);
				Cast<AQuietCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0))->CharacterType = ECharacterType::ECT_OnShop;
			}
		}
	}
}

void AQuietPlayerController::SetHUDPassiveItemSlot(TSubclassOf<class AGameItemActor> PutInItem, int PutInAmount)
{
	BringPassiveItem.Item = PutInItem;
	BringPassiveItem.Amount = PutInAmount;
	QuietHUD->MainMenuOverlay->PassiveItemSlot->UpData(PutInItem, PutInAmount);
}

void AQuietPlayerController::SetHUDActiveItemSlot(TSubclassOf<class AGameItemActor> PutInItem, int PutInAmount)
{
	BringActiveItem.Item = PutInItem;
	BringActiveItem.Amount = PutInAmount;
	QuietHUD->MainMenuOverlay->ActiveItemSlot->UpData(PutInItem, PutInAmount);
}

void AQuietPlayerController::SetHUDLightItemSlot(TSubclassOf<class AGameItemActor> PutInItem, int PutInAmount)
{
	BringLightItem.Item = PutInItem;
	BringLightItem.Amount = PutInAmount;
	LightItem = PutInItem;
	QuietHUD->MainMenuOverlay->LightItemSlot->UpData(PutInItem, PutInAmount);
}
