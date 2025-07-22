// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "QuietGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class QUIET_API AQuietGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	virtual void PlayerEliminated(class AQuietCharacter* DeadCharacter,class AQuietPlayerController* DeadController);
	virtual void RequestRespawn(class ACharacter* ElimmedCharacter, AController* ElimmedController);
};
