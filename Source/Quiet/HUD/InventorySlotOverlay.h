// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Quiet/Structs/Structs.h"
#include "InventorySlotOverlay.generated.h"

/**
 * 
 */
UCLASS()
class QUIET_API UInventorySlotOverlay : public UUserWidget
{
	GENERATED_BODY()
public:

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButton* btn_slot;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* Num;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UImage* img_slot;
	

	UPROPERTY(BlueprintReadWrite,EditAnywhere, meta = (ExposeOnSpawn = true))
	int32 Index;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FItemdata Itemdata;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 Amount;

	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	TSubclassOf<class AGameItemActor> Item;

	UPROPERTY()
	class UInventoryComponent* InventoryComponent;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UInventorySlotOverlay* LinkSlot;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	//void UpData(FName ItemName,UTexture2D* Icon, FText Introduce, int32 MaxAmount, int32 NowAmount);
	void UpData(TSubclassOf<class AGameItemActor> PutInItem,int PutInAmount);
};
