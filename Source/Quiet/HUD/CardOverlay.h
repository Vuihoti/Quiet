// 最终解释权，著作权归Vuihoti所有

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Animation/WidgetAnimation.h"
#include "CardOverlay.generated.h"

/**
 * 
 */
UCLASS()
class QUIET_API UCardOverlay : public UUserWidget
{
	GENERATED_BODY()
public:

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UCardSlotOverlay* Card1;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UCardSlotOverlay* Card2;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UCardSlotOverlay* Card3;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UCardSlotOverlay* Card4;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UCardSlotOverlay* Card5;

	TArray<FString> CurrentCards;

	TArray<FString> PossessCards;

	UPROPERTY(EditDefaultsOnly, Category = "Widgets")
	TSubclassOf<UCardSlotOverlay> CardSlotClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Animation")
	UWidgetAnimation* ShowAnimation;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UUniformGridPanel* Grid;

	UFUNCTION()
	void UpdateCarryCard();

	UFUNCTION()
	void UpdatePossessCard();

	virtual void NativePreConstruct() override;

	virtual void NativeConstruct() override;

	TArray<UCardSlotOverlay*> Cards;

};
