// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Quiet/Actor/GameItemActor.h"
#include "Quiet/Structs/Structs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameItemActor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
QUIET_API UClass* Z_Construct_UClass_AGameItemActor();
QUIET_API UClass* Z_Construct_UClass_AGameItemActor_NoRegister();
QUIET_API UClass* Z_Construct_UClass_AItemActorInGame_NoRegister();
QUIET_API UClass* Z_Construct_UClass_AQuietCharacter_NoRegister();
QUIET_API UScriptStruct* Z_Construct_UScriptStruct_FItemdata();
UPackage* Z_Construct_UPackage__Script_Quiet();
// End Cross Module References

// Begin Class AGameItemActor
void AGameItemActor::StaticRegisterNativesAGameItemActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameItemActor);
UClass* Z_Construct_UClass_AGameItemActor_NoRegister()
{
	return AGameItemActor::StaticClass();
}
struct Z_Construct_UClass_AGameItemActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/GameItemActor.h" },
		{ "ModuleRelativePath", "Actor/GameItemActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "Actor/GameItemActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Itemdata_MetaData[] = {
		{ "Category", "Itemdata" },
		{ "ModuleRelativePath", "Actor/GameItemActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemActorInGame_MetaData[] = {
		{ "Category", "Itemdata" },
		{ "ModuleRelativePath", "Actor/GameItemActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemActorInGameRef_MetaData[] = {
		{ "Category", "Itemdata" },
		{ "ModuleRelativePath", "Actor/GameItemActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Itemdata;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemActorInGame;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemActorInGameRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameItemActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameItemActor_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameItemActor, Character), Z_Construct_UClass_AQuietCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Character_MetaData), NewProp_Character_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameItemActor_Statics::NewProp_Itemdata = { "Itemdata", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameItemActor, Itemdata), Z_Construct_UScriptStruct_FItemdata, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Itemdata_MetaData), NewProp_Itemdata_MetaData) }; // 3358898643
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameItemActor_Statics::NewProp_ItemActorInGame = { "ItemActorInGame", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameItemActor, ItemActorInGame), Z_Construct_UClass_UClass, Z_Construct_UClass_AItemActorInGame_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemActorInGame_MetaData), NewProp_ItemActorInGame_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameItemActor_Statics::NewProp_ItemActorInGameRef = { "ItemActorInGameRef", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameItemActor, ItemActorInGameRef), Z_Construct_UClass_UClass, Z_Construct_UClass_AItemActorInGame_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemActorInGameRef_MetaData), NewProp_ItemActorInGameRef_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameItemActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameItemActor_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameItemActor_Statics::NewProp_Itemdata,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameItemActor_Statics::NewProp_ItemActorInGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameItemActor_Statics::NewProp_ItemActorInGameRef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameItemActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGameItemActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Quiet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameItemActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameItemActor_Statics::ClassParams = {
	&AGameItemActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGameItemActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGameItemActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameItemActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameItemActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameItemActor()
{
	if (!Z_Registration_Info_UClass_AGameItemActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameItemActor.OuterSingleton, Z_Construct_UClass_AGameItemActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameItemActor.OuterSingleton;
}
template<> QUIET_API UClass* StaticClass<AGameItemActor>()
{
	return AGameItemActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameItemActor);
AGameItemActor::~AGameItemActor() {}
// End Class AGameItemActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Actor_GameItemActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameItemActor, AGameItemActor::StaticClass, TEXT("AGameItemActor"), &Z_Registration_Info_UClass_AGameItemActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameItemActor), 3533529472U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Actor_GameItemActor_h_2187847122(TEXT("/Script/Quiet"),
	Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Actor_GameItemActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Actor_GameItemActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
