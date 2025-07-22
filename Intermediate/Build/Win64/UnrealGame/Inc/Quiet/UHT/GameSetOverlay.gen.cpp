// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Quiet/HUD/GameSetOverlay.h"
#include "Quiet/Structs/Structs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameSetOverlay() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameUserSettings_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundMix_NoRegister();
QUIET_API UClass* Z_Construct_UClass_AGamePostProcessVolume_NoRegister();
QUIET_API UClass* Z_Construct_UClass_ALobbyCharacter_NoRegister();
QUIET_API UClass* Z_Construct_UClass_AQuietCharacter_NoRegister();
QUIET_API UClass* Z_Construct_UClass_AQuietPlayerController_NoRegister();
QUIET_API UClass* Z_Construct_UClass_UGameSetOverlay();
QUIET_API UClass* Z_Construct_UClass_UGameSetOverlay_NoRegister();
QUIET_API UClass* Z_Construct_UClass_ULobbyMenuOverlay_NoRegister();
QUIET_API UClass* Z_Construct_UClass_UQuietGameInstance_NoRegister();
QUIET_API UScriptStruct* Z_Construct_UScriptStruct_FGameSets();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UCheckBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UComboBoxString_NoRegister();
UMG_API UClass* Z_Construct_UClass_UEditableText_NoRegister();
UMG_API UClass* Z_Construct_UClass_USlider_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Quiet();
// End Cross Module References

// Begin Class UGameSetOverlay Function ApplySet
struct Z_Construct_UFunction_UGameSetOverlay_ApplySet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSetOverlay_ApplySet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSetOverlay, nullptr, "ApplySet", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSetOverlay_ApplySet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameSetOverlay_ApplySet_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGameSetOverlay_ApplySet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSetOverlay_ApplySet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameSetOverlay::execApplySet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplySet();
	P_NATIVE_END;
}
// End Class UGameSetOverlay Function ApplySet

// Begin Class UGameSetOverlay Function ApplySettingInUI
struct Z_Construct_UFunction_UGameSetOverlay_ApplySettingInUI_Statics
{
	struct GameSetOverlay_eventApplySettingInUI_Parms
	{
		FGameSets Setting;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Setting;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameSetOverlay_ApplySettingInUI_Statics::NewProp_Setting = { "Setting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameSetOverlay_eventApplySettingInUI_Parms, Setting), Z_Construct_UScriptStruct_FGameSets, METADATA_PARAMS(0, nullptr) }; // 1722388133
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSetOverlay_ApplySettingInUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSetOverlay_ApplySettingInUI_Statics::NewProp_Setting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSetOverlay_ApplySettingInUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSetOverlay_ApplySettingInUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSetOverlay, nullptr, "ApplySettingInUI", nullptr, nullptr, Z_Construct_UFunction_UGameSetOverlay_ApplySettingInUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSetOverlay_ApplySettingInUI_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameSetOverlay_ApplySettingInUI_Statics::GameSetOverlay_eventApplySettingInUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSetOverlay_ApplySettingInUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameSetOverlay_ApplySettingInUI_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameSetOverlay_ApplySettingInUI_Statics::GameSetOverlay_eventApplySettingInUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameSetOverlay_ApplySettingInUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSetOverlay_ApplySettingInUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameSetOverlay::execApplySettingInUI)
{
	P_GET_STRUCT(FGameSets,Z_Param_Setting);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplySettingInUI(Z_Param_Setting);
	P_NATIVE_END;
}
// End Class UGameSetOverlay Function ApplySettingInUI

// Begin Class UGameSetOverlay Function SetSettingDefault
struct Z_Construct_UFunction_UGameSetOverlay_SetSettingDefault_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSetOverlay_SetSettingDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSetOverlay, nullptr, "SetSettingDefault", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSetOverlay_SetSettingDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameSetOverlay_SetSettingDefault_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGameSetOverlay_SetSettingDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSetOverlay_SetSettingDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameSetOverlay::execSetSettingDefault)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSettingDefault();
	P_NATIVE_END;
}
// End Class UGameSetOverlay Function SetSettingDefault

// Begin Class UGameSetOverlay Function SetUIDefault
struct Z_Construct_UFunction_UGameSetOverlay_SetUIDefault_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSetOverlay_SetUIDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSetOverlay, nullptr, "SetUIDefault", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSetOverlay_SetUIDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameSetOverlay_SetUIDefault_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGameSetOverlay_SetUIDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSetOverlay_SetUIDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameSetOverlay::execSetUIDefault)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUIDefault();
	P_NATIVE_END;
}
// End Class UGameSetOverlay Function SetUIDefault

