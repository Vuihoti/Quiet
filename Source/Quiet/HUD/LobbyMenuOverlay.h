// 最终解释权，著作权归Vuihoti所有

#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "LobbyMenuOverlay.generated.h"

/**
 * 
 */
UCLASS()
class QUIET_API ULobbyMenuOverlay : public UCommonActivatableWidget
{
	GENERATED_BODY()
public:
	virtual void NativeConstruct() override;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class UUserWidget> GameSetOverlayclass;
	UPROPERTY(BlueprintReadWrite)
	class UGameSetOverlay* GameSetOverlay;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButton* btn_StartGame;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButton* btn_GameSetting;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButton* btn_ListOfDevelopers;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButton* btn_Quit;

	UFUNCTION(BlueprintCallable)
	void btn_GameSettingPressed();
};
