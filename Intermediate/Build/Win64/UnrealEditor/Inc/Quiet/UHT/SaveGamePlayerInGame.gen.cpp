// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Quiet/Archive/SaveGamePlayerInGame.h"
#include "Quiet/Structs/Structs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveGamePlayerInGame() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
QUIET_API UClass* Z_Construct_UClass_USaveGamePlayerInGame();
QUIET_API UClass* Z_Construct_UClass_USaveGamePlayerInGame_NoRegister();
QUIET_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerData();
UPackage* Z_Construct_UPackage__Script_Quiet();
// End Cross Module References

// Begin Class USaveGamePlayerInGame
void USaveGamePlayerInGame::StaticRegisterNativesUSaveGamePlayerInGame()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveGamePlayerInGame);
UClass* Z_Construct_UClass_USaveGamePlayerInGame_NoRegister()
{
	return USaveGamePlayerInGame::StaticClass();
}
struct Z_Construct_UClass_USaveGamePlayerInGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Archive/SaveGamePlayerInGame.h" },
		{ "ModuleRelativePath", "Archive/SaveGamePlayerInGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerData_MetaData[] = {
		{ "Category", "SaveGamePlayerInGame" },
		{ "ModuleRelativePath", "Archive/SaveGamePlayerInGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveGamePlayerInGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveGamePlayerInGame_Statics::NewProp_PlayerData = { "PlayerData", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGamePlayerInGame, PlayerData), Z_Construct_UScriptStruct_FPlayerData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerData_MetaData), NewProp_PlayerData_MetaData) }; // 3310580538
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveGamePlayerInGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGamePlayerInGame_Statics::NewProp_PlayerData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGamePlayerInGame_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USaveGamePlayerInGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_Quiet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGamePlayerInGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveGamePlayerInGame_Statics::ClassParams = {
	&USaveGamePlayerInGame::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USaveGamePlayerInGame_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USaveGamePlayerInGame_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGamePlayerInGame_Statics::Class_MetaDataParams), Z_Construct_UClass_USaveGamePlayerInGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USaveGamePlayerInGame()
{
	if (!Z_Registration_Info_UClass_USaveGamePlayerInGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveGamePlayerInGame.OuterSingleton, Z_Construct_UClass_USaveGamePlayerInGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USaveGamePlayerInGame.OuterSingleton;
}
template<> QUIET_API UClass* StaticClass<USaveGamePlayerInGame>()
{
	return USaveGamePlayerInGame::StaticClass();
}
USaveGamePlayerInGame::USaveGamePlayerInGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGamePlayerInGame);
USaveGamePlayerInGame::~USaveGamePlayerInGame() {}
// End Class USaveGamePlayerInGame

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Archive_SaveGamePlayerInGame_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USaveGamePlayerInGame, USaveGamePlayerInGame::StaticClass, TEXT("USaveGamePlayerInGame"), &Z_Registration_Info_UClass_USaveGamePlayerInGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveGamePlayerInGame), 3538096409U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Archive_SaveGamePlayerInGame_h_2970286350(TEXT("/Script/Quiet"),
	Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Archive_SaveGamePlayerInGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Archive_SaveGamePlayerInGame_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
