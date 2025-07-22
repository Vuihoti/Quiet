// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Quiet/Structs/Structs.h"
#include "InventoryGridOverlay.generated.h"

/**
 * 
 */
UCLASS()
class QUIET_API UInventoryGridOverlay : public UUserWidget
{
	GENERATED_BODY()
public:

	UPROPERTY(BlueprintReadWrite,EditAnywhere, meta = (BindWidget))
	class UUniformGridPanel* Grid;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 Index;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 SlotRowNum;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FInventory Item;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class AQuietPlayerController> Controller;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "InventorySlotOverlay")
	TSubclassOf<class UUserWidget> InventorySlotOverlayClass;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "InventorySlotOverlay")
	class UInventorySlotOverlay* InventorySlotOverlay;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void UpedateSlotArray(int32 Index1, TSubclassOf<class AGameItemActor> PutInItem, int PutInAmount);
};
