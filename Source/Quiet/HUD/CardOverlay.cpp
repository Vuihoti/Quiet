// 最终解释权，著作权归Vuihoti所有
#include "CardOverlay.h"
#include "Quiet/HUD/CardSlotOverlay.h"
#include "Quiet/QuietGameInstance.h"
#include "Components/UniformGridPanel.h"
#include "Components/SizeBox.h"
#include "Components/SizeBoxSlot.h"
#include "Blueprint/WidgetTree.h"

void UCardOverlay::NativePreConstruct()
{
	Super::NativePreConstruct();
	Card1->bShow = true;
	Card2->bShow = true;
	Card3->bShow = true;
	Card4->bShow = true;
	Card5->bShow = true;
    Cards = { Card1,Card2,Card3,Card4,Card5 };
    UpdateCarryCard();
	UpdatePossessCard();
    
}

void UCardOverlay::NativeConstruct()
{
    Super::NativeConstruct();

    PlayAnimation(Cast<UWidgetAnimation>(ShowAnimation));
}

void UCardOverlay::UpdateCarryCard()
{
    UQuietGameInstance* MYGameInstance = Cast<UQuietGameInstance>(GetWorld()->GetGameInstance());
    if (!MYGameInstance)
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to get game instance!"));
        return;
    }

    CurrentCards = MYGameInstance->InGamePlayerSave.CarryCards;

    // 重置所有卡片
    for (UCardSlotOverlay* Card : Cards)
    {
        if (Card)
        {
            Card->RowName = "0";
            Card->UpdateCard();
        }
    }

    int CurrentNullSlot = 0;
    // 填充非空 CurrentCards 到有效 Cards 槽位
    for (int i = 0; i < CurrentCards.Num() && CurrentNullSlot < Cards.Num(); i++)
    {
        if (CurrentCards[i] == "0") continue;

        // 跳过空槽位
        while (CurrentNullSlot < Cards.Num() && !Cards[CurrentNullSlot])
        {
            CurrentNullSlot++;
        }

        if (CurrentNullSlot < Cards.Num())
        {
            Cards[CurrentNullSlot]->RowName = FName(CurrentCards[i]);
            Cards[CurrentNullSlot]->UpdateCard();
            CurrentNullSlot++;
        }
    }

    // 可选：检查是否有未处理的 CurrentCards
    if (CurrentNullSlot >= Cards.Num())
    {
        int Unprocessed = 0;
        for (int i = 0; i < CurrentCards.Num(); i++)
        {
            if (CurrentCards[i] != "0") Unprocessed++;
        }
        Unprocessed -= CurrentNullSlot;
        if (Unprocessed > 0)
        {
            UE_LOG(LogTemp, Warning, TEXT("%d cards could not be processed due to insufficient slots."), Unprocessed);
        }
    }
}

void UCardOverlay::UpdatePossessCard()
{
    UWorld* World = GetWorld();
    if (!World) return;

    UQuietGameInstance* MYGameInstance = Cast<UQuietGameInstance>(World->GetGameInstance());
    if (!MYGameInstance) return;

    // 确保WidgetTree有效
    if (!WidgetTree) WidgetTree = Cast<UWidgetTree>(GetRootWidget());

    PossessCards = MYGameInstance->InGamePlayerSave.PossessCards;
    CurrentCards = MYGameInstance->InGamePlayerSave.CarryCards;

    PossessCards = { "1","2","3","4","5","6"};//测试所用
    
    Grid->ClearChildren(); // 清空原有内容

    for (int i = 0; i < PossessCards.Num(); i++)
    {
        // 创建SizeBox
        USizeBox* SizeBox = WidgetTree->ConstructWidget<USizeBox>(USizeBox::StaticClass());
        SizeBox->SetWidthOverride(250.0f);
        SizeBox->SetHeightOverride(350.0f);

        // 创建卡片控件
        UCardSlotOverlay* CardRef = CreateWidget<UCardSlotOverlay>(this, CardSlotClass);
        CardRef->RowName = FName(PossessCards[i]);
        CardRef->bUse = CurrentCards.Contains(PossessCards[i]);

        // 添加卡片到SizeBox
        SizeBox->AddChild(CardRef);
        for (int j = 0; j < Cards.Num(); j++) {
            if (Cards[j]->RowName == PossessCards[i]) {
                CardRef->bUse = true;
            }
        }
        if (CurrentCards.Num() == 5) {
            CardRef->bUse = true;
        }

        USizeBoxSlot* SlotRef = Cast<USizeBoxSlot>(SizeBox->Slot);
        // 配置对齐方式
        if (SlotRef !=nullptr)
        {
            SlotRef->SetHorizontalAlignment(HAlign_Center);
            SlotRef->SetVerticalAlignment(VAlign_Center);
        }

        // 添加到Grid
        Grid->AddChildToUniformGrid(SizeBox, 0, i);
    }
}