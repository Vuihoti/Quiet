// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseResourceLoader/Public/Wwise/WwiseLanguageId.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseLanguageId() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseLanguageId();
// End Cross Module References

// Begin ScriptStruct FWwiseLanguageId
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseLanguageId;
class UScriptStruct* FWwiseLanguageId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseLanguageId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseLanguageId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseLanguageId, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseLanguageId"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseLanguageId.OuterSingleton;
}
template<> WWISERESOURCELOADER_API UScriptStruct* StaticStruct<FWwiseLanguageId>()
{
	return FWwiseLanguageId::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWwiseLanguageId_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/WwiseLanguageId.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LanguageId_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/WwiseLanguageId.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LanguageName_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/WwiseLanguageId.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LanguageId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LanguageName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseLanguageId>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseLanguageId_Statics::NewProp_LanguageId = { "LanguageId", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseLanguageId, LanguageId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LanguageId_MetaData), NewProp_LanguageId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwiseLanguageId_Statics::NewProp_LanguageName = { "LanguageName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseLanguageId, LanguageName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LanguageName_MetaData), NewProp_LanguageName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseLanguageId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLanguageId_Statics::NewProp_LanguageId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLanguageId_Statics::NewProp_LanguageName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseLanguageId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseLanguageId_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	&NewStructOps,
	"WwiseLanguageId",
	Z_Construct_UScriptStruct_FWwiseLanguageId_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseLanguageId_Statics::PropPointers),
	sizeof(FWwiseLanguageId),
	alignof(FWwiseLanguageId),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseLanguageId_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseLanguageId_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWwiseLanguageId()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseLanguageId.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseLanguageId.InnerSingleton, Z_Construct_UScriptStruct_FWwiseLanguageId_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WwiseLanguageId.InnerSingleton;
}
// End ScriptStruct FWwiseLanguageId

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseLanguageId_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWwiseLanguageId::StaticStruct, Z_Construct_UScriptStruct_FWwiseLanguageId_Statics::NewStructOps, TEXT("WwiseLanguageId"), &Z_Registration_Info_UScriptStruct_WwiseLanguageId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseLanguageId), 3492074269U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseLanguageId_h_3602071713(TEXT("/Script/WwiseResourceLoader"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Quiet_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseLanguageId_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseLanguageId_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
