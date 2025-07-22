// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Quiet/QuietAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuietAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
QUIET_API UClass* Z_Construct_UClass_ALobbyCharacter_NoRegister();
QUIET_API UClass* Z_Construct_UClass_AQuietCharacter_NoRegister();
QUIET_API UClass* Z_Construct_UClass_UQuietAnimInstance();
QUIET_API UClass* Z_Construct_UClass_UQuietAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_Quiet();
// End Cross Module References

// Begin Class UQuietAnimInstance
void UQuietAnimInstance::StaticRegisterNativesUQuietAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuietAnimInstance);
UClass* Z_Construct_UClass_UQuietAnimInstance_NoRegister()
{
	return UQuietAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UQuietAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "QuietAnimInstance.h" },
		{ "ModuleRelativePath", "QuietAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuietCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "QuietAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "QuietAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "QuietAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "QuietAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInAir_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "QuietAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCrouch_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "QuietAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bElim_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "QuietAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRespawn_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "QuietAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFrantic_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "QuietAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuietCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LobbyCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static void NewProp_bIsInAir_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInAir;
	static void NewProp_bIsCrouch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCrouch;
	static void NewProp_bElim_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bElim;
	static void NewProp_bRespawn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRespawn;
	static void NewProp_bFrantic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFrantic;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuietAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuietAnimInstance_Statics::NewProp_QuietCharacter = { "QuietCharacter", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuietAnimInstance, QuietCharacter), Z_Construct_UClass_AQuietCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuietCharacter_MetaData), NewProp_QuietCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuietAnimInstance_Statics::NewProp_LobbyCharacter = { "LobbyCharacter", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuietAnimInstance, LobbyCharacter), Z_Construct_UClass_ALobbyCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyCharacter_MetaData), NewProp_LobbyCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuietAnimInstance_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuietAnimInstance, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Character_MetaData), NewProp_Character_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQuietAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuietAnimInstance, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
void Z_Construct_UClass_UQuietAnimInstance_Statics::NewProp_bIsInAir_SetBit(void* Obj)
{
	((UQuietAnimInstance*)Obj)->bIsInAir = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuietAnimInstance_Statics::NewProp_bIsInAir = { "bIsInAir", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UQuietAnimInstance), &Z_Construct_UClass_UQuietAnimInstance_Statics::NewProp_bIsInAir_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInAir_MetaData), NewProp_bIsInAir_MetaData) };
void Z_Construct_UClass_UQuietAnimInstance_Statics::NewProp_bIsCrouch_SetBit(void* Obj)
{
	((UQuietAnimInstance*)Obj)->bIsCrouch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuietAnimInstance_Statics::NewProp_bIsCrouch = { "bIsCrouch", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UQuietAnimInstance), &Z_Construct_UClass_UQuietAnimInstance_Statics::NewProp_bIsCrouch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCrouch_MetaData), NewProp_bIsCrouch_MetaData) };
void Z_Construct_UClass_UQuietAnimInstance_Statics::NewProp_bElim_SetBit(void* Obj)
{
	((UQuietAnimInstance*)Obj)->bElim = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuietAnimInstance_Statics::NewProp_bElim = { "bElim", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UQuietAnimInstance), &Z_Construct_UClass_UQuietAnimInstance_Statics::NewProp_bElim_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bElim_MetaData), NewProp_bElim_MetaData) };
void Z_Construct_UClass_UQuietAnimInstance_Statics::NewProp_bRespawn_SetBit(void* Obj)
{
	((UQuietAnimInstance*)Obj)->bRespawn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuietAnimInstance_Statics::NewProp_bRespawn = { "bRespawn", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UQuietAnimInstance), &Z_Construct_UClass_UQuietAnimInstance_Statics::NewProp_bRespawn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRespawn_MetaData), NewProp_bRespawn_MetaData) };
void Z_Construct_UClass_UQuietAnimInstance_Statics::NewProp_bFrantic_SetBit(void* Obj)
{
	((UQuietAnimInstance*)Obj)->bFrantic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuietAnimInstance_Statics::NewProp_bFrantic = { "bFrantic", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UQuietAnimInstance), &Z_Construct_UClass_UQuietAnimInstance_Statics::NewProp_bFrantic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFrantic_MetaData), NewProp_bFrantic_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuietAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuietAnimInstance_Statics::NewProp_QuietCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuietAnimInstance_Statics::NewProp_LobbyCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuietAnimInstance_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuietAnimInstance_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuietAnimInstance_Statics::NewProp_bIsInAir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuietAnimInstance_Statics::NewProp_bIsCrouch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuietAnimInstance_Statics::NewProp_bElim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuietAnimInstance_Statics::NewProp_bRespawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuietAnimInstance_Statics::NewProp_bFrantic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuietAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UQuietAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Quiet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuietAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuietAnimInstance_Statics::ClassParams = {
	&UQuietAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UQuietAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UQuietAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuietAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuietAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuietAnimInstance()
{
	if (!Z_Registration_Info_UClass_UQuietAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuietAnimInstance.OuterSingleton, Z_Construct_UClass_UQuietAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuietAnimInstance.OuterSingleton;
}
template<> QUIET_API UClass* StaticClass<UQuietAnimInstance>()
{
	return UQuietAnimInstance::StaticClass();
}
UQuietAnimInstance::UQuietAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuietAnimInstance);
UQuietAnimInstance::~UQuietAnimInstance() {}
// End Class UQuietAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_QuietAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuietAnimInstance, UQuietAnimInstance::StaticClass, TEXT("UQuietAnimInstance"), &Z_Registration_Info_UClass_UQuietAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuietAnimInstance), 2234004749U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_QuietAnimInstance_h_2406084088(TEXT("/Script/Quiet"),
	Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_QuietAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_QuietAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
