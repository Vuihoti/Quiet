/*******************************************************************************
The content of this file includes portions of the proprietary AUDIOKINETIC Wwise
Technology released in source code form as part of the game integration package.
The content of this file may not be used without valid licenses to the
AUDIOKINETIC Wwise Technology.
Note that the use of the game engine is subject to the Unreal(R) Engine End User
License Agreement at https://www.unrealengine.com/en-US/eula/unreal
 
License Usage
 
Licensees holding valid licenses to the AUDIOKINETIC Wwise Technology may use
this file in accordance with the end user license agreement provided with the
software or, alternatively, in accordance with the terms contained
in a written agreement between you and Audiokinetic Inc.
Copyright (c) 2025 Audiokinetic Inc.
*******************************************************************************/

#pragma once

#include "WwiseCookEventContext.h"
#include "Wwise/WwisePackagedFile.h"

#include "WwiseAssetLibraryCookedData.generated.h"

USTRUCT(BlueprintType)
struct WWISERESOURCELOADER_API FWwiseAssetLibraryCookedData
{
	GENERATED_BODY()

public:
	FWwiseAssetLibraryCookedData() {}
	virtual ~FWwiseAssetLibraryCookedData() {}

	virtual void Serialize(FArchive& Ar);
	virtual void SerializeBulkData(FArchive& Ar, const FWwisePackagedFileSerializationOptions& Options);
#if WITH_EDITORONLY_DATA && UE_5_5_OR_LATER
	void GetPlatformCookDependencies(FWwiseCookEventContext& Context, FCbWriter& Writer) const;
#endif

	virtual FString GetDebugString() const;

	UPROPERTY(Transient, VisibleInstanceOnly, Category = "Wwise|AssetLibrary")
	TArray<FWwisePackagedFile> PackagedFiles;

	UPROPERTY(Transient, VisibleInstanceOnly, Category = "Wwise|AssetLibrary")
	FName DebugName;
};
