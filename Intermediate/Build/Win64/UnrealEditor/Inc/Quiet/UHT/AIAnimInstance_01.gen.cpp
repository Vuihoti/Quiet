// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Quiet/AI/AIAnimInstance_01.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIAnimInstance_01() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
QUIET_API UClass* Z_Construct_UClass_AAICharacter_01_NoRegister();
QUIET_API UClass* Z_Construct_UClass_UAIAnimInstance_01();
QUIET_API UClass* Z_Construct_UClass_UAIAnimInstance_01_NoRegister();
UPackage* Z_Construct_UPackage__Script_Quiet();
// End Cross Module References

// Begin Class UAIAnimInstance_01
void UAIAnimInstance_01::StaticRegisterNativesUAIAnimInstance_01()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAIAnimInstance_01);
UClass* Z_Construct_UClass_UAIAnimInstance_01_NoRegister()
{
	return UAIAnimInstance_01::StaticClass();
}
struct Z_Construct_UClass_UAIAnimInstance_01_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AI/AIAnimInstance_01.h" },
		{ "ModuleRelativePath", "AI/AIAnimInstance_01.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AICharacter_01_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "AI/AIAnimInstance_01.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "AI/AIAnimInstance_01.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AICharacter_01;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIAnimInstance_01>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAIAnimInstance_01_Statics::NewProp_AICharacter_01 = { "AICharacter_01", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIAnimInstance_01, AICharacter_01), Z_Construct_UClass_AAICharacter_01_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AICharacter_01_MetaData), NewProp_AICharacter_01_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIAnimInstance_01_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIAnimInstance_01, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAIAnimInstance_01_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIAnimInstance_01_Statics::NewProp_AICharacter_01,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIAnimInstance_01_Statics::NewProp_Speed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAIAnimInstance_01_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAIAnimInstance_01_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Quiet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAIAnimInstance_01_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAIAnimInstance_01_Statics::ClassParams = {
	&UAIAnimInstance_01::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAIAnimInstance_01_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAIAnimInstance_01_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAIAnimInstance_01_Statics::Class_MetaDataParams), Z_Construct_UClass_UAIAnimInstance_01_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAIAnimInstance_01()
{
	if (!Z_Registration_Info_UClass_UAIAnimInstance_01.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAIAnimInstance_01.OuterSingleton, Z_Construct_UClass_UAIAnimInstance_01_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAIAnimInstance_01.OuterSingleton;
}
template<> QUIET_API UClass* StaticClass<UAIAnimInstance_01>()
{
	return UAIAnimInstance_01::StaticClass();
}
UAIAnimInstance_01::UAIAnimInstance_01(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAIAnimInstance_01);
UAIAnimInstance_01::~UAIAnimInstance_01() {}
// End Class UAIAnimInstance_01

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_AI_AIAnimInstance_01_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAIAnimInstance_01, UAIAnimInstance_01::StaticClass, TEXT("UAIAnimInstance_01"), &Z_Registration_Info_UClass_UAIAnimInstance_01, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAIAnimInstance_01), 3981374668U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_AI_AIAnimInstance_01_h_3938075540(TEXT("/Script/Quiet"),
	Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_AI_AIAnimInstance_01_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_AI_AIAnimInstance_01_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
