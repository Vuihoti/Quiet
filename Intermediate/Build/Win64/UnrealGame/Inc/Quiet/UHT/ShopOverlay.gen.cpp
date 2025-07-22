// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Quiet/HUD/ShopOverlay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShopOverlay() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
QUIET_API UClass* Z_Construct_UClass_AQuietCharacter_NoRegister();
QUIET_API UClass* Z_Construct_UClass_UCommoditySlotOverlay_NoRegister();
QUIET_API UClass* Z_Construct_UClass_UShopOverlay();
QUIET_API UClass* Z_Construct_UClass_UShopOverlay_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUniformGridPanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_Quiet();
// End Cross Module References

// Begin Class UShopOverlay Function ShowBuyItem
struct Z_Construct_UFunction_UShopOverlay_ShowBuyItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD/ShopOverlay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShopOverlay_ShowBuyItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShopOverlay, nullptr, "ShowBuyItem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShopOverlay_ShowBuyItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShopOverlay_ShowBuyItem_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UShopOverlay_ShowBuyItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShopOverlay_ShowBuyItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShopOverlay::execShowBuyItem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowBuyItem();
	P_NATIVE_END;
}
// End Class UShopOverlay Function ShowBuyItem

// Begin Class UShopOverlay Function ShowSellItem
struct Z_Construct_UFunction_UShopOverlay_ShowSellItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD/ShopOverlay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShopOverlay_ShowSellItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShopOverlay, nullptr, "ShowSellItem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShopOverlay_ShowSellItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShopOverlay_ShowSellItem_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UShopOverlay_ShowSellItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShopOverlay_ShowSellItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShopOverlay::execShowSellItem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowSellItem();
	P_NATIVE_END;
}
// End Class UShopOverlay Function ShowSellItem

