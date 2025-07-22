// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ItemViewOverlay.generated.h"

/**
 * 
 */
UCLASS()
class QUIET_API UItemViewOverlay : public UUserWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UBorder* ReadBorder;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UHorizontalBox* ViewBox;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* IntroduceInWidget;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UCanvasPanel* IntroducePanel;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* PressE;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	FText Introduce;

	void SetIntroducePanelOpacity(int32 Opacity);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetPressEText(bool isReading);

	UPROPERTY(BlueprintReadWrite)
	TSubclassOf<class AGameItemActor> Item;

};
