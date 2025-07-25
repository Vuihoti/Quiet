// 最终解释权，著作权归Vuihoti所有

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "LobbyPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class QUIET_API ALobbyPlayerController : public APlayerController
{
	GENERATED_BODY()
	virtual void BeginPlay() override;
public:
	UFUNCTION(BlueprintCallable)
	void SetHUDSetting();

	UFUNCTION(BlueprintCallable)
	void SetHUDGameSet();

	UPROPERTY(BlueprintReadOnly)
	class AMyHUD* QuietHUD;

	UFUNCTION(BlueprintCallable)
	void ShowMainMenu(bool Show);

	UFUNCTION(BlueprintCallable)
	class UUserWidget* ShowHUDLevel(bool Show);

	UFUNCTION(BlueprintCallable)
	class UUserWidget* ShowHUDCard(bool Show);

	UPROPERTY(EditDefaultsOnly)
	class UAkAudioEvent* PauseEvent;

	UPROPERTY(EditDefaultsOnly)
	class UAkAudioEvent* ResumeEvent;
};
