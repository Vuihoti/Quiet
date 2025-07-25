// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DLSSBlueprint/Public/DLSSLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDLSSLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
DLSSBLUEPRINT_API UClass* Z_Construct_UClass_UDLSSLibrary();
DLSSBLUEPRINT_API UClass* Z_Construct_UClass_UDLSSLibrary_NoRegister();
DLSSBLUEPRINT_API UEnum* Z_Construct_UEnum_DLSSBlueprint_UDLSSMode();
DLSSBLUEPRINT_API UEnum* Z_Construct_UEnum_DLSSBlueprint_UDLSSSupport();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_DLSSBlueprint();
// End Cross Module References

// Begin Enum UDLSSSupport
static FEnumRegistrationInfo Z_Registration_Info_UEnum_UDLSSSupport;
static UEnum* UDLSSSupport_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_UDLSSSupport.OuterSingleton)
	{
		Z_Registration_Info_UEnum_UDLSSSupport.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DLSSBlueprint_UDLSSSupport, (UObject*)Z_Construct_UPackage__Script_DLSSBlueprint(), TEXT("UDLSSSupport"));
	}
	return Z_Registration_Info_UEnum_UDLSSSupport.OuterSingleton;
}
template<> DLSSBLUEPRINT_API UEnum* StaticEnum<UDLSSSupport>()
{
	return UDLSSSupport_StaticEnum();
}
struct Z_Construct_UEnum_DLSSBlueprint_UDLSSSupport_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
		{ "NotSupported.DisplayName", "Not Supported" },
		{ "NotSupported.Name", "UDLSSSupport::NotSupported" },
		{ "NotSupportedByPlatformAtBuildTime.DisplayName", "Platform Not Supported At Build Time" },
		{ "NotSupportedByPlatformAtBuildTime.Name", "UDLSSSupport::NotSupportedByPlatformAtBuildTime" },
		{ "NotSupportedByPlatformAtBuildTime.ToolTip", "This platform doesn't not support DLSS at build time. Currently DLSS is only supported on Windows 64" },
		{ "NotSupportedDriverOutOfDate.DisplayName", "Driver Out of Date" },
		{ "NotSupportedDriverOutOfDate.Name", "UDLSSSupport::NotSupportedDriverOutOfDate" },
		{ "NotSupportedDriverOutOfDate.ToolTip", "The driver is outdated. Also see GetDLSSMinimumDriverVersion" },
		{ "NotSupportedIncompatibleAPICaptureToolActive.DisplayName", "Incompatible API Capture Tool Active" },
		{ "NotSupportedIncompatibleAPICaptureToolActive.Name", "UDLSSSupport::NotSupportedIncompatibleAPICaptureToolActive" },
		{ "NotSupportedIncompatibleAPICaptureToolActive.ToolTip", "DLSS is not compatible with an active API capture tool such as RenderDoc." },
		{ "NotSupportedIncompatibleHardware.DisplayName", "Incompatible Hardware" },
		{ "NotSupportedIncompatibleHardware.Name", "UDLSSSupport::NotSupportedIncompatibleHardware" },
		{ "NotSupportedIncompatibleHardware.ToolTip", "DLSS requires an NVIDIA RTX GPU" },
		{ "NotSupportedOperatingSystemOutOfDate.DisplayName", "Operating System Out of Date" },
		{ "NotSupportedOperatingSystemOutOfDate.Name", "UDLSSSupport::NotSupportedOperatingSystemOutOfDate" },
		{ "NotSupportedOperatingSystemOutOfDate.ToolTip", "DLSS requires at least Windows 10 Fall 2017 Creators Update 64-bit, (v1709, build 16299)" },
		{ "Supported.DisplayName", "Supported" },
		{ "Supported.Name", "UDLSSSupport::Supported" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "UDLSSSupport::Supported", (int64)UDLSSSupport::Supported },
		{ "UDLSSSupport::NotSupported", (int64)UDLSSSupport::NotSupported },
		{ "UDLSSSupport::NotSupportedIncompatibleHardware", (int64)UDLSSSupport::NotSupportedIncompatibleHardware },
		{ "UDLSSSupport::NotSupportedDriverOutOfDate", (int64)UDLSSSupport::NotSupportedDriverOutOfDate },
		{ "UDLSSSupport::NotSupportedOperatingSystemOutOfDate", (int64)UDLSSSupport::NotSupportedOperatingSystemOutOfDate },
		{ "UDLSSSupport::NotSupportedByPlatformAtBuildTime", (int64)UDLSSSupport::NotSupportedByPlatformAtBuildTime },
		{ "UDLSSSupport::NotSupportedIncompatibleAPICaptureToolActive", (int64)UDLSSSupport::NotSupportedIncompatibleAPICaptureToolActive },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DLSSBlueprint_UDLSSSupport_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DLSSBlueprint,
	nullptr,
	"UDLSSSupport",
	"UDLSSSupport",
	Z_Construct_UEnum_DLSSBlueprint_UDLSSSupport_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DLSSBlueprint_UDLSSSupport_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DLSSBlueprint_UDLSSSupport_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DLSSBlueprint_UDLSSSupport_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DLSSBlueprint_UDLSSSupport()
{
	if (!Z_Registration_Info_UEnum_UDLSSSupport.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_UDLSSSupport.InnerSingleton, Z_Construct_UEnum_DLSSBlueprint_UDLSSSupport_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_UDLSSSupport.InnerSingleton;
}
// End Enum UDLSSSupport

// Begin Enum UDLSSMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_UDLSSMode;
static UEnum* UDLSSMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_UDLSSMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_UDLSSMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DLSSBlueprint_UDLSSMode, (UObject*)Z_Construct_UPackage__Script_DLSSBlueprint(), TEXT("UDLSSMode"));
	}
	return Z_Registration_Info_UEnum_UDLSSMode.OuterSingleton;
}
template<> DLSSBLUEPRINT_API UEnum* StaticEnum<UDLSSMode>()
{
	return UDLSSMode_StaticEnum();
}
struct Z_Construct_UEnum_DLSSBlueprint_UDLSSMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Auto.DisplayName", "Auto" },
		{ "Auto.Name", "UDLSSMode::Auto" },
		{ "Auto.ToolTip", "Not a real quality mode. Use Auto to query best settings for a given resolution with GetDLSSModeInformation" },
		{ "Balanced.DisplayName", "Balanced" },
		{ "Balanced.Name", "UDLSSMode::Balanced" },
		{ "BlueprintType", "true" },
		{ "DLAA.DisplayName", "DLAA" },
		{ "DLAA.Name", "UDLSSMode::DLAA" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
		{ "Off.DisplayName", "Off" },
		{ "Off.Name", "UDLSSMode::Off" },
		{ "Performance.DisplayName", "Performance" },
		{ "Performance.Name", "UDLSSMode::Performance" },
		{ "Quality.DisplayName", "Quality" },
		{ "Quality.Name", "UDLSSMode::Quality" },
		{ "UltraPerformance.DisplayName", "Ultra Performance" },
		{ "UltraPerformance.Name", "UDLSSMode::UltraPerformance" },
		{ "UltraQuality.DisplayName", "Ultra Quality" },
		{ "UltraQuality.Name", "UDLSSMode::UltraQuality" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "UDLSSMode::Off", (int64)UDLSSMode::Off },
		{ "UDLSSMode::Auto", (int64)UDLSSMode::Auto },
		{ "UDLSSMode::DLAA", (int64)UDLSSMode::DLAA },
		{ "UDLSSMode::UltraQuality", (int64)UDLSSMode::UltraQuality },
		{ "UDLSSMode::Quality", (int64)UDLSSMode::Quality },
		{ "UDLSSMode::Balanced", (int64)UDLSSMode::Balanced },
		{ "UDLSSMode::Performance", (int64)UDLSSMode::Performance },
		{ "UDLSSMode::UltraPerformance", (int64)UDLSSMode::UltraPerformance },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DLSSBlueprint_UDLSSMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DLSSBlueprint,
	nullptr,
	"UDLSSMode",
	"UDLSSMode",
	Z_Construct_UEnum_DLSSBlueprint_UDLSSMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DLSSBlueprint_UDLSSMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DLSSBlueprint_UDLSSMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DLSSBlueprint_UDLSSMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DLSSBlueprint_UDLSSMode()
{
	if (!Z_Registration_Info_UEnum_UDLSSMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_UDLSSMode.InnerSingleton, Z_Construct_UEnum_DLSSBlueprint_UDLSSMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_UDLSSMode.InnerSingleton;
}
// End Enum UDLSSMode

// Begin Class UDLSSLibrary Function EnableDLAA
struct Z_Construct_UFunction_UDLSSLibrary_EnableDLAA_Statics
{
	struct DLSSLibrary_eventEnableDLAA_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DLSS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable/disable DLAA. Note that while DLAA is enabled, DLSS will be automatically disabled */" },
#endif
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use 'Enable DLSS-SR' instead" },
		{ "DisplayName", "Enable DLAA" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable/disable DLAA. Note that while DLAA is enabled, DLSS will be automatically disabled" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDLSSLibrary_EnableDLAA_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((DLSSLibrary_eventEnableDLAA_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDLSSLibrary_EnableDLAA_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DLSSLibrary_eventEnableDLAA_Parms), &Z_Construct_UFunction_UDLSSLibrary_EnableDLAA_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDLSSLibrary_EnableDLAA_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLSSLibrary_EnableDLAA_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_EnableDLAA_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDLSSLibrary_EnableDLAA_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDLSSLibrary, nullptr, "EnableDLAA", nullptr, nullptr, Z_Construct_UFunction_UDLSSLibrary_EnableDLAA_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_EnableDLAA_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDLSSLibrary_EnableDLAA_Statics::DLSSLibrary_eventEnableDLAA_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_EnableDLAA_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDLSSLibrary_EnableDLAA_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDLSSLibrary_EnableDLAA_Statics::DLSSLibrary_eventEnableDLAA_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDLSSLibrary_EnableDLAA()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDLSSLibrary_EnableDLAA_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDLSSLibrary::execEnableDLAA)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDLSSLibrary::EnableDLAA(Z_Param_bEnabled);
	P_NATIVE_END;
}
// End Class UDLSSLibrary Function EnableDLAA

// Begin Class UDLSSLibrary Function EnableDLSS
struct Z_Construct_UFunction_UDLSSLibrary_EnableDLSS_Statics
{
	struct DLSSLibrary_eventEnableDLSS_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DLSS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Enable/disable DLSS Super Resolution/DLAA\n\x09 * To select a DLSS-SR quality mode, set an appropriate upscale screen percentage with r.ScreenPercentage. Use GetDlssModeInformation to find optimal screen percentage\n\x09 * To select DLAA, set the upscale screen percentage to 100 (r.ScreenPercentage=100)\n\x09 */" },
#endif
		{ "DisplayName", "Enable DLSS-SR" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable/disable DLSS Super Resolution/DLAA\nTo select a DLSS-SR quality mode, set an appropriate upscale screen percentage with r.ScreenPercentage. Use GetDlssModeInformation to find optimal screen percentage\nTo select DLAA, set the upscale screen percentage to 100 (r.ScreenPercentage=100)" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDLSSLibrary_EnableDLSS_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((DLSSLibrary_eventEnableDLSS_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDLSSLibrary_EnableDLSS_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DLSSLibrary_eventEnableDLSS_Parms), &Z_Construct_UFunction_UDLSSLibrary_EnableDLSS_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDLSSLibrary_EnableDLSS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLSSLibrary_EnableDLSS_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_EnableDLSS_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDLSSLibrary_EnableDLSS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDLSSLibrary, nullptr, "EnableDLSS", nullptr, nullptr, Z_Construct_UFunction_UDLSSLibrary_EnableDLSS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_EnableDLSS_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDLSSLibrary_EnableDLSS_Statics::DLSSLibrary_eventEnableDLSS_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_EnableDLSS_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDLSSLibrary_EnableDLSS_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDLSSLibrary_EnableDLSS_Statics::DLSSLibrary_eventEnableDLSS_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDLSSLibrary_EnableDLSS()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDLSSLibrary_EnableDLSS_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDLSSLibrary::execEnableDLSS)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDLSSLibrary::EnableDLSS(Z_Param_bEnabled);
	P_NATIVE_END;
}
// End Class UDLSSLibrary Function EnableDLSS

// Begin Class UDLSSLibrary Function EnableDLSSRR
struct Z_Construct_UFunction_UDLSSLibrary_EnableDLSSRR_Statics
{
	struct DLSSLibrary_eventEnableDLSSRR_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DLSS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** (Unsupported in this release) Enable/disable DLSS Ray Reconstruction */" },
#endif
		{ "DisplayName", "Enable DLSS-RR" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "(Unsupported in this release) Enable/disable DLSS Ray Reconstruction" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDLSSLibrary_EnableDLSSRR_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((DLSSLibrary_eventEnableDLSSRR_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDLSSLibrary_EnableDLSSRR_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DLSSLibrary_eventEnableDLSSRR_Parms), &Z_Construct_UFunction_UDLSSLibrary_EnableDLSSRR_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDLSSLibrary_EnableDLSSRR_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLSSLibrary_EnableDLSSRR_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_EnableDLSSRR_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDLSSLibrary_EnableDLSSRR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDLSSLibrary, nullptr, "EnableDLSSRR", nullptr, nullptr, Z_Construct_UFunction_UDLSSLibrary_EnableDLSSRR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_EnableDLSSRR_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDLSSLibrary_EnableDLSSRR_Statics::DLSSLibrary_eventEnableDLSSRR_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_EnableDLSSRR_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDLSSLibrary_EnableDLSSRR_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDLSSLibrary_EnableDLSSRR_Statics::DLSSLibrary_eventEnableDLSSRR_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDLSSLibrary_EnableDLSSRR()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDLSSLibrary_EnableDLSSRR_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDLSSLibrary::execEnableDLSSRR)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDLSSLibrary::EnableDLSSRR(Z_Param_bEnabled);
	P_NATIVE_END;
}
// End Class UDLSSLibrary Function EnableDLSSRR

// Begin Class UDLSSLibrary Function GetDefaultDLSSMode
struct Z_Construct_UFunction_UDLSSLibrary_GetDefaultDLSSMode_Statics
{
	struct DLSSLibrary_eventGetDefaultDLSSMode_Parms
	{
		UDLSSMode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DLSS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Find a reasonable default DLSS mode based on current hardware */" },
#endif
		{ "DisplayName", "Get Default DLSS Mode" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Find a reasonable default DLSS mode based on current hardware" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDLSSLibrary_GetDefaultDLSSMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDLSSLibrary_GetDefaultDLSSMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DLSSLibrary_eventGetDefaultDLSSMode_Parms, ReturnValue), Z_Construct_UEnum_DLSSBlueprint_UDLSSMode, METADATA_PARAMS(0, nullptr) }; // 3290494289
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDLSSLibrary_GetDefaultDLSSMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLSSLibrary_GetDefaultDLSSMode_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLSSLibrary_GetDefaultDLSSMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_GetDefaultDLSSMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDLSSLibrary_GetDefaultDLSSMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDLSSLibrary, nullptr, "GetDefaultDLSSMode", nullptr, nullptr, Z_Construct_UFunction_UDLSSLibrary_GetDefaultDLSSMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_GetDefaultDLSSMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDLSSLibrary_GetDefaultDLSSMode_Statics::DLSSLibrary_eventGetDefaultDLSSMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_GetDefaultDLSSMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDLSSLibrary_GetDefaultDLSSMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDLSSLibrary_GetDefaultDLSSMode_Statics::DLSSLibrary_eventGetDefaultDLSSMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDLSSLibrary_GetDefaultDLSSMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDLSSLibrary_GetDefaultDLSSMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDLSSLibrary::execGetDefaultDLSSMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDLSSMode*)Z_Param__Result=UDLSSLibrary::GetDefaultDLSSMode();
	P_NATIVE_END;
}
// End Class UDLSSLibrary Function GetDefaultDLSSMode

// Begin Class UDLSSLibrary Function GetDLSSMinimumDriverVersion
struct Z_Construct_UFunction_UDLSSLibrary_GetDLSSMinimumDriverVersion_Statics
{
	struct DLSSLibrary_eventGetDLSSMinimumDriverVersion_Parms
	{
		int32 MinDriverVersionMajor;
		int32 MinDriverVersionMinor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DLSS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If QueryDLSSSupport returns \"NotSupportedDriverOutOfDate\", then MinDriverVersionMajor and MinDriverVersionMinor contains the required driver version.*/" },
#endif
		{ "DisplayName", "Get DLSS-SR Minimum DriverVersion" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If QueryDLSSSupport returns \"NotSupportedDriverOutOfDate\", then MinDriverVersionMajor and MinDriverVersionMinor contains the required driver version." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinDriverVersionMajor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinDriverVersionMinor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDLSSLibrary_GetDLSSMinimumDriverVersion_Statics::NewProp_MinDriverVersionMajor = { "MinDriverVersionMajor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DLSSLibrary_eventGetDLSSMinimumDriverVersion_Parms, MinDriverVersionMajor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDLSSLibrary_GetDLSSMinimumDriverVersion_Statics::NewProp_MinDriverVersionMinor = { "MinDriverVersionMinor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DLSSLibrary_eventGetDLSSMinimumDriverVersion_Parms, MinDriverVersionMinor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDLSSLibrary_GetDLSSMinimumDriverVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLSSLibrary_GetDLSSMinimumDriverVersion_Statics::NewProp_MinDriverVersionMajor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLSSLibrary_GetDLSSMinimumDriverVersion_Statics::NewProp_MinDriverVersionMinor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_GetDLSSMinimumDriverVersion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDLSSLibrary_GetDLSSMinimumDriverVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDLSSLibrary, nullptr, "GetDLSSMinimumDriverVersion", nullptr, nullptr, Z_Construct_UFunction_UDLSSLibrary_GetDLSSMinimumDriverVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_GetDLSSMinimumDriverVersion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDLSSLibrary_GetDLSSMinimumDriverVersion_Statics::DLSSLibrary_eventGetDLSSMinimumDriverVersion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_GetDLSSMinimumDriverVersion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDLSSLibrary_GetDLSSMinimumDriverVersion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDLSSLibrary_GetDLSSMinimumDriverVersion_Statics::DLSSLibrary_eventGetDLSSMinimumDriverVersion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDLSSLibrary_GetDLSSMinimumDriverVersion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDLSSLibrary_GetDLSSMinimumDriverVersion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDLSSLibrary::execGetDLSSMinimumDriverVersion)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MinDriverVersionMajor);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MinDriverVersionMinor);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDLSSLibrary::GetDLSSMinimumDriverVersion(Z_Param_Out_MinDriverVersionMajor,Z_Param_Out_MinDriverVersionMinor);
	P_NATIVE_END;
}
// End Class UDLSSLibrary Function GetDLSSMinimumDriverVersion

// Begin Class UDLSSLibrary Function GetDLSSMode
struct Z_Construct_UFunction_UDLSSLibrary_GetDLSSMode_Statics
{
	struct DLSSLibrary_eventGetDLSSMode_Parms
	{
		UDLSSMode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DLSS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Read the current DLSS mode */" },
#endif
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use 'Is DLSS-SR Enabled' instead" },
		{ "DisplayName", "Get DLSS Mode" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Read the current DLSS mode" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDLSSLibrary_GetDLSSMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDLSSLibrary_GetDLSSMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DLSSLibrary_eventGetDLSSMode_Parms, ReturnValue), Z_Construct_UEnum_DLSSBlueprint_UDLSSMode, METADATA_PARAMS(0, nullptr) }; // 3290494289
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDLSSLibrary_GetDLSSMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLSSLibrary_GetDLSSMode_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLSSLibrary_GetDLSSMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_GetDLSSMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDLSSLibrary_GetDLSSMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDLSSLibrary, nullptr, "GetDLSSMode", nullptr, nullptr, Z_Construct_UFunction_UDLSSLibrary_GetDLSSMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_GetDLSSMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDLSSLibrary_GetDLSSMode_Statics::DLSSLibrary_eventGetDLSSMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_GetDLSSMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDLSSLibrary_GetDLSSMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDLSSLibrary_GetDLSSMode_Statics::DLSSLibrary_eventGetDLSSMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDLSSLibrary_GetDLSSMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDLSSLibrary_GetDLSSMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDLSSLibrary::execGetDLSSMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDLSSMode*)Z_Param__Result=UDLSSLibrary::GetDLSSMode();
	P_NATIVE_END;
}
// End Class UDLSSLibrary Function GetDLSSMode

// Begin Class UDLSSLibrary Function GetDLSSModeInformation
struct Z_Construct_UFunction_UDLSSLibrary_GetDLSSModeInformation_Statics
{
	struct DLSSLibrary_eventGetDLSSModeInformation_Parms
	{
		UDLSSMode DLSSMode;
		FVector2D ScreenResolution;
		bool bIsSupported;
		float OptimalScreenPercentage;
		bool bIsFixedScreenPercentage;
		float MinScreenPercentage;
		float MaxScreenPercentage;
		float OptimalSharpness;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DLSS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Provide additional details (such as screen percentage ranges) about a DLSS mode. Screen Resolution is required for Auto mode */" },
#endif
		{ "DisplayName", "Get DLSS-SR Mode Information" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Provide additional details (such as screen percentage ranges) about a DLSS mode. Screen Resolution is required for Auto mode" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DLSSMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DLSSMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenResolution;
	static void NewProp_bIsSupported_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSupported;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OptimalScreenPercentage;
	static void NewProp_bIsFixedScreenPercentage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFixedScreenPercentage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinScreenPercentage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxScreenPercentage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OptimalSharpness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDLSSLibrary_GetDLSSModeInformation_Statics::NewProp_DLSSMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDLSSLibrary_GetDLSSModeInformation_Statics::NewProp_DLSSMode = { "DLSSMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DLSSLibrary_eventGetDLSSModeInformation_Parms, DLSSMode), Z_Construct_UEnum_DLSSBlueprint_UDLSSMode, METADATA_PARAMS(0, nullptr) }; // 3290494289
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDLSSLibrary_GetDLSSModeInformation_Statics::NewProp_ScreenResolution = { "ScreenResolution", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DLSSLibrary_eventGetDLSSModeInformation_Parms, ScreenResolution), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDLSSLibrary_GetDLSSModeInformation_Statics::NewProp_bIsSupported_SetBit(void* Obj)
{
	((DLSSLibrary_eventGetDLSSModeInformation_Parms*)Obj)->bIsSupported = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDLSSLibrary_GetDLSSModeInformation_Statics::NewProp_bIsSupported = { "bIsSupported", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DLSSLibrary_eventGetDLSSModeInformation_Parms), &Z_Construct_UFunction_UDLSSLibrary_GetDLSSModeInformation_Statics::NewProp_bIsSupported_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDLSSLibrary_GetDLSSModeInformation_Statics::NewProp_OptimalScreenPercentage = { "OptimalScreenPercentage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DLSSLibrary_eventGetDLSSModeInformation_Parms, OptimalScreenPercentage), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDLSSLibrary_GetDLSSModeInformation_Statics::NewProp_bIsFixedScreenPercentage_SetBit(void* Obj)
{
	((DLSSLibrary_eventGetDLSSModeInformation_Parms*)Obj)->bIsFixedScreenPercentage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDLSSLibrary_GetDLSSModeInformation_Statics::NewProp_bIsFixedScreenPercentage = { "bIsFixedScreenPercentage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DLSSLibrary_eventGetDLSSModeInformation_Parms), &Z_Construct_UFunction_UDLSSLibrary_GetDLSSModeInformation_Statics::NewProp_bIsFixedScreenPercentage_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDLSSLibrary_GetDLSSModeInformation_Statics::NewProp_MinScreenPercentage = { "MinScreenPercentage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DLSSLibrary_eventGetDLSSModeInformation_Parms, MinScreenPercentage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDLSSLibrary_GetDLSSModeInformation_Statics::NewProp_MaxScreenPercentage = { "MaxScreenPercentage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DLSSLibrary_eventGetDLSSModeInformation_Parms, MaxScreenPercentage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDLSSLibrary_GetDLSSModeInformation_Statics::NewProp_OptimalSharpness = { "OptimalSharpness", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DLSSLibrary_eventGetDLSSModeInformation_Parms, OptimalSharpness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDLSSLibrary_GetDLSSModeInformation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLSSLibrary_GetDLSSModeInformation_Statics::NewProp_DLSSMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLSSLibrary_GetDLSSModeInformation_Statics::NewProp_DLSSMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLSSLibrary_GetDLSSModeInformation_Statics::NewProp_ScreenResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLSSLibrary_GetDLSSModeInformation_Statics::NewProp_bIsSupported,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLSSLibrary_GetDLSSModeInformation_Statics::NewProp_OptimalScreenPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLSSLibrary_GetDLSSModeInformation_Statics::NewProp_bIsFixedScreenPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLSSLibrary_GetDLSSModeInformation_Statics::NewProp_MinScreenPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLSSLibrary_GetDLSSModeInformation_Statics::NewProp_MaxScreenPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLSSLibrary_GetDLSSModeInformation_Statics::NewProp_OptimalSharpness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_GetDLSSModeInformation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDLSSLibrary_GetDLSSModeInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDLSSLibrary, nullptr, "GetDLSSModeInformation", nullptr, nullptr, Z_Construct_UFunction_UDLSSLibrary_GetDLSSModeInformation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_GetDLSSModeInformation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDLSSLibrary_GetDLSSModeInformation_Statics::DLSSLibrary_eventGetDLSSModeInformation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_GetDLSSModeInformation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDLSSLibrary_GetDLSSModeInformation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDLSSLibrary_GetDLSSModeInformation_Statics::DLSSLibrary_eventGetDLSSModeInformation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDLSSLibrary_GetDLSSModeInformation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDLSSLibrary_GetDLSSModeInformation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDLSSLibrary::execGetDLSSModeInformation)
{
	P_GET_ENUM(UDLSSMode,Z_Param_DLSSMode);
	P_GET_STRUCT(FVector2D,Z_Param_ScreenResolution);
	P_GET_UBOOL_REF(Z_Param_Out_bIsSupported);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OptimalScreenPercentage);
	P_GET_UBOOL_REF(Z_Param_Out_bIsFixedScreenPercentage);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_MinScreenPercentage);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_MaxScreenPercentage);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OptimalSharpness);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDLSSLibrary::GetDLSSModeInformation(UDLSSMode(Z_Param_DLSSMode),Z_Param_ScreenResolution,Z_Param_Out_bIsSupported,Z_Param_Out_OptimalScreenPercentage,Z_Param_Out_bIsFixedScreenPercentage,Z_Param_Out_MinScreenPercentage,Z_Param_Out_MaxScreenPercentage,Z_Param_Out_OptimalSharpness);
	P_NATIVE_END;
}
// End Class UDLSSLibrary Function GetDLSSModeInformation

// Begin Class UDLSSLibrary Function GetDLSSRRMinimumDriverVersion
struct Z_Construct_UFunction_UDLSSLibrary_GetDLSSRRMinimumDriverVersion_Statics
{
	struct DLSSLibrary_eventGetDLSSRRMinimumDriverVersion_Parms
	{
		int32 MinDriverVersionMajor;
		int32 MinDriverVersionMinor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DLSS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If QueryDLSSRRSupport returns \"NotSupportedDriverOutOfDate\", then MinDriverVersionMajor and MinDriverVersionMinor contains the required driver version.*/" },
#endif
		{ "DisplayName", "Get DLSS-RR Minimum DriverVersion" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If QueryDLSSRRSupport returns \"NotSupportedDriverOutOfDate\", then MinDriverVersionMajor and MinDriverVersionMinor contains the required driver version." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinDriverVersionMajor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinDriverVersionMinor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDLSSLibrary_GetDLSSRRMinimumDriverVersion_Statics::NewProp_MinDriverVersionMajor = { "MinDriverVersionMajor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DLSSLibrary_eventGetDLSSRRMinimumDriverVersion_Parms, MinDriverVersionMajor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDLSSLibrary_GetDLSSRRMinimumDriverVersion_Statics::NewProp_MinDriverVersionMinor = { "MinDriverVersionMinor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DLSSLibrary_eventGetDLSSRRMinimumDriverVersion_Parms, MinDriverVersionMinor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDLSSLibrary_GetDLSSRRMinimumDriverVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLSSLibrary_GetDLSSRRMinimumDriverVersion_Statics::NewProp_MinDriverVersionMajor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLSSLibrary_GetDLSSRRMinimumDriverVersion_Statics::NewProp_MinDriverVersionMinor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_GetDLSSRRMinimumDriverVersion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDLSSLibrary_GetDLSSRRMinimumDriverVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDLSSLibrary, nullptr, "GetDLSSRRMinimumDriverVersion", nullptr, nullptr, Z_Construct_UFunction_UDLSSLibrary_GetDLSSRRMinimumDriverVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_GetDLSSRRMinimumDriverVersion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDLSSLibrary_GetDLSSRRMinimumDriverVersion_Statics::DLSSLibrary_eventGetDLSSRRMinimumDriverVersion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_GetDLSSRRMinimumDriverVersion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDLSSLibrary_GetDLSSRRMinimumDriverVersion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDLSSLibrary_GetDLSSRRMinimumDriverVersion_Statics::DLSSLibrary_eventGetDLSSRRMinimumDriverVersion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDLSSLibrary_GetDLSSRRMinimumDriverVersion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDLSSLibrary_GetDLSSRRMinimumDriverVersion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDLSSLibrary::execGetDLSSRRMinimumDriverVersion)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MinDriverVersionMajor);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MinDriverVersionMinor);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDLSSLibrary::GetDLSSRRMinimumDriverVersion(Z_Param_Out_MinDriverVersionMajor,Z_Param_Out_MinDriverVersionMinor);
	P_NATIVE_END;
}
// End Class UDLSSLibrary Function GetDLSSRRMinimumDriverVersion

// Begin Class UDLSSLibrary Function GetDLSSScreenPercentageRange
struct Z_Construct_UFunction_UDLSSLibrary_GetDLSSScreenPercentageRange_Statics
{
	struct DLSSLibrary_eventGetDLSSScreenPercentageRange_Parms
	{
		float MinScreenPercentage;
		float MaxScreenPercentage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DLSS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The global screen percentage range that DLSS supports. Excludes DLSS modes with fixed screen percentage. Also see GetDLSSModeInformation*/" },
#endif
		{ "DisplayName", "Get DLSS-SR Screenpercentage Range" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The global screen percentage range that DLSS supports. Excludes DLSS modes with fixed screen percentage. Also see GetDLSSModeInformation" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinScreenPercentage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxScreenPercentage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDLSSLibrary_GetDLSSScreenPercentageRange_Statics::NewProp_MinScreenPercentage = { "MinScreenPercentage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DLSSLibrary_eventGetDLSSScreenPercentageRange_Parms, MinScreenPercentage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDLSSLibrary_GetDLSSScreenPercentageRange_Statics::NewProp_MaxScreenPercentage = { "MaxScreenPercentage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DLSSLibrary_eventGetDLSSScreenPercentageRange_Parms, MaxScreenPercentage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDLSSLibrary_GetDLSSScreenPercentageRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLSSLibrary_GetDLSSScreenPercentageRange_Statics::NewProp_MinScreenPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLSSLibrary_GetDLSSScreenPercentageRange_Statics::NewProp_MaxScreenPercentage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_GetDLSSScreenPercentageRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDLSSLibrary_GetDLSSScreenPercentageRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDLSSLibrary, nullptr, "GetDLSSScreenPercentageRange", nullptr, nullptr, Z_Construct_UFunction_UDLSSLibrary_GetDLSSScreenPercentageRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_GetDLSSScreenPercentageRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDLSSLibrary_GetDLSSScreenPercentageRange_Statics::DLSSLibrary_eventGetDLSSScreenPercentageRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_GetDLSSScreenPercentageRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDLSSLibrary_GetDLSSScreenPercentageRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDLSSLibrary_GetDLSSScreenPercentageRange_Statics::DLSSLibrary_eventGetDLSSScreenPercentageRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDLSSLibrary_GetDLSSScreenPercentageRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDLSSLibrary_GetDLSSScreenPercentageRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDLSSLibrary::execGetDLSSScreenPercentageRange)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_MinScreenPercentage);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_MaxScreenPercentage);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDLSSLibrary::GetDLSSScreenPercentageRange(Z_Param_Out_MinScreenPercentage,Z_Param_Out_MaxScreenPercentage);
	P_NATIVE_END;
}
// End Class UDLSSLibrary Function GetDLSSScreenPercentageRange

// Begin Class UDLSSLibrary Function GetDLSSSharpness
struct Z_Construct_UFunction_UDLSSLibrary_GetDLSSSharpness_Statics
{
	struct DLSSLibrary_eventGetDLSSSharpness_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DLSS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Read the console variables to infer the current DLSS sharpness (r.NGX.DLSS.Sharpness) */" },
#endif
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use NIS sharpening instead" },
		{ "DisplayName", "Get DLSS Sharpness" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Read the console variables to infer the current DLSS sharpness (r.NGX.DLSS.Sharpness)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDLSSLibrary_GetDLSSSharpness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DLSSLibrary_eventGetDLSSSharpness_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDLSSLibrary_GetDLSSSharpness_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLSSLibrary_GetDLSSSharpness_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_GetDLSSSharpness_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDLSSLibrary_GetDLSSSharpness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDLSSLibrary, nullptr, "GetDLSSSharpness", nullptr, nullptr, Z_Construct_UFunction_UDLSSLibrary_GetDLSSSharpness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_GetDLSSSharpness_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDLSSLibrary_GetDLSSSharpness_Statics::DLSSLibrary_eventGetDLSSSharpness_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_GetDLSSSharpness_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDLSSLibrary_GetDLSSSharpness_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDLSSLibrary_GetDLSSSharpness_Statics::DLSSLibrary_eventGetDLSSSharpness_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDLSSLibrary_GetDLSSSharpness()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDLSSLibrary_GetDLSSSharpness_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDLSSLibrary::execGetDLSSSharpness)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UDLSSLibrary::GetDLSSSharpness();
	P_NATIVE_END;
}
// End Class UDLSSLibrary Function GetDLSSSharpness

// Begin Class UDLSSLibrary Function GetSupportedDLSSModes
struct Z_Construct_UFunction_UDLSSLibrary_GetSupportedDLSSModes_Statics
{
	struct DLSSLibrary_eventGetSupportedDLSSModes_Parms
	{
		TArray<UDLSSMode> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DLSS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Retrieve all supported DLSS modes. Can be used to populate UI */" },
#endif
		{ "DisplayName", "Get Supported DLSS-SR Modes" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieve all supported DLSS modes. Can be used to populate UI" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDLSSLibrary_GetSupportedDLSSModes_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDLSSLibrary_GetSupportedDLSSModes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_DLSSBlueprint_UDLSSMode, METADATA_PARAMS(0, nullptr) }; // 3290494289
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDLSSLibrary_GetSupportedDLSSModes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DLSSLibrary_eventGetSupportedDLSSModes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3290494289
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDLSSLibrary_GetSupportedDLSSModes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLSSLibrary_GetSupportedDLSSModes_Statics::NewProp_ReturnValue_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLSSLibrary_GetSupportedDLSSModes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLSSLibrary_GetSupportedDLSSModes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_GetSupportedDLSSModes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDLSSLibrary_GetSupportedDLSSModes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDLSSLibrary, nullptr, "GetSupportedDLSSModes", nullptr, nullptr, Z_Construct_UFunction_UDLSSLibrary_GetSupportedDLSSModes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_GetSupportedDLSSModes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDLSSLibrary_GetSupportedDLSSModes_Statics::DLSSLibrary_eventGetSupportedDLSSModes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_GetSupportedDLSSModes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDLSSLibrary_GetSupportedDLSSModes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDLSSLibrary_GetSupportedDLSSModes_Statics::DLSSLibrary_eventGetSupportedDLSSModes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDLSSLibrary_GetSupportedDLSSModes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDLSSLibrary_GetSupportedDLSSModes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDLSSLibrary::execGetSupportedDLSSModes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UDLSSMode>*)Z_Param__Result=UDLSSLibrary::GetSupportedDLSSModes();
	P_NATIVE_END;
}
// End Class UDLSSLibrary Function GetSupportedDLSSModes

// Begin Class UDLSSLibrary Function IsDLAAEnabled
struct Z_Construct_UFunction_UDLSSLibrary_IsDLAAEnabled_Statics
{
	struct DLSSLibrary_eventIsDLAAEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DLSS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Check whether DLAA is enabled */" },
#endif
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use 'Is DLSS-SR Enabled' instead" },
		{ "DisplayName", "Is DLAA Enabled" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check whether DLAA is enabled" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDLSSLibrary_IsDLAAEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DLSSLibrary_eventIsDLAAEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDLSSLibrary_IsDLAAEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DLSSLibrary_eventIsDLAAEnabled_Parms), &Z_Construct_UFunction_UDLSSLibrary_IsDLAAEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDLSSLibrary_IsDLAAEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLSSLibrary_IsDLAAEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_IsDLAAEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDLSSLibrary_IsDLAAEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDLSSLibrary, nullptr, "IsDLAAEnabled", nullptr, nullptr, Z_Construct_UFunction_UDLSSLibrary_IsDLAAEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_IsDLAAEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDLSSLibrary_IsDLAAEnabled_Statics::DLSSLibrary_eventIsDLAAEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_IsDLAAEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDLSSLibrary_IsDLAAEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDLSSLibrary_IsDLAAEnabled_Statics::DLSSLibrary_eventIsDLAAEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDLSSLibrary_IsDLAAEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDLSSLibrary_IsDLAAEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDLSSLibrary::execIsDLAAEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDLSSLibrary::IsDLAAEnabled();
	P_NATIVE_END;
}
// End Class UDLSSLibrary Function IsDLAAEnabled

// Begin Class UDLSSLibrary Function IsDLSSEnabled
struct Z_Construct_UFunction_UDLSSLibrary_IsDLSSEnabled_Statics
{
	struct DLSSLibrary_eventIsDLSSEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DLSS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Check whether DLSS Super Resolution/DLAA is enabled */" },
#endif
		{ "DisplayName", "Is DLSS-SR Enabled" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check whether DLSS Super Resolution/DLAA is enabled" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDLSSLibrary_IsDLSSEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DLSSLibrary_eventIsDLSSEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDLSSLibrary_IsDLSSEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DLSSLibrary_eventIsDLSSEnabled_Parms), &Z_Construct_UFunction_UDLSSLibrary_IsDLSSEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDLSSLibrary_IsDLSSEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLSSLibrary_IsDLSSEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_IsDLSSEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDLSSLibrary_IsDLSSEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDLSSLibrary, nullptr, "IsDLSSEnabled", nullptr, nullptr, Z_Construct_UFunction_UDLSSLibrary_IsDLSSEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_IsDLSSEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDLSSLibrary_IsDLSSEnabled_Statics::DLSSLibrary_eventIsDLSSEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_IsDLSSEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDLSSLibrary_IsDLSSEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDLSSLibrary_IsDLSSEnabled_Statics::DLSSLibrary_eventIsDLSSEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDLSSLibrary_IsDLSSEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDLSSLibrary_IsDLSSEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDLSSLibrary::execIsDLSSEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDLSSLibrary::IsDLSSEnabled();
	P_NATIVE_END;
}
// End Class UDLSSLibrary Function IsDLSSEnabled

// Begin Class UDLSSLibrary Function IsDLSSModeSupported
struct Z_Construct_UFunction_UDLSSLibrary_IsDLSSModeSupported_Statics
{
	struct DLSSLibrary_eventIsDLSSModeSupported_Parms
	{
		UDLSSMode DLSSMode;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DLSS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Check whether a DLSS mode is supported */" },
#endif
		{ "DisplayName", "Is DLSS-SR Mode Supported" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check whether a DLSS mode is supported" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DLSSMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DLSSMode;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDLSSLibrary_IsDLSSModeSupported_Statics::NewProp_DLSSMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDLSSLibrary_IsDLSSModeSupported_Statics::NewProp_DLSSMode = { "DLSSMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DLSSLibrary_eventIsDLSSModeSupported_Parms, DLSSMode), Z_Construct_UEnum_DLSSBlueprint_UDLSSMode, METADATA_PARAMS(0, nullptr) }; // 3290494289
void Z_Construct_UFunction_UDLSSLibrary_IsDLSSModeSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DLSSLibrary_eventIsDLSSModeSupported_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDLSSLibrary_IsDLSSModeSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DLSSLibrary_eventIsDLSSModeSupported_Parms), &Z_Construct_UFunction_UDLSSLibrary_IsDLSSModeSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDLSSLibrary_IsDLSSModeSupported_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLSSLibrary_IsDLSSModeSupported_Statics::NewProp_DLSSMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLSSLibrary_IsDLSSModeSupported_Statics::NewProp_DLSSMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLSSLibrary_IsDLSSModeSupported_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_IsDLSSModeSupported_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDLSSLibrary_IsDLSSModeSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDLSSLibrary, nullptr, "IsDLSSModeSupported", nullptr, nullptr, Z_Construct_UFunction_UDLSSLibrary_IsDLSSModeSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_IsDLSSModeSupported_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDLSSLibrary_IsDLSSModeSupported_Statics::DLSSLibrary_eventIsDLSSModeSupported_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_IsDLSSModeSupported_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDLSSLibrary_IsDLSSModeSupported_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDLSSLibrary_IsDLSSModeSupported_Statics::DLSSLibrary_eventIsDLSSModeSupported_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDLSSLibrary_IsDLSSModeSupported()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDLSSLibrary_IsDLSSModeSupported_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDLSSLibrary::execIsDLSSModeSupported)
{
	P_GET_ENUM(UDLSSMode,Z_Param_DLSSMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDLSSLibrary::IsDLSSModeSupported(UDLSSMode(Z_Param_DLSSMode));
	P_NATIVE_END;
}
// End Class UDLSSLibrary Function IsDLSSModeSupported

// Begin Class UDLSSLibrary Function IsDLSSRREnabled
struct Z_Construct_UFunction_UDLSSLibrary_IsDLSSRREnabled_Statics
{
	struct DLSSLibrary_eventIsDLSSRREnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DLSS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Check whether DLSS Ray Reconstruction is enabled */" },
#endif
		{ "DisplayName", "Is DLSS-RR Enabled" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check whether DLSS Ray Reconstruction is enabled" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDLSSLibrary_IsDLSSRREnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DLSSLibrary_eventIsDLSSRREnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDLSSLibrary_IsDLSSRREnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DLSSLibrary_eventIsDLSSRREnabled_Parms), &Z_Construct_UFunction_UDLSSLibrary_IsDLSSRREnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDLSSLibrary_IsDLSSRREnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLSSLibrary_IsDLSSRREnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_IsDLSSRREnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDLSSLibrary_IsDLSSRREnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDLSSLibrary, nullptr, "IsDLSSRREnabled", nullptr, nullptr, Z_Construct_UFunction_UDLSSLibrary_IsDLSSRREnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_IsDLSSRREnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDLSSLibrary_IsDLSSRREnabled_Statics::DLSSLibrary_eventIsDLSSRREnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_IsDLSSRREnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDLSSLibrary_IsDLSSRREnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDLSSLibrary_IsDLSSRREnabled_Statics::DLSSLibrary_eventIsDLSSRREnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDLSSLibrary_IsDLSSRREnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDLSSLibrary_IsDLSSRREnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDLSSLibrary::execIsDLSSRREnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDLSSLibrary::IsDLSSRREnabled();
	P_NATIVE_END;
}
// End Class UDLSSLibrary Function IsDLSSRREnabled

// Begin Class UDLSSLibrary Function IsDLSSRRSupported
struct Z_Construct_UFunction_UDLSSLibrary_IsDLSSRRSupported_Statics
{
	struct DLSSLibrary_eventIsDLSSRRSupported_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DLSS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Check whether NVIDIA DLSS Ray Reconstruction is supported. Further details can be retrieved via 'Query DLSS-RR Support' */" },
#endif
		{ "DisplayName", "Is DLSS-RR Supported" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check whether NVIDIA DLSS Ray Reconstruction is supported. Further details can be retrieved via 'Query DLSS-RR Support'" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDLSSLibrary_IsDLSSRRSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DLSSLibrary_eventIsDLSSRRSupported_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDLSSLibrary_IsDLSSRRSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DLSSLibrary_eventIsDLSSRRSupported_Parms), &Z_Construct_UFunction_UDLSSLibrary_IsDLSSRRSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDLSSLibrary_IsDLSSRRSupported_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLSSLibrary_IsDLSSRRSupported_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_IsDLSSRRSupported_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDLSSLibrary_IsDLSSRRSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDLSSLibrary, nullptr, "IsDLSSRRSupported", nullptr, nullptr, Z_Construct_UFunction_UDLSSLibrary_IsDLSSRRSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_IsDLSSRRSupported_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDLSSLibrary_IsDLSSRRSupported_Statics::DLSSLibrary_eventIsDLSSRRSupported_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_IsDLSSRRSupported_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDLSSLibrary_IsDLSSRRSupported_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDLSSLibrary_IsDLSSRRSupported_Statics::DLSSLibrary_eventIsDLSSRRSupported_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDLSSLibrary_IsDLSSRRSupported()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDLSSLibrary_IsDLSSRRSupported_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDLSSLibrary::execIsDLSSRRSupported)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDLSSLibrary::IsDLSSRRSupported();
	P_NATIVE_END;
}
// End Class UDLSSLibrary Function IsDLSSRRSupported

// Begin Class UDLSSLibrary Function IsDLSSSupported
struct Z_Construct_UFunction_UDLSSLibrary_IsDLSSSupported_Statics
{
	struct DLSSLibrary_eventIsDLSSSupported_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DLSS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Check whether NVIDIA DLSS Super Resolution/DLAA is supported. Further details can be retrieved via 'Query DLSS-SR Support' */" },
#endif
		{ "DisplayName", "Is DLSS-SR Supported" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check whether NVIDIA DLSS Super Resolution/DLAA is supported. Further details can be retrieved via 'Query DLSS-SR Support'" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDLSSLibrary_IsDLSSSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DLSSLibrary_eventIsDLSSSupported_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDLSSLibrary_IsDLSSSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DLSSLibrary_eventIsDLSSSupported_Parms), &Z_Construct_UFunction_UDLSSLibrary_IsDLSSSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDLSSLibrary_IsDLSSSupported_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLSSLibrary_IsDLSSSupported_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_IsDLSSSupported_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDLSSLibrary_IsDLSSSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDLSSLibrary, nullptr, "IsDLSSSupported", nullptr, nullptr, Z_Construct_UFunction_UDLSSLibrary_IsDLSSSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_IsDLSSSupported_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDLSSLibrary_IsDLSSSupported_Statics::DLSSLibrary_eventIsDLSSSupported_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_IsDLSSSupported_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDLSSLibrary_IsDLSSSupported_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDLSSLibrary_IsDLSSSupported_Statics::DLSSLibrary_eventIsDLSSSupported_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDLSSLibrary_IsDLSSSupported()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDLSSLibrary_IsDLSSSupported_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDLSSLibrary::execIsDLSSSupported)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDLSSLibrary::IsDLSSSupported();
	P_NATIVE_END;
}
// End Class UDLSSLibrary Function IsDLSSSupported

// Begin Class UDLSSLibrary Function QueryDLSSRRSupport
struct Z_Construct_UFunction_UDLSSLibrary_QueryDLSSRRSupport_Statics
{
	struct DLSSLibrary_eventQueryDLSSRRSupport_Parms
	{
		UDLSSSupport ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DLSS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Check whether NVIDIA DLSS Ray Reconstruction is supported */" },
#endif
		{ "DisplayName", "Query DLSS-RR Support" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check whether NVIDIA DLSS Ray Reconstruction is supported" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDLSSLibrary_QueryDLSSRRSupport_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDLSSLibrary_QueryDLSSRRSupport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DLSSLibrary_eventQueryDLSSRRSupport_Parms, ReturnValue), Z_Construct_UEnum_DLSSBlueprint_UDLSSSupport, METADATA_PARAMS(0, nullptr) }; // 395222663
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDLSSLibrary_QueryDLSSRRSupport_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLSSLibrary_QueryDLSSRRSupport_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLSSLibrary_QueryDLSSRRSupport_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_QueryDLSSRRSupport_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDLSSLibrary_QueryDLSSRRSupport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDLSSLibrary, nullptr, "QueryDLSSRRSupport", nullptr, nullptr, Z_Construct_UFunction_UDLSSLibrary_QueryDLSSRRSupport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_QueryDLSSRRSupport_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDLSSLibrary_QueryDLSSRRSupport_Statics::DLSSLibrary_eventQueryDLSSRRSupport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_QueryDLSSRRSupport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDLSSLibrary_QueryDLSSRRSupport_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDLSSLibrary_QueryDLSSRRSupport_Statics::DLSSLibrary_eventQueryDLSSRRSupport_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDLSSLibrary_QueryDLSSRRSupport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDLSSLibrary_QueryDLSSRRSupport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDLSSLibrary::execQueryDLSSRRSupport)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDLSSSupport*)Z_Param__Result=UDLSSLibrary::QueryDLSSRRSupport();
	P_NATIVE_END;
}
// End Class UDLSSLibrary Function QueryDLSSRRSupport

// Begin Class UDLSSLibrary Function QueryDLSSSupport
struct Z_Construct_UFunction_UDLSSLibrary_QueryDLSSSupport_Statics
{
	struct DLSSLibrary_eventQueryDLSSSupport_Parms
	{
		UDLSSSupport ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DLSS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Check whether NVIDIA DLSS Super Resolution/DLAA is supported */" },
#endif
		{ "DisplayName", "Query DLSS-SR Support" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check whether NVIDIA DLSS Super Resolution/DLAA is supported" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDLSSLibrary_QueryDLSSSupport_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDLSSLibrary_QueryDLSSSupport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DLSSLibrary_eventQueryDLSSSupport_Parms, ReturnValue), Z_Construct_UEnum_DLSSBlueprint_UDLSSSupport, METADATA_PARAMS(0, nullptr) }; // 395222663
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDLSSLibrary_QueryDLSSSupport_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLSSLibrary_QueryDLSSSupport_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLSSLibrary_QueryDLSSSupport_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_QueryDLSSSupport_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDLSSLibrary_QueryDLSSSupport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDLSSLibrary, nullptr, "QueryDLSSSupport", nullptr, nullptr, Z_Construct_UFunction_UDLSSLibrary_QueryDLSSSupport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_QueryDLSSSupport_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDLSSLibrary_QueryDLSSSupport_Statics::DLSSLibrary_eventQueryDLSSSupport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_QueryDLSSSupport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDLSSLibrary_QueryDLSSSupport_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDLSSLibrary_QueryDLSSSupport_Statics::DLSSLibrary_eventQueryDLSSSupport_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDLSSLibrary_QueryDLSSSupport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDLSSLibrary_QueryDLSSSupport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDLSSLibrary::execQueryDLSSSupport)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDLSSSupport*)Z_Param__Result=UDLSSLibrary::QueryDLSSSupport();
	P_NATIVE_END;
}
// End Class UDLSSLibrary Function QueryDLSSSupport

// Begin Class UDLSSLibrary Function SetDLSSMode
struct Z_Construct_UFunction_UDLSSLibrary_SetDLSSMode_Statics
{
	struct DLSSLibrary_eventSetDLSSMode_Parms
	{
		UObject* WorldContextObject;
		UDLSSMode DLSSMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DLSS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable/disable DLSS */" },
#endif
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use 'Enable DLSS-SR' instead" },
		{ "DisplayName", "Set DLSS Mode" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable/disable DLSS" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DLSSMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DLSSMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDLSSLibrary_SetDLSSMode_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DLSSLibrary_eventSetDLSSMode_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDLSSLibrary_SetDLSSMode_Statics::NewProp_DLSSMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDLSSLibrary_SetDLSSMode_Statics::NewProp_DLSSMode = { "DLSSMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DLSSLibrary_eventSetDLSSMode_Parms, DLSSMode), Z_Construct_UEnum_DLSSBlueprint_UDLSSMode, METADATA_PARAMS(0, nullptr) }; // 3290494289
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDLSSLibrary_SetDLSSMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLSSLibrary_SetDLSSMode_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLSSLibrary_SetDLSSMode_Statics::NewProp_DLSSMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLSSLibrary_SetDLSSMode_Statics::NewProp_DLSSMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_SetDLSSMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDLSSLibrary_SetDLSSMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDLSSLibrary, nullptr, "SetDLSSMode", nullptr, nullptr, Z_Construct_UFunction_UDLSSLibrary_SetDLSSMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_SetDLSSMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDLSSLibrary_SetDLSSMode_Statics::DLSSLibrary_eventSetDLSSMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_SetDLSSMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDLSSLibrary_SetDLSSMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDLSSLibrary_SetDLSSMode_Statics::DLSSLibrary_eventSetDLSSMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDLSSLibrary_SetDLSSMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDLSSLibrary_SetDLSSMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDLSSLibrary::execSetDLSSMode)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM(UDLSSMode,Z_Param_DLSSMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDLSSLibrary::SetDLSSMode(Z_Param_WorldContextObject,UDLSSMode(Z_Param_DLSSMode));
	P_NATIVE_END;
}
// End Class UDLSSLibrary Function SetDLSSMode

// Begin Class UDLSSLibrary Function SetDLSSSharpness
struct Z_Construct_UFunction_UDLSSLibrary_SetDLSSSharpness_Statics
{
	struct DLSSLibrary_eventSetDLSSSharpness_Parms
	{
		float Sharpness;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DLSS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Set the console variables to enable additional DLSS sharpening. Set to 0 to disable (r.NGX.DLSS.Sharpness) */" },
#endif
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use NIS sharpening instead" },
		{ "DisplayName", "Set DLSS Sharpness" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the console variables to enable additional DLSS sharpening. Set to 0 to disable (r.NGX.DLSS.Sharpness)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Sharpness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDLSSLibrary_SetDLSSSharpness_Statics::NewProp_Sharpness = { "Sharpness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DLSSLibrary_eventSetDLSSSharpness_Parms, Sharpness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDLSSLibrary_SetDLSSSharpness_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLSSLibrary_SetDLSSSharpness_Statics::NewProp_Sharpness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_SetDLSSSharpness_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDLSSLibrary_SetDLSSSharpness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDLSSLibrary, nullptr, "SetDLSSSharpness", nullptr, nullptr, Z_Construct_UFunction_UDLSSLibrary_SetDLSSSharpness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_SetDLSSSharpness_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDLSSLibrary_SetDLSSSharpness_Statics::DLSSLibrary_eventSetDLSSSharpness_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDLSSLibrary_SetDLSSSharpness_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDLSSLibrary_SetDLSSSharpness_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDLSSLibrary_SetDLSSSharpness_Statics::DLSSLibrary_eventSetDLSSSharpness_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDLSSLibrary_SetDLSSSharpness()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDLSSLibrary_SetDLSSSharpness_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDLSSLibrary::execSetDLSSSharpness)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Sharpness);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDLSSLibrary::SetDLSSSharpness(Z_Param_Sharpness);
	P_NATIVE_END;
}
// End Class UDLSSLibrary Function SetDLSSSharpness

// Begin Class UDLSSLibrary
void UDLSSLibrary::StaticRegisterNativesUDLSSLibrary()
{
	UClass* Class = UDLSSLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnableDLAA", &UDLSSLibrary::execEnableDLAA },
		{ "EnableDLSS", &UDLSSLibrary::execEnableDLSS },
		{ "EnableDLSSRR", &UDLSSLibrary::execEnableDLSSRR },
		{ "GetDefaultDLSSMode", &UDLSSLibrary::execGetDefaultDLSSMode },
		{ "GetDLSSMinimumDriverVersion", &UDLSSLibrary::execGetDLSSMinimumDriverVersion },
		{ "GetDLSSMode", &UDLSSLibrary::execGetDLSSMode },
		{ "GetDLSSModeInformation", &UDLSSLibrary::execGetDLSSModeInformation },
		{ "GetDLSSRRMinimumDriverVersion", &UDLSSLibrary::execGetDLSSRRMinimumDriverVersion },
		{ "GetDLSSScreenPercentageRange", &UDLSSLibrary::execGetDLSSScreenPercentageRange },
		{ "GetDLSSSharpness", &UDLSSLibrary::execGetDLSSSharpness },
		{ "GetSupportedDLSSModes", &UDLSSLibrary::execGetSupportedDLSSModes },
		{ "IsDLAAEnabled", &UDLSSLibrary::execIsDLAAEnabled },
		{ "IsDLSSEnabled", &UDLSSLibrary::execIsDLSSEnabled },
		{ "IsDLSSModeSupported", &UDLSSLibrary::execIsDLSSModeSupported },
		{ "IsDLSSRREnabled", &UDLSSLibrary::execIsDLSSRREnabled },
		{ "IsDLSSRRSupported", &UDLSSLibrary::execIsDLSSRRSupported },
		{ "IsDLSSSupported", &UDLSSLibrary::execIsDLSSSupported },
		{ "QueryDLSSRRSupport", &UDLSSLibrary::execQueryDLSSRRSupport },
		{ "QueryDLSSSupport", &UDLSSLibrary::execQueryDLSSSupport },
		{ "SetDLSSMode", &UDLSSLibrary::execSetDLSSMode },
		{ "SetDLSSSharpness", &UDLSSLibrary::execSetDLSSSharpness },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDLSSLibrary);
UClass* Z_Construct_UClass_UDLSSLibrary_NoRegister()
{
	return UDLSSLibrary::StaticClass();
}
struct Z_Construct_UClass_UDLSSLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DLSSLibrary.h" },
		{ "ModuleRelativePath", "Public/DLSSLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDLSSLibrary_EnableDLAA, "EnableDLAA" }, // 2493962856
		{ &Z_Construct_UFunction_UDLSSLibrary_EnableDLSS, "EnableDLSS" }, // 376418636
		{ &Z_Construct_UFunction_UDLSSLibrary_EnableDLSSRR, "EnableDLSSRR" }, // 4093175468
		{ &Z_Construct_UFunction_UDLSSLibrary_GetDefaultDLSSMode, "GetDefaultDLSSMode" }, // 1141565319
		{ &Z_Construct_UFunction_UDLSSLibrary_GetDLSSMinimumDriverVersion, "GetDLSSMinimumDriverVersion" }, // 2703984404
		{ &Z_Construct_UFunction_UDLSSLibrary_GetDLSSMode, "GetDLSSMode" }, // 2776239495
		{ &Z_Construct_UFunction_UDLSSLibrary_GetDLSSModeInformation, "GetDLSSModeInformation" }, // 1711769391
		{ &Z_Construct_UFunction_UDLSSLibrary_GetDLSSRRMinimumDriverVersion, "GetDLSSRRMinimumDriverVersion" }, // 1112925343
		{ &Z_Construct_UFunction_UDLSSLibrary_GetDLSSScreenPercentageRange, "GetDLSSScreenPercentageRange" }, // 3377117751
		{ &Z_Construct_UFunction_UDLSSLibrary_GetDLSSSharpness, "GetDLSSSharpness" }, // 1216852317
		{ &Z_Construct_UFunction_UDLSSLibrary_GetSupportedDLSSModes, "GetSupportedDLSSModes" }, // 3247592637
		{ &Z_Construct_UFunction_UDLSSLibrary_IsDLAAEnabled, "IsDLAAEnabled" }, // 1241290787
		{ &Z_Construct_UFunction_UDLSSLibrary_IsDLSSEnabled, "IsDLSSEnabled" }, // 1900223867
		{ &Z_Construct_UFunction_UDLSSLibrary_IsDLSSModeSupported, "IsDLSSModeSupported" }, // 3034831656
		{ &Z_Construct_UFunction_UDLSSLibrary_IsDLSSRREnabled, "IsDLSSRREnabled" }, // 2997936991
		{ &Z_Construct_UFunction_UDLSSLibrary_IsDLSSRRSupported, "IsDLSSRRSupported" }, // 2597313522
		{ &Z_Construct_UFunction_UDLSSLibrary_IsDLSSSupported, "IsDLSSSupported" }, // 4014218547
		{ &Z_Construct_UFunction_UDLSSLibrary_QueryDLSSRRSupport, "QueryDLSSRRSupport" }, // 893629990
		{ &Z_Construct_UFunction_UDLSSLibrary_QueryDLSSSupport, "QueryDLSSSupport" }, // 881836766
		{ &Z_Construct_UFunction_UDLSSLibrary_SetDLSSMode, "SetDLSSMode" }, // 166973303
		{ &Z_Construct_UFunction_UDLSSLibrary_SetDLSSSharpness, "SetDLSSSharpness" }, // 435307983
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDLSSLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDLSSLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_DLSSBlueprint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDLSSLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDLSSLibrary_Statics::ClassParams = {
	&UDLSSLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDLSSLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UDLSSLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDLSSLibrary()
{
	if (!Z_Registration_Info_UClass_UDLSSLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDLSSLibrary.OuterSingleton, Z_Construct_UClass_UDLSSLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDLSSLibrary.OuterSingleton;
}
template<> DLSSBLUEPRINT_API UClass* StaticClass<UDLSSLibrary>()
{
	return UDLSSLibrary::StaticClass();
}
UDLSSLibrary::UDLSSLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDLSSLibrary);
UDLSSLibrary::~UDLSSLibrary() {}
// End Class UDLSSLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Plugins_DLSS_Source_DLSSBlueprint_Public_DLSSLibrary_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ UDLSSSupport_StaticEnum, TEXT("UDLSSSupport"), &Z_Registration_Info_UEnum_UDLSSSupport, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 395222663U) },
		{ UDLSSMode_StaticEnum, TEXT("UDLSSMode"), &Z_Registration_Info_UEnum_UDLSSMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3290494289U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDLSSLibrary, UDLSSLibrary::StaticClass, TEXT("UDLSSLibrary"), &Z_Registration_Info_UClass_UDLSSLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDLSSLibrary), 1628819706U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Plugins_DLSS_Source_DLSSBlueprint_Public_DLSSLibrary_h_2704431713(TEXT("/Script/DLSSBlueprint"),
	Z_CompiledInDeferFile_FID_Quiet_Plugins_DLSS_Source_DLSSBlueprint_Public_DLSSLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Plugins_DLSS_Source_DLSSBlueprint_Public_DLSSLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Quiet_Plugins_DLSS_Source_DLSSBlueprint_Public_DLSSLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Plugins_DLSS_Source_DLSSBlueprint_Public_DLSSLibrary_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
