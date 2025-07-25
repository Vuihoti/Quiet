// 最终解释权，著作权归Vuihoti所有

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Quiet/Structs/Structs.h"
#include "CommoditySlotOverlay.generated.h"

/**
 * 
 */
UCLASS()
class QUIET_API UCommoditySlotOverlay : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual void NativePreConstruct() override;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButton* BTN;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* TB_Name;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* TB_Price;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* TB_Carry;

	FName IdentificationCode;

	void UpdateMessage();

	UPROPERTY()
	UDataTable* CommoditySlotDataTable;

	UFUNCTION()
	void OnButtonHover();

	UFUNCTION()
	void OnButtonUnHover();

	UFUNCTION()
	void OnButtonClick();

	UPROPERTY()
	class AQuietCharacter* Character;

	UPROPERTY()
	class UShopOverlay* ShopUMG;

	bool OnBuy;
};
