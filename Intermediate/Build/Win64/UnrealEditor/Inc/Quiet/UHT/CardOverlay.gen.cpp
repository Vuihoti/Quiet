// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Quiet/HUD/CardOverlay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCardOverlay() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
QUIET_API UClass* Z_Construct_UClass_UCardOverlay();
QUIET_API UClass* Z_Construct_UClass_UCardOverlay_NoRegister();
QUIET_API UClass* Z_Construct_UClass_UCardSlotOverlay_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUniformGridPanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
UPackage* Z_Construct_UPackage__Script_Quiet();
// End Cross Module References

// Begin Class UCardOverlay Function UpdateCarryCard
struct Z_Construct_UFunction_UCardOverlay_UpdateCarryCard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD/CardOverlay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCardOverlay_UpdateCarryCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCardOverlay, nullptr, "UpdateCarryCard", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCardOverlay_UpdateCarryCard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCardOverlay_UpdateCarryCard_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCardOverlay_UpdateCarryCard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCardOverlay_UpdateCarryCard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCardOverlay::execUpdateCarryCard)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateCarryCard();
	P_NATIVE_END;
}
// End Class UCardOverlay Function UpdateCarryCard

// Begin Class UCardOverlay Function UpdatePossessCard
struct Z_Construct_UFunction_UCardOverlay_UpdatePossessCard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD/CardOverlay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCardOverlay_UpdatePossessCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCardOverlay, nullptr, "UpdatePossessCard", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCardOverlay_UpdatePossessCard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCardOverlay_UpdatePossessCard_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCardOverlay_UpdatePossessCard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCardOverlay_UpdatePossessCard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCardOverlay::execUpdatePossessCard)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdatePossessCard();
	P_NATIVE_END;
}
// End Class UCardOverlay Function UpdatePossessCard

// Begin Class UCardOverlay
void UCardOverlay::StaticRegisterNativesUCardOverlay()
{
	UClass* Class = UCardOverlay::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateCarryCard", &UCardOverlay::execUpdateCarryCard },
		{ "UpdatePossessCard", &UCardOverlay::execUpdatePossessCard },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCardOverlay);
UClass* Z_Construct_UClass_UCardOverlay_NoRegister()
{
	return UCardOverlay::StaticClass();
}
struct Z_Construct_UClass_UCardOverlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HUD/CardOverlay.h" },
		{ "ModuleRelativePath", "HUD/CardOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Card1_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CardOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CardOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Card2_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CardOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CardOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Card3_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CardOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CardOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Card4_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CardOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CardOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Card5_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CardOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CardOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardSlotClass_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "HUD/CardOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowAnimation_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "HUD/CardOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Grid_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CardOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CardOverlay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Card1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Card2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Card3;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Card4;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Card5;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CardSlotClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShowAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Grid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCardOverlay_UpdateCarryCard, "UpdateCarryCard" }, // 1871970137
		{ &Z_Construct_UFunction_UCardOverlay_UpdatePossessCard, "UpdatePossessCard" }, // 258674658
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCardOverlay>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCardOverlay_Statics::NewProp_Card1 = { "Card1", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCardOverlay, Card1), Z_Construct_UClass_UCardSlotOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Card1_MetaData), NewProp_Card1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCardOverlay_Statics::NewProp_Card2 = { "Card2", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCardOverlay, Card2), Z_Construct_UClass_UCardSlotOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Card2_MetaData), NewProp_Card2_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCardOverlay_Statics::NewProp_Card3 = { "Card3", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCardOverlay, Card3), Z_Construct_UClass_UCardSlotOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Card3_MetaData), NewProp_Card3_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCardOverlay_Statics::NewProp_Card4 = { "Card4", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCardOverlay, Card4), Z_Construct_UClass_UCardSlotOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Card4_MetaData), NewProp_Card4_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCardOverlay_Statics::NewProp_Card5 = { "Card5", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCardOverlay, Card5), Z_Construct_UClass_UCardSlotOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Card5_MetaData), NewProp_Card5_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCardOverlay_Statics::NewProp_CardSlotClass = { "CardSlotClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCardOverlay, CardSlotClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCardSlotOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardSlotClass_MetaData), NewProp_CardSlotClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCardOverlay_Statics::NewProp_ShowAnimation = { "ShowAnimation", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCardOverlay, ShowAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowAnimation_MetaData), NewProp_ShowAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCardOverlay_Statics::NewProp_Grid = { "Grid", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCardOverlay, Grid), Z_Construct_UClass_UUniformGridPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Grid_MetaData), NewProp_Grid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCardOverlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardOverlay_Statics::NewProp_Card1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardOverlay_Statics::NewProp_Card2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardOverlay_Statics::NewProp_Card3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardOverlay_Statics::NewProp_Card4,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardOverlay_Statics::NewProp_Card5,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardOverlay_Statics::NewProp_CardSlotClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardOverlay_Statics::NewProp_ShowAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardOverlay_Statics::NewProp_Grid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCardOverlay_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCardOverlay_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Quiet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCardOverlay_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCardOverlay_Statics::ClassParams = {
	&UCardOverlay::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCardOverlay_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCardOverlay_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCardOverlay_Statics::Class_MetaDataParams), Z_Construct_UClass_UCardOverlay_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCardOverlay()
{
	if (!Z_Registration_Info_UClass_UCardOverlay.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCardOverlay.OuterSingleton, Z_Construct_UClass_UCardOverlay_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCardOverlay.OuterSingleton;
}
template<> QUIET_API UClass* StaticClass<UCardOverlay>()
{
	return UCardOverlay::StaticClass();
}
UCardOverlay::UCardOverlay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCardOverlay);
UCardOverlay::~UCardOverlay() {}
// End Class UCardOverlay

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_HUD_CardOverlay_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCardOverlay, UCardOverlay::StaticClass, TEXT("UCardOverlay"), &Z_Registration_Info_UClass_UCardOverlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCardOverlay), 3247666760U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_HUD_CardOverlay_h_31537163(TEXT("/Script/Quiet"),
	Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_HUD_CardOverlay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_HUD_CardOverlay_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
