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

#include "Wwise/CookedData/WwiseAcousticTextureCookedData.h"

#include "Wwise/Stats/ResourceLoader.h"

#if WITH_EDITORONLY_DATA && UE_5_5_OR_LATER
#include "Serialization/CompactBinaryWriter.h"
#endif

#include <inttypes.h>

FWwiseAcousticTextureCookedData::FWwiseAcousticTextureCookedData()
	: AbsorptionLow(0)
	, AbsorptionMidLow(0)
	, AbsorptionMidHigh(0)
	, AbsorptionHigh(0)
	, ShortId(0)
{
}

void FWwiseAcousticTextureCookedData::Serialize(FArchive& Ar)
{
	UStruct* Struct = StaticStruct();
	check(Struct);

	if (Ar.WantBinaryPropertySerialization())
	{
		Struct->SerializeBin(Ar, this);
	}
	else
	{
		Struct->SerializeTaggedProperties(Ar, (uint8*)this, Struct, nullptr);
	}
}

#if WITH_EDITORONLY_DATA && UE_5_5_OR_LATER
void FWwiseAcousticTextureCookedData::GetPlatformCookDependencies(FWwiseCookEventContext& Context, FCbWriter& Writer) const
{
	Writer << "AT";
	Writer.BeginObject();
	Writer << "Id" << ShortId
		<< "Low" << AbsorptionLow
		<< "MidLow" << AbsorptionMidLow
		<< "MidHigh" << AbsorptionMidHigh
		<< "High" << AbsorptionHigh;
	Writer.EndObject();
}
#endif

FString FWwiseAcousticTextureCookedData::GetDebugString() const
{
	return FString::Printf(TEXT("AcousticTexture %s (%" PRIu32 ") Absorption Values (%f, %f, %f, %f)"), *DebugName.ToString(), ShortId, AbsorptionLow, AbsorptionMidLow, AbsorptionMidHigh, AbsorptionHigh);
}
