// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Quiet/HUD/InventoryGridOverlay.h"
#include "Quiet/Structs/Structs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryGridOverlay() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
QUIET_API UClass* Z_Construct_UClass_AGameItemActor_NoRegister();
QUIET_API UClass* Z_Construct_UClass_AQuietPlayerController_NoRegister();
QUIET_API UClass* Z_Construct_UClass_UInventoryGridOverlay();
QUIET_API UClass* Z_Construct_UClass_UInventoryGridOverlay_NoRegister();
QUIET_API UClass* Z_Construct_UClass_UInventorySlotOverlay_NoRegister();
QUIET_API UScriptStruct* Z_Construct_UScriptStruct_FInventory();
UMG_API UClass* Z_Construct_UClass_UUniformGridPanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Quiet();
// End Cross Module References

// Begin Class UInventoryGridOverlay Function UpedateSlotArray
struct InventoryGridOverlay_eventUpedateSlotArray_Parms
{
	int32 Index1;
	TSubclassOf<AGameItemActor> PutInItem;
	int32 PutInAmount;
};
static FName NAME_UInventoryGridOverlay_UpedateSlotArray = FName(TEXT("UpedateSlotArray"));
void UInventoryGridOverlay::UpedateSlotArray(int32 Index1, TSubclassOf<AGameItemActor> PutInItem, int32 PutInAmount)
{
	InventoryGridOverlay_eventUpedateSlotArray_Parms Parms;
	Parms.Index1=Index1;
	Parms.PutInItem=PutInItem;
	Parms.PutInAmount=PutInAmount;
	ProcessEvent(FindFunctionChecked(NAME_UInventoryGridOverlay_UpedateSlotArray),&Parms);
}
struct Z_Construct_UFunction_UInventoryGridOverlay_UpedateSlotArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD/InventoryGridOverlay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index1;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PutInItem;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PutInAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryGridOverlay_UpedateSlotArray_Statics::NewProp_Index1 = { "Index1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryGridOverlay_eventUpedateSlotArray_Parms, Index1), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInventoryGridOverlay_UpedateSlotArray_Statics::NewProp_PutInItem = { "PutInItem", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryGridOverlay_eventUpedateSlotArray_Parms, PutInItem), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameItemActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryGridOverlay_UpedateSlotArray_Statics::NewProp_PutInAmount = { "PutInAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryGridOverlay_eventUpedateSlotArray_Parms, PutInAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryGridOverlay_UpedateSlotArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryGridOverlay_UpedateSlotArray_Statics::NewProp_Index1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryGridOverlay_UpedateSlotArray_Statics::NewProp_PutInItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryGridOverlay_UpedateSlotArray_Statics::NewProp_PutInAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryGridOverlay_UpedateSlotArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryGridOverlay_UpedateSlotArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryGridOverlay, nullptr, "UpedateSlotArray", nullptr, nullptr, Z_Construct_UFunction_UInventoryGridOverlay_UpedateSlotArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryGridOverlay_UpedateSlotArray_Statics::PropPointers), sizeof(InventoryGridOverlay_eventUpedateSlotArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryGridOverlay_UpedateSlotArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryGridOverlay_UpedateSlotArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventoryGridOverlay_eventUpedateSlotArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryGridOverlay_UpedateSlotArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryGridOverlay_UpedateSlotArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryGridOverlay::execUpedateSlotArray)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index1);
	P_GET_OBJECT(UClass,Z_Param_PutInItem);
	P_GET_PROPERTY(FIntProperty,Z_Param_PutInAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpedateSlotArray_Implementation(Z_Param_Index1,Z_Param_PutInItem,Z_Param_PutInAmount);
	P_NATIVE_END;
}
// End Class UInventoryGridOverlay Function UpedateSlotArray

