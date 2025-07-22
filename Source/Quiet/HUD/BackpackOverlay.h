// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BackpackOverlay.generated.h"

/**
 * 
 */
UCLASS()
class QUIET_API UBackpackOverlay : public UUserWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (BindWidget))
	class UInventoryGridOverlay* BP_InventoryGridOverlay;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UInventorySlotOverlay* LightItemSlot1;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UInventorySlotOverlay* LightItemSlot2;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UInventorySlotOverlay* PassiveItemSlot;

	virtual void NativePreConstruct() override;
};
