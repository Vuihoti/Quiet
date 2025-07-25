// 最终解释权，著作权归Vuihoti所有

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Quiet/HUD/CommoditySlotOverlay.h"
#include "ShopOverlay.generated.h"

/**
 * 
 */
UCLASS()
class QUIET_API UShopOverlay : public UUserWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButton* BTN_Left;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* TB_TopTitle;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButton* BTN_Right;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UUniformGridPanel* G_Commodity;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UVerticalBox* Message;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* TB_SelectName;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* TB_SelectType;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* TB_SelectMessage;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* TB_SoulNum;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UImage* I_View;

	virtual void NativeConstruct() override;

	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	UPROPERTY()
	class AQuietCharacter* Character;

	UPROPERTY(EditDefaultsOnly, Category = "Widgets")
	TSubclassOf<UCommoditySlotOverlay> CommoditySlotClass;

	TArray<FName> SellingCommodity;

	bool bShowMessage = false;

	FName ShowingCommodityName;

	void UpdateMessage();

	UPROPERTY()
	UDataTable* CommoditySlotDataTable;

	UFUNCTION()
	void ShowBuyItem();

	UFUNCTION()
	void ShowSellItem();

};
