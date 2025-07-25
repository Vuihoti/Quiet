// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DLSSMoviePipelineSupport/Public/MoviePipelineDLSSSetting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineDLSSSetting() {}

// Begin Cross Module References
DLSSMOVIEPIPELINESUPPORT_API UClass* Z_Construct_UClass_UMoviePipelineDLSSSetting();
DLSSMOVIEPIPELINESUPPORT_API UClass* Z_Construct_UClass_UMoviePipelineDLSSSetting_NoRegister();
DLSSMOVIEPIPELINESUPPORT_API UEnum* Z_Construct_UEnum_DLSSMoviePipelineSupport_EMoviePipelineDLSSQuality();
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineViewFamilySetting();
UPackage* Z_Construct_UPackage__Script_DLSSMoviePipelineSupport();
// End Cross Module References

// Begin Enum EMoviePipelineDLSSQuality
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMoviePipelineDLSSQuality;
static UEnum* EMoviePipelineDLSSQuality_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMoviePipelineDLSSQuality.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMoviePipelineDLSSQuality.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DLSSMoviePipelineSupport_EMoviePipelineDLSSQuality, (UObject*)Z_Construct_UPackage__Script_DLSSMoviePipelineSupport(), TEXT("EMoviePipelineDLSSQuality"));
	}
	return Z_Registration_Info_UEnum_EMoviePipelineDLSSQuality.OuterSingleton;
}
template<> DLSSMOVIEPIPELINESUPPORT_API UEnum* StaticEnum<EMoviePipelineDLSSQuality>()
{
	return EMoviePipelineDLSSQuality_StaticEnum();
}
struct Z_Construct_UEnum_DLSSMoviePipelineSupport_EMoviePipelineDLSSQuality_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EMoviePipelineDLSSQuality_Balanced.DisplayName", "Balanced" },
		{ "EMoviePipelineDLSSQuality_Balanced.Name", "EMoviePipelineDLSSQuality::EMoviePipelineDLSSQuality_Balanced" },
		{ "EMoviePipelineDLSSQuality_DLAA.DisplayName", "DLAA" },
		{ "EMoviePipelineDLSSQuality_DLAA.Name", "EMoviePipelineDLSSQuality::EMoviePipelineDLSSQuality_DLAA" },
		{ "EMoviePipelineDLSSQuality_Performance.DisplayName", "Performance" },
		{ "EMoviePipelineDLSSQuality_Performance.Name", "EMoviePipelineDLSSQuality::EMoviePipelineDLSSQuality_Performance" },
		{ "EMoviePipelineDLSSQuality_Quality.DisplayName", "Quality" },
		{ "EMoviePipelineDLSSQuality_Quality.Name", "EMoviePipelineDLSSQuality::EMoviePipelineDLSSQuality_Quality" },
		{ "EMoviePipelineDLSSQuality_UltraPerformance.DisplayName", "Ultra Performance" },
		{ "EMoviePipelineDLSSQuality_UltraPerformance.Name", "EMoviePipelineDLSSQuality::EMoviePipelineDLSSQuality_UltraPerformance" },
		{ "EMoviePipelineDLSSQuality_UltraQuality.DisplayName", "Ultra Quality" },
		{ "EMoviePipelineDLSSQuality_UltraQuality.Name", "EMoviePipelineDLSSQuality::EMoviePipelineDLSSQuality_UltraQuality" },
		{ "ModuleRelativePath", "Public/MoviePipelineDLSSSetting.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMoviePipelineDLSSQuality::EMoviePipelineDLSSQuality_DLAA", (int64)EMoviePipelineDLSSQuality::EMoviePipelineDLSSQuality_DLAA },
		{ "EMoviePipelineDLSSQuality::EMoviePipelineDLSSQuality_UltraQuality", (int64)EMoviePipelineDLSSQuality::EMoviePipelineDLSSQuality_UltraQuality },
		{ "EMoviePipelineDLSSQuality::EMoviePipelineDLSSQuality_Quality", (int64)EMoviePipelineDLSSQuality::EMoviePipelineDLSSQuality_Quality },
		{ "EMoviePipelineDLSSQuality::EMoviePipelineDLSSQuality_Balanced", (int64)EMoviePipelineDLSSQuality::EMoviePipelineDLSSQuality_Balanced },
		{ "EMoviePipelineDLSSQuality::EMoviePipelineDLSSQuality_Performance", (int64)EMoviePipelineDLSSQuality::EMoviePipelineDLSSQuality_Performance },
		{ "EMoviePipelineDLSSQuality::EMoviePipelineDLSSQuality_UltraPerformance", (int64)EMoviePipelineDLSSQuality::EMoviePipelineDLSSQuality_UltraPerformance },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DLSSMoviePipelineSupport_EMoviePipelineDLSSQuality_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DLSSMoviePipelineSupport,
	nullptr,
	"EMoviePipelineDLSSQuality",
	"EMoviePipelineDLSSQuality",
	Z_Construct_UEnum_DLSSMoviePipelineSupport_EMoviePipelineDLSSQuality_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DLSSMoviePipelineSupport_EMoviePipelineDLSSQuality_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DLSSMoviePipelineSupport_EMoviePipelineDLSSQuality_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DLSSMoviePipelineSupport_EMoviePipelineDLSSQuality_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DLSSMoviePipelineSupport_EMoviePipelineDLSSQuality()
{
	if (!Z_Registration_Info_UEnum_EMoviePipelineDLSSQuality.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMoviePipelineDLSSQuality.InnerSingleton, Z_Construct_UEnum_DLSSMoviePipelineSupport_EMoviePipelineDLSSQuality_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMoviePipelineDLSSQuality.InnerSingleton;
}
// End Enum EMoviePipelineDLSSQuality

// Begin Class UMoviePipelineDLSSSetting
void UMoviePipelineDLSSSetting::StaticRegisterNativesUMoviePipelineDLSSSetting()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineDLSSSetting);
UClass* Z_Construct_UClass_UMoviePipelineDLSSSetting_NoRegister()
{
	return UMoviePipelineDLSSSetting::StaticClass();
}
struct Z_Construct_UClass_UMoviePipelineDLSSSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MoviePipelineDLSSSetting.h" },
		{ "ModuleRelativePath", "Public/MoviePipelineDLSSSetting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DLSSQuality_MetaData[] = {
		{ "Category", "DLSS/DLAA settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** DLSS/DLAA quality setting */" },
#endif
		{ "DisplayName", "DLSS Quality" },
		{ "ModuleRelativePath", "Public/MoviePipelineDLSSSetting.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DLSS/DLAA quality setting" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DLSSQuality_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DLSSQuality;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineDLSSSetting>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMoviePipelineDLSSSetting_Statics::NewProp_DLSSQuality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMoviePipelineDLSSSetting_Statics::NewProp_DLSSQuality = { "DLSSQuality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoviePipelineDLSSSetting, DLSSQuality), Z_Construct_UEnum_DLSSMoviePipelineSupport_EMoviePipelineDLSSQuality, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DLSSQuality_MetaData), NewProp_DLSSQuality_MetaData) }; // 2151066116
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineDLSSSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineDLSSSetting_Statics::NewProp_DLSSQuality_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineDLSSSetting_Statics::NewProp_DLSSQuality,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineDLSSSetting_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMoviePipelineDLSSSetting_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMoviePipelineViewFamilySetting,
	(UObject* (*)())Z_Construct_UPackage__Script_DLSSMoviePipelineSupport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineDLSSSetting_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineDLSSSetting_Statics::ClassParams = {
	&UMoviePipelineDLSSSetting::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMoviePipelineDLSSSetting_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineDLSSSetting_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineDLSSSetting_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoviePipelineDLSSSetting_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoviePipelineDLSSSetting()
{
	if (!Z_Registration_Info_UClass_UMoviePipelineDLSSSetting.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineDLSSSetting.OuterSingleton, Z_Construct_UClass_UMoviePipelineDLSSSetting_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoviePipelineDLSSSetting.OuterSingleton;
}
template<> DLSSMOVIEPIPELINESUPPORT_API UClass* StaticClass<UMoviePipelineDLSSSetting>()
{
	return UMoviePipelineDLSSSetting::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineDLSSSetting);
UMoviePipelineDLSSSetting::~UMoviePipelineDLSSSetting() {}
// End Class UMoviePipelineDLSSSetting

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Plugins_DLSSMoviePipelineSupport_Source_DLSSMoviePipelineSupport_Public_MoviePipelineDLSSSetting_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMoviePipelineDLSSQuality_StaticEnum, TEXT("EMoviePipelineDLSSQuality"), &Z_Registration_Info_UEnum_EMoviePipelineDLSSQuality, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2151066116U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelineDLSSSetting, UMoviePipelineDLSSSetting::StaticClass, TEXT("UMoviePipelineDLSSSetting"), &Z_Registration_Info_UClass_UMoviePipelineDLSSSetting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineDLSSSetting), 2781468092U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Plugins_DLSSMoviePipelineSupport_Source_DLSSMoviePipelineSupport_Public_MoviePipelineDLSSSetting_h_3434689193(TEXT("/Script/DLSSMoviePipelineSupport"),
	Z_CompiledInDeferFile_FID_Quiet_Plugins_DLSSMoviePipelineSupport_Source_DLSSMoviePipelineSupport_Public_MoviePipelineDLSSSetting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Plugins_DLSSMoviePipelineSupport_Source_DLSSMoviePipelineSupport_Public_MoviePipelineDLSSSetting_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Quiet_Plugins_DLSSMoviePipelineSupport_Source_DLSSMoviePipelineSupport_Public_MoviePipelineDLSSSetting_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Plugins_DLSSMoviePipelineSupport_Source_DLSSMoviePipelineSupport_Public_MoviePipelineDLSSSetting_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
