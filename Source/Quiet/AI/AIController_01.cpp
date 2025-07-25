// 最终解释权，著作权归Vuihoti所有


#include "AIController_01.h"
#include "GameFramework/Actor.h"
#include "Perception/AISense_Prediction.h"
#include "Kismet/KismetSystemLibrary.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GamePlayStatics.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Quiet/QuietCharacter.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
void AAIController_01::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UBehaviorTreeComponent* BTComponent = FindComponentByClass<UBehaviorTreeComponent>();
	if (bEnable) {
		if (BTComponent && BTComponent->IsPaused()) {
			BTComponent->ResumeLogic("Enable");
		}
	}
	else {
		if (BTComponent && BTComponent->IsRunning()) {	
			Reset();
			BTComponent->PauseLogic("Disable");
		}
	}
}
bool AAIController_01::SightFeeling(AActor* Actor, FAIStimulus Stimulus)
{
	AQuietCharacter* QuietCharacter = Cast<AQuietCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
	if (Actor->ActorHasTag("Player") && QuietCharacter && !QuietCharacter->bElimmed && bEnable) {
		if (Stimulus.WasSuccessfullySensed()) {
				UAIBlueprintHelperLibrary::GetBlackboard(this)->SetValueAsBool("HaveSeePlayer", true);
				UAIBlueprintHelperLibrary::GetBlackboard(this)->SetValueAsBool("HearSound", true);
				CharacterActor = Actor;
				return true;		
		}
		else {
			UAIBlueprintHelperLibrary::GetBlackboard(this)->SetValueAsBool("HaveSeePlayer", false);
			UAIBlueprintHelperLibrary::GetBlackboard(this)->SetValueAsEnum("NPCBhavior", 0);
			return false;
		}
	}
	return true;
}

void AAIController_01::HunchFeeling(AActor* Actor, FAIStimulus Stimulus)
{
	if (Actor->ActorHasTag("Player") && bEnable) {
		if (Stimulus.WasSuccessfullySensed()) {
			UAIBlueprintHelperLibrary::GetBlackboard(this)->SetValueAsVector("TheLastTimeSeePlayer", Stimulus.StimulusLocation);
		}
	}
}

void AAIController_01::HearFeeling(AActor* Actor, FAIStimulus Stimulus)
{
	if (Stimulus.WasSuccessfullySensed() && bEnable) {
		UAIBlueprintHelperLibrary::GetBlackboard(this)->SetValueAsEnum("NPCBhavior", 0);
		UAIBlueprintHelperLibrary::GetBlackboard(this)->SetValueAsVector("TheLastTimeSeePlayer", Stimulus.StimulusLocation);
		UAIBlueprintHelperLibrary::GetBlackboard(this)->SetValueAsBool("HearSound", true);
		
	}
}

void AAIController_01::Reset()
{
	UAIBlueprintHelperLibrary::GetBlackboard(this)->SetValueAsBool("HaveSeePlayer", false);
	UAIBlueprintHelperLibrary::GetBlackboard(this)->SetValueAsEnum("NPCBhavior", 0);
}
