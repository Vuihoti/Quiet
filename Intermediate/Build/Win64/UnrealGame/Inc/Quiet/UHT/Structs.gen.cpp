// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Quiet/Structs/Structs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStructs() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
QUIET_API UClass* Z_Construct_UClass_AGameItemActor_NoRegister();
QUIET_API UEnum* Z_Construct_UEnum_Quiet_EItemType();
QUIET_API UScriptStruct* Z_Construct_UScriptStruct_FCaption();
QUIET_API UScriptStruct* Z_Construct_UScriptStruct_FCardData();
QUIET_API UScriptStruct* Z_Construct_UScriptStruct_FGameSets();
QUIET_API UScriptStruct* Z_Construct_UScriptStruct_FInventory();
QUIET_API UScriptStruct* Z_Construct_UScriptStruct_FItemdata();
QUIET_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerData();
UPackage* Z_Construct_UPackage__Script_Quiet();
// End Cross Module References

// Begin ScriptStruct FInventory
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Inventory;
class UScriptStruct* FInventory::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Inventory.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Inventory.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventory, (UObject*)Z_Construct_UPackage__Script_Quiet(), TEXT("Inventory"));
	}
	return Z_Registration_Info_UScriptStruct_Inventory.OuterSingleton;
}
template<> QUIET_API UScriptStruct* StaticStruct<FInventory>()
{
	return FInventory::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Structs/Structs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xd3\xa6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xb7\n" },
#endif
		{ "ModuleRelativePath", "Structs/Structs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xd3\xa6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xb7" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xd3\xa6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Structs/Structs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xd3\xa6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventory>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FInventory_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventory, Item), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameItemActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventory_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventory, Amount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amount_MetaData), NewProp_Amount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventory_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventory_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventory_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Quiet,
	nullptr,
	&NewStructOps,
	"Inventory",
	Z_Construct_UScriptStruct_FInventory_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventory_Statics::PropPointers),
	sizeof(FInventory),
	alignof(FInventory),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventory_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventory_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventory()
{
	if (!Z_Registration_Info_UScriptStruct_Inventory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Inventory.InnerSingleton, Z_Construct_UScriptStruct_FInventory_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Inventory.InnerSingleton;
}
// End ScriptStruct FInventory

// Begin ScriptStruct FItemdata
static_assert(std::is_polymorphic<FItemdata>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FItemdata cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Itemdata;
class UScriptStruct* FItemdata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Itemdata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Itemdata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemdata, (UObject*)Z_Construct_UPackage__Script_Quiet(), TEXT("Itemdata"));
	}
	return Z_Registration_Info_UScriptStruct_Itemdata.OuterSingleton;
}
template<> QUIET_API UScriptStruct* StaticStruct<FItemdata>()
{
	return FItemdata::StaticStruct();
}
struct Z_Construct_UScriptStruct_FItemdata_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Structs/Structs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Identification_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xc6\xb7\xca\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Structs/Structs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc6\xb7\xca\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xc6\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Structs/Structs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc6\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xc6\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Structs/Structs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc6\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xc6\xb7ID\n" },
#endif
		{ "ModuleRelativePath", "Structs/Structs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc6\xb7ID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xc6\xb7\xcd\xbc\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Structs/Structs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc6\xb7\xcd\xbc\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Introduce_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xc6\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Structs/Structs.h" },
		{ "MultilLine", "true" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc6\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAmount_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xc6\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd1\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Structs/Structs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc6\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd1\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseType_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xc6\xb7\xca\xb9\xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xca\xbd\n" },
#endif
		{ "ModuleRelativePath", "Structs/Structs.h" },
		{ "MultilLine", "true" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc6\xb7\xca\xb9\xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xca\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemMesh_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xc6\xb7\xc4\xa3\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Structs/Structs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc6\xb7\xc4\xa3\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Price_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Structs/Structs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameItemActor_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Structs/Structs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Identification;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Introduce;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAmount;
	static const UECodeGen_Private::FTextPropertyParams NewProp_UseType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemMesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Price;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameItemActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemdata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FItemdata_Statics::NewProp_Identification = { "Identification", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemdata, Identification), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Identification_MetaData), NewProp_Identification_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FItemdata_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FItemdata_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemdata, ItemType), Z_Construct_UEnum_Quiet_EItemType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemType_MetaData), NewProp_ItemType_MetaData) }; // 2516133327
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FItemdata_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemdata, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemdata_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemdata, ItemID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemID_MetaData), NewProp_ItemID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemdata_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemdata, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemdata_Statics::NewProp_Introduce = { "Introduce", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemdata, Introduce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Introduce_MetaData), NewProp_Introduce_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemdata_Statics::NewProp_MaxAmount = { "MaxAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemdata, MaxAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAmount_MetaData), NewProp_MaxAmount_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemdata_Statics::NewProp_UseType = { "UseType", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemdata, UseType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseType_MetaData), NewProp_UseType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemdata_Statics::NewProp_ItemMesh = { "ItemMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemdata, ItemMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemMesh_MetaData), NewProp_ItemMesh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemdata_Statics::NewProp_Price = { "Price", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemdata, Price), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Price_MetaData), NewProp_Price_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FItemdata_Statics::NewProp_GameItemActor = { "GameItemActor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemdata, GameItemActor), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameItemActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameItemActor_MetaData), NewProp_GameItemActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemdata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemdata_Statics::NewProp_Identification,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemdata_Statics::NewProp_ItemType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemdata_Statics::NewProp_ItemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemdata_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemdata_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemdata_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemdata_Statics::NewProp_Introduce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemdata_Statics::NewProp_MaxAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemdata_Statics::NewProp_UseType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemdata_Statics::NewProp_ItemMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemdata_Statics::NewProp_Price,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemdata_Statics::NewProp_GameItemActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemdata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemdata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Quiet,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"Itemdata",
	Z_Construct_UScriptStruct_FItemdata_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemdata_Statics::PropPointers),
	sizeof(FItemdata),
	alignof(FItemdata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemdata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemdata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemdata()
{
	if (!Z_Registration_Info_UScriptStruct_Itemdata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Itemdata.InnerSingleton, Z_Construct_UScriptStruct_FItemdata_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Itemdata.InnerSingleton;
}
// End ScriptStruct FItemdata

// Begin ScriptStruct FGameSets
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameSets;
class UScriptStruct* FGameSets::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameSets.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameSets.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameSets, (UObject*)Z_Construct_UPackage__Script_Quiet(), TEXT("GameSets"));
	}
	return Z_Registration_Info_UScriptStruct_GameSets.OuterSingleton;
}
template<> QUIET_API UScriptStruct* StaticStruct<FGameSets>()
{
	return FGameSets::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameSets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Structs/Structs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstTime_MetaData[] = {
		{ "Category", "GameSets" },
		{ "ModuleRelativePath", "Structs/Structs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowFPS_MetaData[] = {
		{ "Category", "Screen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xd6\xa1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xbe\n" },
#endif
		{ "ModuleRelativePath", "Structs/Structs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd6\xa1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xbe" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VSync_MetaData[] = {
		{ "Category", "Screen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xd6\xb1\xcd\xac\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Structs/Structs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xd6\xb1\xcd\xac\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxFPS_MetaData[] = {
		{ "Category", "Screen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xa1\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Structs/Structs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xa1\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[] = {
		{ "Category", "Screen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xd6\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Structs/Structs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd6\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindowMode_MetaData[] = {
		{ "Category", "Screen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xa3\xca\xbd\n" },
#endif
		{ "ModuleRelativePath", "Structs/Structs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xa3\xca\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDLSS_MetaData[] = {
		{ "Category", "Screen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xc7\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""DLSS\n" },
#endif
		{ "ModuleRelativePath", "Structs/Structs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xc7\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""DLSS" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DLSSQuality_MetaData[] = {
		{ "Category", "Screen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xb7\xef\xbf\xbd\xef\xbf\xbd\xc6\xb7\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Structs/Structs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xb7\xef\xbf\xbd\xef\xbf\xbd\xc6\xb7\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFrameGeneration_MetaData[] = {
		{ "Category", "Screen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xc7\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""DLSS\xd6\xa1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Structs/Structs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xc7\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""DLSS\xd6\xa1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRayTracing_MetaData[] = {
		{ "Category", "Screen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xc7\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xb7\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Structs/Structs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xc7\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xb7\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingQuality_MetaData[] = {
		{ "Category", "Screen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xb7\xef\xbf\xbd\xef\xbf\xbd\xc6\xb7\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Structs/Structs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xb7\xef\xbf\xbd\xef\xbf\xbd\xc6\xb7\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMotionBlur_MetaData[] = {
		{ "Category", "Screen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xc7\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb6\xef\xbf\xbd\xcc\xac\xc4\xa3\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Structs/Structs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xc7\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb6\xef\xbf\xbd\xcc\xac\xc4\xa3\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewDistance_MetaData[] = {
		{ "Category", "Screen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xd3\xbe\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Structs/Structs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd3\xbe\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AntiAliasing_MetaData[] = {
		{ "Category", "Screen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Structs/Structs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessing_MetaData[] = {
		{ "Category", "Screen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xda\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Structs/Structs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xda\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shadow_MetaData[] = {
		{ "Category", "Screen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xd3\xb0\n" },
#endif
		{ "ModuleRelativePath", "Structs/Structs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xd3\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalIllumination_MetaData[] = {
		{ "Category", "Screen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xc8\xab\xef\xbf\xbd\xd6\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Structs/Structs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc8\xab\xef\xbf\xbd\xd6\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reflection_MetaData[] = {
		{ "Category", "Screen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Structs/Structs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[] = {
		{ "Category", "Screen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Structs/Structs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shading_MetaData[] = {
		{ "Category", "Screen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xc9\xab\n" },
#endif
		{ "ModuleRelativePath", "Structs/Structs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc9\xab" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseSensitivity_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Structs/Structs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalVolume_MetaData[] = {
		{ "Category", "Volume" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Structs/Structs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundVolume_MetaData[] = {
		{ "Category", "Volume" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Structs/Structs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundEffectVolume_MetaData[] = {
		{ "Category", "Volume" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xd0\xa7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Structs/Structs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xd0\xa7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceVolume_MetaData[] = {
		{ "Category", "Volume" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Structs/Structs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowCaption_MetaData[] = {
		{ "Category", "Volume" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xca\xbe\xef\xbf\xbd\xef\xbf\xbd\xc4\xbb\n" },
#endif
		{ "ModuleRelativePath", "Structs/Structs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xca\xbe\xef\xbf\xbd\xef\xbf\xbd\xc4\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowCaptionBackground_MetaData[] = {
		{ "Category", "Volume" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xca\xbe\xef\xbf\xbd\xef\xbf\xbd\xc4\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Structs/Structs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xca\xbe\xef\xbf\xbd\xef\xbf\xbd\xc4\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptionSize_MetaData[] = {
		{ "Category", "Volume" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xc4\xbb\xef\xbf\xbd\xef\xbf\xbd\xd0\xa1\n" },
#endif
		{ "ModuleRelativePath", "Structs/Structs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc4\xbb\xef\xbf\xbd\xef\xbf\xbd\xd0\xa1" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_FirstTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FirstTime;
	static void NewProp_ShowFPS_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowFPS;
	static void NewProp_VSync_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_VSync;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MaxFPS;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Resolution;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WindowMode;
	static void NewProp_bDLSS_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDLSS;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DLSSQuality;
	static void NewProp_bFrameGeneration_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFrameGeneration;
	static void NewProp_bRayTracing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRayTracing;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RayTracingQuality;
	static void NewProp_bMotionBlur_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMotionBlur;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ViewDistance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AntiAliasing;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PostProcessing;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Shadow;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GlobalIllumination;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Reflection;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Shading;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseSensitivity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BackgroundVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SoundEffectVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VoiceVolume;
	static void NewProp_bShowCaption_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowCaption;
	static void NewProp_bShowCaptionBackground_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowCaptionBackground;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CaptionSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameSets>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_FirstTime_SetBit(void* Obj)
{
	((FGameSets*)Obj)->FirstTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_FirstTime = { "FirstTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameSets), &Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_FirstTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstTime_MetaData), NewProp_FirstTime_MetaData) };
void Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_ShowFPS_SetBit(void* Obj)
{
	((FGameSets*)Obj)->ShowFPS = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_ShowFPS = { "ShowFPS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameSets), &Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_ShowFPS_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowFPS_MetaData), NewProp_ShowFPS_MetaData) };
void Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_VSync_SetBit(void* Obj)
{
	((FGameSets*)Obj)->VSync = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_VSync = { "VSync", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameSets), &Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_VSync_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VSync_MetaData), NewProp_VSync_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_MaxFPS = { "MaxFPS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameSets, MaxFPS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxFPS_MetaData), NewProp_MaxFPS_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameSets, Resolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resolution_MetaData), NewProp_Resolution_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_WindowMode = { "WindowMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameSets, WindowMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindowMode_MetaData), NewProp_WindowMode_MetaData) };
void Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_bDLSS_SetBit(void* Obj)
{
	((FGameSets*)Obj)->bDLSS = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_bDLSS = { "bDLSS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameSets), &Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_bDLSS_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDLSS_MetaData), NewProp_bDLSS_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_DLSSQuality = { "DLSSQuality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameSets, DLSSQuality), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DLSSQuality_MetaData), NewProp_DLSSQuality_MetaData) };
void Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_bFrameGeneration_SetBit(void* Obj)
{
	((FGameSets*)Obj)->bFrameGeneration = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_bFrameGeneration = { "bFrameGeneration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameSets), &Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_bFrameGeneration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFrameGeneration_MetaData), NewProp_bFrameGeneration_MetaData) };
void Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_bRayTracing_SetBit(void* Obj)
{
	((FGameSets*)Obj)->bRayTracing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_bRayTracing = { "bRayTracing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameSets), &Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_bRayTracing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRayTracing_MetaData), NewProp_bRayTracing_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_RayTracingQuality = { "RayTracingQuality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameSets, RayTracingQuality), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayTracingQuality_MetaData), NewProp_RayTracingQuality_MetaData) };
void Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_bMotionBlur_SetBit(void* Obj)
{
	((FGameSets*)Obj)->bMotionBlur = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_bMotionBlur = { "bMotionBlur", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameSets), &Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_bMotionBlur_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMotionBlur_MetaData), NewProp_bMotionBlur_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_ViewDistance = { "ViewDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameSets, ViewDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewDistance_MetaData), NewProp_ViewDistance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_AntiAliasing = { "AntiAliasing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameSets, AntiAliasing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AntiAliasing_MetaData), NewProp_AntiAliasing_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_PostProcessing = { "PostProcessing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameSets, PostProcessing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcessing_MetaData), NewProp_PostProcessing_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_Shadow = { "Shadow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameSets, Shadow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shadow_MetaData), NewProp_Shadow_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_GlobalIllumination = { "GlobalIllumination", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameSets, GlobalIllumination), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalIllumination_MetaData), NewProp_GlobalIllumination_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_Reflection = { "Reflection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameSets, Reflection), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reflection_MetaData), NewProp_Reflection_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameSets, Texture), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Texture_MetaData), NewProp_Texture_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_Shading = { "Shading", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameSets, Shading), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shading_MetaData), NewProp_Shading_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_MouseSensitivity = { "MouseSensitivity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameSets, MouseSensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseSensitivity_MetaData), NewProp_MouseSensitivity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_TotalVolume = { "TotalVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameSets, TotalVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalVolume_MetaData), NewProp_TotalVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_BackgroundVolume = { "BackgroundVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameSets, BackgroundVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundVolume_MetaData), NewProp_BackgroundVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_SoundEffectVolume = { "SoundEffectVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameSets, SoundEffectVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundEffectVolume_MetaData), NewProp_SoundEffectVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_VoiceVolume = { "VoiceVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameSets, VoiceVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceVolume_MetaData), NewProp_VoiceVolume_MetaData) };
void Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_bShowCaption_SetBit(void* Obj)
{
	((FGameSets*)Obj)->bShowCaption = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_bShowCaption = { "bShowCaption", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameSets), &Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_bShowCaption_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowCaption_MetaData), NewProp_bShowCaption_MetaData) };
void Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_bShowCaptionBackground_SetBit(void* Obj)
{
	((FGameSets*)Obj)->bShowCaptionBackground = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_bShowCaptionBackground = { "bShowCaptionBackground", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameSets), &Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_bShowCaptionBackground_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowCaptionBackground_MetaData), NewProp_bShowCaptionBackground_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_CaptionSize = { "CaptionSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameSets, CaptionSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptionSize_MetaData), NewProp_CaptionSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameSets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_FirstTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_ShowFPS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_VSync,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_MaxFPS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_Resolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_WindowMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_bDLSS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_DLSSQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_bFrameGeneration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_bRayTracing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_RayTracingQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_bMotionBlur,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_ViewDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_AntiAliasing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_PostProcessing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_Shadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_GlobalIllumination,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_Reflection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_Shading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_MouseSensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_TotalVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_BackgroundVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_SoundEffectVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_VoiceVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_bShowCaption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_bShowCaptionBackground,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSets_Statics::NewProp_CaptionSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameSets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameSets_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Quiet,
	nullptr,
	&NewStructOps,
	"GameSets",
	Z_Construct_UScriptStruct_FGameSets_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameSets_Statics::PropPointers),
	sizeof(FGameSets),
	alignof(FGameSets),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameSets_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameSets_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameSets()
{
	if (!Z_Registration_Info_UScriptStruct_GameSets.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameSets.InnerSingleton, Z_Construct_UScriptStruct_FGameSets_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameSets.InnerSingleton;
}
// End ScriptStruct FGameSets

// Begin ScriptStruct FCaption
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Caption;
class UScriptStruct* FCaption::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Caption.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Caption.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCaption, (UObject*)Z_Construct_UPackage__Script_Quiet(), TEXT("Caption"));
	}
	return Z_Registration_Info_UScriptStruct_Caption.OuterSingleton;
}
template<> QUIET_API UScriptStruct* StaticStruct<FCaption>()
{
	return FCaption::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCaption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Structs/Structs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[] = {
		{ "Category", "Caption" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xc4\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Structs/Structs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc4\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeepTime_MetaData[] = {
		{ "Category", "Caption" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Structs/Structs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[] = {
		{ "Category", "Caption" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Structs/Structs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WhoSay_MetaData[] = {
		{ "Category", "Caption" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xc4\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Structs/Structs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc4\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Caption" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xc4\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Structs/Structs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc4\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Content;
	static const UECodeGen_Private::FIntPropertyParams NewProp_KeepTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
	static const UECodeGen_Private::FTextPropertyParams NewProp_WhoSay;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCaption>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCaption_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCaption, Content), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Content_MetaData), NewProp_Content_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCaption_Statics::NewProp_KeepTime = { "KeepTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCaption, KeepTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeepTime_MetaData), NewProp_KeepTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCaption_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCaption, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sound_MetaData), NewProp_Sound_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCaption_Statics::NewProp_WhoSay = { "WhoSay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCaption, WhoSay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WhoSay_MetaData), NewProp_WhoSay_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCaption_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCaption, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCaption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCaption_Statics::NewProp_Content,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCaption_Statics::NewProp_KeepTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCaption_Statics::NewProp_Sound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCaption_Statics::NewProp_WhoSay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCaption_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCaption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCaption_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Quiet,
	nullptr,
	&NewStructOps,
	"Caption",
	Z_Construct_UScriptStruct_FCaption_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCaption_Statics::PropPointers),
	sizeof(FCaption),
	alignof(FCaption),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCaption_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCaption_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCaption()
{
	if (!Z_Registration_Info_UScriptStruct_Caption.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Caption.InnerSingleton, Z_Construct_UScriptStruct_FCaption_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Caption.InnerSingleton;
}
// End ScriptStruct FCaption

// Begin ScriptStruct FPlayerData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerData;
class UScriptStruct* FPlayerData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerData, (UObject*)Z_Construct_UPackage__Script_Quiet(), TEXT("PlayerData"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerData.OuterSingleton;
}
template<> QUIET_API UScriptStruct* StaticStruct<FPlayerData>()
{
	return FPlayerData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayerData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Structs/Structs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CarryCards_MetaData[] = {
		{ "Category", "PlayerData" },
		{ "ModuleRelativePath", "Structs/Structs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PossessCards_MetaData[] = {
		{ "Category", "PlayerData" },
		{ "ModuleRelativePath", "Structs/Structs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level1Time_MetaData[] = {
		{ "Category", "PlayerData" },
		{ "ModuleRelativePath", "Structs/Structs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level1Score_MetaData[] = {
		{ "Category", "PlayerData" },
		{ "ModuleRelativePath", "Structs/Structs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CarryCards_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CarryCards;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PossessCards_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PossessCards;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Level1Time_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Level1Time_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Level1Time;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Level1Score_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Level1Score_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Level1Score;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_CarryCards_Inner = { "CarryCards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_CarryCards = { "CarryCards", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerData, CarryCards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CarryCards_MetaData), NewProp_CarryCards_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_PossessCards_Inner = { "PossessCards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_PossessCards = { "PossessCards", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerData, PossessCards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PossessCards_MetaData), NewProp_PossessCards_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_Level1Time_ValueProp = { "Level1Time", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_Level1Time_Key_KeyProp = { "Level1Time_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_Level1Time = { "Level1Time", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerData, Level1Time), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level1Time_MetaData), NewProp_Level1Time_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_Level1Score_ValueProp = { "Level1Score", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_Level1Score_Key_KeyProp = { "Level1Score_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_Level1Score = { "Level1Score", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerData, Level1Score), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level1Score_MetaData), NewProp_Level1Score_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_CarryCards_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_CarryCards,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_PossessCards_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_PossessCards,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_Level1Time_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_Level1Time_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_Level1Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_Level1Score_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_Level1Score_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_Level1Score,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Quiet,
	nullptr,
	&NewStructOps,
	"PlayerData",
	Z_Construct_UScriptStruct_FPlayerData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerData_Statics::PropPointers),
	sizeof(FPlayerData),
	alignof(FPlayerData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerData()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerData.InnerSingleton, Z_Construct_UScriptStruct_FPlayerData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayerData.InnerSingleton;
}
// End ScriptStruct FPlayerData

// Begin ScriptStruct FCardData
static_assert(std::is_polymorphic<FCardData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCardData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CardData;
class UScriptStruct* FCardData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CardData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CardData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCardData, (UObject*)Z_Construct_UPackage__Script_Quiet(), TEXT("CardData"));
	}
	return Z_Registration_Info_UScriptStruct_CardData.OuterSingleton;
}
template<> QUIET_API UScriptStruct* StaticStruct<FCardData>()
{
	return FCardData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCardData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Structs/Structs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UID_MetaData[] = {
		{ "Category", "CardData" },
		{ "ModuleRelativePath", "Structs/Structs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "CardData" },
		{ "ModuleRelativePath", "Structs/Structs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "Category", "CardData" },
		{ "ModuleRelativePath", "Structs/Structs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IMG_MetaData[] = {
		{ "Category", "CardData" },
		{ "ModuleRelativePath", "Structs/Structs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_UID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Message;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_IMG;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCardData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCardData_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCardData, UID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UID_MetaData), NewProp_UID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCardData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCardData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCardData_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCardData, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCardData_Statics::NewProp_IMG = { "IMG", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCardData, IMG), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IMG_MetaData), NewProp_IMG_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCardData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardData_Statics::NewProp_UID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardData_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardData_Statics::NewProp_IMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCardData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Quiet,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"CardData",
	Z_Construct_UScriptStruct_FCardData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardData_Statics::PropPointers),
	sizeof(FCardData),
	alignof(FCardData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCardData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCardData()
{
	if (!Z_Registration_Info_UScriptStruct_CardData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CardData.InnerSingleton, Z_Construct_UScriptStruct_FCardData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CardData.InnerSingleton;
}
// End ScriptStruct FCardData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Structs_Structs_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInventory::StaticStruct, Z_Construct_UScriptStruct_FInventory_Statics::NewStructOps, TEXT("Inventory"), &Z_Registration_Info_UScriptStruct_Inventory, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventory), 283610787U) },
		{ FItemdata::StaticStruct, Z_Construct_UScriptStruct_FItemdata_Statics::NewStructOps, TEXT("Itemdata"), &Z_Registration_Info_UScriptStruct_Itemdata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemdata), 3358898643U) },
		{ FGameSets::StaticStruct, Z_Construct_UScriptStruct_FGameSets_Statics::NewStructOps, TEXT("GameSets"), &Z_Registration_Info_UScriptStruct_GameSets, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameSets), 1722388133U) },
		{ FCaption::StaticStruct, Z_Construct_UScriptStruct_FCaption_Statics::NewStructOps, TEXT("Caption"), &Z_Registration_Info_UScriptStruct_Caption, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCaption), 3981663949U) },
		{ FPlayerData::StaticStruct, Z_Construct_UScriptStruct_FPlayerData_Statics::NewStructOps, TEXT("PlayerData"), &Z_Registration_Info_UScriptStruct_PlayerData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerData), 3310580538U) },
		{ FCardData::StaticStruct, Z_Construct_UScriptStruct_FCardData_Statics::NewStructOps, TEXT("CardData"), &Z_Registration_Info_UScriptStruct_CardData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCardData), 2892857109U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Structs_Structs_h_3522865344(TEXT("/Script/Quiet"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Structs_Structs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Structs_Structs_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
