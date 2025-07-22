// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemActorInGame.generated.h"

UCLASS()
class QUIET_API AItemActorInGame : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItemActorInGame();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Sphere, meta = (AllowPrivateAccess = "true"))
	class USphereComponent* ItemSphere;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = StaticMesh, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* ItemMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = StaticMesh, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* SceneComponent;

	UPROPERTY(EditAnywhere, Category = "InventoryComponment")
	TSubclassOf<class UActorComponent> InventoryComponment;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "PickUp")
	class UWidgetComponent* PickupWidget;

	UPROPERTY()
	class UItemViewOverlay* ItemViewOverlay;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadOnly,EditAnywhere, Category = "Item")
	TSubclassOf<class AGameItemActor> Item;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Item")
	int32 Amount;

};
