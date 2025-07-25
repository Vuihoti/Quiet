// 最终解释权，著作权归Vuihoti所有

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Animation/WidgetAnimation.h"
#include "MainMenuOverlay.generated.h"

/**
 * 
 */
UCLASS()
class QUIET_API UMainMenuOverlay : public UUserWidget
{
	GENERATED_BODY()
private:

public:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UInventorySlotOverlay* ActiveItemSlot;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UInventorySlotOverlay* PassiveItemSlot;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UInventorySlotOverlay* LightItemSlot;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UProgressBar* FlashLightElectric;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UProgressBar* RedK;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* FPS;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UImage* IMG1;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UImage* IMG2;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UProgressBar* TPLine;

	void ShowFPS(bool Show);

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Animation")
	UWidgetAnimation* ShowSoulNumAnimation;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Animation")
	UWidgetAnimation* ShowFilthAnimation;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Animation")
	UWidgetAnimation* ShowManiaAnimation;

	void PlaySoulNumAnimation(){ PlayAnimation(Cast<UWidgetAnimation>(ShowSoulNumAnimation)); }

	void PlayFilthAnimation(bool bUpend) {
		if (bUpend) PlayAnimation(Cast<UWidgetAnimation>(ShowFilthAnimation), 0, 1, EUMGSequencePlayMode::Reverse);
		else PlayAnimation(Cast<UWidgetAnimation>(ShowFilthAnimation));
	}

	void PlayManiaAnimation(bool bUpend) {
		if (bUpend) PlayAnimation(Cast<UWidgetAnimation>(ShowManiaAnimation), 0, 1, EUMGSequencePlayMode::Reverse);
		else PlayAnimation(Cast<UWidgetAnimation>(ShowManiaAnimation));
	}
};
