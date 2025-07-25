// 最终解释权，著作权归Vuihoti所有


#include "AIAnimInstance_01.h"
#include "Quiet/AI/AICharacter_01.h"
void UAIAnimInstance_01::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	AICharacter_01 = Cast<AAICharacter_01>(TryGetPawnOwner());
}

void UAIAnimInstance_01::NativeUpdateAnimation(float DeltaTime)
{
	Super::NativeUpdateAnimation(DeltaTime);
	if (AICharacter_01 == nullptr) {
		AICharacter_01 = Cast<AAICharacter_01>(TryGetPawnOwner());
	}
	if (AICharacter_01 == nullptr) return;
	
	FVector Velocity = AICharacter_01->GetVelocity();
	Velocity.Z = 0.f;

	Speed = Velocity.Size();
}
