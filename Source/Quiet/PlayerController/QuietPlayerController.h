// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Quiet/Structs/Structs.h"
#include "QuietPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class QUIET_API AQuietPlayerController : public APlayerController
{
	GENERATED_BODY()
	virtual void BeginPlay() override;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 SlotNum = 8;

	UPROPERTY(BlueprintReadOnly)
	class AMyHUD* QuietHUD;

	bool isPaused = false;

	bool isBackpack = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool HaveFlashLigh = false;

	void SetHUDBackpack();
	void SetHUDView();
	UFUNCTION(BlueprintCallable)
	void SetHUDSetting();
	UFUNCTION(BlueprintCallable)
	void SetHUDGameSet();
	UFUNCTION(BlueprintCallable)
	void ShowItemIntroduce(bool Show);

	void SetItemIntroduce(TSubclassOf<class AGameItemActor> Item);

	void SetPressETip(bool IsReading);

	UFUNCTION(BlueprintCallable)
	void ShowMainMenu(bool Show);

	UFUNCTION(BlueprintCallable)
	void ShowHUDShop(bool Show);

	FName CheckLightItemSlot();
	//�������˵���������
	UFUNCTION(BlueprintCallable)
	void SetHUDPassiveItemSlot(TSubclassOf<class AGameItemActor> PutInItem, int PutInAmount);
	//�������˵���������
	UFUNCTION(BlueprintCallable)
	void SetHUDActiveItemSlot(TSubclassOf<class AGameItemActor> PutInItem, int PutInAmount);
	//�������˵��ƹ����
	UFUNCTION(BlueprintCallable)
	void SetHUDLightItemSlot(TSubclassOf<class AGameItemActor> PutInItem, int PutInAmount);

	//��װ���ĵƹ�װ��
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FInventory BringLightItem;

	//��װ������������
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FInventory BringActiveItem;

	//��װ���ı�������
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FInventory BringPassiveItem;

	UPROPERTY(BlueprintReadOnly)
	TSubclassOf<class AGameItemActor> LightItem;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class AGameItemActor> Lamp;

	UPROPERTY(EditDefaultsOnly)
	class UAkAudioEvent* PauseEvent;

	UPROPERTY(EditDefaultsOnly)
	class UAkAudioEvent* ResumeEvent;
};
