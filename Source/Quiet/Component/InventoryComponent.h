// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Quiet/Structs/Structs.h"
#include "Quiet/QuietCharacter.h"
using namespace std;
#include "InventoryComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class QUIET_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventoryComponent();
	friend class AQuietCharacter;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyCustomStruct")
	//FMyCustomStruct MyCustomStruct;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY()
	class AQuietCharacter* Character;

	UPROPERTY()
	class AQuietPlayerController* QuietOwnerPlayerController;

	UPROPERTY()
	class UInventoryGridOverlay* InventoryGridOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	TArray<FInventory> Inventory;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	

	UFUNCTION(BlueprintCallable)
	bool AddItem(TSubclassOf<class AGameItemActor> Item, int32 Num);

	UFUNCTION(BlueprintCallable)
	void DeleteItem(TSubclassOf<class AGameItemActor> Item);

	UFUNCTION(BlueprintCallable)
	void FindSameAndNullSlot(TSubclassOf<class AGameItemActor> Item, bool& Successful, int32& AddIndex, FString& State);

	UFUNCTION(BlueprintCallable)
	void GetItemDataAtIndex(int32 Index, TSubclassOf<class AGameItemActor>& Actor, int32 Amount);

	UFUNCTION(BlueprintNativeEvent,BlueprintCallable)
	void UpdataInventory(int32 Index, UTexture2D* Icon, int32 Amount, EItemType Itemtype, TSubclassOf<class AGameItemActor> Item);
	
	UFUNCTION()
	int FindItemNum(FName Identification);

	UPROPERTY()
	UDataTable* CommoditySlotDataTable;

	UFUNCTION()
	void BuyItem(FName Identification,int32 Price);

	UFUNCTION()
	void SellItem(FName Identification, int32 Price);
};