// Begin Class UInventoryGridOverlay
void UInventoryGridOverlay::StaticRegisterNativesUInventoryGridOverlay()
{
	UClass* Class = UInventoryGridOverlay::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpedateSlotArray", &UInventoryGridOverlay::execUpedateSlotArray },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryGridOverlay);
UClass* Z_Construct_UClass_UInventoryGridOverlay_NoRegister()
{
	return UInventoryGridOverlay::StaticClass();
}
struct Z_Construct_UClass_UInventoryGridOverlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HUD/InventoryGridOverlay.h" },
		{ "ModuleRelativePath", "HUD/InventoryGridOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Grid_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryGridOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/InventoryGridOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "Category", "InventoryGridOverlay" },
		{ "ModuleRelativePath", "HUD/InventoryGridOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotRowNum_MetaData[] = {
		{ "Category", "InventoryGridOverlay" },
		{ "ModuleRelativePath", "HUD/InventoryGridOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "InventoryGridOverlay" },
		{ "ModuleRelativePath", "HUD/InventoryGridOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[] = {
		{ "Category", "InventoryGridOverlay" },
		{ "ModuleRelativePath", "HUD/InventoryGridOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventorySlotOverlayClass_MetaData[] = {
		{ "Category", "InventorySlotOverlay" },
		{ "ModuleRelativePath", "HUD/InventoryGridOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventorySlotOverlay_MetaData[] = {
		{ "Category", "InventorySlotOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/InventoryGridOverlay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Grid;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotRowNum;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Controller;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InventorySlotOverlayClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventorySlotOverlay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryGridOverlay_UpedateSlotArray, "UpedateSlotArray" }, // 2947435697
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryGridOverlay>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryGridOverlay_Statics::NewProp_Grid = { "Grid", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryGridOverlay, Grid), Z_Construct_UClass_UUniformGridPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Grid_MetaData), NewProp_Grid_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventoryGridOverlay_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryGridOverlay, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventoryGridOverlay_Statics::NewProp_SlotRowNum = { "SlotRowNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryGridOverlay, SlotRowNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotRowNum_MetaData), NewProp_SlotRowNum_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryGridOverlay_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryGridOverlay, Item), Z_Construct_UScriptStruct_FInventory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 283610787
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInventoryGridOverlay_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryGridOverlay, Controller), Z_Construct_UClass_UClass, Z_Construct_UClass_AQuietPlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Controller_MetaData), NewProp_Controller_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInventoryGridOverlay_Statics::NewProp_InventorySlotOverlayClass = { "InventorySlotOverlayClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryGridOverlay, InventorySlotOverlayClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventorySlotOverlayClass_MetaData), NewProp_InventorySlotOverlayClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryGridOverlay_Statics::NewProp_InventorySlotOverlay = { "InventorySlotOverlay", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryGridOverlay, InventorySlotOverlay), Z_Construct_UClass_UInventorySlotOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventorySlotOverlay_MetaData), NewProp_InventorySlotOverlay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryGridOverlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryGridOverlay_Statics::NewProp_Grid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryGridOverlay_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryGridOverlay_Statics::NewProp_SlotRowNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryGridOverlay_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryGridOverlay_Statics::NewProp_Controller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryGridOverlay_Statics::NewProp_InventorySlotOverlayClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryGridOverlay_Statics::NewProp_InventorySlotOverlay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryGridOverlay_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventoryGridOverlay_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Quiet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryGridOverlay_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryGridOverlay_Statics::ClassParams = {
	&UInventoryGridOverlay::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInventoryGridOverlay_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryGridOverlay_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryGridOverlay_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryGridOverlay_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryGridOverlay()
{
	if (!Z_Registration_Info_UClass_UInventoryGridOverlay.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryGridOverlay.OuterSingleton, Z_Construct_UClass_UInventoryGridOverlay_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryGridOverlay.OuterSingleton;
}
template<> QUIET_API UClass* StaticClass<UInventoryGridOverlay>()
{
	return UInventoryGridOverlay::StaticClass();
}
UInventoryGridOverlay::UInventoryGridOverlay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryGridOverlay);
UInventoryGridOverlay::~UInventoryGridOverlay() {}
// End Class UInventoryGridOverlay

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_HUD_InventoryGridOverlay_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryGridOverlay, UInventoryGridOverlay::StaticClass, TEXT("UInventoryGridOverlay"), &Z_Registration_Info_UClass_UInventoryGridOverlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryGridOverlay), 3424301232U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_HUD_InventoryGridOverlay_h_3362958494(TEXT("/Script/Quiet"),
	Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_HUD_InventoryGridOverlay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_HUD_InventoryGridOverlay_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
