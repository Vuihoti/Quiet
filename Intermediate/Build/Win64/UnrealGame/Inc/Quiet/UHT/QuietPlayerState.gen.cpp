// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Quiet/PlayerState/QuietPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuietPlayerState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
QUIET_API UClass* Z_Construct_UClass_AQuietPlayerState();
QUIET_API UClass* Z_Construct_UClass_AQuietPlayerState_NoRegister();
UPackage* Z_Construct_UPackage__Script_Quiet();
// End Cross Module References

// Begin Class AQuietPlayerState
void AQuietPlayerState::StaticRegisterNativesAQuietPlayerState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AQuietPlayerState);
UClass* Z_Construct_UClass_AQuietPlayerState_NoRegister()
{
	return AQuietPlayerState::StaticClass();
}
struct Z_Construct_UClass_AQuietPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PlayerState/QuietPlayerState.h" },
		{ "ModuleRelativePath", "PlayerState/QuietPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AQuietPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AQuietPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_Quiet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AQuietPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AQuietPlayerState_Statics::ClassParams = {
	&AQuietPlayerState::StaticClass,
	"Engine",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AQuietPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_AQuietPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AQuietPlayerState()
{
	if (!Z_Registration_Info_UClass_AQuietPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AQuietPlayerState.OuterSingleton, Z_Construct_UClass_AQuietPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AQuietPlayerState.OuterSingleton;
}
template<> QUIET_API UClass* StaticClass<AQuietPlayerState>()
{
	return AQuietPlayerState::StaticClass();
}
AQuietPlayerState::AQuietPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AQuietPlayerState);
AQuietPlayerState::~AQuietPlayerState() {}
// End Class AQuietPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_PlayerState_QuietPlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AQuietPlayerState, AQuietPlayerState::StaticClass, TEXT("AQuietPlayerState"), &Z_Registration_Info_UClass_AQuietPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AQuietPlayerState), 574913316U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_PlayerState_QuietPlayerState_h_29167203(TEXT("/Script/Quiet"),
	Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_PlayerState_QuietPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_PlayerState_QuietPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
