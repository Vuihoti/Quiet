#include "CardSlotOverlay.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "Engine/DataTable.h"
#include "Components/MultiLineEditableTextBox.h"
#include "Quiet/QuietGameInstance.h"
#include "Quiet/HUD/CardOverlay.h"
#include "Quiet/PlayerController/LobbyPlayerController.h"
#include "Quiet/HUD/MyHUD.h"
#include "Components/Button.h"
void UCardSlotOverlay::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	if (bUse) {
		Cover->SetVisibility(ESlateVisibility::Visible);
	}
	else {
		Cover->SetVisibility(ESlateVisibility::Hidden);
	}
}

void UCardSlotOverlay::NativePreConstruct()
{
	Super::NativePreConstruct();
	if (bShow) {
		Cover->SetVisibility(ESlateVisibility::Hidden);
	}
	UpdateCard();
    btn_Slot->OnClicked.AddDynamic(this, &UCardSlotOverlay::OnCardClicked);
    btn_Slot->OnHovered.AddDynamic(this, &UCardSlotOverlay::OnCardHover);
    btn_Slot->OnUnhovered.AddDynamic(this, &UCardSlotOverlay::OnCardUnHover);
    
}

void UCardSlotOverlay::UpdateCard()
{
    if (RowName != "0")
    {
        // 1. 加载数据表并检查有效性
        CardDataTable = LoadObject<UDataTable>(this, TEXT("DataTable'/Game/Caption/CardDataTable.CardDataTable'"));
        if (!CardDataTable)
        {
            UE_LOG(LogTemp, Error, TEXT("Failed to load CardDataTable!"));
            this->SetVisibility(ESlateVisibility::Hidden);
            return;
        }

        FString FinalName = "C" + RowName.ToString();
        // 2. 检查行数据是否存在
        FCardData* DataRef = CardDataTable->FindRow<FCardData>(FName(FinalName), "");
        if (!DataRef)
        {
            UE_LOG(LogTemp, Warning, TEXT("Row %s not found in CardDataTable!"), *FinalName);
            this->SetVisibility(ESlateVisibility::Hidden);
            return;
        }

        // 3. 安全更新数据
        Data.UID = DataRef->UID;
        Data.Name = DataRef->Name;
        Data.Message = DataRef->Message;
        Data.IMG = DataRef->IMG;

        // 4. 更新 UI（需检查控件指针）
        if (CardName) CardName->SetText(FText::FromString(Data.Name));
        if (img_slot) img_slot->SetBrushFromTexture(Data.IMG.Get());

        FString StringText = Data.Message.ToString();
        StringText = StringText.Replace(TEXT("\\"), TEXT("\n"));
        if (CardMessage) CardMessage->SetText(FText::FromString(StringText));
        this->SetVisibility(ESlateVisibility::Visible);
    }
    else
    {
        this->SetVisibility(ESlateVisibility::Hidden);
    }
}

void UCardSlotOverlay::EquipCurrentCard()
{
    if (!bUse && !bShow) {
        UWorld* World = GetWorld();
        if (!World) return;

        UQuietGameInstance* MYGameInstance = Cast<UQuietGameInstance>(World->GetGameInstance());
        if (!MYGameInstance) return;

        if (MYGameInstance->InGamePlayerSave.CarryCards.Num() != 5) {
            bUse = true;
            MYGameInstance->InGamePlayerSave.CarryCards.Add(RowName.ToString());
            MYGameInstance->SaveLocalArchive();
            ALobbyPlayerController* PlayerContorller = Cast<ALobbyPlayerController>(GetOwningPlayer());
            if (PlayerContorller->QuietHUD->CardHUD != nullptr) {
                UCardOverlay* CardOverlay = Cast<UCardOverlay>(PlayerContorller->QuietHUD->CardHUD);
                CardOverlay->UpdateCarryCard();
                CardOverlay->UpdatePossessCard();
            }
        }
    }
}

void UCardSlotOverlay::UnloadCard()
{
    if (bShow && RowName != "0") {
        UWorld* World = GetWorld();
        if (!World) return;

        UQuietGameInstance* MYGameInstance = Cast<UQuietGameInstance>(World->GetGameInstance());
        if (!MYGameInstance) return;

        if (MYGameInstance->InGamePlayerSave.CarryCards.Num() != 0) {
            MYGameInstance->InGamePlayerSave.CarryCards.Remove(RowName.ToString());
            MYGameInstance->SaveLocalArchive();
            ALobbyPlayerController* PlayerContorller = Cast<ALobbyPlayerController>(GetOwningPlayer());
            if (PlayerContorller->QuietHUD->CardHUD != nullptr) {
                UCardOverlay* CardOverlay = Cast<UCardOverlay>(PlayerContorller->QuietHUD->CardHUD);
                CardOverlay->UpdateCarryCard();
                CardOverlay->UpdatePossessCard();
            }
        }
    }
}

void UCardSlotOverlay::OnCardClicked()
{
    if (!bAble) return;
    if (bShow) {
        UnloadCard();
        PlaySound(S_Pick);
    }
    else if(!bUse){
        EquipCurrentCard();
        PlaySound(S_Pick);
    }
}

void UCardSlotOverlay::OnCardHover()
{
    if ((bShow || !bUse) && bAble) {
        Frame->SetVisibility(ESlateVisibility::Visible);
        PlaySound(S_Hover);
    }
}

void UCardSlotOverlay::OnCardUnHover()
{
    if ((bShow || !bUse) && bAble) {
        Frame->SetVisibility(ESlateVisibility::Hidden);
    }
}
