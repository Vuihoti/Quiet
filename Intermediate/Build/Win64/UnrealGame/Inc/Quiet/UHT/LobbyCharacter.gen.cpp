// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Quiet/Lobby/LobbyCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
QUIET_API UClass* Z_Construct_UClass_ALobbyCharacter();
QUIET_API UClass* Z_Construct_UClass_ALobbyCharacter_NoRegister();
QUIET_API UClass* Z_Construct_UClass_ALobbyPlayerController_NoRegister();
QUIET_API UEnum* Z_Construct_UEnum_Quiet_ECharacterType();
UPackage* Z_Construct_UPackage__Script_Quiet();
// End Cross Module References

// Begin Class ALobbyCharacter
void ALobbyCharacter::StaticRegisterNativesALobbyCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALobbyCharacter);
UClass* Z_Construct_UClass_ALobbyCharacter_NoRegister()
{
	return ALobbyCharacter::StaticClass();
}
struct Z_Construct_UClass_ALobbyCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Lobby/LobbyCharacter.h" },
		{ "ModuleRelativePath", "Lobby/LobbyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lobby/LobbyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lobby/LobbyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseSensitivity_MetaData[] = {
		{ "Category", "LobbyCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\xbc\xa0\xe6\xa0\x87\xe7\x81\xb5\xe6\x95\x8f\xe5\xba\xa6\n" },
#endif
		{ "ModuleRelativePath", "Lobby/LobbyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\xbc\xa0\xe6\xa0\x87\xe7\x81\xb5\xe6\x95\x8f\xe5\xba\xa6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterType_MetaData[] = {
		{ "Category", "LobbyCharacter" },
		{ "ModuleRelativePath", "Lobby/LobbyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyPlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Lobby/LobbyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseSensitivity;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LobbyPlayerController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALobbyCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALobbyCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALobbyCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_MouseSensitivity = { "MouseSensitivity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALobbyCharacter, MouseSensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseSensitivity_MetaData), NewProp_MouseSensitivity_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_CharacterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_CharacterType = { "CharacterType", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALobbyCharacter, CharacterType), Z_Construct_UEnum_Quiet_ECharacterType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterType_MetaData), NewProp_CharacterType_MetaData) }; // 918581571
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_LobbyPlayerController = { "LobbyPlayerController", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALobbyCharacter, LobbyPlayerController), Z_Construct_UClass_ALobbyPlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyPlayerController_MetaData), NewProp_LobbyPlayerController_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALobbyCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_MouseSensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_CharacterType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_CharacterType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_LobbyPlayerController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALobbyCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Quiet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALobbyCharacter_Statics::ClassParams = {
	&ALobbyCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALobbyCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ALobbyCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALobbyCharacter()
{
	if (!Z_Registration_Info_UClass_ALobbyCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALobbyCharacter.OuterSingleton, Z_Construct_UClass_ALobbyCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALobbyCharacter.OuterSingleton;
}
template<> QUIET_API UClass* StaticClass<ALobbyCharacter>()
{
	return ALobbyCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALobbyCharacter);
ALobbyCharacter::~ALobbyCharacter() {}
// End Class ALobbyCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Lobby_LobbyCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALobbyCharacter, ALobbyCharacter::StaticClass, TEXT("ALobbyCharacter"), &Z_Registration_Info_UClass_ALobbyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALobbyCharacter), 2509395600U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Lobby_LobbyCharacter_h_34667987(TEXT("/Script/Quiet"),
	Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Lobby_LobbyCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Lobby_LobbyCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
