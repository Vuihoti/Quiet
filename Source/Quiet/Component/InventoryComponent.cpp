// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryComponent.h"
#include "Quiet/Actor/GameItemActor.h"
#include "Quiet/HUD/BackpackOverlay.h"
#include "Quiet/HUD/InventoryGridOverlay.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetArrayLibrary.h"
#include "Containers/UnrealString.h"
#include "Quiet/PlayerController/QuietPlayerController.h"
#include "Quiet/HUD/MyHUD.h"
#include "Quiet/HUD/InventorySlotOverlay.h"
#include "Quiet/HUD/MainMenuOverlay.h"
// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();
	Character = Character == nullptr ? Cast<AQuietCharacter>(GetOwner()) : Character;
	QuietOwnerPlayerController = QuietOwnerPlayerController == nullptr ? Cast<AQuietPlayerController>(Character->Controller) : QuietOwnerPlayerController;
	if (QuietOwnerPlayerController) {
		Inventory.SetNum(QuietOwnerPlayerController->SlotNum);
	}
	// ...
	
}

bool UInventoryComponent::AddItem(TSubclassOf<class AGameItemActor> Item, int32 Num)
{
	int MaxAmount;
	bool Successful;
	int32 AddIndex;
	FString State;
	MaxAmount = Item.GetDefaultObject()->Itemdata.MaxAmount;
	switch (Item.GetDefaultObject()->Itemdata.ItemType)
	{
		case EItemType::EIT_Passive:
			return true;
			break;
		case EItemType::EIT_Light:
			UpdataInventory(0, Item.GetDefaultObject()->Itemdata.Icon, Num, Item.GetDefaultObject()->Itemdata.ItemType,Item);
			return true;
			break;
		case EItemType::EIT_Active:
			FindSameAndNullSlot(Item, Successful, AddIndex, State);
			if (Successful) {
				if (State == "PutInNullSlot") {
					Inventory[AddIndex].Item = Item;
					Inventory[AddIndex].Amount = Num;
				}
				else if (State == "PutInSameSlot") {
					Inventory[AddIndex].Amount += Num;
				}
				UpdataInventory(AddIndex, Item.GetDefaultObject()->Itemdata.Icon, Num, Item.GetDefaultObject()->Itemdata.ItemType,Item);
//				Character->ViewingItemIntroduce = Inventory[AddIndex].Item.GetDefaultObject()->Itemdata.Introduce;
				return true;
			}
			else {
				return false;
			}
			break;
		default:
			return false;
			break;
	}
}

void UInventoryComponent::DeleteItem(TSubclassOf<class AGameItemActor> Item)
{
	int Index = -1;
	for (int i = 0; i < Inventory.Num(); i++) {
		if (Inventory[i].Item == Item) {
			Index = i;
			break;
		}
	}
	if (Index == -1) return;
	if (Inventory[Index].Amount > 1) {
		Inventory[Index].Amount -= 1;
	}
	else {
		Inventory[Index].Item = NULL;
		Inventory[Index].Amount = 0;
	}
	if (QuietOwnerPlayerController->QuietHUD->MainMenuOverlay->ActiveItemSlot->LinkSlot != nullptr) {
		QuietOwnerPlayerController->QuietHUD->MainMenuOverlay->ActiveItemSlot->LinkSlot->UpData(Inventory[Index].Item, -1);
	}
	QuietOwnerPlayerController->SetHUDActiveItemSlot(Inventory[Index].Item, Inventory[Index].Amount);

}

void UInventoryComponent::FindSameAndNullSlot(TSubclassOf<class AGameItemActor> Item, bool& Successful, int32& AddIndex, FString& State)
{
	for (int i = 0; i < Inventory.Num(); i++) {
		if (Inventory[i].Item == Item) {
			if (Inventory[i].Amount < Item.GetDefaultObject()->Itemdata.MaxAmount) {
				Successful = true;
				AddIndex = i;
				State = "PutInSameSlot";
			}
			else {
				Successful = false;
				AddIndex = i;
				State = "SameSlotMax";
			}
			break;
		}
		else {
			if (UKismetSystemLibrary::IsValidClass(Inventory[i].Item)) {
				Successful = false;
				State = "Null";
			}
			else {
				Successful = true;
				AddIndex = i;
				State = "PutInNullSlot";
				break;
			}
		}
	}

}


