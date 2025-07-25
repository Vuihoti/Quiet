// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StreamlineBlueprint/Public/StreamlineLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStreamlineLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
STREAMLINEBLUEPRINT_API UClass* Z_Construct_UClass_UStreamlineLibrary();
STREAMLINEBLUEPRINT_API UClass* Z_Construct_UClass_UStreamlineLibrary_NoRegister();
STREAMLINEBLUEPRINT_API UEnum* Z_Construct_UEnum_StreamlineBlueprint_UStreamlineFeature();
STREAMLINEBLUEPRINT_API UEnum* Z_Construct_UEnum_StreamlineBlueprint_UStreamlineFeatureRequirementsFlags();
STREAMLINEBLUEPRINT_API UEnum* Z_Construct_UEnum_StreamlineBlueprint_UStreamlineFeatureSupport();
STREAMLINEBLUEPRINT_API UScriptStruct* Z_Construct_UScriptStruct_FStreamlineFeatureRequirements();
STREAMLINEBLUEPRINT_API UScriptStruct* Z_Construct_UScriptStruct_FStreamlineVersion();
UPackage* Z_Construct_UPackage__Script_StreamlineBlueprint();
// End Cross Module References

// Begin Enum UStreamlineFeature
static FEnumRegistrationInfo Z_Registration_Info_UEnum_UStreamlineFeature;
static UEnum* UStreamlineFeature_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_UStreamlineFeature.OuterSingleton)
	{
		Z_Registration_Info_UEnum_UStreamlineFeature.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StreamlineBlueprint_UStreamlineFeature, (UObject*)Z_Construct_UPackage__Script_StreamlineBlueprint(), TEXT("UStreamlineFeature"));
	}
	return Z_Registration_Info_UEnum_UStreamlineFeature.OuterSingleton;
}
template<> STREAMLINEBLUEPRINT_API UEnum* StaticEnum<UStreamlineFeature>()
{
	return UStreamlineFeature_StaticEnum();
}
struct Z_Construct_UEnum_StreamlineBlueprint_UStreamlineFeature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "UStreamlineFeature::Count" },
		{ "DeepDVC.DisplayName", "DeepDVC" },
		{ "DeepDVC.Name", "UStreamlineFeature::DeepDVC" },
		{ "DLSSG.DisplayName", "DLSS Frame Generation" },
		{ "DLSSG.Name", "UStreamlineFeature::DLSSG" },
		{ "ModuleRelativePath", "Public/StreamlineLibrary.h" },
		{ "Reflex.DisplayName", "Reflex" },
		{ "Reflex.Name", "UStreamlineFeature::Reflex" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "UStreamlineFeature::DLSSG", (int64)UStreamlineFeature::DLSSG },
		{ "UStreamlineFeature::Reflex", (int64)UStreamlineFeature::Reflex },
		{ "UStreamlineFeature::DeepDVC", (int64)UStreamlineFeature::DeepDVC },
		{ "UStreamlineFeature::Count", (int64)UStreamlineFeature::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StreamlineBlueprint_UStreamlineFeature_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StreamlineBlueprint,
	nullptr,
	"UStreamlineFeature",
	"UStreamlineFeature",
	Z_Construct_UEnum_StreamlineBlueprint_UStreamlineFeature_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StreamlineBlueprint_UStreamlineFeature_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StreamlineBlueprint_UStreamlineFeature_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StreamlineBlueprint_UStreamlineFeature_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StreamlineBlueprint_UStreamlineFeature()
{
	if (!Z_Registration_Info_UEnum_UStreamlineFeature.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_UStreamlineFeature.InnerSingleton, Z_Construct_UEnum_StreamlineBlueprint_UStreamlineFeature_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_UStreamlineFeature.InnerSingleton;
}
// End Enum UStreamlineFeature

// Begin Enum UStreamlineFeatureSupport
static FEnumRegistrationInfo Z_Registration_Info_UEnum_UStreamlineFeatureSupport;
static UEnum* UStreamlineFeatureSupport_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_UStreamlineFeatureSupport.OuterSingleton)
	{
		Z_Registration_Info_UEnum_UStreamlineFeatureSupport.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StreamlineBlueprint_UStreamlineFeatureSupport, (UObject*)Z_Construct_UPackage__Script_StreamlineBlueprint(), TEXT("UStreamlineFeatureSupport"));
	}
	return Z_Registration_Info_UEnum_UStreamlineFeatureSupport.OuterSingleton;
}
template<> STREAMLINEBLUEPRINT_API UEnum* StaticEnum<UStreamlineFeatureSupport>()
{
	return UStreamlineFeatureSupport_StaticEnum();
}
struct Z_Construct_UEnum_StreamlineBlueprint_UStreamlineFeatureSupport_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StreamlineLibrary.h" },
		{ "NotSupported.DisplayName", "Not Supported" },
		{ "NotSupported.Name", "UStreamlineFeatureSupport::NotSupported" },
		{ "NotSupportedByPlatformAtBuildTime.DisplayName", "Platform Not Supported At Build Time" },
		{ "NotSupportedByPlatformAtBuildTime.Name", "UStreamlineFeatureSupport::NotSupportedByPlatformAtBuildTime" },
		{ "NotSupportedByPlatformAtBuildTime.ToolTip", "This platform doesn't not support this feature at build time. Currently this feature is only supported on Windows 64" },
		{ "NotSupportedByRHI.DisplayName", "Not supported by RHI" },
		{ "NotSupportedByRHI.Name", "UStreamlineFeatureSupport::NotSupportedByRHI" },
		{ "NotSupportedByRHI.ToolTip", "This RHI doesn't not support this feature run time." },
		{ "NotSupportedDriverOutOfDate.DisplayName", "Driver Out of Date" },
		{ "NotSupportedDriverOutOfDate.Name", "UStreamlineFeatureSupport::NotSupportedDriverOutOfDate" },
		{ "NotSupportedDriverOutOfDate.ToolTip", "The driver is outdated. Also see GetStreamlineFeatureGMinimumDriverVersion" },
		{ "NotSupportedHardewareSchedulingDisabled.DisplayName", "Hardware Scheduling Disabled" },
		{ "NotSupportedHardewareSchedulingDisabled.Name", "UStreamlineFeatureSupport::NotSupportedHardewareSchedulingDisabled" },
		{ "NotSupportedHardewareSchedulingDisabled.ToolTip", "This feature requires Windows Hardware Scheduling to be Enabled" },
		{ "NotSupportedIncompatibleAPICaptureToolActive.DisplayName", "Incompatible API Capture Tool Active" },
		{ "NotSupportedIncompatibleAPICaptureToolActive.Name", "UStreamlineFeatureSupport::NotSupportedIncompatibleAPICaptureToolActive" },
		{ "NotSupportedIncompatibleAPICaptureToolActive.ToolTip", "This feature is not compatible with an active API capture tool such as RenderDoc." },
		{ "NotSupportedIncompatibleHardware.DisplayName", "Incompatible Hardware" },
		{ "NotSupportedIncompatibleHardware.Name", "UStreamlineFeatureSupport::NotSupportedIncompatibleHardware" },
		{ "NotSupportedIncompatibleHardware.ToolTip", "This feature requires an NVIDIA RTX GPU" },
		{ "NotSupportedOperatingSystemOutOfDate.DisplayName", "Operating System Out of Date" },
		{ "NotSupportedOperatingSystemOutOfDate.Name", "UStreamlineFeatureSupport::NotSupportedOperatingSystemOutOfDate" },
		{ "NotSupportedOperatingSystemOutOfDate.ToolTip", "The Operating System is outdated. Also see GetStreamlineFeatureMinimumOperatingSystemVersion" },
		{ "Supported.DisplayName", "Supported" },
		{ "Supported.Name", "UStreamlineFeatureSupport::Supported" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "UStreamlineFeatureSupport::Supported", (int64)UStreamlineFeatureSupport::Supported },
		{ "UStreamlineFeatureSupport::NotSupported", (int64)UStreamlineFeatureSupport::NotSupported },
		{ "UStreamlineFeatureSupport::NotSupportedIncompatibleHardware", (int64)UStreamlineFeatureSupport::NotSupportedIncompatibleHardware },
		{ "UStreamlineFeatureSupport::NotSupportedDriverOutOfDate", (int64)UStreamlineFeatureSupport::NotSupportedDriverOutOfDate },
		{ "UStreamlineFeatureSupport::NotSupportedOperatingSystemOutOfDate", (int64)UStreamlineFeatureSupport::NotSupportedOperatingSystemOutOfDate },
		{ "UStreamlineFeatureSupport::NotSupportedHardewareSchedulingDisabled", (int64)UStreamlineFeatureSupport::NotSupportedHardewareSchedulingDisabled },
		{ "UStreamlineFeatureSupport::NotSupportedByRHI", (int64)UStreamlineFeatureSupport::NotSupportedByRHI },
		{ "UStreamlineFeatureSupport::NotSupportedByPlatformAtBuildTime", (int64)UStreamlineFeatureSupport::NotSupportedByPlatformAtBuildTime },
		{ "UStreamlineFeatureSupport::NotSupportedIncompatibleAPICaptureToolActive", (int64)UStreamlineFeatureSupport::NotSupportedIncompatibleAPICaptureToolActive },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StreamlineBlueprint_UStreamlineFeatureSupport_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StreamlineBlueprint,
	nullptr,
	"UStreamlineFeatureSupport",
	"UStreamlineFeatureSupport",
	Z_Construct_UEnum_StreamlineBlueprint_UStreamlineFeatureSupport_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StreamlineBlueprint_UStreamlineFeatureSupport_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StreamlineBlueprint_UStreamlineFeatureSupport_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StreamlineBlueprint_UStreamlineFeatureSupport_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StreamlineBlueprint_UStreamlineFeatureSupport()
{
	if (!Z_Registration_Info_UEnum_UStreamlineFeatureSupport.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_UStreamlineFeatureSupport.InnerSingleton, Z_Construct_UEnum_StreamlineBlueprint_UStreamlineFeatureSupport_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_UStreamlineFeatureSupport.InnerSingleton;
}
// End Enum UStreamlineFeatureSupport

// Begin Enum UStreamlineFeatureRequirementsFlags
static FEnumRegistrationInfo Z_Registration_Info_UEnum_UStreamlineFeatureRequirementsFlags;
static UEnum* UStreamlineFeatureRequirementsFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_UStreamlineFeatureRequirementsFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_UStreamlineFeatureRequirementsFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StreamlineBlueprint_UStreamlineFeatureRequirementsFlags, (UObject*)Z_Construct_UPackage__Script_StreamlineBlueprint(), TEXT("UStreamlineFeatureRequirementsFlags"));
	}
	return Z_Registration_Info_UEnum_UStreamlineFeatureRequirementsFlags.OuterSingleton;
}
template<> STREAMLINEBLUEPRINT_API UEnum* StaticEnum<UStreamlineFeatureRequirementsFlags>()
{
	return UStreamlineFeatureRequirementsFlags_StaticEnum();
}
struct Z_Construct_UEnum_StreamlineBlueprint_UStreamlineFeatureRequirementsFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "D3D11Supported.Name", "UStreamlineFeatureRequirementsFlags::D3D11Supported" },
		{ "D3D12Supported.Name", "UStreamlineFeatureRequirementsFlags::D3D12Supported" },
		{ "HardwareSchedulingRequired.Name", "UStreamlineFeatureRequirementsFlags::HardwareSchedulingRequired" },
		{ "ModuleRelativePath", "Public/StreamlineLibrary.h" },
		{ "None.Name", "UStreamlineFeatureRequirementsFlags::None" },
		{ "VSyncOffRequired.Name", "UStreamlineFeatureRequirementsFlags::VSyncOffRequired" },
		{ "VulkanSupported.Name", "UStreamlineFeatureRequirementsFlags::VulkanSupported" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "UStreamlineFeatureRequirementsFlags::None", (int64)UStreamlineFeatureRequirementsFlags::None },
		{ "UStreamlineFeatureRequirementsFlags::D3D11Supported", (int64)UStreamlineFeatureRequirementsFlags::D3D11Supported },
		{ "UStreamlineFeatureRequirementsFlags::D3D12Supported", (int64)UStreamlineFeatureRequirementsFlags::D3D12Supported },
		{ "UStreamlineFeatureRequirementsFlags::VulkanSupported", (int64)UStreamlineFeatureRequirementsFlags::VulkanSupported },
		{ "UStreamlineFeatureRequirementsFlags::VSyncOffRequired", (int64)UStreamlineFeatureRequirementsFlags::VSyncOffRequired },
		{ "UStreamlineFeatureRequirementsFlags::HardwareSchedulingRequired", (int64)UStreamlineFeatureRequirementsFlags::HardwareSchedulingRequired },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StreamlineBlueprint_UStreamlineFeatureRequirementsFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StreamlineBlueprint,
	nullptr,
	"UStreamlineFeatureRequirementsFlags",
	"UStreamlineFeatureRequirementsFlags",
	Z_Construct_UEnum_StreamlineBlueprint_UStreamlineFeatureRequirementsFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StreamlineBlueprint_UStreamlineFeatureRequirementsFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StreamlineBlueprint_UStreamlineFeatureRequirementsFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StreamlineBlueprint_UStreamlineFeatureRequirementsFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StreamlineBlueprint_UStreamlineFeatureRequirementsFlags()
{
	if (!Z_Registration_Info_UEnum_UStreamlineFeatureRequirementsFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_UStreamlineFeatureRequirementsFlags.InnerSingleton, Z_Construct_UEnum_StreamlineBlueprint_UStreamlineFeatureRequirementsFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_UStreamlineFeatureRequirementsFlags.InnerSingleton;
}
// End Enum UStreamlineFeatureRequirementsFlags

// Begin ScriptStruct FStreamlineVersion
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StreamlineVersion;
class UScriptStruct* FStreamlineVersion::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StreamlineVersion.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StreamlineVersion.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreamlineVersion, (UObject*)Z_Construct_UPackage__Script_StreamlineBlueprint(), TEXT("StreamlineVersion"));
	}
	return Z_Registration_Info_UScriptStruct_StreamlineVersion.OuterSingleton;
}
template<> STREAMLINEBLUEPRINT_API UScriptStruct* StaticStruct<FStreamlineVersion>()
{
	return FStreamlineVersion::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStreamlineVersion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StreamlineLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Major_MetaData[] = {
		{ "Category", "Streamline" },
		{ "ModuleRelativePath", "Public/StreamlineLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Minor_MetaData[] = {
		{ "Category", "Streamline" },
		{ "ModuleRelativePath", "Public/StreamlineLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Build_MetaData[] = {
		{ "Category", "Streamline" },
		{ "ModuleRelativePath", "Public/StreamlineLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Major;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Minor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Build;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreamlineVersion>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStreamlineVersion_Statics::NewProp_Major = { "Major", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStreamlineVersion, Major), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Major_MetaData), NewProp_Major_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStreamlineVersion_Statics::NewProp_Minor = { "Minor", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStreamlineVersion, Minor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Minor_MetaData), NewProp_Minor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStreamlineVersion_Statics::NewProp_Build = { "Build", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStreamlineVersion, Build), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Build_MetaData), NewProp_Build_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStreamlineVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamlineVersion_Statics::NewProp_Major,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamlineVersion_Statics::NewProp_Minor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamlineVersion_Statics::NewProp_Build,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamlineVersion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStreamlineVersion_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StreamlineBlueprint,
	nullptr,
	&NewStructOps,
	"StreamlineVersion",
	Z_Construct_UScriptStruct_FStreamlineVersion_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamlineVersion_Statics::PropPointers),
	sizeof(FStreamlineVersion),
	alignof(FStreamlineVersion),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamlineVersion_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStreamlineVersion_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStreamlineVersion()
{
	if (!Z_Registration_Info_UScriptStruct_StreamlineVersion.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StreamlineVersion.InnerSingleton, Z_Construct_UScriptStruct_FStreamlineVersion_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StreamlineVersion.InnerSingleton;
}
// End ScriptStruct FStreamlineVersion

// Begin ScriptStruct FStreamlineFeatureRequirements
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StreamlineFeatureRequirements;
class UScriptStruct* FStreamlineFeatureRequirements::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StreamlineFeatureRequirements.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StreamlineFeatureRequirements.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreamlineFeatureRequirements, (UObject*)Z_Construct_UPackage__Script_StreamlineBlueprint(), TEXT("StreamlineFeatureRequirements"));
	}
	return Z_Registration_Info_UScriptStruct_StreamlineFeatureRequirements.OuterSingleton;
}
template<> STREAMLINEBLUEPRINT_API UScriptStruct* StaticStruct<FStreamlineFeatureRequirements>()
{
	return FStreamlineFeatureRequirements::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStreamlineFeatureRequirements_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StreamlineLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Support_MetaData[] = {
		{ "Category", "Streamline" },
		{ "ModuleRelativePath", "Public/StreamlineLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Requirements_MetaData[] = {
		{ "Category", "Streamline" },
		{ "ModuleRelativePath", "Public/StreamlineLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredOperatingSystemVersion_MetaData[] = {
		{ "Category", "Streamline" },
		{ "ModuleRelativePath", "Public/StreamlineLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetectedOperatingSystemVersion_MetaData[] = {
		{ "Category", "Streamline" },
		{ "ModuleRelativePath", "Public/StreamlineLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredDriverVersion_MetaData[] = {
		{ "Category", "Streamline" },
		{ "ModuleRelativePath", "Public/StreamlineLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetectedDriverVersion_MetaData[] = {
		{ "Category", "Streamline" },
		{ "ModuleRelativePath", "Public/StreamlineLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Support_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Support;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Requirements_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Requirements;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredOperatingSystemVersion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DetectedOperatingSystemVersion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredDriverVersion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DetectedDriverVersion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreamlineFeatureRequirements>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStreamlineFeatureRequirements_Statics::NewProp_Support_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStreamlineFeatureRequirements_Statics::NewProp_Support = { "Support", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStreamlineFeatureRequirements, Support), Z_Construct_UEnum_StreamlineBlueprint_UStreamlineFeatureSupport, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Support_MetaData), NewProp_Support_MetaData) }; // 498557622
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStreamlineFeatureRequirements_Statics::NewProp_Requirements_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStreamlineFeatureRequirements_Statics::NewProp_Requirements = { "Requirements", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStreamlineFeatureRequirements, Requirements), Z_Construct_UEnum_StreamlineBlueprint_UStreamlineFeatureRequirementsFlags, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Requirements_MetaData), NewProp_Requirements_MetaData) }; // 2639983060
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreamlineFeatureRequirements_Statics::NewProp_RequiredOperatingSystemVersion = { "RequiredOperatingSystemVersion", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStreamlineFeatureRequirements, RequiredOperatingSystemVersion), Z_Construct_UScriptStruct_FStreamlineVersion, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredOperatingSystemVersion_MetaData), NewProp_RequiredOperatingSystemVersion_MetaData) }; // 1473186879
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreamlineFeatureRequirements_Statics::NewProp_DetectedOperatingSystemVersion = { "DetectedOperatingSystemVersion", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStreamlineFeatureRequirements, DetectedOperatingSystemVersion), Z_Construct_UScriptStruct_FStreamlineVersion, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetectedOperatingSystemVersion_MetaData), NewProp_DetectedOperatingSystemVersion_MetaData) }; // 1473186879
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreamlineFeatureRequirements_Statics::NewProp_RequiredDriverVersion = { "RequiredDriverVersion", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStreamlineFeatureRequirements, RequiredDriverVersion), Z_Construct_UScriptStruct_FStreamlineVersion, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredDriverVersion_MetaData), NewProp_RequiredDriverVersion_MetaData) }; // 1473186879
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreamlineFeatureRequirements_Statics::NewProp_DetectedDriverVersion = { "DetectedDriverVersion", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStreamlineFeatureRequirements, DetectedDriverVersion), Z_Construct_UScriptStruct_FStreamlineVersion, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetectedDriverVersion_MetaData), NewProp_DetectedDriverVersion_MetaData) }; // 1473186879
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStreamlineFeatureRequirements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamlineFeatureRequirements_Statics::NewProp_Support_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamlineFeatureRequirements_Statics::NewProp_Support,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamlineFeatureRequirements_Statics::NewProp_Requirements_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamlineFeatureRequirements_Statics::NewProp_Requirements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamlineFeatureRequirements_Statics::NewProp_RequiredOperatingSystemVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamlineFeatureRequirements_Statics::NewProp_DetectedOperatingSystemVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamlineFeatureRequirements_Statics::NewProp_RequiredDriverVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamlineFeatureRequirements_Statics::NewProp_DetectedDriverVersion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamlineFeatureRequirements_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStreamlineFeatureRequirements_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StreamlineBlueprint,
	nullptr,
	&NewStructOps,
	"StreamlineFeatureRequirements",
	Z_Construct_UScriptStruct_FStreamlineFeatureRequirements_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamlineFeatureRequirements_Statics::PropPointers),
	sizeof(FStreamlineFeatureRequirements),
	alignof(FStreamlineFeatureRequirements),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamlineFeatureRequirements_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStreamlineFeatureRequirements_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStreamlineFeatureRequirements()
{
	if (!Z_Registration_Info_UScriptStruct_StreamlineFeatureRequirements.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StreamlineFeatureRequirements.InnerSingleton, Z_Construct_UScriptStruct_FStreamlineFeatureRequirements_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StreamlineFeatureRequirements.InnerSingleton;
}
// End ScriptStruct FStreamlineFeatureRequirements

// Begin Class UStreamlineLibrary Function BreakStreamlineFeatureRequirements
struct Z_Construct_UFunction_UStreamlineLibrary_BreakStreamlineFeatureRequirements_Statics
{
	struct StreamlineLibrary_eventBreakStreamlineFeatureRequirements_Parms
	{
		UStreamlineFeatureRequirementsFlags Requirements;
		bool D3D11Supported;
		bool D3D12Supported;
		bool VulkanSupported;
		bool VSyncOffRequired;
		bool HardwareSchedulingRequired;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Streamline" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*DisplayName = \"Get Streamline Feature Requirements\", */" },
#endif
		{ "Keywords", "Reflex, DLSS-G, DeepDVC" },
		{ "ModuleRelativePath", "Public/StreamlineLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DisplayName = \"Get Streamline Feature Requirements\"," },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Requirements_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Requirements;
	static void NewProp_D3D11Supported_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_D3D11Supported;
	static void NewProp_D3D12Supported_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_D3D12Supported;
	static void NewProp_VulkanSupported_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_VulkanSupported;
	static void NewProp_VSyncOffRequired_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_VSyncOffRequired;
	static void NewProp_HardwareSchedulingRequired_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HardwareSchedulingRequired;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStreamlineLibrary_BreakStreamlineFeatureRequirements_Statics::NewProp_Requirements_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStreamlineLibrary_BreakStreamlineFeatureRequirements_Statics::NewProp_Requirements = { "Requirements", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StreamlineLibrary_eventBreakStreamlineFeatureRequirements_Parms, Requirements), Z_Construct_UEnum_StreamlineBlueprint_UStreamlineFeatureRequirementsFlags, METADATA_PARAMS(0, nullptr) }; // 2639983060
void Z_Construct_UFunction_UStreamlineLibrary_BreakStreamlineFeatureRequirements_Statics::NewProp_D3D11Supported_SetBit(void* Obj)
{
	((StreamlineLibrary_eventBreakStreamlineFeatureRequirements_Parms*)Obj)->D3D11Supported = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStreamlineLibrary_BreakStreamlineFeatureRequirements_Statics::NewProp_D3D11Supported = { "D3D11Supported", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StreamlineLibrary_eventBreakStreamlineFeatureRequirements_Parms), &Z_Construct_UFunction_UStreamlineLibrary_BreakStreamlineFeatureRequirements_Statics::NewProp_D3D11Supported_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStreamlineLibrary_BreakStreamlineFeatureRequirements_Statics::NewProp_D3D12Supported_SetBit(void* Obj)
{
	((StreamlineLibrary_eventBreakStreamlineFeatureRequirements_Parms*)Obj)->D3D12Supported = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStreamlineLibrary_BreakStreamlineFeatureRequirements_Statics::NewProp_D3D12Supported = { "D3D12Supported", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StreamlineLibrary_eventBreakStreamlineFeatureRequirements_Parms), &Z_Construct_UFunction_UStreamlineLibrary_BreakStreamlineFeatureRequirements_Statics::NewProp_D3D12Supported_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStreamlineLibrary_BreakStreamlineFeatureRequirements_Statics::NewProp_VulkanSupported_SetBit(void* Obj)
{
	((StreamlineLibrary_eventBreakStreamlineFeatureRequirements_Parms*)Obj)->VulkanSupported = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStreamlineLibrary_BreakStreamlineFeatureRequirements_Statics::NewProp_VulkanSupported = { "VulkanSupported", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StreamlineLibrary_eventBreakStreamlineFeatureRequirements_Parms), &Z_Construct_UFunction_UStreamlineLibrary_BreakStreamlineFeatureRequirements_Statics::NewProp_VulkanSupported_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStreamlineLibrary_BreakStreamlineFeatureRequirements_Statics::NewProp_VSyncOffRequired_SetBit(void* Obj)
{
	((StreamlineLibrary_eventBreakStreamlineFeatureRequirements_Parms*)Obj)->VSyncOffRequired = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStreamlineLibrary_BreakStreamlineFeatureRequirements_Statics::NewProp_VSyncOffRequired = { "VSyncOffRequired", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StreamlineLibrary_eventBreakStreamlineFeatureRequirements_Parms), &Z_Construct_UFunction_UStreamlineLibrary_BreakStreamlineFeatureRequirements_Statics::NewProp_VSyncOffRequired_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStreamlineLibrary_BreakStreamlineFeatureRequirements_Statics::NewProp_HardwareSchedulingRequired_SetBit(void* Obj)
{
	((StreamlineLibrary_eventBreakStreamlineFeatureRequirements_Parms*)Obj)->HardwareSchedulingRequired = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStreamlineLibrary_BreakStreamlineFeatureRequirements_Statics::NewProp_HardwareSchedulingRequired = { "HardwareSchedulingRequired", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StreamlineLibrary_eventBreakStreamlineFeatureRequirements_Parms), &Z_Construct_UFunction_UStreamlineLibrary_BreakStreamlineFeatureRequirements_Statics::NewProp_HardwareSchedulingRequired_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamlineLibrary_BreakStreamlineFeatureRequirements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibrary_BreakStreamlineFeatureRequirements_Statics::NewProp_Requirements_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibrary_BreakStreamlineFeatureRequirements_Statics::NewProp_Requirements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibrary_BreakStreamlineFeatureRequirements_Statics::NewProp_D3D11Supported,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibrary_BreakStreamlineFeatureRequirements_Statics::NewProp_D3D12Supported,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibrary_BreakStreamlineFeatureRequirements_Statics::NewProp_VulkanSupported,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibrary_BreakStreamlineFeatureRequirements_Statics::NewProp_VSyncOffRequired,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibrary_BreakStreamlineFeatureRequirements_Statics::NewProp_HardwareSchedulingRequired,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibrary_BreakStreamlineFeatureRequirements_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamlineLibrary_BreakStreamlineFeatureRequirements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamlineLibrary, nullptr, "BreakStreamlineFeatureRequirements", nullptr, nullptr, Z_Construct_UFunction_UStreamlineLibrary_BreakStreamlineFeatureRequirements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibrary_BreakStreamlineFeatureRequirements_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStreamlineLibrary_BreakStreamlineFeatureRequirements_Statics::StreamlineLibrary_eventBreakStreamlineFeatureRequirements_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibrary_BreakStreamlineFeatureRequirements_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStreamlineLibrary_BreakStreamlineFeatureRequirements_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStreamlineLibrary_BreakStreamlineFeatureRequirements_Statics::StreamlineLibrary_eventBreakStreamlineFeatureRequirements_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStreamlineLibrary_BreakStreamlineFeatureRequirements()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStreamlineLibrary_BreakStreamlineFeatureRequirements_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStreamlineLibrary::execBreakStreamlineFeatureRequirements)
{
	P_GET_ENUM(UStreamlineFeatureRequirementsFlags,Z_Param_Requirements);
	P_GET_UBOOL_REF(Z_Param_Out_D3D11Supported);
	P_GET_UBOOL_REF(Z_Param_Out_D3D12Supported);
	P_GET_UBOOL_REF(Z_Param_Out_VulkanSupported);
	P_GET_UBOOL_REF(Z_Param_Out_VSyncOffRequired);
	P_GET_UBOOL_REF(Z_Param_Out_HardwareSchedulingRequired);
	P_FINISH;
	P_NATIVE_BEGIN;
	UStreamlineLibrary::BreakStreamlineFeatureRequirements(UStreamlineFeatureRequirementsFlags(Z_Param_Requirements),Z_Param_Out_D3D11Supported,Z_Param_Out_D3D12Supported,Z_Param_Out_VulkanSupported,Z_Param_Out_VSyncOffRequired,Z_Param_Out_HardwareSchedulingRequired);
	P_NATIVE_END;
}
// End Class UStreamlineLibrary Function BreakStreamlineFeatureRequirements

// Begin Class UStreamlineLibrary Function GetStreamlineFeatureInformation
struct Z_Construct_UFunction_UStreamlineLibrary_GetStreamlineFeatureInformation_Statics
{
	struct StreamlineLibrary_eventGetStreamlineFeatureInformation_Parms
	{
		UStreamlineFeature Feature;
		FStreamlineFeatureRequirements ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Streamline" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Checks whether a Streamline feature is supported by the current GPU. Further details can be retrieved via QueryStreamlineFeatureSupport*/" },
#endif
		{ "DisplayName", "Get NVIDIA Streamline Feature information" },
		{ "Keywords", "Reflex, DLSS-G, DeepDVC" },
		{ "ModuleRelativePath", "Public/StreamlineLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks whether a Streamline feature is supported by the current GPU. Further details can be retrieved via QueryStreamlineFeatureSupport" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Feature_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Feature;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStreamlineLibrary_GetStreamlineFeatureInformation_Statics::NewProp_Feature_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStreamlineLibrary_GetStreamlineFeatureInformation_Statics::NewProp_Feature = { "Feature", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StreamlineLibrary_eventGetStreamlineFeatureInformation_Parms, Feature), Z_Construct_UEnum_StreamlineBlueprint_UStreamlineFeature, METADATA_PARAMS(0, nullptr) }; // 2167059317
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStreamlineLibrary_GetStreamlineFeatureInformation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StreamlineLibrary_eventGetStreamlineFeatureInformation_Parms, ReturnValue), Z_Construct_UScriptStruct_FStreamlineFeatureRequirements, METADATA_PARAMS(0, nullptr) }; // 2188231522
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamlineLibrary_GetStreamlineFeatureInformation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibrary_GetStreamlineFeatureInformation_Statics::NewProp_Feature_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibrary_GetStreamlineFeatureInformation_Statics::NewProp_Feature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibrary_GetStreamlineFeatureInformation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibrary_GetStreamlineFeatureInformation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamlineLibrary_GetStreamlineFeatureInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamlineLibrary, nullptr, "GetStreamlineFeatureInformation", nullptr, nullptr, Z_Construct_UFunction_UStreamlineLibrary_GetStreamlineFeatureInformation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibrary_GetStreamlineFeatureInformation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStreamlineLibrary_GetStreamlineFeatureInformation_Statics::StreamlineLibrary_eventGetStreamlineFeatureInformation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibrary_GetStreamlineFeatureInformation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStreamlineLibrary_GetStreamlineFeatureInformation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStreamlineLibrary_GetStreamlineFeatureInformation_Statics::StreamlineLibrary_eventGetStreamlineFeatureInformation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStreamlineLibrary_GetStreamlineFeatureInformation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStreamlineLibrary_GetStreamlineFeatureInformation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStreamlineLibrary::execGetStreamlineFeatureInformation)
{
	P_GET_ENUM(UStreamlineFeature,Z_Param_Feature);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FStreamlineFeatureRequirements*)Z_Param__Result=UStreamlineLibrary::GetStreamlineFeatureInformation(UStreamlineFeature(Z_Param_Feature));
	P_NATIVE_END;
}
// End Class UStreamlineLibrary Function GetStreamlineFeatureInformation

// Begin Class UStreamlineLibrary Function IsStreamlineFeatureSupported
struct Z_Construct_UFunction_UStreamlineLibrary_IsStreamlineFeatureSupported_Statics
{
	struct StreamlineLibrary_eventIsStreamlineFeatureSupported_Parms
	{
		UStreamlineFeature Feature;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Streamline" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Checks whether a Streamline feature is supported by the current GPU. Further details can be retrieved via QueryStreamlineFeatureSupport*/" },
#endif
		{ "DisplayName", "Is NVIDIA Streamline Feature Supported" },
		{ "Keywords", "Reflex, DLSS-G, DeepDVC" },
		{ "ModuleRelativePath", "Public/StreamlineLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks whether a Streamline feature is supported by the current GPU. Further details can be retrieved via QueryStreamlineFeatureSupport" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Feature_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Feature;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStreamlineLibrary_IsStreamlineFeatureSupported_Statics::NewProp_Feature_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStreamlineLibrary_IsStreamlineFeatureSupported_Statics::NewProp_Feature = { "Feature", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StreamlineLibrary_eventIsStreamlineFeatureSupported_Parms, Feature), Z_Construct_UEnum_StreamlineBlueprint_UStreamlineFeature, METADATA_PARAMS(0, nullptr) }; // 2167059317
void Z_Construct_UFunction_UStreamlineLibrary_IsStreamlineFeatureSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StreamlineLibrary_eventIsStreamlineFeatureSupported_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStreamlineLibrary_IsStreamlineFeatureSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StreamlineLibrary_eventIsStreamlineFeatureSupported_Parms), &Z_Construct_UFunction_UStreamlineLibrary_IsStreamlineFeatureSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamlineLibrary_IsStreamlineFeatureSupported_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibrary_IsStreamlineFeatureSupported_Statics::NewProp_Feature_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibrary_IsStreamlineFeatureSupported_Statics::NewProp_Feature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibrary_IsStreamlineFeatureSupported_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibrary_IsStreamlineFeatureSupported_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamlineLibrary_IsStreamlineFeatureSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamlineLibrary, nullptr, "IsStreamlineFeatureSupported", nullptr, nullptr, Z_Construct_UFunction_UStreamlineLibrary_IsStreamlineFeatureSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibrary_IsStreamlineFeatureSupported_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStreamlineLibrary_IsStreamlineFeatureSupported_Statics::StreamlineLibrary_eventIsStreamlineFeatureSupported_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibrary_IsStreamlineFeatureSupported_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStreamlineLibrary_IsStreamlineFeatureSupported_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStreamlineLibrary_IsStreamlineFeatureSupported_Statics::StreamlineLibrary_eventIsStreamlineFeatureSupported_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStreamlineLibrary_IsStreamlineFeatureSupported()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStreamlineLibrary_IsStreamlineFeatureSupported_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStreamlineLibrary::execIsStreamlineFeatureSupported)
{
	P_GET_ENUM(UStreamlineFeature,Z_Param_Feature);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UStreamlineLibrary::IsStreamlineFeatureSupported(UStreamlineFeature(Z_Param_Feature));
	P_NATIVE_END;
}
// End Class UStreamlineLibrary Function IsStreamlineFeatureSupported

// Begin Class UStreamlineLibrary Function QueryStreamlineFeatureSupport
struct Z_Construct_UFunction_UStreamlineLibrary_QueryStreamlineFeatureSupport_Statics
{
	struct StreamlineLibrary_eventQueryStreamlineFeatureSupport_Parms
	{
		UStreamlineFeature Feature;
		UStreamlineFeatureSupport ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Streamline" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Checks whether Streamline feature  is supported by the current GPU\x09*/" },
#endif
		{ "DisplayName", "Query NVIDIA Streamline Feature Support" },
		{ "Keywords", "Reflex, DLSS-G, DeepDVC" },
		{ "ModuleRelativePath", "Public/StreamlineLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks whether Streamline feature  is supported by the current GPU" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Feature_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Feature;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStreamlineLibrary_QueryStreamlineFeatureSupport_Statics::NewProp_Feature_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStreamlineLibrary_QueryStreamlineFeatureSupport_Statics::NewProp_Feature = { "Feature", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StreamlineLibrary_eventQueryStreamlineFeatureSupport_Parms, Feature), Z_Construct_UEnum_StreamlineBlueprint_UStreamlineFeature, METADATA_PARAMS(0, nullptr) }; // 2167059317
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStreamlineLibrary_QueryStreamlineFeatureSupport_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStreamlineLibrary_QueryStreamlineFeatureSupport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StreamlineLibrary_eventQueryStreamlineFeatureSupport_Parms, ReturnValue), Z_Construct_UEnum_StreamlineBlueprint_UStreamlineFeatureSupport, METADATA_PARAMS(0, nullptr) }; // 498557622
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamlineLibrary_QueryStreamlineFeatureSupport_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibrary_QueryStreamlineFeatureSupport_Statics::NewProp_Feature_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibrary_QueryStreamlineFeatureSupport_Statics::NewProp_Feature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibrary_QueryStreamlineFeatureSupport_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibrary_QueryStreamlineFeatureSupport_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibrary_QueryStreamlineFeatureSupport_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamlineLibrary_QueryStreamlineFeatureSupport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamlineLibrary, nullptr, "QueryStreamlineFeatureSupport", nullptr, nullptr, Z_Construct_UFunction_UStreamlineLibrary_QueryStreamlineFeatureSupport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibrary_QueryStreamlineFeatureSupport_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStreamlineLibrary_QueryStreamlineFeatureSupport_Statics::StreamlineLibrary_eventQueryStreamlineFeatureSupport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibrary_QueryStreamlineFeatureSupport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStreamlineLibrary_QueryStreamlineFeatureSupport_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStreamlineLibrary_QueryStreamlineFeatureSupport_Statics::StreamlineLibrary_eventQueryStreamlineFeatureSupport_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStreamlineLibrary_QueryStreamlineFeatureSupport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStreamlineLibrary_QueryStreamlineFeatureSupport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStreamlineLibrary::execQueryStreamlineFeatureSupport)
{
	P_GET_ENUM(UStreamlineFeature,Z_Param_Feature);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UStreamlineFeatureSupport*)Z_Param__Result=UStreamlineLibrary::QueryStreamlineFeatureSupport(UStreamlineFeature(Z_Param_Feature));
	P_NATIVE_END;
}
// End Class UStreamlineLibrary Function QueryStreamlineFeatureSupport