// Begin Class UGameSetOverlay Function ShowFPSChange
struct Z_Construct_UFunction_UGameSetOverlay_ShowFPSChange_Statics
{
	struct GameSetOverlay_eventShowFPSChange_Parms
	{
		bool IsCheck;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsCheck_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsCheck;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGameSetOverlay_ShowFPSChange_Statics::NewProp_IsCheck_SetBit(void* Obj)
{
	((GameSetOverlay_eventShowFPSChange_Parms*)Obj)->IsCheck = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameSetOverlay_ShowFPSChange_Statics::NewProp_IsCheck = { "IsCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameSetOverlay_eventShowFPSChange_Parms), &Z_Construct_UFunction_UGameSetOverlay_ShowFPSChange_Statics::NewProp_IsCheck_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSetOverlay_ShowFPSChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSetOverlay_ShowFPSChange_Statics::NewProp_IsCheck,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSetOverlay_ShowFPSChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSetOverlay_ShowFPSChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSetOverlay, nullptr, "ShowFPSChange", nullptr, nullptr, Z_Construct_UFunction_UGameSetOverlay_ShowFPSChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSetOverlay_ShowFPSChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameSetOverlay_ShowFPSChange_Statics::GameSetOverlay_eventShowFPSChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSetOverlay_ShowFPSChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameSetOverlay_ShowFPSChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameSetOverlay_ShowFPSChange_Statics::GameSetOverlay_eventShowFPSChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameSetOverlay_ShowFPSChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSetOverlay_ShowFPSChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameSetOverlay::execShowFPSChange)
{
	P_GET_UBOOL(Z_Param_IsCheck);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowFPSChange(Z_Param_IsCheck);
	P_NATIVE_END;
}
// End Class UGameSetOverlay Function ShowFPSChange

// Begin Class UGameSetOverlay
void UGameSetOverlay::StaticRegisterNativesUGameSetOverlay()
{
	UClass* Class = UGameSetOverlay::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplySet", &UGameSetOverlay::execApplySet },
		{ "ApplySettingInUI", &UGameSetOverlay::execApplySettingInUI },
		{ "SetSettingDefault", &UGameSetOverlay::execSetSettingDefault },
		{ "SetUIDefault", &UGameSetOverlay::execSetUIDefault },
		{ "ShowFPSChange", &UGameSetOverlay::execShowFPSChange },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameSetOverlay);
UClass* Z_Construct_UClass_UGameSetOverlay_NoRegister()
{
	return UGameSetOverlay::StaticClass();
}
struct Z_Construct_UClass_UGameSetOverlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HUD/GameSetOverlay.h" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SupportRES_MetaData[] = {
		{ "Category", "GameSetOverlay" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowFPS_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameSetOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVSync_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameSetOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Confirm_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameSetOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResetSet_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameSetOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOpenDLSS_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameSetOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DLSSModeList_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameSetOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFrameGeneration_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameSetOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRayTracing_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameSetOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingList_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameSetOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMotionBlur_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameSetOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionList_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameSetOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindowModeList_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameSetOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxFPSList_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameSetOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalIlluminationList_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameSetOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewDistanceList_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameSetOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessingList_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameSetOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowList_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameSetOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionList_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameSetOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureList_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameSetOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadingList_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameSetOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AntiAliasingList_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameSetOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultGameSet_MetaData[] = {
		{ "Category", "GameSetOverlay" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameSetting_MetaData[] = {
		{ "Category", "GameSetOverlay" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseSensitivityBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameSetOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalVolumeLine_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameSetOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundVolumeLine_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameSetOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundEffectVolumeLine_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameSetOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceVolumeLine_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameSetOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuietPlayerController_MetaData[] = {
		{ "Category", "GameSetOverlay" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuietGameInstance_MetaData[] = {
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuietCharacter_MetaData[] = {
		{ "Category", "GameSetOverlay" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyCharacter_MetaData[] = {
		{ "Category", "GameSetOverlay" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[] = {
		{ "Category", "GameSetOverlay" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyMenuOverlayclass_MetaData[] = {
		{ "Category", "GameSetOverlay" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyMenuOverlay_MetaData[] = {
		{ "Category", "GameSetOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundMix_MetaData[] = {
		{ "Category", "GameSetOverlay" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalVolumeClass_MetaData[] = {
		{ "Category", "GameSetOverlay" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundVolumeClass_MetaData[] = {
		{ "Category", "GameSetOverlay" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundEffectVolumeClass_MetaData[] = {
		{ "Category", "GameSetOverlay" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceVolumeClass_MetaData[] = {
		{ "Category", "GameSetOverlay" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowCaption_MetaData[] = {
		{ "Category", "GameSetOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowCaptionBackground_MetaData[] = {
		{ "Category", "GameSetOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptionSizeList_MetaData[] = {
		{ "Category", "GameSetOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamePostProcessVolume_MetaData[] = {
		{ "Category", "GameSetOverlay" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanFG_MetaData[] = {
		{ "Category", "GameSetOverlay" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanDLSS_MetaData[] = {
		{ "Category", "GameSetOverlay" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CPUinfo_MetaData[] = {
		{ "Category", "GameSetOverlay" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GPUinfo_MetaData[] = {
		{ "Category", "GameSetOverlay" },
		{ "ModuleRelativePath", "HUD/GameSetOverlay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SupportRES_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SupportRES;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_bShowFPS;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_bVSync;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Confirm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResetSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_bOpenDLSS;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DLSSModeList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_bFrameGeneration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_bRayTracing;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RayTracingList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_bMotionBlur;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResolutionList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WindowModeList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaxFPSList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GlobalIlluminationList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewDistanceList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PostProcessingList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShadowList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReflectionList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShadingList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AntiAliasingList;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultGameSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameSetting;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MouseSensitivityBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TotalVolumeLine;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackgroundVolumeLine;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundEffectVolumeLine;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoiceVolumeLine;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuietPlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuietGameInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuietCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LobbyCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FClassPropertyParams NewProp_LobbyMenuOverlayclass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LobbyMenuOverlay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundMix;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TotalVolumeClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackgroundVolumeClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundEffectVolumeClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoiceVolumeClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_bShowCaption;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_bShowCaptionBackground;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptionSizeList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GamePostProcessVolume;
	static void NewProp_bCanFG_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanFG;
	static void NewProp_bCanDLSS_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanDLSS;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CPUinfo;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GPUinfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameSetOverlay_ApplySet, "ApplySet" }, // 3912232873
		{ &Z_Construct_UFunction_UGameSetOverlay_ApplySettingInUI, "ApplySettingInUI" }, // 461843268
		{ &Z_Construct_UFunction_UGameSetOverlay_SetSettingDefault, "SetSettingDefault" }, // 3713777623
		{ &Z_Construct_UFunction_UGameSetOverlay_SetUIDefault, "SetUIDefault" }, // 3340289857
		{ &Z_Construct_UFunction_UGameSetOverlay_ShowFPSChange, "ShowFPSChange" }, // 419428336
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameSetOverlay>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_SupportRES_Inner = { "SupportRES", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_SupportRES = { "SupportRES", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, SupportRES), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SupportRES_MetaData), NewProp_SupportRES_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_bShowFPS = { "bShowFPS", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, bShowFPS), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowFPS_MetaData), NewProp_bShowFPS_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_bVSync = { "bVSync", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, bVSync), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVSync_MetaData), NewProp_bVSync_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_Confirm = { "Confirm", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, Confirm), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Confirm_MetaData), NewProp_Confirm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_ResetSet = { "ResetSet", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, ResetSet), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResetSet_MetaData), NewProp_ResetSet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_bOpenDLSS = { "bOpenDLSS", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, bOpenDLSS), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOpenDLSS_MetaData), NewProp_bOpenDLSS_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_DLSSModeList = { "DLSSModeList", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, DLSSModeList), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DLSSModeList_MetaData), NewProp_DLSSModeList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_bFrameGeneration = { "bFrameGeneration", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, bFrameGeneration), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFrameGeneration_MetaData), NewProp_bFrameGeneration_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_bRayTracing = { "bRayTracing", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, bRayTracing), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRayTracing_MetaData), NewProp_bRayTracing_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_RayTracingList = { "RayTracingList", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, RayTracingList), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayTracingList_MetaData), NewProp_RayTracingList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_bMotionBlur = { "bMotionBlur", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, bMotionBlur), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMotionBlur_MetaData), NewProp_bMotionBlur_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_ResolutionList = { "ResolutionList", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, ResolutionList), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolutionList_MetaData), NewProp_ResolutionList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_WindowModeList = { "WindowModeList", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, WindowModeList), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindowModeList_MetaData), NewProp_WindowModeList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_MaxFPSList = { "MaxFPSList", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, MaxFPSList), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxFPSList_MetaData), NewProp_MaxFPSList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_GlobalIlluminationList = { "GlobalIlluminationList", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, GlobalIlluminationList), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalIlluminationList_MetaData), NewProp_GlobalIlluminationList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_ViewDistanceList = { "ViewDistanceList", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, ViewDistanceList), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewDistanceList_MetaData), NewProp_ViewDistanceList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_PostProcessingList = { "PostProcessingList", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, PostProcessingList), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcessingList_MetaData), NewProp_PostProcessingList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_ShadowList = { "ShadowList", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, ShadowList), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowList_MetaData), NewProp_ShadowList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_ReflectionList = { "ReflectionList", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, ReflectionList), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReflectionList_MetaData), NewProp_ReflectionList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_TextureList = { "TextureList", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, TextureList), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureList_MetaData), NewProp_TextureList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_ShadingList = { "ShadingList", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, ShadingList), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadingList_MetaData), NewProp_ShadingList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_AntiAliasingList = { "AntiAliasingList", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, AntiAliasingList), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AntiAliasingList_MetaData), NewProp_AntiAliasingList_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_DefaultGameSet = { "DefaultGameSet", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, DefaultGameSet), Z_Construct_UScriptStruct_FGameSets, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultGameSet_MetaData), NewProp_DefaultGameSet_MetaData) }; // 1722388133
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_GameSetting = { "GameSetting", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, GameSetting), Z_Construct_UClass_UGameUserSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameSetting_MetaData), NewProp_GameSetting_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_MouseSensitivityBox = { "MouseSensitivityBox", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, MouseSensitivityBox), Z_Construct_UClass_UEditableText_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseSensitivityBox_MetaData), NewProp_MouseSensitivityBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_TotalVolumeLine = { "TotalVolumeLine", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, TotalVolumeLine), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalVolumeLine_MetaData), NewProp_TotalVolumeLine_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_BackgroundVolumeLine = { "BackgroundVolumeLine", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, BackgroundVolumeLine), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundVolumeLine_MetaData), NewProp_BackgroundVolumeLine_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_SoundEffectVolumeLine = { "SoundEffectVolumeLine", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, SoundEffectVolumeLine), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundEffectVolumeLine_MetaData), NewProp_SoundEffectVolumeLine_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_VoiceVolumeLine = { "VoiceVolumeLine", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, VoiceVolumeLine), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceVolumeLine_MetaData), NewProp_VoiceVolumeLine_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_QuietPlayerController = { "QuietPlayerController", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, QuietPlayerController), Z_Construct_UClass_AQuietPlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuietPlayerController_MetaData), NewProp_QuietPlayerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_QuietGameInstance = { "QuietGameInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, QuietGameInstance), Z_Construct_UClass_UQuietGameInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuietGameInstance_MetaData), NewProp_QuietGameInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_QuietCharacter = { "QuietCharacter", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, QuietCharacter), Z_Construct_UClass_AQuietCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuietCharacter_MetaData), NewProp_QuietCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_LobbyCharacter = { "LobbyCharacter", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, LobbyCharacter), Z_Construct_UClass_ALobbyCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyCharacter_MetaData), NewProp_LobbyCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Character_MetaData), NewProp_Character_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_LobbyMenuOverlayclass = { "LobbyMenuOverlayclass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, LobbyMenuOverlayclass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyMenuOverlayclass_MetaData), NewProp_LobbyMenuOverlayclass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_LobbyMenuOverlay = { "LobbyMenuOverlay", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, LobbyMenuOverlay), Z_Construct_UClass_ULobbyMenuOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyMenuOverlay_MetaData), NewProp_LobbyMenuOverlay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_SoundMix = { "SoundMix", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, SoundMix), Z_Construct_UClass_USoundMix_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundMix_MetaData), NewProp_SoundMix_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_TotalVolumeClass = { "TotalVolumeClass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, TotalVolumeClass), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalVolumeClass_MetaData), NewProp_TotalVolumeClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_BackgroundVolumeClass = { "BackgroundVolumeClass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, BackgroundVolumeClass), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundVolumeClass_MetaData), NewProp_BackgroundVolumeClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_SoundEffectVolumeClass = { "SoundEffectVolumeClass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, SoundEffectVolumeClass), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundEffectVolumeClass_MetaData), NewProp_SoundEffectVolumeClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_VoiceVolumeClass = { "VoiceVolumeClass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, VoiceVolumeClass), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceVolumeClass_MetaData), NewProp_VoiceVolumeClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_bShowCaption = { "bShowCaption", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, bShowCaption), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowCaption_MetaData), NewProp_bShowCaption_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_bShowCaptionBackground = { "bShowCaptionBackground", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, bShowCaptionBackground), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowCaptionBackground_MetaData), NewProp_bShowCaptionBackground_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_CaptionSizeList = { "CaptionSizeList", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, CaptionSizeList), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptionSizeList_MetaData), NewProp_CaptionSizeList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_GamePostProcessVolume = { "GamePostProcessVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, GamePostProcessVolume), Z_Construct_UClass_AGamePostProcessVolume_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamePostProcessVolume_MetaData), NewProp_GamePostProcessVolume_MetaData) };
void Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_bCanFG_SetBit(void* Obj)
{
	((UGameSetOverlay*)Obj)->bCanFG = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_bCanFG = { "bCanFG", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGameSetOverlay), &Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_bCanFG_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanFG_MetaData), NewProp_bCanFG_MetaData) };
void Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_bCanDLSS_SetBit(void* Obj)
{
	((UGameSetOverlay*)Obj)->bCanDLSS = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_bCanDLSS = { "bCanDLSS", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGameSetOverlay), &Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_bCanDLSS_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanDLSS_MetaData), NewProp_bCanDLSS_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_CPUinfo = { "CPUinfo", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, CPUinfo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CPUinfo_MetaData), NewProp_CPUinfo_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_GPUinfo = { "GPUinfo", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSetOverlay, GPUinfo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GPUinfo_MetaData), NewProp_GPUinfo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameSetOverlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_SupportRES_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_SupportRES,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_bShowFPS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_bVSync,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_Confirm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_ResetSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_bOpenDLSS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_DLSSModeList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_bFrameGeneration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_bRayTracing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_RayTracingList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_bMotionBlur,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_ResolutionList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_WindowModeList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_MaxFPSList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_GlobalIlluminationList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_ViewDistanceList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_PostProcessingList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_ShadowList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_ReflectionList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_TextureList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_ShadingList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_AntiAliasingList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_DefaultGameSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_GameSetting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_MouseSensitivityBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_TotalVolumeLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_BackgroundVolumeLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_SoundEffectVolumeLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_VoiceVolumeLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_QuietPlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_QuietGameInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_QuietCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_LobbyCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_LobbyMenuOverlayclass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_LobbyMenuOverlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_SoundMix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_TotalVolumeClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_BackgroundVolumeClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_SoundEffectVolumeClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_VoiceVolumeClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_bShowCaption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_bShowCaptionBackground,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_CaptionSizeList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_GamePostProcessVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_bCanFG,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_bCanDLSS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_CPUinfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSetOverlay_Statics::NewProp_GPUinfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameSetOverlay_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameSetOverlay_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Quiet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameSetOverlay_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameSetOverlay_Statics::ClassParams = {
	&UGameSetOverlay::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGameSetOverlay_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameSetOverlay_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameSetOverlay_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameSetOverlay_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameSetOverlay()
{
	if (!Z_Registration_Info_UClass_UGameSetOverlay.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameSetOverlay.OuterSingleton, Z_Construct_UClass_UGameSetOverlay_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameSetOverlay.OuterSingleton;
}
template<> QUIET_API UClass* StaticClass<UGameSetOverlay>()
{
	return UGameSetOverlay::StaticClass();
}
UGameSetOverlay::UGameSetOverlay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameSetOverlay);
UGameSetOverlay::~UGameSetOverlay() {}
// End Class UGameSetOverlay

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_HUD_GameSetOverlay_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameSetOverlay, UGameSetOverlay::StaticClass, TEXT("UGameSetOverlay"), &Z_Registration_Info_UClass_UGameSetOverlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameSetOverlay), 2742977713U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_HUD_GameSetOverlay_h_2615061809(TEXT("/Script/Quiet"),
	Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_HUD_GameSetOverlay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_HUD_GameSetOverlay_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
