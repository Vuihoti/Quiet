﻿/*******************************************************************************
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

#include "Wwise/WwiseUnrealVersion.h"
#include "CoreMinimal.h"

#if WITH_EDITORONLY_DATA

#if UE_5_6_OR_LATER
#include "Cooker/CookEvents.h"
using FWwiseCookEventContext = UE::Cook::FCookEventContext;
namespace WwiseCookEventContext
{
	FORCEINLINE void AddLoadBuildDependency(FWwiseCookEventContext& Context, const UE::Cook::FCookDependency& CookDependency)
	{
		Context.AddLoadBuildDependency(CookDependency);
	}
}

#elif UE_5_5_OR_LATER
#include "UObject/ObjectSaveContext.h"
using FWwiseCookEventContext = FObjectPreSaveContext;
namespace WwiseCookEventContext
{
	FORCEINLINE void AddLoadBuildDependency(FWwiseCookEventContext& Context, const UE::Cook::FCookDependency& CookDependency)
	{
		Context.AddCookBuildDependency(CookDependency);
	}
}
#endif
#endif
