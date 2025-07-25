// 最终解释权，著作权归Vuihoti所有


#include "ShopOverlay.h"
#include "Components/UniformGridPanel.h"
#include "Quiet/HUD/CommoditySlotOverlay.h"
#include "Kismet/GameplayStatics.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "Components/Image.h"
#include "Quiet/QuietCharacter.h"
#include "Components/VerticalBox.h"
#include "Quiet/Structs/ItemType.h"
#include "Quiet/Component/InventoryComponent.h"
#include "Quiet/Actor/GameItemActor.h"
void UShopOverlay::NativeConstruct()
{
	Super::NativeConstruct();
	BTN_Left->OnClicked.AddDynamic(this, &UShopOverlay::ShowBuyItem);
	BTN_Right->OnClicked.AddDynamic(this, &UShopOverlay::ShowSellItem);

	ShowBuyItem();
	
}

void UShopOverlay::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	Character = Cast<AQuietCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	if (Character != nullptr) {
		TB_SoulNum->SetText(FText::FromString(FString::FromInt(Character->SoulNum)));
	}
	if (bShowMessage) {
		UpdateMessage();
		I_View->SetVisibility(ESlateVisibility::Visible);
		Message->SetVisibility(ESlateVisibility::Visible);
	}
	else {
		I_View->SetVisibility(ESlateVisibility::Hidden);
		Message->SetVisibility(ESlateVisibility::Hidden);
	}
}

void UShopOverlay::UpdateMessage()
{
	if (ShowingCommodityName != "") {
		// 1. 加载数据表并检查有效性
		CommoditySlotDataTable = LoadObject<UDataTable>(this, TEXT("DataTable'/Game/Blueprint/Actor/Inventory/ItemDataTable.ItemDataTable'"));
		if (!CommoditySlotDataTable)
		{
			UE_LOG(LogTemp, Error, TEXT("Failed to load CardDataTable!"));
			this->SetVisibility(ESlateVisibility::Hidden);
			return;
		}

		// 2. 检查行数据是否存在
		FItemdata* DataRef = CommoditySlotDataTable->FindRow<FItemdata>(ShowingCommodityName, "");
		if (!DataRef)
		{
			this->SetVisibility(ESlateVisibility::Collapsed);
			return;
		}

		TB_SelectName->SetText(FText::FromString(DataRef->ItemName.ToString()));
		if (DataRef->ItemType == EItemType::EIT_Active) {
			TB_SelectType->SetText(FText::FromString(TEXT("类别：主动物品")));
		}
		else if (DataRef->ItemType == EItemType::EIT_Light) {
			TB_SelectType->SetText(FText::FromString(TEXT("类别：照明物品")));
		}
		else {
			TB_SelectType->SetText(FText::FromString(TEXT("类别：被动物品")));
		}
		I_View->SetBrushFromTexture(DataRef->Icon);
		TB_SelectMessage->SetText(FText::FromString(DataRef->Introduce.ToString()));
	}
}

void UShopOverlay::ShowBuyItem()
{
	G_Commodity->ClearChildren();
	TB_TopTitle->SetText(FText::FromString(TEXT("购买")));
	BTN_Left->SetVisibility(ESlateVisibility::Hidden);
	BTN_Right->SetVisibility(ESlateVisibility::Visible);
	SellingCommodity = { "FlashlightBattery","Key", "LightStone", "ShopTicket", "Cake", "HandMirror", "Hourglass", "Firecracker" };
	for (int i = 0; i < SellingCommodity.Num(); i++) {
		UCommoditySlotOverlay* CommoditySlot = CreateWidget<UCommoditySlotOverlay>(this, CommoditySlotClass);
		CommoditySlot->ShopUMG = Cast<UShopOverlay>(this);
		CommoditySlot->IdentificationCode = SellingCommodity[i];
		CommoditySlot->OnBuy = true;
		CommoditySlot->UpdateMessage();
		G_Commodity->AddChildToUniformGrid(CommoditySlot, i, 0);

	}
}

void UShopOverlay::ShowSellItem()
{
	G_Commodity->ClearChildren();
	TB_TopTitle->SetText(FText::FromString(TEXT("出售")));
	BTN_Right->SetVisibility(ESlateVisibility::Hidden);
	BTN_Left->SetVisibility(ESlateVisibility::Visible);
	for (int i = 0; i < Character->Inventory->Inventory.Num(); i++) {
		if (Character->Inventory->Inventory[i].Item != NULL) {
			UCommoditySlotOverlay* CommoditySlot = CreateWidget<UCommoditySlotOverlay>(this, CommoditySlotClass);
			CommoditySlot->ShopUMG = Cast<UShopOverlay>(this);
			CommoditySlot->IdentificationCode = Character->Inventory->Inventory[i].Item.GetDefaultObject()->Itemdata.Identification;
			CommoditySlot->OnBuy = false;
			CommoditySlot->UpdateMessage();
			G_Commodity->AddChildToUniformGrid(CommoditySlot, i, 0);
		}
		
	}
}
