// 最终解释权，著作权归Vuihoti所有

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AIPerceptionTypes.h"
#include "AIController_01.generated.h"

/**
 * 
 */
UCLASS()
class QUIET_API AAIController_01 : public AAIController
{
	GENERATED_BODY()

	virtual void Tick(float DeltaTime) override;
public:
	AActor* CharacterActor;
	UFUNCTION(BlueprintCallable)
	bool SightFeeling(AActor* Actor, FAIStimulus Stimulus);
	UFUNCTION(BlueprintCallable)
	void HunchFeeling(AActor* Actor, FAIStimulus Stimulus);
	UFUNCTION(BlueprintCallable)
	void HearFeeling(AActor* Actor, FAIStimulus Stimulus);
	UFUNCTION(BlueprintCallable)
	void Reset();

	UPROPERTY(BlueprintReadWrite)
	bool bEnable = true;
};
