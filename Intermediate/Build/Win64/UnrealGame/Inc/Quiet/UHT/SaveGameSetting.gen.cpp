// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Quiet/Archive/SaveGameSetting.h"
#include "Quiet/Structs/Structs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveGameSetting() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
QUIET_API UClass* Z_Construct_UClass_USaveGameSetting();
QUIET_API UClass* Z_Construct_UClass_USaveGameSetting_NoRegister();
QUIET_API UScriptStruct* Z_Construct_UScriptStruct_FGameSets();
UPackage* Z_Construct_UPackage__Script_Quiet();
// End Cross Module References

// Begin Class USaveGameSetting
void USaveGameSetting::StaticRegisterNativesUSaveGameSetting()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveGameSetting);
UClass* Z_Construct_UClass_USaveGameSetting_NoRegister()
{
	return USaveGameSetting::StaticClass();
}
struct Z_Construct_UClass_USaveGameSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Archive/SaveGameSetting.h" },
		{ "ModuleRelativePath", "Archive/SaveGameSetting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalGameSetting_MetaData[] = {
		{ "Category", "SaveGameSetting" },
		{ "ModuleRelativePath", "Archive/SaveGameSetting.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalGameSetting;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveGameSetting>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveGameSetting_Statics::NewProp_LocalGameSetting = { "LocalGameSetting", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameSetting, LocalGameSetting), Z_Construct_UScriptStruct_FGameSets, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalGameSetting_MetaData), NewProp_LocalGameSetting_MetaData) }; // 1722388133
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveGameSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameSetting_Statics::NewProp_LocalGameSetting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameSetting_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USaveGameSetting_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_Quiet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameSetting_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveGameSetting_Statics::ClassParams = {
	&USaveGameSetting::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USaveGameSetting_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameSetting_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameSetting_Statics::Class_MetaDataParams), Z_Construct_UClass_USaveGameSetting_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USaveGameSetting()
{
	if (!Z_Registration_Info_UClass_USaveGameSetting.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveGameSetting.OuterSingleton, Z_Construct_UClass_USaveGameSetting_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USaveGameSetting.OuterSingleton;
}
template<> QUIET_API UClass* StaticClass<USaveGameSetting>()
{
	return USaveGameSetting::StaticClass();
}
USaveGameSetting::USaveGameSetting(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGameSetting);
USaveGameSetting::~USaveGameSetting() {}
// End Class USaveGameSetting

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Archive_SaveGameSetting_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USaveGameSetting, USaveGameSetting::StaticClass, TEXT("USaveGameSetting"), &Z_Registration_Info_UClass_USaveGameSetting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveGameSetting), 433259333U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Archive_SaveGameSetting_h_4290345698(TEXT("/Script/Quiet"),
	Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Archive_SaveGameSetting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Archive_SaveGameSetting_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
