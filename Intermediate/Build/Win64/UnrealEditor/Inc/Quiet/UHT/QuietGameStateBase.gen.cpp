// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Quiet/GameState/QuietGameStateBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuietGameStateBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
QUIET_API UClass* Z_Construct_UClass_AQuietGameStateBase();
QUIET_API UClass* Z_Construct_UClass_AQuietGameStateBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Quiet();
// End Cross Module References

// Begin Class AQuietGameStateBase
void AQuietGameStateBase::StaticRegisterNativesAQuietGameStateBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AQuietGameStateBase);
UClass* Z_Construct_UClass_AQuietGameStateBase_NoRegister()
{
	return AQuietGameStateBase::StaticClass();
}
struct Z_Construct_UClass_AQuietGameStateBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameState/QuietGameStateBase.h" },
		{ "ModuleRelativePath", "GameState/QuietGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AQuietGameStateBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AQuietGameStateBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Quiet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AQuietGameStateBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AQuietGameStateBase_Statics::ClassParams = {
	&AQuietGameStateBase::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AQuietGameStateBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AQuietGameStateBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AQuietGameStateBase()
{
	if (!Z_Registration_Info_UClass_AQuietGameStateBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AQuietGameStateBase.OuterSingleton, Z_Construct_UClass_AQuietGameStateBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AQuietGameStateBase.OuterSingleton;
}
template<> QUIET_API UClass* StaticClass<AQuietGameStateBase>()
{
	return AQuietGameStateBase::StaticClass();
}
AQuietGameStateBase::AQuietGameStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AQuietGameStateBase);
AQuietGameStateBase::~AQuietGameStateBase() {}
// End Class AQuietGameStateBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_GameState_QuietGameStateBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AQuietGameStateBase, AQuietGameStateBase::StaticClass, TEXT("AQuietGameStateBase"), &Z_Registration_Info_UClass_AQuietGameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AQuietGameStateBase), 3570651196U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_GameState_QuietGameStateBase_h_2593754153(TEXT("/Script/Quiet"),
	Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_GameState_QuietGameStateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_GameState_QuietGameStateBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
