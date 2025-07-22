// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Quiet/HUD/CardSlotOverlay.h"
#include "Quiet/Structs/Structs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCardSlotOverlay() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
QUIET_API UClass* Z_Construct_UClass_UCardSlotOverlay();
QUIET_API UClass* Z_Construct_UClass_UCardSlotOverlay_NoRegister();
QUIET_API UScriptStruct* Z_Construct_UScriptStruct_FCardData();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Quiet();
// End Cross Module References

// Begin Class UCardSlotOverlay Function EquipCurrentCard
struct Z_Construct_UFunction_UCardSlotOverlay_EquipCurrentCard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD/CardSlotOverlay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCardSlotOverlay_EquipCurrentCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCardSlotOverlay, nullptr, "EquipCurrentCard", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCardSlotOverlay_EquipCurrentCard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCardSlotOverlay_EquipCurrentCard_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCardSlotOverlay_EquipCurrentCard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCardSlotOverlay_EquipCurrentCard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCardSlotOverlay::execEquipCurrentCard)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EquipCurrentCard();
	P_NATIVE_END;
}
// End Class UCardSlotOverlay Function EquipCurrentCard

// Begin Class UCardSlotOverlay Function OnCardClicked
struct Z_Construct_UFunction_UCardSlotOverlay_OnCardClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD/CardSlotOverlay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCardSlotOverlay_OnCardClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCardSlotOverlay, nullptr, "OnCardClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCardSlotOverlay_OnCardClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCardSlotOverlay_OnCardClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCardSlotOverlay_OnCardClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCardSlotOverlay_OnCardClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCardSlotOverlay::execOnCardClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCardClicked();
	P_NATIVE_END;
}
// End Class UCardSlotOverlay Function OnCardClicked

// Begin Class UCardSlotOverlay Function OnCardHover
struct Z_Construct_UFunction_UCardSlotOverlay_OnCardHover_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD/CardSlotOverlay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCardSlotOverlay_OnCardHover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCardSlotOverlay, nullptr, "OnCardHover", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCardSlotOverlay_OnCardHover_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCardSlotOverlay_OnCardHover_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCardSlotOverlay_OnCardHover()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCardSlotOverlay_OnCardHover_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCardSlotOverlay::execOnCardHover)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCardHover();
	P_NATIVE_END;
}
// End Class UCardSlotOverlay Function OnCardHover

// Begin Class UCardSlotOverlay Function OnCardUnHover
struct Z_Construct_UFunction_UCardSlotOverlay_OnCardUnHover_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD/CardSlotOverlay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCardSlotOverlay_OnCardUnHover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCardSlotOverlay, nullptr, "OnCardUnHover", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCardSlotOverlay_OnCardUnHover_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCardSlotOverlay_OnCardUnHover_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCardSlotOverlay_OnCardUnHover()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCardSlotOverlay_OnCardUnHover_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCardSlotOverlay::execOnCardUnHover)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCardUnHover();
	P_NATIVE_END;
}
// End Class UCardSlotOverlay Function OnCardUnHover

// Begin Class UCardSlotOverlay Function UnloadCard
struct Z_Construct_UFunction_UCardSlotOverlay_UnloadCard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD/CardSlotOverlay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCardSlotOverlay_UnloadCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCardSlotOverlay, nullptr, "UnloadCard", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCardSlotOverlay_UnloadCard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCardSlotOverlay_UnloadCard_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCardSlotOverlay_UnloadCard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCardSlotOverlay_UnloadCard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCardSlotOverlay::execUnloadCard)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnloadCard();
	P_NATIVE_END;
}
// End Class UCardSlotOverlay Function UnloadCard

// Begin Class UCardSlotOverlay Function UpdateCard
struct Z_Construct_UFunction_UCardSlotOverlay_UpdateCard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD/CardSlotOverlay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCardSlotOverlay_UpdateCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCardSlotOverlay, nullptr, "UpdateCard", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCardSlotOverlay_UpdateCard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCardSlotOverlay_UpdateCard_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCardSlotOverlay_UpdateCard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCardSlotOverlay_UpdateCard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCardSlotOverlay::execUpdateCard)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateCard();
	P_NATIVE_END;
}
// End Class UCardSlotOverlay Function UpdateCard

