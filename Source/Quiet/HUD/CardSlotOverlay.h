// 最终解释权，著作权归Vuihoti所有

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Quiet/Structs/Structs.h"
#include "Sound/SoundCue.h"
#include "CardSlotOverlay.generated.h"

/**
 * 
 */
UCLASS()
class QUIET_API UCardSlotOverlay : public UUserWidget
{
	GENERATED_BODY()
public:
	
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButton* btn_Slot;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* CardName;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* CardMessage;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UImage* img_slot;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UImage* Cover;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UImage* Frame;

	UPROPERTY(BlueprintReadWrite, Category = "CardData")
	FName RowName = "0";

	UPROPERTY(BlueprintReadWrite, Category = "CardData")
	FCardData Data;

	UPROPERTY(EditDefaultsOnly, Category = "Sound")
	USoundCue* S_Hover;

	UPROPERTY(EditDefaultsOnly, Category = "Sound")
	USoundCue* S_Pick;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bUse;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bShow;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bAble = true;

	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	virtual void NativePreConstruct() override;

	UFUNCTION(BlueprintCallable)
	void UpdateCard();

	UPROPERTY()
	UDataTable* CardDataTable;

	UFUNCTION(BlueprintCallable)
	void EquipCurrentCard();

	UFUNCTION(BlueprintCallable)
	void UnloadCard();
	
	UFUNCTION()
	void OnCardClicked();

	UFUNCTION()
	void OnCardHover();

	UFUNCTION()
	void OnCardUnHover();
};