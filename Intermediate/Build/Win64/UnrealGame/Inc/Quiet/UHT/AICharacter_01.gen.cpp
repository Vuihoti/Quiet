// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Quiet/AI/AICharacter_01.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAICharacter_01() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
QUIET_API UClass* Z_Construct_UClass_AAICharacter_01();
QUIET_API UClass* Z_Construct_UClass_AAICharacter_01_NoRegister();
UPackage* Z_Construct_UPackage__Script_Quiet();
// End Cross Module References

// Begin Class AAICharacter_01
void AAICharacter_01::StaticRegisterNativesAAICharacter_01()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAICharacter_01);
UClass* Z_Construct_UClass_AAICharacter_01_NoRegister()
{
	return AAICharacter_01::StaticClass();
}
struct Z_Construct_UClass_AAICharacter_01_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/AICharacter_01.h" },
		{ "ModuleRelativePath", "AI/AICharacter_01.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAICharacter_01>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAICharacter_01_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Quiet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAICharacter_01_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAICharacter_01_Statics::ClassParams = {
	&AAICharacter_01::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAICharacter_01_Statics::Class_MetaDataParams), Z_Construct_UClass_AAICharacter_01_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAICharacter_01()
{
	if (!Z_Registration_Info_UClass_AAICharacter_01.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAICharacter_01.OuterSingleton, Z_Construct_UClass_AAICharacter_01_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAICharacter_01.OuterSingleton;
}
template<> QUIET_API UClass* StaticClass<AAICharacter_01>()
{
	return AAICharacter_01::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAICharacter_01);
AAICharacter_01::~AAICharacter_01() {}
// End Class AAICharacter_01

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_AI_AICharacter_01_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAICharacter_01, AAICharacter_01::StaticClass, TEXT("AAICharacter_01"), &Z_Registration_Info_UClass_AAICharacter_01, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAICharacter_01), 3796192768U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_AI_AICharacter_01_h_4072052615(TEXT("/Script/Quiet"),
	Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_AI_AICharacter_01_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_AI_AICharacter_01_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
