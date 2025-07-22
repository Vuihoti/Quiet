// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Quiet/Actor/ItemActorInGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemActorInGame() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
QUIET_API UClass* Z_Construct_UClass_AGameItemActor_NoRegister();
QUIET_API UClass* Z_Construct_UClass_AItemActorInGame();
QUIET_API UClass* Z_Construct_UClass_AItemActorInGame_NoRegister();
QUIET_API UClass* Z_Construct_UClass_UItemViewOverlay_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Quiet();
// End Cross Module References

// Begin Class AItemActorInGame
void AItemActorInGame::StaticRegisterNativesAItemActorInGame()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AItemActorInGame);
UClass* Z_Construct_UClass_AItemActorInGame_NoRegister()
{
	return AItemActorInGame::StaticClass();
}
struct Z_Construct_UClass_AItemActorInGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/ItemActorInGame.h" },
		{ "ModuleRelativePath", "Actor/ItemActorInGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemSphere_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sphere" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actor/ItemActorInGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "StaticMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actor/ItemActorInGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "StaticMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actor/ItemActorInGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryComponment_MetaData[] = {
		{ "Category", "InventoryComponment" },
		{ "ModuleRelativePath", "Actor/ItemActorInGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupWidget_MetaData[] = {
		{ "Category", "PickUp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actor/ItemActorInGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemViewOverlay_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actor/ItemActorInGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Actor/ItemActorInGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Actor/ItemActorInGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemSphere;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InventoryComponment;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemViewOverlay;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemActorInGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemActorInGame_Statics::NewProp_ItemSphere = { "ItemSphere", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemActorInGame, ItemSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemSphere_MetaData), NewProp_ItemSphere_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemActorInGame_Statics::NewProp_ItemMesh = { "ItemMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemActorInGame, ItemMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemMesh_MetaData), NewProp_ItemMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemActorInGame_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemActorInGame, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneComponent_MetaData), NewProp_SceneComponent_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AItemActorInGame_Statics::NewProp_InventoryComponment = { "InventoryComponment", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemActorInGame, InventoryComponment), Z_Construct_UClass_UClass, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryComponment_MetaData), NewProp_InventoryComponment_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemActorInGame_Statics::NewProp_PickupWidget = { "PickupWidget", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemActorInGame, PickupWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupWidget_MetaData), NewProp_PickupWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemActorInGame_Statics::NewProp_ItemViewOverlay = { "ItemViewOverlay", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemActorInGame, ItemViewOverlay), Z_Construct_UClass_UItemViewOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemViewOverlay_MetaData), NewProp_ItemViewOverlay_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AItemActorInGame_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemActorInGame, Item), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameItemActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AItemActorInGame_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemActorInGame, Amount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amount_MetaData), NewProp_Amount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItemActorInGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemActorInGame_Statics::NewProp_ItemSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemActorInGame_Statics::NewProp_ItemMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemActorInGame_Statics::NewProp_SceneComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemActorInGame_Statics::NewProp_InventoryComponment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemActorInGame_Statics::NewProp_PickupWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemActorInGame_Statics::NewProp_ItemViewOverlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemActorInGame_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemActorInGame_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemActorInGame_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AItemActorInGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Quiet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemActorInGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AItemActorInGame_Statics::ClassParams = {
	&AItemActorInGame::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AItemActorInGame_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AItemActorInGame_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemActorInGame_Statics::Class_MetaDataParams), Z_Construct_UClass_AItemActorInGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AItemActorInGame()
{
	if (!Z_Registration_Info_UClass_AItemActorInGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItemActorInGame.OuterSingleton, Z_Construct_UClass_AItemActorInGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AItemActorInGame.OuterSingleton;
}
template<> QUIET_API UClass* StaticClass<AItemActorInGame>()
{
	return AItemActorInGame::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AItemActorInGame);
AItemActorInGame::~AItemActorInGame() {}
// End Class AItemActorInGame

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Actor_ItemActorInGame_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AItemActorInGame, AItemActorInGame::StaticClass, TEXT("AItemActorInGame"), &Z_Registration_Info_UClass_AItemActorInGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItemActorInGame), 1431258295U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Actor_ItemActorInGame_h_2871156551(TEXT("/Script/Quiet"),
	Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Actor_ItemActorInGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Actor_ItemActorInGame_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
