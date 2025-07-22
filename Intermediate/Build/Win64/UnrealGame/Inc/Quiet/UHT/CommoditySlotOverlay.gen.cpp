// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Quiet/HUD/CommoditySlotOverlay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommoditySlotOverlay() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
QUIET_API UClass* Z_Construct_UClass_AQuietCharacter_NoRegister();
QUIET_API UClass* Z_Construct_UClass_UCommoditySlotOverlay();
QUIET_API UClass* Z_Construct_UClass_UCommoditySlotOverlay_NoRegister();
QUIET_API UClass* Z_Construct_UClass_UShopOverlay_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Quiet();
// End Cross Module References

// Begin Class UCommoditySlotOverlay Function OnButtonClick
struct Z_Construct_UFunction_UCommoditySlotOverlay_OnButtonClick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD/CommoditySlotOverlay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommoditySlotOverlay_OnButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommoditySlotOverlay, nullptr, "OnButtonClick", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommoditySlotOverlay_OnButtonClick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommoditySlotOverlay_OnButtonClick_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCommoditySlotOverlay_OnButtonClick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommoditySlotOverlay_OnButtonClick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCommoditySlotOverlay::execOnButtonClick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnButtonClick();
	P_NATIVE_END;
}
// End Class UCommoditySlotOverlay Function OnButtonClick

// Begin Class UCommoditySlotOverlay Function OnButtonHover
struct Z_Construct_UFunction_UCommoditySlotOverlay_OnButtonHover_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD/CommoditySlotOverlay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommoditySlotOverlay_OnButtonHover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommoditySlotOverlay, nullptr, "OnButtonHover", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommoditySlotOverlay_OnButtonHover_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommoditySlotOverlay_OnButtonHover_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCommoditySlotOverlay_OnButtonHover()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommoditySlotOverlay_OnButtonHover_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCommoditySlotOverlay::execOnButtonHover)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnButtonHover();
	P_NATIVE_END;
}
// End Class UCommoditySlotOverlay Function OnButtonHover

// Begin Class UCommoditySlotOverlay Function OnButtonUnHover
struct Z_Construct_UFunction_UCommoditySlotOverlay_OnButtonUnHover_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD/CommoditySlotOverlay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommoditySlotOverlay_OnButtonUnHover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommoditySlotOverlay, nullptr, "OnButtonUnHover", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommoditySlotOverlay_OnButtonUnHover_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommoditySlotOverlay_OnButtonUnHover_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCommoditySlotOverlay_OnButtonUnHover()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommoditySlotOverlay_OnButtonUnHover_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCommoditySlotOverlay::execOnButtonUnHover)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnButtonUnHover();
	P_NATIVE_END;
}
// End Class UCommoditySlotOverlay Function OnButtonUnHover

// Begin Class UCommoditySlotOverlay
void UCommoditySlotOverlay::StaticRegisterNativesUCommoditySlotOverlay()
{
	UClass* Class = UCommoditySlotOverlay::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnButtonClick", &UCommoditySlotOverlay::execOnButtonClick },
		{ "OnButtonHover", &UCommoditySlotOverlay::execOnButtonHover },
		{ "OnButtonUnHover", &UCommoditySlotOverlay::execOnButtonUnHover },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommoditySlotOverlay);
