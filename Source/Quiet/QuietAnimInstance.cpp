// 最终解释权，著作权归Vuihoti所有


#include "QuietAnimInstance.h"
#include "Quiet/QuietCharacter.h"
#include "Quiet/Lobby/LobbyCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

void UQuietAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	Character = Cast<ACharacter>(TryGetPawnOwner());

}

void UQuietAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
	Super::NativeUpdateAnimation(DeltaTime);
	if (Character == Cast<AQuietCharacter>(Character)) {
		QuietCharacter = Cast<AQuietCharacter>(TryGetPawnOwner());
		if (QuietCharacter == nullptr) return;

		FVector Velocity = QuietCharacter->GetVelocity();
		Velocity.Z = 0.f;
		Speed = Velocity.Size();

		bIsInAir = QuietCharacter->GetCharacterMovement()->IsFalling();

		bIsCrouch = QuietCharacter->bIsCrouch;

		bElim = QuietCharacter->bElimmed;

		bRespawn = QuietCharacter->bRespawn;

		bFrantic = QuietCharacter->bFrantic;
	}
	else if (Character == Cast<ALobbyCharacter>(Character)) {
		LobbyCharacter = Cast<ALobbyCharacter>(TryGetPawnOwner());
		if (LobbyCharacter == nullptr) return;

		FVector Velocity = LobbyCharacter->GetVelocity();
		Velocity.Z = 0.f;
		Speed = Velocity.Size();

		bIsInAir = LobbyCharacter->GetCharacterMovement()->IsFalling();

		bIsCrouch = LobbyCharacter->bIsCrouch;
	}
}
