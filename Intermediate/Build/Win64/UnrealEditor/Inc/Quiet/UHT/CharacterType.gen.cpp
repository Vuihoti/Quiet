// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Quiet/Structs/CharacterType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterType() {}

// Begin Cross Module References
QUIET_API UEnum* Z_Construct_UEnum_Quiet_ECharacterState();
QUIET_API UEnum* Z_Construct_UEnum_Quiet_ECharacterType();
UPackage* Z_Construct_UPackage__Script_Quiet();
// End Cross Module References

// Begin Enum ECharacterType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterType;
static UEnum* ECharacterType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECharacterType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECharacterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Quiet_ECharacterType, (UObject*)Z_Construct_UPackage__Script_Quiet(), TEXT("ECharacterType"));
	}
	return Z_Registration_Info_UEnum_ECharacterType.OuterSingleton;
}
template<> QUIET_API UEnum* StaticEnum<ECharacterType>()
{
	return ECharacterType_StaticEnum();
}
struct Z_Construct_UEnum_Quiet_ECharacterType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ECT_Backpack.DisplayName", "Backpack" },
		{ "ECT_Backpack.Name", "ECharacterType::ECT_Backpack" },
		{ "ECT_ChangeCard.DisplayName", "PickLevel" },
		{ "ECT_ChangeCard.Name", "ECharacterType::ECT_ChangeCard" },
		{ "ECT_Dead.DisplayName", "Dead" },
		{ "ECT_Dead.Name", "ECharacterType::ECT_Dead" },
		{ "ECT_Free.DisplayName", "Free" },
		{ "ECT_Free.Name", "ECharacterType::ECT_Free" },
		{ "ECT_GameSetting.DisplayName", "GameSetting" },
		{ "ECT_GameSetting.Name", "ECharacterType::ECT_GameSetting" },
		{ "ECT_Interface.DisplayName", "Interface" },
		{ "ECT_Interface.Name", "ECharacterType::ECT_Interface" },
		{ "ECT_OnShop.DisplayName", "OnShop" },
		{ "ECT_OnShop.Name", "ECharacterType::ECT_OnShop" },
		{ "ECT_PickLevel.DisplayName", "PickLevel" },
		{ "ECT_PickLevel.Name", "ECharacterType::ECT_PickLevel" },
		{ "ModuleRelativePath", "Structs/CharacterType.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECharacterType::ECT_Free", (int64)ECharacterType::ECT_Free },
		{ "ECharacterType::ECT_Interface", (int64)ECharacterType::ECT_Interface },
		{ "ECharacterType::ECT_Backpack", (int64)ECharacterType::ECT_Backpack },
		{ "ECharacterType::ECT_Dead", (int64)ECharacterType::ECT_Dead },
		{ "ECharacterType::ECT_GameSetting", (int64)ECharacterType::ECT_GameSetting },
		{ "ECharacterType::ECT_PickLevel", (int64)ECharacterType::ECT_PickLevel },
		{ "ECharacterType::ECT_ChangeCard", (int64)ECharacterType::ECT_ChangeCard },
		{ "ECharacterType::ECT_OnShop", (int64)ECharacterType::ECT_OnShop },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Quiet_ECharacterType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Quiet,
	nullptr,
	"ECharacterType",
	"ECharacterType",
	Z_Construct_UEnum_Quiet_ECharacterType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Quiet_ECharacterType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Quiet_ECharacterType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Quiet_ECharacterType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Quiet_ECharacterType()
{
	if (!Z_Registration_Info_UEnum_ECharacterType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterType.InnerSingleton, Z_Construct_UEnum_Quiet_ECharacterType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECharacterType.InnerSingleton;
}
// End Enum ECharacterType

// Begin Enum ECharacterState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterState;
static UEnum* ECharacterState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECharacterState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECharacterState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Quiet_ECharacterState, (UObject*)Z_Construct_UPackage__Script_Quiet(), TEXT("ECharacterState"));
	}
	return Z_Registration_Info_UEnum_ECharacterState.OuterSingleton;
}
template<> QUIET_API UEnum* StaticEnum<ECharacterState>()
{
	return ECharacterState_StaticEnum();
}
struct Z_Construct_UEnum_Quiet_ECharacterState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ECS_Invincible.DisplayName", "Invincible" },
		{ "ECS_Invincible.Name", "ECharacterState::ECS_Invincible" },
		{ "ECS_Normal.DisplayName", "Normal" },
		{ "ECS_Normal.Name", "ECharacterState::ECS_Normal" },
		{ "ModuleRelativePath", "Structs/CharacterType.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECharacterState::ECS_Normal", (int64)ECharacterState::ECS_Normal },
		{ "ECharacterState::ECS_Invincible", (int64)ECharacterState::ECS_Invincible },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Quiet_ECharacterState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Quiet,
	nullptr,
	"ECharacterState",
	"ECharacterState",
	Z_Construct_UEnum_Quiet_ECharacterState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Quiet_ECharacterState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Quiet_ECharacterState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Quiet_ECharacterState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Quiet_ECharacterState()
{
	if (!Z_Registration_Info_UEnum_ECharacterState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterState.InnerSingleton, Z_Construct_UEnum_Quiet_ECharacterState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECharacterState.InnerSingleton;
}
// End Enum ECharacterState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Structs_CharacterType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECharacterType_StaticEnum, TEXT("ECharacterType"), &Z_Registration_Info_UEnum_ECharacterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 918581571U) },
		{ ECharacterState_StaticEnum, TEXT("ECharacterState"), &Z_Registration_Info_UEnum_ECharacterState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4013654604U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Structs_CharacterType_h_1992016145(TEXT("/Script/Quiet"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Structs_CharacterType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Structs_CharacterType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
