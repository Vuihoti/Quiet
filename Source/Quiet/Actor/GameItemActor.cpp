// Fill out your copyright notice in the Description page of Project Settings.


#include "GameItemActor.h"
#include "Quiet/QuietCharacter.h"
// Sets default values
AGameItemActor::AGameItemActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGameItemActor::BeginPlay()
{
	Super::BeginPlay();
	Character == nullptr ? Cast<AQuietCharacter>(Character) : Character;
}

// Called every frame
void AGameItemActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

