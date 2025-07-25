// 最终解释权，著作权归Vuihoti所有


#include "CommoditySlotOverlay.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "Quiet/Component/InventoryComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Quiet/HUD/ShopOverlay.h"
void UCommoditySlotOverlay::NativePreConstruct()
{
    Super::NativePreConstruct();
    BTN->OnClicked.AddDynamic(this, &UCommoditySlotOverlay::OnButtonClick);
    BTN->OnHovered.AddDynamic(this, &UCommoditySlotOverlay::OnButtonHover);
    BTN->OnUnhovered.AddDynamic(this, &UCommoditySlotOverlay::OnButtonUnHover);
}
void UCommoditySlotOverlay::UpdateMessage()
{
    Character = Cast<AQuietCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
    // 1. 加载数据表并检查有效性
    CommoditySlotDataTable = LoadObject<UDataTable>(this, TEXT("DataTable'/Game/Blueprint/Actor/Inventory/ItemDataTable.ItemDataTable'"));
    if (!CommoditySlotDataTable)
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to load CardDataTable!"));
        this->SetVisibility(ESlateVisibility::Hidden);
        return;
    }

    // 2. 检查行数据是否存在
    FItemdata* DataRef = CommoditySlotDataTable->FindRow<FItemdata>(IdentificationCode, "");
    if (!DataRef)
    {
        this->SetVisibility(ESlateVisibility::Collapsed);
        return;
    }

    TB_Name->SetText(FText::FromString(DataRef->ItemName.ToString()));
    if (OnBuy) {
        TB_Price->SetText(FText::FromString(FString::FromInt(DataRef->Price)));
    }
    else {
        TB_Price->SetText(FText::FromString(FString::FromInt(DataRef->Price * 0.7f)));
    }
    
    TB_Carry->SetText(FText::FromString(FString::FromInt(Character->Inventory->FindItemNum(IdentificationCode))));
}

void UCommoditySlotOverlay::OnButtonHover()
{
    if (ShopUMG != nullptr) {
        ShopUMG->ShowingCommodityName = IdentificationCode;
        ShopUMG->bShowMessage = true;
    }
}

void UCommoditySlotOverlay::OnButtonUnHover()
{
    if (ShopUMG != nullptr)
        ShopUMG->ShowingCommodityName = "";
        ShopUMG->bShowMessage = false;
    }
void UCommoditySlotOverlay::OnButtonClick()
{
    if (OnBuy) {
        Character->Inventory->BuyItem(IdentificationCode, FCString::Atoi(*TB_Price->Text.ToString()));

    }
    else {
        Character->Inventory->SellItem(IdentificationCode, FCString::Atoi(*TB_Price->Text.ToString()));
    }
    UpdateMessage();
}

