// Fill out your copyright notice in the Description page of Project Settings.


#include "InventorySlotOverlay.h"
#include "Kismet/KismetTextLibrary.h"
#include "Quiet/Actor/GameItemActor.h"
#include "Components/Image.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Components/TextBlock.h"
#include "Quiet/Component/InventoryComponent.h"
//void UInventorySlotOverlay::UpData(TSubclassOf<class AGameItemActor> Item)
//{
//	int32 Amount1=0;
//	//InventoryComponent->GetItemDataAtIndex(Index, Item,Amount1);
//	UKismetSystemLibrary::PrintString(this, "["+Item.GetDefaultObject()->Itemdata.ItemName.ToString() + "]");
//	img_slot->SetBrushFromTexture(Item.GetDefaultObject()->Itemdata.Icon,true);
//	if (Amount1 > 0) {
//		Num->SetVisibility(ESlateVisibility::Visible);
//	}
//	else {
//		Num->SetVisibility(ESlateVisibility::Hidden);
//	}
//	Num->SetText(UKismetTextLibrary::Conv_IntToText(Amount1));
//}
