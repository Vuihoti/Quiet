// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Quiet/HUD/BackpackOverlay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBackpackOverlay() {}

// Begin Cross Module References
QUIET_API UClass* Z_Construct_UClass_UBackpackOverlay();
QUIET_API UClass* Z_Construct_UClass_UBackpackOverlay_NoRegister();
QUIET_API UClass* Z_Construct_UClass_UInventoryGridOverlay_NoRegister();
QUIET_API UClass* Z_Construct_UClass_UInventorySlotOverlay_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Quiet();
// End Cross Module References

// Begin Class UBackpackOverlay
void UBackpackOverlay::StaticRegisterNativesUBackpackOverlay()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBackpackOverlay);
UClass* Z_Construct_UClass_UBackpackOverlay_NoRegister()
{
	return UBackpackOverlay::StaticClass();
}
struct Z_Construct_UClass_UBackpackOverlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HUD/BackpackOverlay.h" },
		{ "ModuleRelativePath", "HUD/BackpackOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BP_InventoryGridOverlay_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "BackpackOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/BackpackOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightItemSlot1_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "BackpackOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/BackpackOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightItemSlot2_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "BackpackOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/BackpackOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PassiveItemSlot_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "BackpackOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/BackpackOverlay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BP_InventoryGridOverlay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LightItemSlot1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LightItemSlot2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PassiveItemSlot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBackpackOverlay>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackpackOverlay_Statics::NewProp_BP_InventoryGridOverlay = { "BP_InventoryGridOverlay", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackOverlay, BP_InventoryGridOverlay), Z_Construct_UClass_UInventoryGridOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BP_InventoryGridOverlay_MetaData), NewProp_BP_InventoryGridOverlay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackpackOverlay_Statics::NewProp_LightItemSlot1 = { "LightItemSlot1", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackOverlay, LightItemSlot1), Z_Construct_UClass_UInventorySlotOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightItemSlot1_MetaData), NewProp_LightItemSlot1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackpackOverlay_Statics::NewProp_LightItemSlot2 = { "LightItemSlot2", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackOverlay, LightItemSlot2), Z_Construct_UClass_UInventorySlotOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightItemSlot2_MetaData), NewProp_LightItemSlot2_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackpackOverlay_Statics::NewProp_PassiveItemSlot = { "PassiveItemSlot", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackOverlay, PassiveItemSlot), Z_Construct_UClass_UInventorySlotOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PassiveItemSlot_MetaData), NewProp_PassiveItemSlot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBackpackOverlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackOverlay_Statics::NewProp_BP_InventoryGridOverlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackOverlay_Statics::NewProp_LightItemSlot1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackOverlay_Statics::NewProp_LightItemSlot2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackOverlay_Statics::NewProp_PassiveItemSlot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackOverlay_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBackpackOverlay_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Quiet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackOverlay_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBackpackOverlay_Statics::ClassParams = {
	&UBackpackOverlay::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBackpackOverlay_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackOverlay_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackOverlay_Statics::Class_MetaDataParams), Z_Construct_UClass_UBackpackOverlay_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBackpackOverlay()
{
	if (!Z_Registration_Info_UClass_UBackpackOverlay.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBackpackOverlay.OuterSingleton, Z_Construct_UClass_UBackpackOverlay_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBackpackOverlay.OuterSingleton;
}
template<> QUIET_API UClass* StaticClass<UBackpackOverlay>()
{
	return UBackpackOverlay::StaticClass();
}
UBackpackOverlay::UBackpackOverlay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBackpackOverlay);
UBackpackOverlay::~UBackpackOverlay() {}
// End Class UBackpackOverlay

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_HUD_BackpackOverlay_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBackpackOverlay, UBackpackOverlay::StaticClass, TEXT("UBackpackOverlay"), &Z_Registration_Info_UClass_UBackpackOverlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBackpackOverlay), 1667999425U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_HUD_BackpackOverlay_h_2673302544(TEXT("/Script/Quiet"),
	Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_HUD_BackpackOverlay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_HUD_BackpackOverlay_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
