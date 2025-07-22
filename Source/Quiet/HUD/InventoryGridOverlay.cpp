// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryGridOverlay.h"
#include "Quiet/PlayerController/QuietPlayerController.h"
#include "Quiet/HUD/InventorySlotOverlay.h"
#include "Components/UniformGridPanel.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetArrayLibrary.h"
#include "Kismet/KismetMathLibrary.h"
//void UInventoryGridOverlay::PreConstruct()
//{
//	if (Controller) {
//		AQuietPlayerController* playerController = Cast<AQuietPlayerController>(Controller);
//		for (int i = 0; i < playerController->SlotNum - 1; i++) {
//			InventorySlotOverlay = CreateWidget<UInventorySlotOverlay>(playerController, InventorySlotOverlayClass);
//			InventorySlotOverlay->Index = i;
//			*SlotArray.AddUnique(InventorySlotOverlay);
//			Grid->AddChildToUniformGrid(InventorySlotOverlay, InventorySlotOverlay->Index / SlotRowNum, UKismetMathLibrary::Divide_FloatFloat(UKismetMathLibrary::Conv_IntToFloat(InventorySlotOverlay->Index), SlotRowNum));
//		}
//	}
//	
//}

void UInventoryGridOverlay::UpedateSlotArray_Implementation(int32 Index1, TSubclassOf<class AGameItemActor> PutInItem, int PutInAmount)
{
}
