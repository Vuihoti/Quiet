// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemActorInGame.h"
#include "Quiet/QuietCharacter.h"
#include "Components/SphereComponent.h"
#include "Components/ActorComponent.h"
#include "Components/SceneComponent.h"
#include "GameFramework/PlayerController.h"
#include "Components/StaticMeshComponent.h"
#include "Quiet/PlayerController/QuietPlayerController.h"
#include "Quiet/HUD/MyHUD.h"
#include "Quiet/HUD/ItemViewOverlay.h"
#include "Quiet/QuietCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CanvasPanel.h"
#include "Components/TextBlock.h"
#include "Components/WidgetComponent.h"
// Sets default values
AItemActorInGame::AItemActorInGame()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Default"));
	ItemSphere = CreateDefaultSubobject<USphereComponent>(TEXT("ItemSphere"));
	
	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMesh"));
	SetRootComponent(SceneComponent);
	ItemMesh->SetupAttachment(SceneComponent);
	ItemSphere->SetupAttachment(SceneComponent);

	PickupWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("PickUpWidget"));
	PickupWidget->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AItemActorInGame::BeginPlay()
{
	Super::BeginPlay();
}


// Called every frame
void AItemActorInGame::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}