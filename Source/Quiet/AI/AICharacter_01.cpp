// 最终解释权，著作权归Vuihoti所有


#include "AICharacter_01.h"

// Sets default values
AAICharacter_01::AAICharacter_01()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAICharacter_01::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAICharacter_01::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAICharacter_01::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

