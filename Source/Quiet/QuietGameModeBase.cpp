// Fill out your copyright notice in the Description page of Project Settings.


#include "QuietGameModeBase.h"
#include "Quiet/QuietCharacter.h"
#include "Quiet/PlayerController/QuietPlayerController.h"
#include "Kismet/GamePlayStatics.h"
#include "GameFramework/PlayerStart.h"
void AQuietGameModeBase::PlayerEliminated(AQuietCharacter* DeadCharacter, AQuietPlayerController* DeadController)
{
	if (DeadCharacter) {
		DeadCharacter->Elim();
	}
}

void AQuietGameModeBase::RequestRespawn(ACharacter* ElimmedCharacter, AController* ElimmedController)
{
	if (ElimmedCharacter) {
		ElimmedCharacter->Reset();
		ElimmedCharacter->Destroy();
	}
	if (ElimmedController) {
		TArray<AActor*> PlayerStart;
		UGameplayStatics::GetAllActorsOfClass(this, APlayerStart::StaticClass(), PlayerStart);
		int32 Selection = FMath::RandRange(0, PlayerStart.Num() - 1);
		RestartPlayerAtPlayerStart(ElimmedController, PlayerStart[Selection]);
		AQuietCharacter* Player = Cast<AQuietCharacter>(ElimmedCharacter);
		Player->bElimmed = false;
	}
}
