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

using UnrealBuildTool;

public class WwiseFileHandler : ModuleRules
{
	public WwiseFileHandler(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicDefinitions.AddRange(new string[]
		{
			"AK_ENABLE_BANK_MGR_THREAD=0"
		});

		PublicDependencyModuleNames.AddRange(new string[] {
			"WwiseConcurrency",
			"WwiseLowLevelUtils",
			"WwiseSoundEngine",
		});

		if (Target.bCompileAgainstCoreUObject)
		{
			PublicDependencyModuleNames.AddRange(new string[] {
				"WwiseObjectUtils"
			});
		}
		
		if (Target.bCompileAgainstEngine)
		{
			PublicDependencyModuleNames.AddRange(new string[] {
				"WwiseEngineUtils"
			});
		}

		PrivateDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"WwiseProcessing"
		});

#if UE_5_3_OR_LATER
		bLegacyParentIncludePaths = false;
		CppStandard = CppStandardVersion.Default;
#endif
	}
}
