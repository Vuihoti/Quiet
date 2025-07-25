// 最终解释权，著作权归Vuihoti所有


#include "LobbyPlayerController.h"
#include "Quiet/CombatComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Quiet/QuietCharacter.h"
#include "Quiet/Lobby/LobbyCharacter.h"
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
#include "Quiet/Actor/GameItemActor.h"
void ALobbyPlayerController::BeginPlay()
{
	Super::BeginPlay();
	QuietHUD = Cast<AMyHUD>(GetHUD());
	if (QuietHUD && QuietHUD->LobbyHUDClass) {
		QuietHUD->LobbyHUD = CreateWidget<UUserWidget>(this, QuietHUD->LobbyHUDClass);
		QuietHUD->LobbyHUD->AddToViewport();
	}
	QuietHUD->CardHUD = nullptr;
}

void ALobbyPlayerController::SetHUDSetting()
{
	if (QuietHUD && QuietHUD->ESCOverlayclass) {
		FOnAkPostEventCallback nullCallback;
		if (QuietHUD->ESCOverlay) {
			QuietHUD->ESCOverlay->RemoveFromParent();
			QuietHUD->ESCOverlay = nullptr;
			UWidgetBlueprintLibrary::SetInputMode_GameOnly(this);
			SetShowMouseCursor(false);
			ShowMainMenu(true);
			UGameplayStatics::SetGamePaused(GetWorld(), false);
			UAkGameplayStatics::PostEvent(ResumeEvent, nullptr, NULL, nullCallback);
		}
		else {
			QuietHUD->ESCOverlay = CreateWidget<UUserWidget>(this, QuietHUD->ESCOverlayclass);
			QuietHUD->ESCOverlay->AddToViewport();
			UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(this, QuietHUD->ESCOverlay, EMouseLockMode::DoNotLock, false);
			SetShowMouseCursor(true);
			ShowMainMenu(false);
			UGameplayStatics::SetGamePaused(GetWorld(), true);
			UAkGameplayStatics::PostEvent(PauseEvent, nullptr, NULL, nullCallback);
			
		}
	}
}

void ALobbyPlayerController::SetHUDGameSet()
{
	if (QuietHUD && QuietHUD->GameSetOverlayclass) {
		if (QuietHUD->GameSetOverlay) {
			QuietHUD->GameSetOverlay->RemoveFromParent();
			QuietHUD->GameSetOverlay = nullptr;
			Cast<ALobbyCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0))->CharacterType = ECharacterType::ECT_Free;
		}
		else {
			QuietHUD->GameSetOverlay = CreateWidget<UGameSetOverlay>(this, QuietHUD->GameSetOverlayclass);
			QuietHUD->GameSetOverlay->AddToViewport();
			UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(this, QuietHUD->GameSetOverlay, EMouseLockMode::DoNotLock, false);
			SetShowMouseCursor(true);
			Cast<ALobbyCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0))->CharacterType = ECharacterType::ECT_GameSetting;
		}
	}
}

void ALobbyPlayerController::ShowMainMenu(bool Show)
{
	QuietHUD = Cast<AMyHUD>(GetHUD());
	if (Show && QuietHUD && QuietHUD->LobbyHUD) {
		QuietHUD->LobbyHUD->SetVisibility(ESlateVisibility::Visible);
	}
	else {
		QuietHUD->LobbyHUD->SetVisibility(ESlateVisibility::Hidden);
	}
}

UUserWidget* ALobbyPlayerController::ShowHUDLevel(bool Show)
{
	if (QuietHUD && QuietHUD->LevelHUDClass) {
		if (QuietHUD->LevelHUD) {
			QuietHUD->LevelHUD->RemoveFromParent();
			QuietHUD->LevelHUD = nullptr;
			UWidgetBlueprintLibrary::SetInputMode_GameOnly(this);
			SetShowMouseCursor(false);
			ShowMainMenu(true);
			ResetIgnoreLookInput();
			Cast<ALobbyCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0))->GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Walking);
			Cast<ALobbyCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0))->CharacterType = ECharacterType::ECT_Free;
		}
		else {
			QuietHUD->LevelHUD = CreateWidget<UUserWidget>(this, QuietHUD->LevelHUDClass);
			QuietHUD->LevelHUD->AddToViewport();
			UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(this, QuietHUD->LevelHUD, EMouseLockMode::DoNotLock, false);
			SetShowMouseCursor(true);
			ShowMainMenu(false);
			SetIgnoreLookInput(true);
			Cast<ALobbyCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0))->GetCharacterMovement()->DisableMovement();
			Cast<ALobbyCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0))->CharacterType = ECharacterType::ECT_PickLevel;
		}
	}
	return QuietHUD->LevelHUD;
}

UUserWidget* ALobbyPlayerController::ShowHUDCard(bool Show)
{
	if (QuietHUD && QuietHUD->CardHUDClass) {
		if (!Show) {
			QuietHUD->CardHUD->RemoveFromParent();
			QuietHUD->CardHUD = nullptr;
			UWidgetBlueprintLibrary::SetInputMode_GameOnly(this);
			SetShowMouseCursor(false);
			ShowMainMenu(true);
			ResetIgnoreLookInput();
			Cast<ALobbyCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0))->GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Walking);
			Cast<ALobbyCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0))->CharacterType = ECharacterType::ECT_Free;
		}
		else {
			if (QuietHUD->CardHUD == nullptr) {
				QuietHUD->CardHUD = CreateWidget<UUserWidget>(this, QuietHUD->CardHUDClass);
				QuietHUD->CardHUD->AddToViewport();
				UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(this, QuietHUD->CardHUD, EMouseLockMode::DoNotLock, false);
				SetShowMouseCursor(true);
				ShowMainMenu(false);
				SetIgnoreLookInput(true);
				Cast<ALobbyCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0))->GetCharacterMovement()->DisableMovement();
				Cast<ALobbyCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0))->CharacterType = ECharacterType::ECT_ChangeCard;
			}
		}
	}
	return QuietHUD->CardHUD;
}
