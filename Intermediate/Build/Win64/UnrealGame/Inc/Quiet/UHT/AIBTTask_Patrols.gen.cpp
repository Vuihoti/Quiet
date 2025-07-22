// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Quiet/AI/AIBTTask_Patrols.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIBTTask_Patrols() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlueprintBase();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
QUIET_API UClass* Z_Construct_UClass_AAICharacter_01_NoRegister();
QUIET_API UClass* Z_Construct_UClass_UAIBTTask_Patrols();
QUIET_API UClass* Z_Construct_UClass_UAIBTTask_Patrols_NoRegister();
UPackage* Z_Construct_UPackage__Script_Quiet();
// End Cross Module References

// Begin Class UAIBTTask_Patrols
void UAIBTTask_Patrols::StaticRegisterNativesUAIBTTask_Patrols()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAIBTTask_Patrols);
UClass* Z_Construct_UClass_UAIBTTask_Patrols_NoRegister()
{
	return UAIBTTask_Patrols::StaticClass();
}
struct Z_Construct_UClass_UAIBTTask_Patrols_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AI/AIBTTask_Patrols.h" },
		{ "ModuleRelativePath", "AI/AIBTTask_Patrols.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AICharacter_01_MetaData[] = {
		{ "Category", "AIBTTask_Patrols" },
		{ "ModuleRelativePath", "AI/AIBTTask_Patrols.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatrolsLocation_MetaData[] = {
		{ "Category", "AIBTTask_Patrols" },
		{ "ModuleRelativePath", "AI/AIBTTask_Patrols.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "Category", "AIBTTask_Patrols" },
		{ "ModuleRelativePath", "AI/AIBTTask_Patrols.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AICharacter01BlackBorad_MetaData[] = {
		{ "Category", "AIBTTask_Patrols" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/AIBTTask_Patrols.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AICharacter_01;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PatrolsLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AICharacter01BlackBorad;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIBTTask_Patrols>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAIBTTask_Patrols_Statics::NewProp_AICharacter_01 = { "AICharacter_01", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIBTTask_Patrols, AICharacter_01), Z_Construct_UClass_AAICharacter_01_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AICharacter_01_MetaData), NewProp_AICharacter_01_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAIBTTask_Patrols_Statics::NewProp_PatrolsLocation = { "PatrolsLocation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIBTTask_Patrols, PatrolsLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatrolsLocation_MetaData), NewProp_PatrolsLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAIBTTask_Patrols_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIBTTask_Patrols, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 3940742986
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAIBTTask_Patrols_Statics::NewProp_AICharacter01BlackBorad = { "AICharacter01BlackBorad", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIBTTask_Patrols, AICharacter01BlackBorad), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AICharacter01BlackBorad_MetaData), NewProp_AICharacter01BlackBorad_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAIBTTask_Patrols_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIBTTask_Patrols_Statics::NewProp_AICharacter_01,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIBTTask_Patrols_Statics::NewProp_PatrolsLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIBTTask_Patrols_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIBTTask_Patrols_Statics::NewProp_AICharacter01BlackBorad,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAIBTTask_Patrols_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAIBTTask_Patrols_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_BlueprintBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Quiet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAIBTTask_Patrols_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAIBTTask_Patrols_Statics::ClassParams = {
	&UAIBTTask_Patrols::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAIBTTask_Patrols_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAIBTTask_Patrols_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAIBTTask_Patrols_Statics::Class_MetaDataParams), Z_Construct_UClass_UAIBTTask_Patrols_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAIBTTask_Patrols()
{
	if (!Z_Registration_Info_UClass_UAIBTTask_Patrols.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAIBTTask_Patrols.OuterSingleton, Z_Construct_UClass_UAIBTTask_Patrols_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAIBTTask_Patrols.OuterSingleton;
}
template<> QUIET_API UClass* StaticClass<UAIBTTask_Patrols>()
{
	return UAIBTTask_Patrols::StaticClass();
}
UAIBTTask_Patrols::UAIBTTask_Patrols(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAIBTTask_Patrols);
UAIBTTask_Patrols::~UAIBTTask_Patrols() {}
// End Class UAIBTTask_Patrols

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_AI_AIBTTask_Patrols_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAIBTTask_Patrols, UAIBTTask_Patrols::StaticClass, TEXT("UAIBTTask_Patrols"), &Z_Registration_Info_UClass_UAIBTTask_Patrols, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAIBTTask_Patrols), 2021194036U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_AI_AIBTTask_Patrols_h_3878676662(TEXT("/Script/Quiet"),
	Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_AI_AIBTTask_Patrols_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_AI_AIBTTask_Patrols_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
