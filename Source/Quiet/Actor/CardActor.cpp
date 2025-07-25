// 最终解释权，著作权归Vuihoti所有


#include "CardActor.h"
#include "Quiet/QuietCharacter.h"
#include "Quiet/PlayerController/QuietPlayerController.h"
#include "Kismet/GamePlayStatics.h"
#include "Quiet/Component/InventoryComponent.h"
// Sets default values
ACardActor::ACardActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACardActor::BeginPlay()
{
	Super::BeginPlay();
	if(GetWorld()){
		PlayerCharacter = Cast<AQuietCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
		GameEffect();
	}
	
	
}

// Called every frame
void ACardActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACardActor::GameEffect()
{
	for (auto It = PlayerCharacter->CarryCards.CreateIterator(); It; ++It)
	{
		FString Key = It->Key;
		bool Value = It->Value;

		if (!Value) break;
		switch (FCString::Atoi(*Key))
		{
		case 1:
			PlayerCharacter->Inventory->AddItem(I_LightStone, 5);
			PlayerCharacter->Inventory->AddItem(I_Firecracker, 3);
			PlayerCharacter->Inventory->AddItem(I_FlashLight, 1);
			Cast<AQuietPlayerController>(PlayerCharacter->Controller)->HaveFlashLigh = true;
			break;
		case 3:
			PlayerCharacter->Inventory->AddItem(I_ShopTicket, 1);
			break;
		case 4:
			PlayerCharacter->Inventory->AddItem(I_HandMirror, 1);
			break;
		case 6:
			PlayerCharacter->Inventory->AddItem(I_Hourglass, 1);
			break;
		default:
			break;
		}
	}
}

