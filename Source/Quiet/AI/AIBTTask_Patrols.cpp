// 最终解释权，著作权归Vuihoti所有


#include "AIBTTask_Patrols.h"
#include "Quiet/AI/AICharacter_01.h"
#include "NavigationSystem.h"
#include "NavigationData.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
//void UAIBTTask_Patrols::ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn)
//{
//	Super::ReceiveExecuteAI(OwnerController, ControlledPawn);
//
//	if (ControlledPawn) {
//		AICharacter_01 = Cast<AAICharacter_01>(ControlledPawn);
//	}
//	ANavigationData* NavSys;
//	bool IsFinish = NavSys->GetRandomPointInNavigableRadius(AICharacter_01->GetActorLocation(), 200.f,PatrolsLocation);
//	if (IsFinish) {
//		if (AICharacter01BlackBorad) {
//			AICharacter01BlackBorad->SetValueAsVector("Target", PatrolsLocation);
//		}
//		FinishExecute(true);
//	}
//}