// Begin Class UStreamlineLibrary
void UStreamlineLibrary::StaticRegisterNativesUStreamlineLibrary()
{
	UClass* Class = UStreamlineLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BreakStreamlineFeatureRequirements", &UStreamlineLibrary::execBreakStreamlineFeatureRequirements },
		{ "GetStreamlineFeatureInformation", &UStreamlineLibrary::execGetStreamlineFeatureInformation },
		{ "IsStreamlineFeatureSupported", &UStreamlineLibrary::execIsStreamlineFeatureSupported },
		{ "QueryStreamlineFeatureSupport", &UStreamlineLibrary::execQueryStreamlineFeatureSupport },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStreamlineLibrary);
UClass* Z_Construct_UClass_UStreamlineLibrary_NoRegister()
{
	return UStreamlineLibrary::StaticClass();
}
struct Z_Construct_UClass_UStreamlineLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "StreamlineLibrary.h" },
		{ "ModuleRelativePath", "Public/StreamlineLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStreamlineLibrary_BreakStreamlineFeatureRequirements, "BreakStreamlineFeatureRequirements" }, // 3794258871
		{ &Z_Construct_UFunction_UStreamlineLibrary_GetStreamlineFeatureInformation, "GetStreamlineFeatureInformation" }, // 4152012679
		{ &Z_Construct_UFunction_UStreamlineLibrary_IsStreamlineFeatureSupported, "IsStreamlineFeatureSupported" }, // 1480054039
		{ &Z_Construct_UFunction_UStreamlineLibrary_QueryStreamlineFeatureSupport, "QueryStreamlineFeatureSupport" }, // 2790602431
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStreamlineLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UStreamlineLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_StreamlineBlueprint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStreamlineLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStreamlineLibrary_Statics::ClassParams = {
	&UStreamlineLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStreamlineLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UStreamlineLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStreamlineLibrary()
{
	if (!Z_Registration_Info_UClass_UStreamlineLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStreamlineLibrary.OuterSingleton, Z_Construct_UClass_UStreamlineLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStreamlineLibrary.OuterSingleton;
}
template<> STREAMLINEBLUEPRINT_API UClass* StaticClass<UStreamlineLibrary>()
{
	return UStreamlineLibrary::StaticClass();
}
UStreamlineLibrary::UStreamlineLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStreamlineLibrary);
UStreamlineLibrary::~UStreamlineLibrary() {}
// End Class UStreamlineLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Plugins_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibrary_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ UStreamlineFeature_StaticEnum, TEXT("UStreamlineFeature"), &Z_Registration_Info_UEnum_UStreamlineFeature, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2167059317U) },
		{ UStreamlineFeatureSupport_StaticEnum, TEXT("UStreamlineFeatureSupport"), &Z_Registration_Info_UEnum_UStreamlineFeatureSupport, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 498557622U) },
		{ UStreamlineFeatureRequirementsFlags_StaticEnum, TEXT("UStreamlineFeatureRequirementsFlags"), &Z_Registration_Info_UEnum_UStreamlineFeatureRequirementsFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2639983060U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStreamlineVersion::StaticStruct, Z_Construct_UScriptStruct_FStreamlineVersion_Statics::NewStructOps, TEXT("StreamlineVersion"), &Z_Registration_Info_UScriptStruct_StreamlineVersion, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStreamlineVersion), 1473186879U) },
		{ FStreamlineFeatureRequirements::StaticStruct, Z_Construct_UScriptStruct_FStreamlineFeatureRequirements_Statics::NewStructOps, TEXT("StreamlineFeatureRequirements"), &Z_Registration_Info_UScriptStruct_StreamlineFeatureRequirements, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStreamlineFeatureRequirements), 2188231522U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStreamlineLibrary, UStreamlineLibrary::StaticClass, TEXT("UStreamlineLibrary"), &Z_Registration_Info_UClass_UStreamlineLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStreamlineLibrary), 1974329367U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Plugins_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibrary_h_2030993442(TEXT("/Script/StreamlineBlueprint"),
	Z_CompiledInDeferFile_FID_Quiet_Plugins_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Plugins_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibrary_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Quiet_Plugins_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Plugins_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibrary_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Quiet_Plugins_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Plugins_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibrary_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
