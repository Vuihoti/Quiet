// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Quiet/Library/QuietStreamlineLibraryDLSSG.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuietStreamlineLibraryDLSSG() {}

// Begin Cross Module References
QUIET_API UClass* Z_Construct_UClass_UQuietStreamlineLibraryDLSSG();
QUIET_API UClass* Z_Construct_UClass_UQuietStreamlineLibraryDLSSG_NoRegister();
STREAMLINEBLUEPRINT_API UClass* Z_Construct_UClass_UStreamlineLibraryDLSSG();
UPackage* Z_Construct_UPackage__Script_Quiet();
// End Cross Module References

// Begin Class UQuietStreamlineLibraryDLSSG
void UQuietStreamlineLibraryDLSSG::StaticRegisterNativesUQuietStreamlineLibraryDLSSG()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuietStreamlineLibraryDLSSG);
UClass* Z_Construct_UClass_UQuietStreamlineLibraryDLSSG_NoRegister()
{
	return UQuietStreamlineLibraryDLSSG::StaticClass();
}
struct Z_Construct_UClass_UQuietStreamlineLibraryDLSSG_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Library/QuietStreamlineLibraryDLSSG.h" },
		{ "ModuleRelativePath", "Library/QuietStreamlineLibraryDLSSG.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuietStreamlineLibraryDLSSG>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UQuietStreamlineLibraryDLSSG_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStreamlineLibraryDLSSG,
	(UObject* (*)())Z_Construct_UPackage__Script_Quiet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuietStreamlineLibraryDLSSG_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuietStreamlineLibraryDLSSG_Statics::ClassParams = {
	&UQuietStreamlineLibraryDLSSG::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuietStreamlineLibraryDLSSG_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuietStreamlineLibraryDLSSG_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuietStreamlineLibraryDLSSG()
{
	if (!Z_Registration_Info_UClass_UQuietStreamlineLibraryDLSSG.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuietStreamlineLibraryDLSSG.OuterSingleton, Z_Construct_UClass_UQuietStreamlineLibraryDLSSG_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuietStreamlineLibraryDLSSG.OuterSingleton;
}
template<> QUIET_API UClass* StaticClass<UQuietStreamlineLibraryDLSSG>()
{
	return UQuietStreamlineLibraryDLSSG::StaticClass();
}
UQuietStreamlineLibraryDLSSG::UQuietStreamlineLibraryDLSSG(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuietStreamlineLibraryDLSSG);
UQuietStreamlineLibraryDLSSG::~UQuietStreamlineLibraryDLSSG() {}
// End Class UQuietStreamlineLibraryDLSSG

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Library_QuietStreamlineLibraryDLSSG_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuietStreamlineLibraryDLSSG, UQuietStreamlineLibraryDLSSG::StaticClass, TEXT("UQuietStreamlineLibraryDLSSG"), &Z_Registration_Info_UClass_UQuietStreamlineLibraryDLSSG, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuietStreamlineLibraryDLSSG), 2548953206U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Library_QuietStreamlineLibraryDLSSG_h_4205243750(TEXT("/Script/Quiet"),
	Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Library_QuietStreamlineLibraryDLSSG_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Library_QuietStreamlineLibraryDLSSG_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
