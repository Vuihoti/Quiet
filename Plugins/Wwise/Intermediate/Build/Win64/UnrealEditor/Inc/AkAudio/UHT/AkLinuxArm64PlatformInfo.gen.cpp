// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/Platforms/AkPlatform_LinuxArm64/AkLinuxArm64PlatformInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkLinuxArm64PlatformInfo() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UAkLinuxArm64PlatformInfo();
AKAUDIO_API UClass* Z_Construct_UClass_UAkLinuxArm64PlatformInfo_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInfo();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

// Begin Class UAkLinuxArm64PlatformInfo
void UAkLinuxArm64PlatformInfo::StaticRegisterNativesUAkLinuxArm64PlatformInfo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkLinuxArm64PlatformInfo);
UClass* Z_Construct_UClass_UAkLinuxArm64PlatformInfo_NoRegister()
{
	return UAkLinuxArm64PlatformInfo::StaticClass();
}
struct Z_Construct_UClass_UAkLinuxArm64PlatformInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Platforms/AkPlatform_LinuxArm64/AkLinuxArm64PlatformInfo.h" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_LinuxArm64/AkLinuxArm64PlatformInfo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkLinuxArm64PlatformInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAkLinuxArm64PlatformInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkPlatformInfo,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkLinuxArm64PlatformInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkLinuxArm64PlatformInfo_Statics::ClassParams = {
	&UAkLinuxArm64PlatformInfo::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkLinuxArm64PlatformInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkLinuxArm64PlatformInfo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkLinuxArm64PlatformInfo()
{
	if (!Z_Registration_Info_UClass_UAkLinuxArm64PlatformInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkLinuxArm64PlatformInfo.OuterSingleton, Z_Construct_UClass_UAkLinuxArm64PlatformInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkLinuxArm64PlatformInfo.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UAkLinuxArm64PlatformInfo>()
{
	return UAkLinuxArm64PlatformInfo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkLinuxArm64PlatformInfo);
UAkLinuxArm64PlatformInfo::~UAkLinuxArm64PlatformInfo() {}
// End Class UAkLinuxArm64PlatformInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_LinuxArm64_AkLinuxArm64PlatformInfo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkLinuxArm64PlatformInfo, UAkLinuxArm64PlatformInfo::StaticClass, TEXT("UAkLinuxArm64PlatformInfo"), &Z_Registration_Info_UClass_UAkLinuxArm64PlatformInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkLinuxArm64PlatformInfo), 2318769406U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_LinuxArm64_AkLinuxArm64PlatformInfo_h_632018829(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_LinuxArm64_AkLinuxArm64PlatformInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_LinuxArm64_AkLinuxArm64PlatformInfo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
