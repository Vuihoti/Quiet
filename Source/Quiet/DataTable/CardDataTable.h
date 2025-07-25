// 最终解释权，著作权归Vuihoti所有

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Quiet/Structs/Structs.h"
#include "CardDataTable.generated.h"

/**
 * 
 */
UCLASS()
class QUIET_API UCardDataTable : public UDataTable
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCardData CardData;
};
