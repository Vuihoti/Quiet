// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Actor.h"
#include "Camera/CameraComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
// Sets default values for this component's properties
UCombatComponent::UCombatComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCombatComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UCombatComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UCombatComponent::Initialize(AQuietCharacter* Character)
{
	Character->GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
}

void UCombatComponent::StartSprint()
{
	if (CurrentStamina > MinStamina&&CharacterRef->GetVelocity().Length()>10.f) {
		if (isCrouch) {
			StopCrouch();
		}
		if (CharacterRef) {
			CharacterRef->GetCharacterMovement()->MaxWalkSpeed = SprintSpeed;
			CharacterRef->bIsSprint = true;
		}
		UKismetSystemLibrary::K2_ClearTimer(this, "RegenerateStamina");
		UKismetSystemLibrary::K2_SetTimer(this, FUName, 0.1f, true);
	}
}

void UCombatComponent::StopSprint()
{
	if (!isCrouch) {
		UKismetSystemLibrary::K2_ClearTimer(this, FUName);
		if (CharacterRef) {
			CharacterRef->GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
			CharacterRef->bIsSprint = false;
			const FLatentActionInfo LatentInfo(0, FMath::Rand(), TEXT("StartRegenerate"), this);
			UKismetSystemLibrary::RetriggerableDelay(this, 2.f, LatentInfo);
		}
	}
}

void UCombatComponent::SprintTimer()
{
	if (CurrentStamina <= MinStamina || CharacterRef->GetVelocity().Length() <= 10.f) {
		StopSprint();
	}
	else {
		CurrentStamina = UKismetMathLibrary::FClamp(CurrentStamina - 1.f, MinStamina, MaxStamina);
	}
}

void UCombatComponent::StartRegenerate()
{
	if (!UKismetSystemLibrary::K2_IsTimerActive(this, FUName)) {
		UKismetSystemLibrary::K2_SetTimer(this, "RegenerateStamina", 0.1f, true);//»Ø¸´ÌåÁ¦
	}
}

void UCombatComponent::StartCrouch()
{
	UKismetSystemLibrary::K2_ClearTimer(this, FUName);
	if (CharacterRef) {
		CharacterRef->GetCharacterMovement()->MaxWalkSpeed = CrouchSpeed;
		CharacterRef->ShortHalfHeight();
		CharacterRef->bIsCrouch = true;
		isCrouch = true;
	}
}

void UCombatComponent::StopCrouch()
{
	if (CharacterRef) {
		CharacterRef->GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
		CharacterRef->LengHalfHeight();
		CharacterRef->bIsCrouch = false;
		isCrouch = false;
	}
}


void UCombatComponent::RegenerateStamina()
{
	if (CurrentStamina >= MaxStamina) {
		UKismetSystemLibrary::K2_ClearTimer(this, "RegenerateStamina");
	}
	CurrentStamina = UKismetMathLibrary::FClamp(CurrentStamina + 1.f, MinStamina, MaxStamina);	
}

