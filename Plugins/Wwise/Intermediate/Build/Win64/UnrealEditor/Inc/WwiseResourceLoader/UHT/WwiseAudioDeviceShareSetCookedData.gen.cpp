// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseResourceLoader/Public/Wwise/CookedData/WwiseAudioDeviceShareSetCookedData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseAudioDeviceShareSetCookedData() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseAudioDeviceShareSetCookedData();
// End Cross Module References

// Begin ScriptStruct FWwiseAudioDeviceShareSetCookedData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseAudioDeviceShareSetCookedData;
class UScriptStruct* FWwiseAudioDeviceShareSetCookedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseAudioDeviceShareSetCookedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseAudioDeviceShareSetCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseAudioDeviceShareSetCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseAudioDeviceShareSetCookedData"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseAudioDeviceShareSetCookedData.OuterSingleton;
}
template<> WWISERESOURCELOADER_API UScriptStruct* StaticStruct<FWwiseAudioDeviceShareSetCookedData>()
{
	return FWwiseAudioDeviceShareSetCookedData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWwiseAudioDeviceShareSetCookedData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseAudioDeviceShareSetCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShortId_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseAudioDeviceShareSetCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseAudioDeviceShareSetCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ShortId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseAudioDeviceShareSetCookedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseAudioDeviceShareSetCookedData_Statics::NewProp_ShortId = { "ShortId", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAudioDeviceShareSetCookedData, ShortId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShortId_MetaData), NewProp_ShortId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwiseAudioDeviceShareSetCookedData_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAudioDeviceShareSetCookedData, DebugName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugName_MetaData), NewProp_DebugName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseAudioDeviceShareSetCookedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAudioDeviceShareSetCookedData_Statics::NewProp_ShortId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAudioDeviceShareSetCookedData_Statics::NewProp_DebugName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseAudioDeviceShareSetCookedData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseAudioDeviceShareSetCookedData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	&NewStructOps,
	"WwiseAudioDeviceShareSetCookedData",
	Z_Construct_UScriptStruct_FWwiseAudioDeviceShareSetCookedData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseAudioDeviceShareSetCookedData_Statics::PropPointers),
	sizeof(FWwiseAudioDeviceShareSetCookedData),
	alignof(FWwiseAudioDeviceShareSetCookedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseAudioDeviceShareSetCookedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseAudioDeviceShareSetCookedData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWwiseAudioDeviceShareSetCookedData()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseAudioDeviceShareSetCookedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseAudioDeviceShareSetCookedData.InnerSingleton, Z_Construct_UScriptStruct_FWwiseAudioDeviceShareSetCookedData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WwiseAudioDeviceShareSetCookedData.InnerSingleton;
}
// End ScriptStruct FWwiseAudioDeviceShareSetCookedData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseAudioDeviceShareSetCookedData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWwiseAudioDeviceShareSetCookedData::StaticStruct, Z_Construct_UScriptStruct_FWwiseAudioDeviceShareSetCookedData_Statics::NewStructOps, TEXT("WwiseAudioDeviceShareSetCookedData"), &Z_Registration_Info_UScriptStruct_WwiseAudioDeviceShareSetCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseAudioDeviceShareSetCookedData), 2419000252U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseAudioDeviceShareSetCookedData_h_922749335(TEXT("/Script/WwiseResourceLoader"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Quiet_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseAudioDeviceShareSetCookedData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseAudioDeviceShareSetCookedData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
