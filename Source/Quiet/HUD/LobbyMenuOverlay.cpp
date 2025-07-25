// 最终解释权，著作权归Vuihoti所有


#include "LobbyMenuOverlay.h"
#include "Components/Button.h"
#include "Quiet/HUD/GameSetOverlay.h"
#include "Kismet/KismetSystemLibrary.h"
void ULobbyMenuOverlay::NativeConstruct()
{
	Super::NativeConstruct();

	btn_GameSetting->OnClicked.AddDynamic(this, &ULobbyMenuOverlay::btn_GameSettingPressed);
}

void ULobbyMenuOverlay::btn_GameSettingPressed()
{
	GameSetOverlay = CreateWidget<UGameSetOverlay>(this, GameSetOverlayclass);
	GameSetOverlay->AddToViewport();
}
