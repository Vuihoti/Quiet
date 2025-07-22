// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Quiet/HUD/MyHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyHUD() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
QUIET_API UClass* Z_Construct_UClass_AMyHUD();
QUIET_API UClass* Z_Construct_UClass_AMyHUD_NoRegister();
QUIET_API UClass* Z_Construct_UClass_UBackpackOverlay_NoRegister();
QUIET_API UClass* Z_Construct_UClass_UGameSetOverlay_NoRegister();
QUIET_API UClass* Z_Construct_UClass_UInventoryGridOverlay_NoRegister();
QUIET_API UClass* Z_Construct_UClass_UItemViewOverlay_NoRegister();
QUIET_API UClass* Z_Construct_UClass_UMainMenuOverlay_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Quiet();
// End Cross Module References

// Begin Class AMyHUD
void AMyHUD::StaticRegisterNativesAMyHUD()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyHUD);
UClass* Z_Construct_UClass_AMyHUD_NoRegister()
{
	return AMyHUD::StaticClass();
}
struct Z_Construct_UClass_AMyHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HUD/MyHUD.h" },
		{ "ModuleRelativePath", "HUD/MyHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackpackOverlayclass_MetaData[] = {
		{ "Category", "Backpackclass" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "HUD/MyHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackpackOverlay_MetaData[] = {
		{ "Category", "MyHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/MyHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemViewOverlayclass_MetaData[] = {
		{ "Category", "Backpackclass" },
		{ "ModuleRelativePath", "HUD/MyHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemViewOverlay_MetaData[] = {
		{ "Category", "MyHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/MyHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuOverlayclass_MetaData[] = {
		{ "Category", "MainMenu" },
		{ "ModuleRelativePath", "HUD/MyHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuOverlay_MetaData[] = {
		{ "Category", "MyHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/MyHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryGridOverlayclass_MetaData[] = {
		{ "Category", "Backpackclass" },
		{ "ModuleRelativePath", "HUD/MyHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryGridOverlay_MetaData[] = {
		{ "Category", "MyHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/MyHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameSetOverlayclass_MetaData[] = {
		{ "Category", "Settting" },
		{ "ModuleRelativePath", "HUD/MyHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameSetOverlay_MetaData[] = {
		{ "Category", "MyHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/MyHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ESCOverlayclass_MetaData[] = {
		{ "Category", "Settting" },
		{ "ModuleRelativePath", "HUD/MyHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ESCOverlay_MetaData[] = {
		{ "Category", "MyHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/MyHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyHUDClass_MetaData[] = {
		{ "Category", "Lobby" },
		{ "ModuleRelativePath", "HUD/MyHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyHUD_MetaData[] = {
		{ "Category", "MyHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/MyHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelHUDClass_MetaData[] = {
		{ "Category", "Lobby" },
		{ "ModuleRelativePath", "HUD/MyHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelHUD_MetaData[] = {
		{ "Category", "MyHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/MyHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardHUDClass_MetaData[] = {
		{ "Category", "Lobby" },
		{ "ModuleRelativePath", "HUD/MyHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardHUD_MetaData[] = {
		{ "Category", "MyHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/MyHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShopHUDClass_MetaData[] = {
		{ "Category", "Shop" },
		{ "ModuleRelativePath", "HUD/MyHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShopHUD_MetaData[] = {
		{ "Category", "MyHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/MyHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_BackpackOverlayclass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackpackOverlay;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemViewOverlayclass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemViewOverlay;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MainMenuOverlayclass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainMenuOverlay;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InventoryGridOverlayclass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryGridOverlay;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameSetOverlayclass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameSetOverlay;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ESCOverlayclass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ESCOverlay;
	static const UECodeGen_Private::FClassPropertyParams NewProp_LobbyHUDClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LobbyHUD;
	static const UECodeGen_Private::FClassPropertyParams NewProp_LevelHUDClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelHUD;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CardHUDClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CardHUD;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ShopHUDClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShopHUD;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyHUD_Statics::NewProp_BackpackOverlayclass = { "BackpackOverlayclass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyHUD, BackpackOverlayclass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackpackOverlayclass_MetaData), NewProp_BackpackOverlayclass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyHUD_Statics::NewProp_BackpackOverlay = { "BackpackOverlay", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyHUD, BackpackOverlay), Z_Construct_UClass_UBackpackOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackpackOverlay_MetaData), NewProp_BackpackOverlay_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyHUD_Statics::NewProp_ItemViewOverlayclass = { "ItemViewOverlayclass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyHUD, ItemViewOverlayclass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemViewOverlayclass_MetaData), NewProp_ItemViewOverlayclass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyHUD_Statics::NewProp_ItemViewOverlay = { "ItemViewOverlay", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyHUD, ItemViewOverlay), Z_Construct_UClass_UItemViewOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemViewOverlay_MetaData), NewProp_ItemViewOverlay_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyHUD_Statics::NewProp_MainMenuOverlayclass = { "MainMenuOverlayclass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyHUD, MainMenuOverlayclass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainMenuOverlayclass_MetaData), NewProp_MainMenuOverlayclass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyHUD_Statics::NewProp_MainMenuOverlay = { "MainMenuOverlay", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyHUD, MainMenuOverlay), Z_Construct_UClass_UMainMenuOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainMenuOverlay_MetaData), NewProp_MainMenuOverlay_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyHUD_Statics::NewProp_InventoryGridOverlayclass = { "InventoryGridOverlayclass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyHUD, InventoryGridOverlayclass), Z_Construct_UClass_UClass, Z_Construct_UClass_UInventoryGridOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryGridOverlayclass_MetaData), NewProp_InventoryGridOverlayclass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyHUD_Statics::NewProp_InventoryGridOverlay = { "InventoryGridOverlay", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyHUD, InventoryGridOverlay), Z_Construct_UClass_UInventoryGridOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryGridOverlay_MetaData), NewProp_InventoryGridOverlay_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyHUD_Statics::NewProp_GameSetOverlayclass = { "GameSetOverlayclass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyHUD, GameSetOverlayclass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameSetOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameSetOverlayclass_MetaData), NewProp_GameSetOverlayclass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyHUD_Statics::NewProp_GameSetOverlay = { "GameSetOverlay", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyHUD, GameSetOverlay), Z_Construct_UClass_UGameSetOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameSetOverlay_MetaData), NewProp_GameSetOverlay_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyHUD_Statics::NewProp_ESCOverlayclass = { "ESCOverlayclass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyHUD, ESCOverlayclass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ESCOverlayclass_MetaData), NewProp_ESCOverlayclass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyHUD_Statics::NewProp_ESCOverlay = { "ESCOverlay", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyHUD, ESCOverlay), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ESCOverlay_MetaData), NewProp_ESCOverlay_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyHUD_Statics::NewProp_LobbyHUDClass = { "LobbyHUDClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyHUD, LobbyHUDClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyHUDClass_MetaData), NewProp_LobbyHUDClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyHUD_Statics::NewProp_LobbyHUD = { "LobbyHUD", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyHUD, LobbyHUD), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyHUD_MetaData), NewProp_LobbyHUD_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyHUD_Statics::NewProp_LevelHUDClass = { "LevelHUDClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyHUD, LevelHUDClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelHUDClass_MetaData), NewProp_LevelHUDClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyHUD_Statics::NewProp_LevelHUD = { "LevelHUD", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyHUD, LevelHUD), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelHUD_MetaData), NewProp_LevelHUD_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyHUD_Statics::NewProp_CardHUDClass = { "CardHUDClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyHUD, CardHUDClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardHUDClass_MetaData), NewProp_CardHUDClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyHUD_Statics::NewProp_CardHUD = { "CardHUD", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyHUD, CardHUD), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardHUD_MetaData), NewProp_CardHUD_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyHUD_Statics::NewProp_ShopHUDClass = { "ShopHUDClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyHUD, ShopHUDClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShopHUDClass_MetaData), NewProp_ShopHUDClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyHUD_Statics::NewProp_ShopHUD = { "ShopHUD", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyHUD, ShopHUD), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShopHUD_MetaData), NewProp_ShopHUD_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHUD_Statics::NewProp_BackpackOverlayclass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHUD_Statics::NewProp_BackpackOverlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHUD_Statics::NewProp_ItemViewOverlayclass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHUD_Statics::NewProp_ItemViewOverlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHUD_Statics::NewProp_MainMenuOverlayclass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHUD_Statics::NewProp_MainMenuOverlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHUD_Statics::NewProp_InventoryGridOverlayclass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHUD_Statics::NewProp_InventoryGridOverlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHUD_Statics::NewProp_GameSetOverlayclass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHUD_Statics::NewProp_GameSetOverlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHUD_Statics::NewProp_ESCOverlayclass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHUD_Statics::NewProp_ESCOverlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHUD_Statics::NewProp_LobbyHUDClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHUD_Statics::NewProp_LobbyHUD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHUD_Statics::NewProp_LevelHUDClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHUD_Statics::NewProp_LevelHUD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHUD_Statics::NewProp_CardHUDClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHUD_Statics::NewProp_CardHUD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHUD_Statics::NewProp_ShopHUDClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHUD_Statics::NewProp_ShopHUD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_Quiet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyHUD_Statics::ClassParams = {
	&AMyHUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyHUD_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyHUD()
{
	if (!Z_Registration_Info_UClass_AMyHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyHUD.OuterSingleton, Z_Construct_UClass_AMyHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyHUD.OuterSingleton;
}
template<> QUIET_API UClass* StaticClass<AMyHUD>()
{
	return AMyHUD::StaticClass();
}
AMyHUD::AMyHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyHUD);
AMyHUD::~AMyHUD() {}
// End Class AMyHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_HUD_MyHUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyHUD, AMyHUD::StaticClass, TEXT("AMyHUD"), &Z_Registration_Info_UClass_AMyHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyHUD), 2865405945U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_HUD_MyHUD_h_416430735(TEXT("/Script/Quiet"),
	Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_HUD_MyHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_HUD_MyHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
