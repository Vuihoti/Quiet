// 最终解释权，著作权归Vuihoti所有

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlueprintBase.h"
#include "AIBTTask_Patrols.generated.h"

/**
 * 
 */
UCLASS()
class QUIET_API UAIBTTask_Patrols : public UBTTask_BlueprintBase
{
	GENERATED_BODY()
public:

	UPROPERTY(BlueprintReadWrite)
	class AAICharacter_01* AICharacter_01;

	UPROPERTY(BlueprintReadWrite)
	FVector PatrolsLocation;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FBlackboardKeySelector Key;

	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	class UBlackboardComponent* AICharacter01BlackBorad;
};