void UInventoryComponent::GetItemDataAtIndex(int32 Index, TSubclassOf<class AGameItemActor>& Actor, int32 Amount)
{
	//Actor = Cast<AGameItemActor>(Inventory[Index].Item);
	Amount = Inventory[Index].Amount;
}

int UInventoryComponent::FindItemNum(FName Identification)
{
	//return 0;
	for (int i = 0; i < Inventory.Num(); i++) {
		if (Inventory[i].Item != nullptr && Inventory[i].Item.GetDefaultObject()->Itemdata.Identification == Identification) {
			return Inventory[i].Amount;
		}
	}
	return 0;
}

void UInventoryComponent::BuyItem(FName Identification, int32 Price)
{
	if (Character->SoulNum < Price) {
		return;
	}
	// 1. 加载数据表并检查有效性
	CommoditySlotDataTable = LoadObject<UDataTable>(this, TEXT("DataTable'/Game/Blueprint/Actor/Inventory/ItemDataTable.ItemDataTable'"));
	if (!CommoditySlotDataTable)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to load CardDataTable!"));
		return;
	}

	// 2. 检查行数据是否存在
	FItemdata* DataRef = CommoditySlotDataTable->FindRow<FItemdata>(Identification, "");
	if (!DataRef)
	{
		return;
	}
	
	if (AddItem(DataRef->GameItemActor, 1)) {
		Character->SoulNum -= Price;
	}
}

void UInventoryComponent::SellItem(FName Identification, int32 Price)
{
	for (int i = 0; i < Inventory.Num(); i++) {
		if (Inventory[i].Item == NULL) return;
		if (Inventory[i].Item.GetDefaultObject()->Itemdata.Identification == Identification) {
			// 1. 加载数据表并检查有效性
			CommoditySlotDataTable = LoadObject<UDataTable>(this, TEXT("DataTable'/Game/Blueprint/Actor/Inventory/ItemDataTable.ItemDataTable'"));
			if (!CommoditySlotDataTable)
			{
				UE_LOG(LogTemp, Error, TEXT("Failed to load CardDataTable!"));
				return;
			}

			// 2. 检查行数据是否存在
			FItemdata* DataRef = CommoditySlotDataTable->FindRow<FItemdata>(Identification, "");
			if (!DataRef)
			{
				return;
			}
			Character->SoulNum += Price;
			DeleteItem(DataRef->GameItemActor);
			break;
		}
	}
	
}

void UInventoryComponent::UpdataInventory_Implementation(int32 Index, UTexture2D* Icon, int32 Amount, EItemType Itemtype, TSubclassOf<class AGameItemActor> Item)
{
	
	Character->UpdataSlot(Index, Icon, Amount, Itemtype,Item);
}

//void UInventoryComponent::UpdataInventory(int32 Index)
//{
//	bool isValid1 = QuietOwnerPlayerController &&
//		QuietOwnerPlayerController->QuietHUD &&
//		QuietOwnerPlayerController->QuietHUD->BackpackOverlay &&
//		QuietOwnerPlayerController->QuietHUD->BackpackOverlay->BP_InventoryGridOverlay &&
//		QuietOwnerPlayerController->QuietHUD->BackpackOverlay->BP_InventoryGridOverlay->InventorySlotOverlay;
//		;
//	if (isValid1) {
//		//FName AYY = QuietOwnerPlayerController->QuietHUD->BackpackOverlay->BP_InventoryGridOverlay->SlotArray[0].GetDefaultObject()->Itemdata.ItemName;
//		/*QuietOwnerPlayerController->QuietHUD->BackpackOverlay->BP_InventoryGridOverlay->InventorySlotOverlay->UpData(Inventory[Index].Item.GetDefaultObject()->Itemdata.ItemName,
//			Inventory[Index].Item.GetDefaultObject()->Itemdata.Icon, Inventory[Index].Item.GetDefaultObject()->Itemdata.Introduce, Inventory[Index].Item.GetDefaultObject()->Itemdata.MaxAmount,
//			Inventory[Index].Amount);*/
//		QuietOwnerPlayerController->QuietHUD->BackpackOverlay->BP_InventoryGridOverlay->InventorySlotOverlay->UpData(Inventory[Index].Item.GetDefaultObject()->Itemdata.Icon);
//		QuietOwnerPlayerController->QuietHUD->BackpackOverlay->BP_InventoryGridOverlay->InventorySlotOverlay->Index = Index;
//	}
//}

// Called every frame
void UInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

