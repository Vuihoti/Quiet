// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Quiet/PlayerController/QuietPlayerController.h"
#include "Quiet/Structs/Structs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuietPlayerController() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
QUIET_API UClass* Z_Construct_UClass_AGameItemActor_NoRegister();
QUIET_API UClass* Z_Construct_UClass_AMyHUD_NoRegister();
QUIET_API UClass* Z_Construct_UClass_AQuietPlayerController();
QUIET_API UClass* Z_Construct_UClass_AQuietPlayerController_NoRegister();
QUIET_API UScriptStruct* Z_Construct_UScriptStruct_FInventory();
UPackage* Z_Construct_UPackage__Script_Quiet();
// End Cross Module References

// Begin Class AQuietPlayerController Function SetHUDActiveItemSlot
struct Z_Construct_UFunction_AQuietPlayerController_SetHUDActiveItemSlot_Statics
{
	struct QuietPlayerController_eventSetHUDActiveItemSlot_Parms
	{
		TSubclassOf<AGameItemActor> PutInItem;
		int32 PutInAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcb\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "PlayerController/QuietPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcb\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PutInItem;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PutInAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AQuietPlayerController_SetHUDActiveItemSlot_Statics::NewProp_PutInItem = { "PutInItem", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuietPlayerController_eventSetHUDActiveItemSlot_Parms, PutInItem), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameItemActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AQuietPlayerController_SetHUDActiveItemSlot_Statics::NewProp_PutInAmount = { "PutInAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuietPlayerController_eventSetHUDActiveItemSlot_Parms, PutInAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AQuietPlayerController_SetHUDActiveItemSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuietPlayerController_SetHUDActiveItemSlot_Statics::NewProp_PutInItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuietPlayerController_SetHUDActiveItemSlot_Statics::NewProp_PutInAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietPlayerController_SetHUDActiveItemSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuietPlayerController_SetHUDActiveItemSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuietPlayerController, nullptr, "SetHUDActiveItemSlot", nullptr, nullptr, Z_Construct_UFunction_AQuietPlayerController_SetHUDActiveItemSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietPlayerController_SetHUDActiveItemSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_AQuietPlayerController_SetHUDActiveItemSlot_Statics::QuietPlayerController_eventSetHUDActiveItemSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietPlayerController_SetHUDActiveItemSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQuietPlayerController_SetHUDActiveItemSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AQuietPlayerController_SetHUDActiveItemSlot_Statics::QuietPlayerController_eventSetHUDActiveItemSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AQuietPlayerController_SetHUDActiveItemSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQuietPlayerController_SetHUDActiveItemSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AQuietPlayerController::execSetHUDActiveItemSlot)
{
	P_GET_OBJECT(UClass,Z_Param_PutInItem);
	P_GET_PROPERTY(FIntProperty,Z_Param_PutInAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHUDActiveItemSlot(Z_Param_PutInItem,Z_Param_PutInAmount);
	P_NATIVE_END;
}
// End Class AQuietPlayerController Function SetHUDActiveItemSlot

// Begin Class AQuietPlayerController Function SetHUDGameSet
struct Z_Construct_UFunction_AQuietPlayerController_SetHUDGameSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/QuietPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuietPlayerController_SetHUDGameSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuietPlayerController, nullptr, "SetHUDGameSet", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietPlayerController_SetHUDGameSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQuietPlayerController_SetHUDGameSet_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AQuietPlayerController_SetHUDGameSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQuietPlayerController_SetHUDGameSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AQuietPlayerController::execSetHUDGameSet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHUDGameSet();
	P_NATIVE_END;
}
// End Class AQuietPlayerController Function SetHUDGameSet

// Begin Class AQuietPlayerController Function SetHUDLightItemSlot
struct Z_Construct_UFunction_AQuietPlayerController_SetHUDLightItemSlot_Statics
{
	struct QuietPlayerController_eventSetHUDLightItemSlot_Parms
	{
		TSubclassOf<AGameItemActor> PutInItem;
		int32 PutInAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcb\xb5\xef\xbf\xbd\xef\xbf\xbd\xc6\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "PlayerController/QuietPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcb\xb5\xef\xbf\xbd\xef\xbf\xbd\xc6\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PutInItem;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PutInAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AQuietPlayerController_SetHUDLightItemSlot_Statics::NewProp_PutInItem = { "PutInItem", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuietPlayerController_eventSetHUDLightItemSlot_Parms, PutInItem), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameItemActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AQuietPlayerController_SetHUDLightItemSlot_Statics::NewProp_PutInAmount = { "PutInAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuietPlayerController_eventSetHUDLightItemSlot_Parms, PutInAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AQuietPlayerController_SetHUDLightItemSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuietPlayerController_SetHUDLightItemSlot_Statics::NewProp_PutInItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuietPlayerController_SetHUDLightItemSlot_Statics::NewProp_PutInAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietPlayerController_SetHUDLightItemSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuietPlayerController_SetHUDLightItemSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuietPlayerController, nullptr, "SetHUDLightItemSlot", nullptr, nullptr, Z_Construct_UFunction_AQuietPlayerController_SetHUDLightItemSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietPlayerController_SetHUDLightItemSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_AQuietPlayerController_SetHUDLightItemSlot_Statics::QuietPlayerController_eventSetHUDLightItemSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietPlayerController_SetHUDLightItemSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQuietPlayerController_SetHUDLightItemSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AQuietPlayerController_SetHUDLightItemSlot_Statics::QuietPlayerController_eventSetHUDLightItemSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AQuietPlayerController_SetHUDLightItemSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQuietPlayerController_SetHUDLightItemSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AQuietPlayerController::execSetHUDLightItemSlot)
{
	P_GET_OBJECT(UClass,Z_Param_PutInItem);
	P_GET_PROPERTY(FIntProperty,Z_Param_PutInAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHUDLightItemSlot(Z_Param_PutInItem,Z_Param_PutInAmount);
	P_NATIVE_END;
}
// End Class AQuietPlayerController Function SetHUDLightItemSlot

// Begin Class AQuietPlayerController Function SetHUDPassiveItemSlot
struct Z_Construct_UFunction_AQuietPlayerController_SetHUDPassiveItemSlot_Statics
{
	struct QuietPlayerController_eventSetHUDPassiveItemSlot_Parms
	{
		TSubclassOf<AGameItemActor> PutInItem;
		int32 PutInAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcb\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "PlayerController/QuietPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcb\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PutInItem;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PutInAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AQuietPlayerController_SetHUDPassiveItemSlot_Statics::NewProp_PutInItem = { "PutInItem", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuietPlayerController_eventSetHUDPassiveItemSlot_Parms, PutInItem), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameItemActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AQuietPlayerController_SetHUDPassiveItemSlot_Statics::NewProp_PutInAmount = { "PutInAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuietPlayerController_eventSetHUDPassiveItemSlot_Parms, PutInAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AQuietPlayerController_SetHUDPassiveItemSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuietPlayerController_SetHUDPassiveItemSlot_Statics::NewProp_PutInItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuietPlayerController_SetHUDPassiveItemSlot_Statics::NewProp_PutInAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietPlayerController_SetHUDPassiveItemSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuietPlayerController_SetHUDPassiveItemSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuietPlayerController, nullptr, "SetHUDPassiveItemSlot", nullptr, nullptr, Z_Construct_UFunction_AQuietPlayerController_SetHUDPassiveItemSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietPlayerController_SetHUDPassiveItemSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_AQuietPlayerController_SetHUDPassiveItemSlot_Statics::QuietPlayerController_eventSetHUDPassiveItemSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietPlayerController_SetHUDPassiveItemSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQuietPlayerController_SetHUDPassiveItemSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AQuietPlayerController_SetHUDPassiveItemSlot_Statics::QuietPlayerController_eventSetHUDPassiveItemSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AQuietPlayerController_SetHUDPassiveItemSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQuietPlayerController_SetHUDPassiveItemSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AQuietPlayerController::execSetHUDPassiveItemSlot)
{
	P_GET_OBJECT(UClass,Z_Param_PutInItem);
	P_GET_PROPERTY(FIntProperty,Z_Param_PutInAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHUDPassiveItemSlot(Z_Param_PutInItem,Z_Param_PutInAmount);
	P_NATIVE_END;
}
// End Class AQuietPlayerController Function SetHUDPassiveItemSlot

// Begin Class AQuietPlayerController Function SetHUDSetting
struct Z_Construct_UFunction_AQuietPlayerController_SetHUDSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/QuietPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuietPlayerController_SetHUDSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuietPlayerController, nullptr, "SetHUDSetting", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietPlayerController_SetHUDSetting_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQuietPlayerController_SetHUDSetting_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AQuietPlayerController_SetHUDSetting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQuietPlayerController_SetHUDSetting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AQuietPlayerController::execSetHUDSetting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHUDSetting();
	P_NATIVE_END;
}
// End Class AQuietPlayerController Function SetHUDSetting

// Begin Class AQuietPlayerController Function ShowHUDShop
struct Z_Construct_UFunction_AQuietPlayerController_ShowHUDShop_Statics
{
	struct QuietPlayerController_eventShowHUDShop_Parms
	{
		bool Show;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/QuietPlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Show_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Show;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AQuietPlayerController_ShowHUDShop_Statics::NewProp_Show_SetBit(void* Obj)
{
	((QuietPlayerController_eventShowHUDShop_Parms*)Obj)->Show = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AQuietPlayerController_ShowHUDShop_Statics::NewProp_Show = { "Show", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(QuietPlayerController_eventShowHUDShop_Parms), &Z_Construct_UFunction_AQuietPlayerController_ShowHUDShop_Statics::NewProp_Show_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AQuietPlayerController_ShowHUDShop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuietPlayerController_ShowHUDShop_Statics::NewProp_Show,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietPlayerController_ShowHUDShop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuietPlayerController_ShowHUDShop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuietPlayerController, nullptr, "ShowHUDShop", nullptr, nullptr, Z_Construct_UFunction_AQuietPlayerController_ShowHUDShop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietPlayerController_ShowHUDShop_Statics::PropPointers), sizeof(Z_Construct_UFunction_AQuietPlayerController_ShowHUDShop_Statics::QuietPlayerController_eventShowHUDShop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietPlayerController_ShowHUDShop_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQuietPlayerController_ShowHUDShop_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AQuietPlayerController_ShowHUDShop_Statics::QuietPlayerController_eventShowHUDShop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AQuietPlayerController_ShowHUDShop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQuietPlayerController_ShowHUDShop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AQuietPlayerController::execShowHUDShop)
{
	P_GET_UBOOL(Z_Param_Show);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowHUDShop(Z_Param_Show);
	P_NATIVE_END;
}
// End Class AQuietPlayerController Function ShowHUDShop

// Begin Class AQuietPlayerController Function ShowItemIntroduce
struct Z_Construct_UFunction_AQuietPlayerController_ShowItemIntroduce_Statics
{
	struct QuietPlayerController_eventShowItemIntroduce_Parms
	{
		bool Show;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/QuietPlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Show_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Show;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AQuietPlayerController_ShowItemIntroduce_Statics::NewProp_Show_SetBit(void* Obj)
{
	((QuietPlayerController_eventShowItemIntroduce_Parms*)Obj)->Show = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AQuietPlayerController_ShowItemIntroduce_Statics::NewProp_Show = { "Show", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(QuietPlayerController_eventShowItemIntroduce_Parms), &Z_Construct_UFunction_AQuietPlayerController_ShowItemIntroduce_Statics::NewProp_Show_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AQuietPlayerController_ShowItemIntroduce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuietPlayerController_ShowItemIntroduce_Statics::NewProp_Show,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietPlayerController_ShowItemIntroduce_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuietPlayerController_ShowItemIntroduce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuietPlayerController, nullptr, "ShowItemIntroduce", nullptr, nullptr, Z_Construct_UFunction_AQuietPlayerController_ShowItemIntroduce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietPlayerController_ShowItemIntroduce_Statics::PropPointers), sizeof(Z_Construct_UFunction_AQuietPlayerController_ShowItemIntroduce_Statics::QuietPlayerController_eventShowItemIntroduce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietPlayerController_ShowItemIntroduce_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQuietPlayerController_ShowItemIntroduce_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AQuietPlayerController_ShowItemIntroduce_Statics::QuietPlayerController_eventShowItemIntroduce_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AQuietPlayerController_ShowItemIntroduce()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQuietPlayerController_ShowItemIntroduce_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AQuietPlayerController::execShowItemIntroduce)
{
	P_GET_UBOOL(Z_Param_Show);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowItemIntroduce(Z_Param_Show);
	P_NATIVE_END;
}
// End Class AQuietPlayerController Function ShowItemIntroduce

// Begin Class AQuietPlayerController Function ShowMainMenu
struct Z_Construct_UFunction_AQuietPlayerController_ShowMainMenu_Statics
{
	struct QuietPlayerController_eventShowMainMenu_Parms
	{
		bool Show;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/QuietPlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Show_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Show;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AQuietPlayerController_ShowMainMenu_Statics::NewProp_Show_SetBit(void* Obj)
{
	((QuietPlayerController_eventShowMainMenu_Parms*)Obj)->Show = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AQuietPlayerController_ShowMainMenu_Statics::NewProp_Show = { "Show", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(QuietPlayerController_eventShowMainMenu_Parms), &Z_Construct_UFunction_AQuietPlayerController_ShowMainMenu_Statics::NewProp_Show_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AQuietPlayerController_ShowMainMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuietPlayerController_ShowMainMenu_Statics::NewProp_Show,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietPlayerController_ShowMainMenu_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuietPlayerController_ShowMainMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuietPlayerController, nullptr, "ShowMainMenu", nullptr, nullptr, Z_Construct_UFunction_AQuietPlayerController_ShowMainMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietPlayerController_ShowMainMenu_Statics::PropPointers), sizeof(Z_Construct_UFunction_AQuietPlayerController_ShowMainMenu_Statics::QuietPlayerController_eventShowMainMenu_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietPlayerController_ShowMainMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQuietPlayerController_ShowMainMenu_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AQuietPlayerController_ShowMainMenu_Statics::QuietPlayerController_eventShowMainMenu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AQuietPlayerController_ShowMainMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQuietPlayerController_ShowMainMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AQuietPlayerController::execShowMainMenu)
{
	P_GET_UBOOL(Z_Param_Show);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowMainMenu(Z_Param_Show);
	P_NATIVE_END;
}
// End Class AQuietPlayerController Function ShowMainMenu

// Begin Class AQuietPlayerController
void AQuietPlayerController::StaticRegisterNativesAQuietPlayerController()
{
	UClass* Class = AQuietPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetHUDActiveItemSlot", &AQuietPlayerController::execSetHUDActiveItemSlot },
		{ "SetHUDGameSet", &AQuietPlayerController::execSetHUDGameSet },
		{ "SetHUDLightItemSlot", &AQuietPlayerController::execSetHUDLightItemSlot },
		{ "SetHUDPassiveItemSlot", &AQuietPlayerController::execSetHUDPassiveItemSlot },
		{ "SetHUDSetting", &AQuietPlayerController::execSetHUDSetting },
		{ "ShowHUDShop", &AQuietPlayerController::execShowHUDShop },
		{ "ShowItemIntroduce", &AQuietPlayerController::execShowItemIntroduce },
		{ "ShowMainMenu", &AQuietPlayerController::execShowMainMenu },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AQuietPlayerController);
UClass* Z_Construct_UClass_AQuietPlayerController_NoRegister()
{
	return AQuietPlayerController::StaticClass();
}
struct Z_Construct_UClass_AQuietPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PlayerController/QuietPlayerController.h" },
		{ "ModuleRelativePath", "PlayerController/QuietPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotNum_MetaData[] = {
		{ "Category", "QuietPlayerController" },
		{ "ModuleRelativePath", "PlayerController/QuietPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuietHUD_MetaData[] = {
		{ "Category", "QuietPlayerController" },
		{ "ModuleRelativePath", "PlayerController/QuietPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HaveFlashLigh_MetaData[] = {
		{ "Category", "QuietPlayerController" },
		{ "ModuleRelativePath", "PlayerController/QuietPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BringLightItem_MetaData[] = {
		{ "Category", "QuietPlayerController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xd7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xb5\xc6\xb9\xef\xbf\xbd\xd7\xb0\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "PlayerController/QuietPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xd7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xb5\xc6\xb9\xef\xbf\xbd\xd7\xb0\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BringActiveItem_MetaData[] = {
		{ "Category", "QuietPlayerController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xd7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "PlayerController/QuietPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xd7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BringPassiveItem_MetaData[] = {
		{ "Category", "QuietPlayerController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xd7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "PlayerController/QuietPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xd7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightItem_MetaData[] = {
		{ "Category", "QuietPlayerController" },
		{ "ModuleRelativePath", "PlayerController/QuietPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lamp_MetaData[] = {
		{ "Category", "QuietPlayerController" },
		{ "ModuleRelativePath", "PlayerController/QuietPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PauseEvent_MetaData[] = {
		{ "Category", "QuietPlayerController" },
		{ "ModuleRelativePath", "PlayerController/QuietPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResumeEvent_MetaData[] = {
		{ "Category", "QuietPlayerController" },
		{ "ModuleRelativePath", "PlayerController/QuietPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotNum;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuietHUD;
	static void NewProp_HaveFlashLigh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HaveFlashLigh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BringLightItem;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BringActiveItem;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BringPassiveItem;
	static const UECodeGen_Private::FClassPropertyParams NewProp_LightItem;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Lamp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PauseEvent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResumeEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AQuietPlayerController_SetHUDActiveItemSlot, "SetHUDActiveItemSlot" }, // 181999134
		{ &Z_Construct_UFunction_AQuietPlayerController_SetHUDGameSet, "SetHUDGameSet" }, // 1606362775
		{ &Z_Construct_UFunction_AQuietPlayerController_SetHUDLightItemSlot, "SetHUDLightItemSlot" }, // 3684983541
		{ &Z_Construct_UFunction_AQuietPlayerController_SetHUDPassiveItemSlot, "SetHUDPassiveItemSlot" }, // 382453835
		{ &Z_Construct_UFunction_AQuietPlayerController_SetHUDSetting, "SetHUDSetting" }, // 1609182362
		{ &Z_Construct_UFunction_AQuietPlayerController_ShowHUDShop, "ShowHUDShop" }, // 4069793828
		{ &Z_Construct_UFunction_AQuietPlayerController_ShowItemIntroduce, "ShowItemIntroduce" }, // 422558888
		{ &Z_Construct_UFunction_AQuietPlayerController_ShowMainMenu, "ShowMainMenu" }, // 2234982650
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AQuietPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AQuietPlayerController_Statics::NewProp_SlotNum = { "SlotNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietPlayerController, SlotNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotNum_MetaData), NewProp_SlotNum_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuietPlayerController_Statics::NewProp_QuietHUD = { "QuietHUD", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietPlayerController, QuietHUD), Z_Construct_UClass_AMyHUD_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuietHUD_MetaData), NewProp_QuietHUD_MetaData) };
void Z_Construct_UClass_AQuietPlayerController_Statics::NewProp_HaveFlashLigh_SetBit(void* Obj)
{
	((AQuietPlayerController*)Obj)->HaveFlashLigh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AQuietPlayerController_Statics::NewProp_HaveFlashLigh = { "HaveFlashLigh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AQuietPlayerController), &Z_Construct_UClass_AQuietPlayerController_Statics::NewProp_HaveFlashLigh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HaveFlashLigh_MetaData), NewProp_HaveFlashLigh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AQuietPlayerController_Statics::NewProp_BringLightItem = { "BringLightItem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietPlayerController, BringLightItem), Z_Construct_UScriptStruct_FInventory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BringLightItem_MetaData), NewProp_BringLightItem_MetaData) }; // 283610787
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AQuietPlayerController_Statics::NewProp_BringActiveItem = { "BringActiveItem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietPlayerController, BringActiveItem), Z_Construct_UScriptStruct_FInventory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BringActiveItem_MetaData), NewProp_BringActiveItem_MetaData) }; // 283610787
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AQuietPlayerController_Statics::NewProp_BringPassiveItem = { "BringPassiveItem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietPlayerController, BringPassiveItem), Z_Construct_UScriptStruct_FInventory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BringPassiveItem_MetaData), NewProp_BringPassiveItem_MetaData) }; // 283610787
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AQuietPlayerController_Statics::NewProp_LightItem = { "LightItem", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietPlayerController, LightItem), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameItemActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightItem_MetaData), NewProp_LightItem_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AQuietPlayerController_Statics::NewProp_Lamp = { "Lamp", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietPlayerController, Lamp), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameItemActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lamp_MetaData), NewProp_Lamp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuietPlayerController_Statics::NewProp_PauseEvent = { "PauseEvent", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietPlayerController, PauseEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseEvent_MetaData), NewProp_PauseEvent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuietPlayerController_Statics::NewProp_ResumeEvent = { "ResumeEvent", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietPlayerController, ResumeEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResumeEvent_MetaData), NewProp_ResumeEvent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AQuietPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietPlayerController_Statics::NewProp_SlotNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietPlayerController_Statics::NewProp_QuietHUD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietPlayerController_Statics::NewProp_HaveFlashLigh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietPlayerController_Statics::NewProp_BringLightItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietPlayerController_Statics::NewProp_BringActiveItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietPlayerController_Statics::NewProp_BringPassiveItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietPlayerController_Statics::NewProp_LightItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietPlayerController_Statics::NewProp_Lamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietPlayerController_Statics::NewProp_PauseEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietPlayerController_Statics::NewProp_ResumeEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AQuietPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AQuietPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Quiet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AQuietPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AQuietPlayerController_Statics::ClassParams = {
	&AQuietPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AQuietPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AQuietPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AQuietPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AQuietPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AQuietPlayerController()
{
	if (!Z_Registration_Info_UClass_AQuietPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AQuietPlayerController.OuterSingleton, Z_Construct_UClass_AQuietPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AQuietPlayerController.OuterSingleton;
}
template<> QUIET_API UClass* StaticClass<AQuietPlayerController>()
{
	return AQuietPlayerController::StaticClass();
}
AQuietPlayerController::AQuietPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AQuietPlayerController);
AQuietPlayerController::~AQuietPlayerController() {}
// End Class AQuietPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_PlayerController_QuietPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AQuietPlayerController, AQuietPlayerController::StaticClass, TEXT("AQuietPlayerController"), &Z_Registration_Info_UClass_AQuietPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AQuietPlayerController), 3418399695U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_PlayerController_QuietPlayerController_h_682873763(TEXT("/Script/Quiet"),
	Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_PlayerController_QuietPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_PlayerController_QuietPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
