// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Quiet/HUD/ItemViewOverlay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemViewOverlay() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
QUIET_API UClass* Z_Construct_UClass_AGameItemActor_NoRegister();
QUIET_API UClass* Z_Construct_UClass_UItemViewOverlay();
QUIET_API UClass* Z_Construct_UClass_UItemViewOverlay_NoRegister();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Quiet();
// End Cross Module References

// Begin Class UItemViewOverlay Function SetPressEText
struct ItemViewOverlay_eventSetPressEText_Parms
{
	bool isReading;
};
static FName NAME_UItemViewOverlay_SetPressEText = FName(TEXT("SetPressEText"));
void UItemViewOverlay::SetPressEText(bool isReading)
{
	ItemViewOverlay_eventSetPressEText_Parms Parms;
	Parms.isReading=isReading ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_UItemViewOverlay_SetPressEText),&Parms);
}
struct Z_Construct_UFunction_UItemViewOverlay_SetPressEText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD/ItemViewOverlay.h" },
	};
#endif // WITH_METADATA
	static void NewProp_isReading_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isReading;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UItemViewOverlay_SetPressEText_Statics::NewProp_isReading_SetBit(void* Obj)
{
	((ItemViewOverlay_eventSetPressEText_Parms*)Obj)->isReading = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemViewOverlay_SetPressEText_Statics::NewProp_isReading = { "isReading", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemViewOverlay_eventSetPressEText_Parms), &Z_Construct_UFunction_UItemViewOverlay_SetPressEText_Statics::NewProp_isReading_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemViewOverlay_SetPressEText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemViewOverlay_SetPressEText_Statics::NewProp_isReading,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemViewOverlay_SetPressEText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemViewOverlay_SetPressEText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemViewOverlay, nullptr, "SetPressEText", nullptr, nullptr, Z_Construct_UFunction_UItemViewOverlay_SetPressEText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemViewOverlay_SetPressEText_Statics::PropPointers), sizeof(ItemViewOverlay_eventSetPressEText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemViewOverlay_SetPressEText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemViewOverlay_SetPressEText_Statics::Function_MetaDataParams) };
static_assert(sizeof(ItemViewOverlay_eventSetPressEText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemViewOverlay_SetPressEText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemViewOverlay_SetPressEText_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UItemViewOverlay Function SetPressEText

// Begin Class UItemViewOverlay
void UItemViewOverlay::StaticRegisterNativesUItemViewOverlay()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemViewOverlay);
UClass* Z_Construct_UClass_UItemViewOverlay_NoRegister()
{
	return UItemViewOverlay::StaticClass();
}
struct Z_Construct_UClass_UItemViewOverlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HUD/ItemViewOverlay.h" },
		{ "ModuleRelativePath", "HUD/ItemViewOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReadBorder_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ItemViewOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/ItemViewOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ItemViewOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/ItemViewOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntroduceInWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ItemViewOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/ItemViewOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntroducePanel_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ItemViewOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/ItemViewOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PressE_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ItemViewOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/ItemViewOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Introduce_MetaData[] = {
		{ "Category", "ItemViewOverlay" },
		{ "ModuleRelativePath", "HUD/ItemViewOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "ItemViewOverlay" },
		{ "ModuleRelativePath", "HUD/ItemViewOverlay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReadBorder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IntroduceInWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IntroducePanel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PressE;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Introduce;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemViewOverlay_SetPressEText, "SetPressEText" }, // 1347274302
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemViewOverlay>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemViewOverlay_Statics::NewProp_ReadBorder = { "ReadBorder", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemViewOverlay, ReadBorder), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReadBorder_MetaData), NewProp_ReadBorder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemViewOverlay_Statics::NewProp_ViewBox = { "ViewBox", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemViewOverlay, ViewBox), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewBox_MetaData), NewProp_ViewBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemViewOverlay_Statics::NewProp_IntroduceInWidget = { "IntroduceInWidget", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemViewOverlay, IntroduceInWidget), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntroduceInWidget_MetaData), NewProp_IntroduceInWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemViewOverlay_Statics::NewProp_IntroducePanel = { "IntroducePanel", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemViewOverlay, IntroducePanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntroducePanel_MetaData), NewProp_IntroducePanel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemViewOverlay_Statics::NewProp_PressE = { "PressE", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemViewOverlay, PressE), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PressE_MetaData), NewProp_PressE_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UItemViewOverlay_Statics::NewProp_Introduce = { "Introduce", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemViewOverlay, Introduce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Introduce_MetaData), NewProp_Introduce_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UItemViewOverlay_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemViewOverlay, Item), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameItemActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemViewOverlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemViewOverlay_Statics::NewProp_ReadBorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemViewOverlay_Statics::NewProp_ViewBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemViewOverlay_Statics::NewProp_IntroduceInWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemViewOverlay_Statics::NewProp_IntroducePanel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemViewOverlay_Statics::NewProp_PressE,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemViewOverlay_Statics::NewProp_Introduce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemViewOverlay_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemViewOverlay_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UItemViewOverlay_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Quiet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemViewOverlay_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemViewOverlay_Statics::ClassParams = {
	&UItemViewOverlay::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UItemViewOverlay_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UItemViewOverlay_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemViewOverlay_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemViewOverlay_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemViewOverlay()
{
	if (!Z_Registration_Info_UClass_UItemViewOverlay.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemViewOverlay.OuterSingleton, Z_Construct_UClass_UItemViewOverlay_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemViewOverlay.OuterSingleton;
}
template<> QUIET_API UClass* StaticClass<UItemViewOverlay>()
{
	return UItemViewOverlay::StaticClass();
}
UItemViewOverlay::UItemViewOverlay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemViewOverlay);
UItemViewOverlay::~UItemViewOverlay() {}
// End Class UItemViewOverlay

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_HUD_ItemViewOverlay_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemViewOverlay, UItemViewOverlay::StaticClass, TEXT("UItemViewOverlay"), &Z_Registration_Info_UClass_UItemViewOverlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemViewOverlay), 2638043643U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_HUD_ItemViewOverlay_h_3405918950(TEXT("/Script/Quiet"),
	Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_HUD_ItemViewOverlay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_HUD_ItemViewOverlay_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