// Begin Class UCardSlotOverlay
void UCardSlotOverlay::StaticRegisterNativesUCardSlotOverlay()
{
	UClass* Class = UCardSlotOverlay::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EquipCurrentCard", &UCardSlotOverlay::execEquipCurrentCard },
		{ "OnCardClicked", &UCardSlotOverlay::execOnCardClicked },
		{ "OnCardHover", &UCardSlotOverlay::execOnCardHover },
		{ "OnCardUnHover", &UCardSlotOverlay::execOnCardUnHover },
		{ "UnloadCard", &UCardSlotOverlay::execUnloadCard },
		{ "UpdateCard", &UCardSlotOverlay::execUpdateCard },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCardSlotOverlay);
UClass* Z_Construct_UClass_UCardSlotOverlay_NoRegister()
{
	return UCardSlotOverlay::StaticClass();
}
struct Z_Construct_UClass_UCardSlotOverlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HUD/CardSlotOverlay.h" },
		{ "ModuleRelativePath", "HUD/CardSlotOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_btn_Slot_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CardSlotOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CardSlotOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardName_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CardSlotOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CardSlotOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardMessage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CardSlotOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CardSlotOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_img_slot_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CardSlotOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CardSlotOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cover_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CardSlotOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CardSlotOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frame_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CardSlotOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CardSlotOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowName_MetaData[] = {
		{ "Category", "CardData" },
		{ "ModuleRelativePath", "HUD/CardSlotOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "CardData" },
		{ "ModuleRelativePath", "HUD/CardSlotOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_S_Hover_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "HUD/CardSlotOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_S_Pick_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "HUD/CardSlotOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUse_MetaData[] = {
		{ "Category", "CardSlotOverlay" },
		{ "ModuleRelativePath", "HUD/CardSlotOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShow_MetaData[] = {
		{ "Category", "CardSlotOverlay" },
		{ "ModuleRelativePath", "HUD/CardSlotOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAble_MetaData[] = {
		{ "Category", "CardSlotOverlay" },
		{ "ModuleRelativePath", "HUD/CardSlotOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardDataTable_MetaData[] = {
		{ "ModuleRelativePath", "HUD/CardSlotOverlay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_btn_Slot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CardName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CardMessage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_img_slot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Cover;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Frame;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RowName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_S_Hover;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_S_Pick;
	static void NewProp_bUse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUse;
	static void NewProp_bShow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShow;
	static void NewProp_bAble_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAble;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CardDataTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCardSlotOverlay_EquipCurrentCard, "EquipCurrentCard" }, // 2511933667
		{ &Z_Construct_UFunction_UCardSlotOverlay_OnCardClicked, "OnCardClicked" }, // 1014398616
		{ &Z_Construct_UFunction_UCardSlotOverlay_OnCardHover, "OnCardHover" }, // 2389887668
		{ &Z_Construct_UFunction_UCardSlotOverlay_OnCardUnHover, "OnCardUnHover" }, // 2949973542
		{ &Z_Construct_UFunction_UCardSlotOverlay_UnloadCard, "UnloadCard" }, // 1685365992
		{ &Z_Construct_UFunction_UCardSlotOverlay_UpdateCard, "UpdateCard" }, // 153270743
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCardSlotOverlay>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCardSlotOverlay_Statics::NewProp_btn_Slot = { "btn_Slot", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCardSlotOverlay, btn_Slot), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_btn_Slot_MetaData), NewProp_btn_Slot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCardSlotOverlay_Statics::NewProp_CardName = { "CardName", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCardSlotOverlay, CardName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardName_MetaData), NewProp_CardName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCardSlotOverlay_Statics::NewProp_CardMessage = { "CardMessage", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCardSlotOverlay, CardMessage), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardMessage_MetaData), NewProp_CardMessage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCardSlotOverlay_Statics::NewProp_img_slot = { "img_slot", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCardSlotOverlay, img_slot), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_img_slot_MetaData), NewProp_img_slot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCardSlotOverlay_Statics::NewProp_Cover = { "Cover", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCardSlotOverlay, Cover), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cover_MetaData), NewProp_Cover_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCardSlotOverlay_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCardSlotOverlay, Frame), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frame_MetaData), NewProp_Frame_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCardSlotOverlay_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCardSlotOverlay, RowName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowName_MetaData), NewProp_RowName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCardSlotOverlay_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCardSlotOverlay, Data), Z_Construct_UScriptStruct_FCardData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2892857109
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCardSlotOverlay_Statics::NewProp_S_Hover = { "S_Hover", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCardSlotOverlay, S_Hover), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_S_Hover_MetaData), NewProp_S_Hover_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCardSlotOverlay_Statics::NewProp_S_Pick = { "S_Pick", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCardSlotOverlay, S_Pick), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_S_Pick_MetaData), NewProp_S_Pick_MetaData) };
void Z_Construct_UClass_UCardSlotOverlay_Statics::NewProp_bUse_SetBit(void* Obj)
{
	((UCardSlotOverlay*)Obj)->bUse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCardSlotOverlay_Statics::NewProp_bUse = { "bUse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCardSlotOverlay), &Z_Construct_UClass_UCardSlotOverlay_Statics::NewProp_bUse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUse_MetaData), NewProp_bUse_MetaData) };
void Z_Construct_UClass_UCardSlotOverlay_Statics::NewProp_bShow_SetBit(void* Obj)
{
	((UCardSlotOverlay*)Obj)->bShow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCardSlotOverlay_Statics::NewProp_bShow = { "bShow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCardSlotOverlay), &Z_Construct_UClass_UCardSlotOverlay_Statics::NewProp_bShow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShow_MetaData), NewProp_bShow_MetaData) };
void Z_Construct_UClass_UCardSlotOverlay_Statics::NewProp_bAble_SetBit(void* Obj)
{
	((UCardSlotOverlay*)Obj)->bAble = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCardSlotOverlay_Statics::NewProp_bAble = { "bAble", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCardSlotOverlay), &Z_Construct_UClass_UCardSlotOverlay_Statics::NewProp_bAble_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAble_MetaData), NewProp_bAble_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCardSlotOverlay_Statics::NewProp_CardDataTable = { "CardDataTable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCardSlotOverlay, CardDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardDataTable_MetaData), NewProp_CardDataTable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCardSlotOverlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardSlotOverlay_Statics::NewProp_btn_Slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardSlotOverlay_Statics::NewProp_CardName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardSlotOverlay_Statics::NewProp_CardMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardSlotOverlay_Statics::NewProp_img_slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardSlotOverlay_Statics::NewProp_Cover,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardSlotOverlay_Statics::NewProp_Frame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardSlotOverlay_Statics::NewProp_RowName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardSlotOverlay_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardSlotOverlay_Statics::NewProp_S_Hover,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardSlotOverlay_Statics::NewProp_S_Pick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardSlotOverlay_Statics::NewProp_bUse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardSlotOverlay_Statics::NewProp_bShow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardSlotOverlay_Statics::NewProp_bAble,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardSlotOverlay_Statics::NewProp_CardDataTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCardSlotOverlay_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCardSlotOverlay_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Quiet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCardSlotOverlay_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCardSlotOverlay_Statics::ClassParams = {
	&UCardSlotOverlay::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCardSlotOverlay_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCardSlotOverlay_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCardSlotOverlay_Statics::Class_MetaDataParams), Z_Construct_UClass_UCardSlotOverlay_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCardSlotOverlay()
{
	if (!Z_Registration_Info_UClass_UCardSlotOverlay.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCardSlotOverlay.OuterSingleton, Z_Construct_UClass_UCardSlotOverlay_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCardSlotOverlay.OuterSingleton;
}
template<> QUIET_API UClass* StaticClass<UCardSlotOverlay>()
{
	return UCardSlotOverlay::StaticClass();
}
UCardSlotOverlay::UCardSlotOverlay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCardSlotOverlay);
UCardSlotOverlay::~UCardSlotOverlay() {}
// End Class UCardSlotOverlay

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_HUD_CardSlotOverlay_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCardSlotOverlay, UCardSlotOverlay::StaticClass, TEXT("UCardSlotOverlay"), &Z_Registration_Info_UClass_UCardSlotOverlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCardSlotOverlay), 1509419572U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_HUD_CardSlotOverlay_h_1432224589(TEXT("/Script/Quiet"),
	Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_HUD_CardSlotOverlay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_HUD_CardSlotOverlay_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
