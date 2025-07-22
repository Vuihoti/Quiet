// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Quiet/Structs/ItemType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemType() {}

// Begin Cross Module References
QUIET_API UEnum* Z_Construct_UEnum_Quiet_EItemType();
UPackage* Z_Construct_UPackage__Script_Quiet();
// End Cross Module References

// Begin Enum EItemType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemType;
static UEnum* EItemType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EItemType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Quiet_EItemType, (UObject*)Z_Construct_UPackage__Script_Quiet(), TEXT("EItemType"));
	}
	return Z_Registration_Info_UEnum_EItemType.OuterSingleton;
}
template<> QUIET_API UEnum* StaticEnum<EItemType>()
{
	return EItemType_StaticEnum();
}
struct Z_Construct_UEnum_Quiet_EItemType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EIT_Active.DisplayName", "Active" },
		{ "EIT_Active.Name", "EItemType::EIT_Active" },
		{ "EIT_Light.DisplayName", "Light" },
		{ "EIT_Light.Name", "EItemType::EIT_Light" },
		{ "EIT_Passive.DisplayName", "Passive" },
		{ "EIT_Passive.Name", "EItemType::EIT_Passive" },
		{ "ModuleRelativePath", "Structs/ItemType.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EItemType::EIT_Active", (int64)EItemType::EIT_Active },
		{ "EItemType::EIT_Passive", (int64)EItemType::EIT_Passive },
		{ "EItemType::EIT_Light", (int64)EItemType::EIT_Light },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Quiet_EItemType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Quiet,
	nullptr,
	"EItemType",
	"EItemType",
	Z_Construct_UEnum_Quiet_EItemType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Quiet_EItemType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Quiet_EItemType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Quiet_EItemType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Quiet_EItemType()
{
	if (!Z_Registration_Info_UEnum_EItemType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemType.InnerSingleton, Z_Construct_UEnum_Quiet_EItemType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EItemType.InnerSingleton;
}
// End Enum EItemType

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Structs_ItemType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EItemType_StaticEnum, TEXT("EItemType"), &Z_Registration_Info_UEnum_EItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2516133327U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Structs_ItemType_h_2399480227(TEXT("/Script/Quiet"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Structs_ItemType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Structs_ItemType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
