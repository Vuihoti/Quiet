// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Quiet/QuietGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuietGameModeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
QUIET_API UClass* Z_Construct_UClass_AQuietGameModeBase();
QUIET_API UClass* Z_Construct_UClass_AQuietGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Quiet();
// End Cross Module References

// Begin Class AQuietGameModeBase
void AQuietGameModeBase::StaticRegisterNativesAQuietGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AQuietGameModeBase);
UClass* Z_Construct_UClass_AQuietGameModeBase_NoRegister()
{
	return AQuietGameModeBase::StaticClass();
}
struct Z_Construct_UClass_AQuietGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "QuietGameModeBase.h" },
		{ "ModuleRelativePath", "QuietGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AQuietGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AQuietGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Quiet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AQuietGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AQuietGameModeBase_Statics::ClassParams = {
	&AQuietGameModeBase::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AQuietGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AQuietGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AQuietGameModeBase()
{
	if (!Z_Registration_Info_UClass_AQuietGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AQuietGameModeBase.OuterSingleton, Z_Construct_UClass_AQuietGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AQuietGameModeBase.OuterSingleton;
}
template<> QUIET_API UClass* StaticClass<AQuietGameModeBase>()
{
	return AQuietGameModeBase::StaticClass();
}
AQuietGameModeBase::AQuietGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AQuietGameModeBase);
AQuietGameModeBase::~AQuietGameModeBase() {}
// End Class AQuietGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_QuietGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AQuietGameModeBase, AQuietGameModeBase::StaticClass, TEXT("AQuietGameModeBase"), &Z_Registration_Info_UClass_AQuietGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AQuietGameModeBase), 2219930034U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_QuietGameModeBase_h_1194224463(TEXT("/Script/Quiet"),
	Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_QuietGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_QuietGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
