// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Quiet/Library/QuietDLSSLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuietDLSSLibrary() {}

// Begin Cross Module References
DLSSBLUEPRINT_API UClass* Z_Construct_UClass_UDLSSLibrary();
QUIET_API UClass* Z_Construct_UClass_UQuietDLSSLibrary();
QUIET_API UClass* Z_Construct_UClass_UQuietDLSSLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_Quiet();
// End Cross Module References

// Begin Class UQuietDLSSLibrary
void UQuietDLSSLibrary::StaticRegisterNativesUQuietDLSSLibrary()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuietDLSSLibrary);
UClass* Z_Construct_UClass_UQuietDLSSLibrary_NoRegister()
{
	return UQuietDLSSLibrary::StaticClass();
}
struct Z_Construct_UClass_UQuietDLSSLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Library/QuietDLSSLibrary.h" },
		{ "ModuleRelativePath", "Library/QuietDLSSLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuietDLSSLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UQuietDLSSLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDLSSLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Quiet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuietDLSSLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuietDLSSLibrary_Statics::ClassParams = {
	&UQuietDLSSLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuietDLSSLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuietDLSSLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuietDLSSLibrary()
{
	if (!Z_Registration_Info_UClass_UQuietDLSSLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuietDLSSLibrary.OuterSingleton, Z_Construct_UClass_UQuietDLSSLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuietDLSSLibrary.OuterSingleton;
}
template<> QUIET_API UClass* StaticClass<UQuietDLSSLibrary>()
{
	return UQuietDLSSLibrary::StaticClass();
}
UQuietDLSSLibrary::UQuietDLSSLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuietDLSSLibrary);
UQuietDLSSLibrary::~UQuietDLSSLibrary() {}
// End Class UQuietDLSSLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Library_QuietDLSSLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuietDLSSLibrary, UQuietDLSSLibrary::StaticClass, TEXT("UQuietDLSSLibrary"), &Z_Registration_Info_UClass_UQuietDLSSLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuietDLSSLibrary), 753742890U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Library_QuietDLSSLibrary_h_3183140047(TEXT("/Script/Quiet"),
	Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Library_QuietDLSSLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Library_QuietDLSSLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
