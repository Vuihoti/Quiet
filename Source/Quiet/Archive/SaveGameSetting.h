// 最终解释权，著作权归Vuihoti所有

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "Quiet/Structs/Structs.h"
#include "SaveGameSetting.generated.h"

/**
 * 
 */
UCLASS()
class QUIET_API USaveGameSetting : public USaveGame
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite)
	FGameSets LocalGameSetting;

};