// Begin Class UShopOverlay
void UShopOverlay::StaticRegisterNativesUShopOverlay()
{
	UClass* Class = UShopOverlay::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ShowBuyItem", &UShopOverlay::execShowBuyItem },
		{ "ShowSellItem", &UShopOverlay::execShowSellItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UShopOverlay);
UClass* Z_Construct_UClass_UShopOverlay_NoRegister()
{
	return UShopOverlay::StaticClass();
}
struct Z_Construct_UClass_UShopOverlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HUD/ShopOverlay.h" },
		{ "ModuleRelativePath", "HUD/ShopOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BTN_Left_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ShopOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/ShopOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TB_TopTitle_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ShopOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/ShopOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BTN_Right_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ShopOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/ShopOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_G_Commodity_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ShopOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/ShopOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ShopOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/ShopOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TB_SelectName_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ShopOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/ShopOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TB_SelectType_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ShopOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/ShopOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TB_SelectMessage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ShopOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/ShopOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TB_SoulNum_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ShopOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/ShopOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_I_View_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ShopOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/ShopOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "HUD/ShopOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommoditySlotClass_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "HUD/ShopOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommoditySlotDataTable_MetaData[] = {
		{ "ModuleRelativePath", "HUD/ShopOverlay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BTN_Left;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TB_TopTitle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BTN_Right;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_G_Commodity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Message;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TB_SelectName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TB_SelectType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TB_SelectMessage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TB_SoulNum;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_I_View;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CommoditySlotClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CommoditySlotDataTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UShopOverlay_ShowBuyItem, "ShowBuyItem" }, // 1443330168
		{ &Z_Construct_UFunction_UShopOverlay_ShowSellItem, "ShowSellItem" }, // 3113268150
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShopOverlay>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShopOverlay_Statics::NewProp_BTN_Left = { "BTN_Left", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShopOverlay, BTN_Left), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BTN_Left_MetaData), NewProp_BTN_Left_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShopOverlay_Statics::NewProp_TB_TopTitle = { "TB_TopTitle", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShopOverlay, TB_TopTitle), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TB_TopTitle_MetaData), NewProp_TB_TopTitle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShopOverlay_Statics::NewProp_BTN_Right = { "BTN_Right", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShopOverlay, BTN_Right), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BTN_Right_MetaData), NewProp_BTN_Right_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShopOverlay_Statics::NewProp_G_Commodity = { "G_Commodity", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShopOverlay, G_Commodity), Z_Construct_UClass_UUniformGridPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_G_Commodity_MetaData), NewProp_G_Commodity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShopOverlay_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShopOverlay, Message), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShopOverlay_Statics::NewProp_TB_SelectName = { "TB_SelectName", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShopOverlay, TB_SelectName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TB_SelectName_MetaData), NewProp_TB_SelectName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShopOverlay_Statics::NewProp_TB_SelectType = { "TB_SelectType", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShopOverlay, TB_SelectType), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TB_SelectType_MetaData), NewProp_TB_SelectType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShopOverlay_Statics::NewProp_TB_SelectMessage = { "TB_SelectMessage", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShopOverlay, TB_SelectMessage), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TB_SelectMessage_MetaData), NewProp_TB_SelectMessage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShopOverlay_Statics::NewProp_TB_SoulNum = { "TB_SoulNum", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShopOverlay, TB_SoulNum), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TB_SoulNum_MetaData), NewProp_TB_SoulNum_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShopOverlay_Statics::NewProp_I_View = { "I_View", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShopOverlay, I_View), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_I_View_MetaData), NewProp_I_View_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShopOverlay_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShopOverlay, Character), Z_Construct_UClass_AQuietCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Character_MetaData), NewProp_Character_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UShopOverlay_Statics::NewProp_CommoditySlotClass = { "CommoditySlotClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShopOverlay, CommoditySlotClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommoditySlotOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommoditySlotClass_MetaData), NewProp_CommoditySlotClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShopOverlay_Statics::NewProp_CommoditySlotDataTable = { "CommoditySlotDataTable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShopOverlay, CommoditySlotDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommoditySlotDataTable_MetaData), NewProp_CommoditySlotDataTable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShopOverlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShopOverlay_Statics::NewProp_BTN_Left,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShopOverlay_Statics::NewProp_TB_TopTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShopOverlay_Statics::NewProp_BTN_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShopOverlay_Statics::NewProp_G_Commodity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShopOverlay_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShopOverlay_Statics::NewProp_TB_SelectName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShopOverlay_Statics::NewProp_TB_SelectType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShopOverlay_Statics::NewProp_TB_SelectMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShopOverlay_Statics::NewProp_TB_SoulNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShopOverlay_Statics::NewProp_I_View,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShopOverlay_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShopOverlay_Statics::NewProp_CommoditySlotClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShopOverlay_Statics::NewProp_CommoditySlotDataTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShopOverlay_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UShopOverlay_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Quiet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShopOverlay_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UShopOverlay_Statics::ClassParams = {
	&UShopOverlay::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UShopOverlay_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UShopOverlay_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UShopOverlay_Statics::Class_MetaDataParams), Z_Construct_UClass_UShopOverlay_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UShopOverlay()
{
	if (!Z_Registration_Info_UClass_UShopOverlay.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShopOverlay.OuterSingleton, Z_Construct_UClass_UShopOverlay_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UShopOverlay.OuterSingleton;
}
template<> QUIET_API UClass* StaticClass<UShopOverlay>()
{
	return UShopOverlay::StaticClass();
}
UShopOverlay::UShopOverlay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UShopOverlay);
UShopOverlay::~UShopOverlay() {}
// End Class UShopOverlay

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_HUD_ShopOverlay_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UShopOverlay, UShopOverlay::StaticClass, TEXT("UShopOverlay"), &Z_Registration_Info_UClass_UShopOverlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShopOverlay), 2105094134U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_HUD_ShopOverlay_h_801983099(TEXT("/Script/Quiet"),
	Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_HUD_ShopOverlay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_HUD_ShopOverlay_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
