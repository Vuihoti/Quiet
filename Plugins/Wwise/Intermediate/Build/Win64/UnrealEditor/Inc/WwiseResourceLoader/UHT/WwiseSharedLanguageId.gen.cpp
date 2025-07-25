// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseResourceLoader/Public/Wwise/WwiseSharedLanguageId.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseSharedLanguageId() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
WWISEFILEHANDLER_API UEnum* Z_Construct_UEnum_WwiseFileHandler_EWwiseLanguageRequirement();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseSharedLanguageId();
// End Cross Module References

// Begin ScriptStruct FWwiseSharedLanguageId
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseSharedLanguageId;
class UScriptStruct* FWwiseSharedLanguageId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseSharedLanguageId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseSharedLanguageId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseSharedLanguageId, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseSharedLanguageId"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseSharedLanguageId.OuterSingleton;
}
template<> WWISERESOURCELOADER_API UScriptStruct* StaticStruct<FWwiseSharedLanguageId>()
{
	return FWwiseSharedLanguageId::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/WwiseSharedLanguageId.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LanguageRequirement_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/WwiseSharedLanguageId.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_LanguageRequirement_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LanguageRequirement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseSharedLanguageId>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics::NewProp_LanguageRequirement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics::NewProp_LanguageRequirement = { "LanguageRequirement", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseSharedLanguageId, LanguageRequirement), Z_Construct_UEnum_WwiseFileHandler_EWwiseLanguageRequirement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LanguageRequirement_MetaData), NewProp_LanguageRequirement_MetaData) }; // 96390930
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics::NewProp_LanguageRequirement_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics::NewProp_LanguageRequirement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	&NewStructOps,
	"WwiseSharedLanguageId",
	Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics::PropPointers),
	sizeof(FWwiseSharedLanguageId),
	alignof(FWwiseSharedLanguageId),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWwiseSharedLanguageId()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseSharedLanguageId.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseSharedLanguageId.InnerSingleton, Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WwiseSharedLanguageId.InnerSingleton;
}
// End ScriptStruct FWwiseSharedLanguageId

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseSharedLanguageId_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWwiseSharedLanguageId::StaticStruct, Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics::NewStructOps, TEXT("WwiseSharedLanguageId"), &Z_Registration_Info_UScriptStruct_WwiseSharedLanguageId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseSharedLanguageId), 2778071268U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseSharedLanguageId_h_2963119565(TEXT("/Script/WwiseResourceLoader"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Quiet_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseSharedLanguageId_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseSharedLanguageId_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
