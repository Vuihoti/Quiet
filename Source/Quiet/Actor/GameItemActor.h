// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Quiet/Structs/Structs.h"
#include "GameItemActor.generated.h"

UCLASS()
class QUIET_API AGameItemActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGameItemActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY()
	class AQuietCharacter* Character;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Itemdata")
	FItemdata Itemdata;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Itemdata")
	TSubclassOf<class AItemActorInGame> ItemActorInGame;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Itemdata")
	TSubclassOf<class AItemActorInGame> ItemActorInGameRef;
};