UClass* Z_Construct_UClass_UCommoditySlotOverlay_NoRegister()
{
	return UCommoditySlotOverlay::StaticClass();
}
struct Z_Construct_UClass_UCommoditySlotOverlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HUD/CommoditySlotOverlay.h" },
		{ "ModuleRelativePath", "HUD/CommoditySlotOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BTN_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CommoditySlotOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CommoditySlotOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TB_Name_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CommoditySlotOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CommoditySlotOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TB_Price_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CommoditySlotOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CommoditySlotOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TB_Carry_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CommoditySlotOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CommoditySlotOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommoditySlotDataTable_MetaData[] = {
		{ "ModuleRelativePath", "HUD/CommoditySlotOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "HUD/CommoditySlotOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShopUMG_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CommoditySlotOverlay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BTN;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TB_Name;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TB_Price;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TB_Carry;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CommoditySlotDataTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShopUMG;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommoditySlotOverlay_OnButtonClick, "OnButtonClick" }, // 1110573923
		{ &Z_Construct_UFunction_UCommoditySlotOverlay_OnButtonHover, "OnButtonHover" }, // 3491896728
		{ &Z_Construct_UFunction_UCommoditySlotOverlay_OnButtonUnHover, "OnButtonUnHover" }, // 4115382233
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommoditySlotOverlay>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommoditySlotOverlay_Statics::NewProp_BTN = { "BTN", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommoditySlotOverlay, BTN), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BTN_MetaData), NewProp_BTN_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommoditySlotOverlay_Statics::NewProp_TB_Name = { "TB_Name", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommoditySlotOverlay, TB_Name), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TB_Name_MetaData), NewProp_TB_Name_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommoditySlotOverlay_Statics::NewProp_TB_Price = { "TB_Price", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommoditySlotOverlay, TB_Price), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TB_Price_MetaData), NewProp_TB_Price_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommoditySlotOverlay_Statics::NewProp_TB_Carry = { "TB_Carry", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommoditySlotOverlay, TB_Carry), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TB_Carry_MetaData), NewProp_TB_Carry_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommoditySlotOverlay_Statics::NewProp_CommoditySlotDataTable = { "CommoditySlotDataTable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommoditySlotOverlay, CommoditySlotDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommoditySlotDataTable_MetaData), NewProp_CommoditySlotDataTable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommoditySlotOverlay_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommoditySlotOverlay, Character), Z_Construct_UClass_AQuietCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Character_MetaData), NewProp_Character_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommoditySlotOverlay_Statics::NewProp_ShopUMG = { "ShopUMG", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommoditySlotOverlay, ShopUMG), Z_Construct_UClass_UShopOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShopUMG_MetaData), NewProp_ShopUMG_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommoditySlotOverlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommoditySlotOverlay_Statics::NewProp_BTN,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommoditySlotOverlay_Statics::NewProp_TB_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommoditySlotOverlay_Statics::NewProp_TB_Price,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommoditySlotOverlay_Statics::NewProp_TB_Carry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommoditySlotOverlay_Statics::NewProp_CommoditySlotDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommoditySlotOverlay_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommoditySlotOverlay_Statics::NewProp_ShopUMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCommoditySlotOverlay_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCommoditySlotOverlay_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Quiet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCommoditySlotOverlay_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommoditySlotOverlay_Statics::ClassParams = {
	&UCommoditySlotOverlay::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCommoditySlotOverlay_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCommoditySlotOverlay_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCommoditySlotOverlay_Statics::Class_MetaDataParams), Z_Construct_UClass_UCommoditySlotOverlay_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCommoditySlotOverlay()
{
	if (!Z_Registration_Info_UClass_UCommoditySlotOverlay.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommoditySlotOverlay.OuterSingleton, Z_Construct_UClass_UCommoditySlotOverlay_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCommoditySlotOverlay.OuterSingleton;
}
template<> QUIET_API UClass* StaticClass<UCommoditySlotOverlay>()
{
	return UCommoditySlotOverlay::StaticClass();
}
UCommoditySlotOverlay::UCommoditySlotOverlay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCommoditySlotOverlay);
UCommoditySlotOverlay::~UCommoditySlotOverlay() {}
// End Class UCommoditySlotOverlay

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_HUD_CommoditySlotOverlay_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCommoditySlotOverlay, UCommoditySlotOverlay::StaticClass, TEXT("UCommoditySlotOverlay"), &Z_Registration_Info_UClass_UCommoditySlotOverlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommoditySlotOverlay), 73429257U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_HUD_CommoditySlotOverlay_h_293291692(TEXT("/Script/Quiet"),
	Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_HUD_CommoditySlotOverlay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_HUD_CommoditySlotOverlay_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
