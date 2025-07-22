// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Quiet/HUD/InventorySlotOverlay.h"
#include "Quiet/Structs/Structs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventorySlotOverlay() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
QUIET_API UClass* Z_Construct_UClass_AGameItemActor_NoRegister();
QUIET_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
QUIET_API UClass* Z_Construct_UClass_UInventorySlotOverlay();
QUIET_API UClass* Z_Construct_UClass_UInventorySlotOverlay_NoRegister();
QUIET_API UScriptStruct* Z_Construct_UScriptStruct_FItemdata();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Quiet();
// End Cross Module References

// Begin Class UInventorySlotOverlay Function UpData
struct InventorySlotOverlay_eventUpData_Parms
{
	TSubclassOf<AGameItemActor> PutInItem;
	int32 PutInAmount;
};
static FName NAME_UInventorySlotOverlay_UpData = FName(TEXT("UpData"));
void UInventorySlotOverlay::UpData(TSubclassOf<AGameItemActor> PutInItem, int32 PutInAmount)
{
	InventorySlotOverlay_eventUpData_Parms Parms;
	Parms.PutInItem=PutInItem;
	Parms.PutInAmount=PutInAmount;
	ProcessEvent(FindFunctionChecked(NAME_UInventorySlotOverlay_UpData),&Parms);
}
struct Z_Construct_UFunction_UInventorySlotOverlay_UpData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//void UpData(FName ItemName,UTexture2D* Icon, FText Introduce, int32 MaxAmount, int32 NowAmount);\n" },
#endif
		{ "ModuleRelativePath", "HUD/InventorySlotOverlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "void UpData(FName ItemName,UTexture2D* Icon, FText Introduce, int32 MaxAmount, int32 NowAmount);" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PutInItem;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PutInAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInventorySlotOverlay_UpData_Statics::NewProp_PutInItem = { "PutInItem", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventorySlotOverlay_eventUpData_Parms, PutInItem), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameItemActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventorySlotOverlay_UpData_Statics::NewProp_PutInAmount = { "PutInAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventorySlotOverlay_eventUpData_Parms, PutInAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventorySlotOverlay_UpData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventorySlotOverlay_UpData_Statics::NewProp_PutInItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventorySlotOverlay_UpData_Statics::NewProp_PutInAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventorySlotOverlay_UpData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventorySlotOverlay_UpData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventorySlotOverlay, nullptr, "UpData", nullptr, nullptr, Z_Construct_UFunction_UInventorySlotOverlay_UpData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventorySlotOverlay_UpData_Statics::PropPointers), sizeof(InventorySlotOverlay_eventUpData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventorySlotOverlay_UpData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventorySlotOverlay_UpData_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventorySlotOverlay_eventUpData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventorySlotOverlay_UpData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventorySlotOverlay_UpData_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UInventorySlotOverlay Function UpData

// Begin Class UInventorySlotOverlay
void UInventorySlotOverlay::StaticRegisterNativesUInventorySlotOverlay()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventorySlotOverlay);
UClass* Z_Construct_UClass_UInventorySlotOverlay_NoRegister()
{
	return UInventorySlotOverlay::StaticClass();
}
struct Z_Construct_UClass_UInventorySlotOverlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HUD/InventorySlotOverlay.h" },
		{ "ModuleRelativePath", "HUD/InventorySlotOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_btn_slot_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventorySlotOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/InventorySlotOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Num_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventorySlotOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/InventorySlotOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_img_slot_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventorySlotOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/InventorySlotOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "Category", "InventorySlotOverlay" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "HUD/InventorySlotOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Itemdata_MetaData[] = {
		{ "Category", "InventorySlotOverlay" },
		{ "ModuleRelativePath", "HUD/InventorySlotOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[] = {
		{ "Category", "InventorySlotOverlay" },
		{ "ModuleRelativePath", "HUD/InventorySlotOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "InventorySlotOverlay" },
		{ "ModuleRelativePath", "HUD/InventorySlotOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/InventorySlotOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkSlot_MetaData[] = {
		{ "Category", "InventorySlotOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/InventorySlotOverlay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_btn_slot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Num;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_img_slot;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Itemdata;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LinkSlot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventorySlotOverlay_UpData, "UpData" }, // 412977578
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventorySlotOverlay>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventorySlotOverlay_Statics::NewProp_btn_slot = { "btn_slot", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventorySlotOverlay, btn_slot), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_btn_slot_MetaData), NewProp_btn_slot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventorySlotOverlay_Statics::NewProp_Num = { "Num", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventorySlotOverlay, Num), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Num_MetaData), NewProp_Num_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventorySlotOverlay_Statics::NewProp_img_slot = { "img_slot", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventorySlotOverlay, img_slot), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_img_slot_MetaData), NewProp_img_slot_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventorySlotOverlay_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventorySlotOverlay, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventorySlotOverlay_Statics::NewProp_Itemdata = { "Itemdata", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventorySlotOverlay, Itemdata), Z_Construct_UScriptStruct_FItemdata, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Itemdata_MetaData), NewProp_Itemdata_MetaData) }; // 3358898643
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventorySlotOverlay_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventorySlotOverlay, Amount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amount_MetaData), NewProp_Amount_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInventorySlotOverlay_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventorySlotOverlay, Item), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameItemActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventorySlotOverlay_Statics::NewProp_InventoryComponent = { "InventoryComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventorySlotOverlay, InventoryComponent), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryComponent_MetaData), NewProp_InventoryComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventorySlotOverlay_Statics::NewProp_LinkSlot = { "LinkSlot", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventorySlotOverlay, LinkSlot), Z_Construct_UClass_UInventorySlotOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkSlot_MetaData), NewProp_LinkSlot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventorySlotOverlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySlotOverlay_Statics::NewProp_btn_slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySlotOverlay_Statics::NewProp_Num,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySlotOverlay_Statics::NewProp_img_slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySlotOverlay_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySlotOverlay_Statics::NewProp_Itemdata,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySlotOverlay_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySlotOverlay_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySlotOverlay_Statics::NewProp_InventoryComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySlotOverlay_Statics::NewProp_LinkSlot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlotOverlay_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventorySlotOverlay_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Quiet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlotOverlay_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventorySlotOverlay_Statics::ClassParams = {
	&UInventorySlotOverlay::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInventorySlotOverlay_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlotOverlay_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlotOverlay_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventorySlotOverlay_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventorySlotOverlay()
{
	if (!Z_Registration_Info_UClass_UInventorySlotOverlay.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventorySlotOverlay.OuterSingleton, Z_Construct_UClass_UInventorySlotOverlay_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventorySlotOverlay.OuterSingleton;
}
template<> QUIET_API UClass* StaticClass<UInventorySlotOverlay>()
{
	return UInventorySlotOverlay::StaticClass();
}
UInventorySlotOverlay::UInventorySlotOverlay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventorySlotOverlay);
UInventorySlotOverlay::~UInventorySlotOverlay() {}
// End Class UInventorySlotOverlay

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_HUD_InventorySlotOverlay_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventorySlotOverlay, UInventorySlotOverlay::StaticClass, TEXT("UInventorySlotOverlay"), &Z_Registration_Info_UClass_UInventorySlotOverlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventorySlotOverlay), 202249888U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_HUD_InventorySlotOverlay_h_3845495657(TEXT("/Script/Quiet"),
	Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_HUD_InventorySlotOverlay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_HUD_InventorySlotOverlay_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
