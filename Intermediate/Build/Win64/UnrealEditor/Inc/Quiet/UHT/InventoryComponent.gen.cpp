// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Quiet/Component/InventoryComponent.h"
#include "Quiet/Structs/Structs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
QUIET_API UClass* Z_Construct_UClass_AGameItemActor_NoRegister();
QUIET_API UClass* Z_Construct_UClass_AQuietCharacter_NoRegister();
QUIET_API UClass* Z_Construct_UClass_AQuietPlayerController_NoRegister();
QUIET_API UClass* Z_Construct_UClass_UInventoryComponent();
QUIET_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
QUIET_API UClass* Z_Construct_UClass_UInventoryGridOverlay_NoRegister();
QUIET_API UEnum* Z_Construct_UEnum_Quiet_EItemType();
QUIET_API UScriptStruct* Z_Construct_UScriptStruct_FInventory();
UPackage* Z_Construct_UPackage__Script_Quiet();
// End Cross Module References

// Begin Class UInventoryComponent Function AddItem
struct Z_Construct_UFunction_UInventoryComponent_AddItem_Statics
{
	struct InventoryComponent_eventAddItem_Parms
	{
		TSubclassOf<AGameItemActor> Item;
		int32 Num;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Inventory\")\n" },
#endif
		{ "ModuleRelativePath", "Component/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Inventory\")" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Num;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventAddItem_Parms, Item), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameItemActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_Num = { "Num", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventAddItem_Parms, Num), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryComponent_eventAddItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryComponent_eventAddItem_Parms), &Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_Num,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "AddItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::InventoryComponent_eventAddItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::InventoryComponent_eventAddItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_AddItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execAddItem)
{
	P_GET_OBJECT(UClass,Z_Param_Item);
	P_GET_PROPERTY(FIntProperty,Z_Param_Num);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddItem(Z_Param_Item,Z_Param_Num);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function AddItem

// Begin Class UInventoryComponent Function BuyItem
struct Z_Construct_UFunction_UInventoryComponent_BuyItem_Statics
{
	struct InventoryComponent_eventBuyItem_Parms
	{
		FName Identification;
		int32 Price;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Component/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Identification;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Price;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInventoryComponent_BuyItem_Statics::NewProp_Identification = { "Identification", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventBuyItem_Parms, Identification), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_BuyItem_Statics::NewProp_Price = { "Price", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventBuyItem_Parms, Price), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_BuyItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_BuyItem_Statics::NewProp_Identification,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_BuyItem_Statics::NewProp_Price,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_BuyItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_BuyItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "BuyItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_BuyItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_BuyItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_BuyItem_Statics::InventoryComponent_eventBuyItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_BuyItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_BuyItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_BuyItem_Statics::InventoryComponent_eventBuyItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_BuyItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_BuyItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execBuyItem)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Identification);
	P_GET_PROPERTY(FIntProperty,Z_Param_Price);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BuyItem(Z_Param_Identification,Z_Param_Price);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function BuyItem

// Begin Class UInventoryComponent Function DeleteItem
struct Z_Construct_UFunction_UInventoryComponent_DeleteItem_Statics
{
	struct InventoryComponent_eventDeleteItem_Parms
	{
		TSubclassOf<AGameItemActor> Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Component/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInventoryComponent_DeleteItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventDeleteItem_Parms, Item), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameItemActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_DeleteItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_DeleteItem_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_DeleteItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_DeleteItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "DeleteItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_DeleteItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_DeleteItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_DeleteItem_Statics::InventoryComponent_eventDeleteItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_DeleteItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_DeleteItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_DeleteItem_Statics::InventoryComponent_eventDeleteItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_DeleteItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_DeleteItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execDeleteItem)
{
	P_GET_OBJECT(UClass,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteItem(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function DeleteItem

// Begin Class UInventoryComponent Function FindItemNum
struct Z_Construct_UFunction_UInventoryComponent_FindItemNum_Statics
{
	struct InventoryComponent_eventFindItemNum_Parms
	{
		FName Identification;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Component/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Identification;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInventoryComponent_FindItemNum_Statics::NewProp_Identification = { "Identification", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventFindItemNum_Parms, Identification), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_FindItemNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventFindItemNum_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_FindItemNum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_FindItemNum_Statics::NewProp_Identification,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_FindItemNum_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_FindItemNum_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_FindItemNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "FindItemNum", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_FindItemNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_FindItemNum_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_FindItemNum_Statics::InventoryComponent_eventFindItemNum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_FindItemNum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_FindItemNum_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_FindItemNum_Statics::InventoryComponent_eventFindItemNum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_FindItemNum()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_FindItemNum_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execFindItemNum)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Identification);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->FindItemNum(Z_Param_Identification);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function FindItemNum

// Begin Class UInventoryComponent Function FindSameAndNullSlot
struct Z_Construct_UFunction_UInventoryComponent_FindSameAndNullSlot_Statics
{
	struct InventoryComponent_eventFindSameAndNullSlot_Parms
	{
		TSubclassOf<AGameItemActor> Item;
		bool Successful;
		int32 AddIndex;
		FString State;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Component/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Item;
	static void NewProp_Successful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Successful;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AddIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_State;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInventoryComponent_FindSameAndNullSlot_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventFindSameAndNullSlot_Parms, Item), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameItemActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventoryComponent_FindSameAndNullSlot_Statics::NewProp_Successful_SetBit(void* Obj)
{
	((InventoryComponent_eventFindSameAndNullSlot_Parms*)Obj)->Successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryComponent_FindSameAndNullSlot_Statics::NewProp_Successful = { "Successful", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryComponent_eventFindSameAndNullSlot_Parms), &Z_Construct_UFunction_UInventoryComponent_FindSameAndNullSlot_Statics::NewProp_Successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_FindSameAndNullSlot_Statics::NewProp_AddIndex = { "AddIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventFindSameAndNullSlot_Parms, AddIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventoryComponent_FindSameAndNullSlot_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventFindSameAndNullSlot_Parms, State), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_FindSameAndNullSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_FindSameAndNullSlot_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_FindSameAndNullSlot_Statics::NewProp_Successful,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_FindSameAndNullSlot_Statics::NewProp_AddIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_FindSameAndNullSlot_Statics::NewProp_State,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_FindSameAndNullSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_FindSameAndNullSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "FindSameAndNullSlot", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_FindSameAndNullSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_FindSameAndNullSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_FindSameAndNullSlot_Statics::InventoryComponent_eventFindSameAndNullSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_FindSameAndNullSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_FindSameAndNullSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_FindSameAndNullSlot_Statics::InventoryComponent_eventFindSameAndNullSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_FindSameAndNullSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_FindSameAndNullSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execFindSameAndNullSlot)
{
	P_GET_OBJECT(UClass,Z_Param_Item);
	P_GET_UBOOL_REF(Z_Param_Out_Successful);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AddIndex);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_State);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FindSameAndNullSlot(Z_Param_Item,Z_Param_Out_Successful,Z_Param_Out_AddIndex,Z_Param_Out_State);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function FindSameAndNullSlot

// Begin Class UInventoryComponent Function GetItemDataAtIndex
struct Z_Construct_UFunction_UInventoryComponent_GetItemDataAtIndex_Statics
{
	struct InventoryComponent_eventGetItemDataAtIndex_Parms
	{
		int32 Index;
		TSubclassOf<AGameItemActor> Actor;
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Component/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_GetItemDataAtIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetItemDataAtIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInventoryComponent_GetItemDataAtIndex_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0014000000000180, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetItemDataAtIndex_Parms, Actor), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameItemActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_GetItemDataAtIndex_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetItemDataAtIndex_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetItemDataAtIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetItemDataAtIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetItemDataAtIndex_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetItemDataAtIndex_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetItemDataAtIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetItemDataAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetItemDataAtIndex", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_GetItemDataAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetItemDataAtIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_GetItemDataAtIndex_Statics::InventoryComponent_eventGetItemDataAtIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetItemDataAtIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_GetItemDataAtIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_GetItemDataAtIndex_Statics::InventoryComponent_eventGetItemDataAtIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_GetItemDataAtIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetItemDataAtIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execGetItemDataAtIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<AGameItemActor>,Z_Param_Out_Actor);
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetItemDataAtIndex(Z_Param_Index,Z_Param_Out_Actor,Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function GetItemDataAtIndex

// Begin Class UInventoryComponent Function SellItem
struct Z_Construct_UFunction_UInventoryComponent_SellItem_Statics
{
	struct InventoryComponent_eventSellItem_Parms
	{
		FName Identification;
		int32 Price;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Component/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Identification;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Price;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInventoryComponent_SellItem_Statics::NewProp_Identification = { "Identification", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventSellItem_Parms, Identification), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_SellItem_Statics::NewProp_Price = { "Price", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventSellItem_Parms, Price), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_SellItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_SellItem_Statics::NewProp_Identification,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_SellItem_Statics::NewProp_Price,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SellItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_SellItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "SellItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_SellItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SellItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_SellItem_Statics::InventoryComponent_eventSellItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SellItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_SellItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_SellItem_Statics::InventoryComponent_eventSellItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_SellItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_SellItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execSellItem)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Identification);
	P_GET_PROPERTY(FIntProperty,Z_Param_Price);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SellItem(Z_Param_Identification,Z_Param_Price);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function SellItem

// Begin Class UInventoryComponent Function UpdataInventory
struct InventoryComponent_eventUpdataInventory_Parms
{
	int32 Index;
	UTexture2D* Icon;
	int32 Amount;
	EItemType Itemtype;
	TSubclassOf<AGameItemActor> Item;
};
static FName NAME_UInventoryComponent_UpdataInventory = FName(TEXT("UpdataInventory"));
void UInventoryComponent::UpdataInventory(int32 Index, UTexture2D* Icon, int32 Amount, EItemType Itemtype, TSubclassOf<AGameItemActor> Item)
{
	InventoryComponent_eventUpdataInventory_Parms Parms;
	Parms.Index=Index;
	Parms.Icon=Icon;
	Parms.Amount=Amount;
	Parms.Itemtype=Itemtype;
	Parms.Item=Item;
	ProcessEvent(FindFunctionChecked(NAME_UInventoryComponent_UpdataInventory),&Parms);
}
struct Z_Construct_UFunction_UInventoryComponent_UpdataInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Component/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Itemtype_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Itemtype;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_UpdataInventory_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventUpdataInventory_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_UpdataInventory_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventUpdataInventory_Parms, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_UpdataInventory_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventUpdataInventory_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInventoryComponent_UpdataInventory_Statics::NewProp_Itemtype_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInventoryComponent_UpdataInventory_Statics::NewProp_Itemtype = { "Itemtype", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventUpdataInventory_Parms, Itemtype), Z_Construct_UEnum_Quiet_EItemType, METADATA_PARAMS(0, nullptr) }; // 2516133327
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInventoryComponent_UpdataInventory_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventUpdataInventory_Parms, Item), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameItemActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_UpdataInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_UpdataInventory_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_UpdataInventory_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_UpdataInventory_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_UpdataInventory_Statics::NewProp_Itemtype_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_UpdataInventory_Statics::NewProp_Itemtype,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_UpdataInventory_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_UpdataInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_UpdataInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "UpdataInventory", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_UpdataInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_UpdataInventory_Statics::PropPointers), sizeof(InventoryComponent_eventUpdataInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_UpdataInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_UpdataInventory_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventoryComponent_eventUpdataInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_UpdataInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_UpdataInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execUpdataInventory)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_OBJECT(UTexture2D,Z_Param_Icon);
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_GET_ENUM(EItemType,Z_Param_Itemtype);
	P_GET_OBJECT(UClass,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdataInventory_Implementation(Z_Param_Index,Z_Param_Icon,Z_Param_Amount,EItemType(Z_Param_Itemtype),Z_Param_Item);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function UpdataInventory

// Begin Class UInventoryComponent
void UInventoryComponent::StaticRegisterNativesUInventoryComponent()
{
	UClass* Class = UInventoryComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddItem", &UInventoryComponent::execAddItem },
		{ "BuyItem", &UInventoryComponent::execBuyItem },
		{ "DeleteItem", &UInventoryComponent::execDeleteItem },
		{ "FindItemNum", &UInventoryComponent::execFindItemNum },
		{ "FindSameAndNullSlot", &UInventoryComponent::execFindSameAndNullSlot },
		{ "GetItemDataAtIndex", &UInventoryComponent::execGetItemDataAtIndex },
		{ "SellItem", &UInventoryComponent::execSellItem },
		{ "UpdataInventory", &UInventoryComponent::execUpdataInventory },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryComponent);
UClass* Z_Construct_UClass_UInventoryComponent_NoRegister()
{
	return UInventoryComponent::StaticClass();
}
struct Z_Construct_UClass_UInventoryComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Component/InventoryComponent.h" },
		{ "ModuleRelativePath", "Component/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "Component/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuietOwnerPlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Component/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryGridOverlay_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Component/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Component/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommoditySlotDataTable_MetaData[] = {
		{ "ModuleRelativePath", "Component/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuietOwnerPlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryGridOverlay;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Inventory_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Inventory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CommoditySlotDataTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryComponent_AddItem, "AddItem" }, // 2628403536
		{ &Z_Construct_UFunction_UInventoryComponent_BuyItem, "BuyItem" }, // 4122971335
		{ &Z_Construct_UFunction_UInventoryComponent_DeleteItem, "DeleteItem" }, // 4007862496
		{ &Z_Construct_UFunction_UInventoryComponent_FindItemNum, "FindItemNum" }, // 1661326196
		{ &Z_Construct_UFunction_UInventoryComponent_FindSameAndNullSlot, "FindSameAndNullSlot" }, // 1187731295
		{ &Z_Construct_UFunction_UInventoryComponent_GetItemDataAtIndex, "GetItemDataAtIndex" }, // 3726258604
		{ &Z_Construct_UFunction_UInventoryComponent_SellItem, "SellItem" }, // 4083264781
		{ &Z_Construct_UFunction_UInventoryComponent_UpdataInventory, "UpdataInventory" }, // 1781621003
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, Character), Z_Construct_UClass_AQuietCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Character_MetaData), NewProp_Character_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_QuietOwnerPlayerController = { "QuietOwnerPlayerController", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, QuietOwnerPlayerController), Z_Construct_UClass_AQuietPlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuietOwnerPlayerController_MetaData), NewProp_QuietOwnerPlayerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventoryGridOverlay = { "InventoryGridOverlay", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, InventoryGridOverlay), Z_Construct_UClass_UInventoryGridOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryGridOverlay_MetaData), NewProp_InventoryGridOverlay_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_Inventory_Inner = { "Inventory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventory, METADATA_PARAMS(0, nullptr) }; // 283610787
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, Inventory), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inventory_MetaData), NewProp_Inventory_MetaData) }; // 283610787
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_CommoditySlotDataTable = { "CommoditySlotDataTable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, CommoditySlotDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommoditySlotDataTable_MetaData), NewProp_CommoditySlotDataTable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_QuietOwnerPlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventoryGridOverlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_Inventory_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_Inventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_CommoditySlotDataTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventoryComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Quiet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryComponent_Statics::ClassParams = {
	&UInventoryComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInventoryComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryComponent()
{
	if (!Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton, Z_Construct_UClass_UInventoryComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton;
}
template<> QUIET_API UClass* StaticClass<UInventoryComponent>()
{
	return UInventoryComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryComponent);
UInventoryComponent::~UInventoryComponent() {}
// End Class UInventoryComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Component_InventoryComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryComponent, UInventoryComponent::StaticClass, TEXT("UInventoryComponent"), &Z_Registration_Info_UClass_UInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryComponent), 1329084672U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Component_InventoryComponent_h_2558469810(TEXT("/Script/Quiet"),
	Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Component_InventoryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Component_InventoryComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
