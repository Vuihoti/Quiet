// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Quiet/PlayerController/LobbyPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
QUIET_API UClass* Z_Construct_UClass_ALobbyPlayerController();
QUIET_API UClass* Z_Construct_UClass_ALobbyPlayerController_NoRegister();
QUIET_API UClass* Z_Construct_UClass_AMyHUD_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Quiet();
// End Cross Module References

// Begin Class ALobbyPlayerController Function SetHUDGameSet
struct Z_Construct_UFunction_ALobbyPlayerController_SetHUDGameSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/LobbyPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyPlayerController_SetHUDGameSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyPlayerController, nullptr, "SetHUDGameSet", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyPlayerController_SetHUDGameSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALobbyPlayerController_SetHUDGameSet_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALobbyPlayerController_SetHUDGameSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALobbyPlayerController_SetHUDGameSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALobbyPlayerController::execSetHUDGameSet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHUDGameSet();
	P_NATIVE_END;
}
// End Class ALobbyPlayerController Function SetHUDGameSet

// Begin Class ALobbyPlayerController Function SetHUDSetting
struct Z_Construct_UFunction_ALobbyPlayerController_SetHUDSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/LobbyPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyPlayerController_SetHUDSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyPlayerController, nullptr, "SetHUDSetting", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyPlayerController_SetHUDSetting_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALobbyPlayerController_SetHUDSetting_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALobbyPlayerController_SetHUDSetting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALobbyPlayerController_SetHUDSetting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALobbyPlayerController::execSetHUDSetting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHUDSetting();
	P_NATIVE_END;
}
// End Class ALobbyPlayerController Function SetHUDSetting

// Begin Class ALobbyPlayerController Function ShowHUDCard
struct Z_Construct_UFunction_ALobbyPlayerController_ShowHUDCard_Statics
{
	struct LobbyPlayerController_eventShowHUDCard_Parms
	{
		bool Show;
		UUserWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/LobbyPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static void NewProp_Show_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Show;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ALobbyPlayerController_ShowHUDCard_Statics::NewProp_Show_SetBit(void* Obj)
{
	((LobbyPlayerController_eventShowHUDCard_Parms*)Obj)->Show = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALobbyPlayerController_ShowHUDCard_Statics::NewProp_Show = { "Show", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LobbyPlayerController_eventShowHUDCard_Parms), &Z_Construct_UFunction_ALobbyPlayerController_ShowHUDCard_Statics::NewProp_Show_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALobbyPlayerController_ShowHUDCard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LobbyPlayerController_eventShowHUDCard_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALobbyPlayerController_ShowHUDCard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALobbyPlayerController_ShowHUDCard_Statics::NewProp_Show,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALobbyPlayerController_ShowHUDCard_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyPlayerController_ShowHUDCard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyPlayerController_ShowHUDCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyPlayerController, nullptr, "ShowHUDCard", nullptr, nullptr, Z_Construct_UFunction_ALobbyPlayerController_ShowHUDCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyPlayerController_ShowHUDCard_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALobbyPlayerController_ShowHUDCard_Statics::LobbyPlayerController_eventShowHUDCard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyPlayerController_ShowHUDCard_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALobbyPlayerController_ShowHUDCard_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALobbyPlayerController_ShowHUDCard_Statics::LobbyPlayerController_eventShowHUDCard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALobbyPlayerController_ShowHUDCard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALobbyPlayerController_ShowHUDCard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALobbyPlayerController::execShowHUDCard)
{
	P_GET_UBOOL(Z_Param_Show);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUserWidget**)Z_Param__Result=P_THIS->ShowHUDCard(Z_Param_Show);
	P_NATIVE_END;
}
// End Class ALobbyPlayerController Function ShowHUDCard

// Begin Class ALobbyPlayerController Function ShowHUDLevel
struct Z_Construct_UFunction_ALobbyPlayerController_ShowHUDLevel_Statics
{
	struct LobbyPlayerController_eventShowHUDLevel_Parms
	{
		bool Show;
		UUserWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/LobbyPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static void NewProp_Show_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Show;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ALobbyPlayerController_ShowHUDLevel_Statics::NewProp_Show_SetBit(void* Obj)
{
	((LobbyPlayerController_eventShowHUDLevel_Parms*)Obj)->Show = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALobbyPlayerController_ShowHUDLevel_Statics::NewProp_Show = { "Show", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LobbyPlayerController_eventShowHUDLevel_Parms), &Z_Construct_UFunction_ALobbyPlayerController_ShowHUDLevel_Statics::NewProp_Show_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALobbyPlayerController_ShowHUDLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LobbyPlayerController_eventShowHUDLevel_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALobbyPlayerController_ShowHUDLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALobbyPlayerController_ShowHUDLevel_Statics::NewProp_Show,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALobbyPlayerController_ShowHUDLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyPlayerController_ShowHUDLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyPlayerController_ShowHUDLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyPlayerController, nullptr, "ShowHUDLevel", nullptr, nullptr, Z_Construct_UFunction_ALobbyPlayerController_ShowHUDLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyPlayerController_ShowHUDLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALobbyPlayerController_ShowHUDLevel_Statics::LobbyPlayerController_eventShowHUDLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyPlayerController_ShowHUDLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALobbyPlayerController_ShowHUDLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALobbyPlayerController_ShowHUDLevel_Statics::LobbyPlayerController_eventShowHUDLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALobbyPlayerController_ShowHUDLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALobbyPlayerController_ShowHUDLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALobbyPlayerController::execShowHUDLevel)
{
	P_GET_UBOOL(Z_Param_Show);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUserWidget**)Z_Param__Result=P_THIS->ShowHUDLevel(Z_Param_Show);
	P_NATIVE_END;
}
// End Class ALobbyPlayerController Function ShowHUDLevel

// Begin Class ALobbyPlayerController Function ShowMainMenu
struct Z_Construct_UFunction_ALobbyPlayerController_ShowMainMenu_Statics
{
	struct LobbyPlayerController_eventShowMainMenu_Parms
	{
		bool Show;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/LobbyPlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Show_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Show;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ALobbyPlayerController_ShowMainMenu_Statics::NewProp_Show_SetBit(void* Obj)
{
	((LobbyPlayerController_eventShowMainMenu_Parms*)Obj)->Show = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALobbyPlayerController_ShowMainMenu_Statics::NewProp_Show = { "Show", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LobbyPlayerController_eventShowMainMenu_Parms), &Z_Construct_UFunction_ALobbyPlayerController_ShowMainMenu_Statics::NewProp_Show_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALobbyPlayerController_ShowMainMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALobbyPlayerController_ShowMainMenu_Statics::NewProp_Show,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyPlayerController_ShowMainMenu_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyPlayerController_ShowMainMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyPlayerController, nullptr, "ShowMainMenu", nullptr, nullptr, Z_Construct_UFunction_ALobbyPlayerController_ShowMainMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyPlayerController_ShowMainMenu_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALobbyPlayerController_ShowMainMenu_Statics::LobbyPlayerController_eventShowMainMenu_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyPlayerController_ShowMainMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALobbyPlayerController_ShowMainMenu_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALobbyPlayerController_ShowMainMenu_Statics::LobbyPlayerController_eventShowMainMenu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALobbyPlayerController_ShowMainMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALobbyPlayerController_ShowMainMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALobbyPlayerController::execShowMainMenu)
{
	P_GET_UBOOL(Z_Param_Show);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowMainMenu(Z_Param_Show);
	P_NATIVE_END;
}
// End Class ALobbyPlayerController Function ShowMainMenu

// Begin Class ALobbyPlayerController
void ALobbyPlayerController::StaticRegisterNativesALobbyPlayerController()
{
	UClass* Class = ALobbyPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetHUDGameSet", &ALobbyPlayerController::execSetHUDGameSet },
		{ "SetHUDSetting", &ALobbyPlayerController::execSetHUDSetting },
		{ "ShowHUDCard", &ALobbyPlayerController::execShowHUDCard },
		{ "ShowHUDLevel", &ALobbyPlayerController::execShowHUDLevel },
		{ "ShowMainMenu", &ALobbyPlayerController::execShowMainMenu },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALobbyPlayerController);
UClass* Z_Construct_UClass_ALobbyPlayerController_NoRegister()
{
	return ALobbyPlayerController::StaticClass();
}
struct Z_Construct_UClass_ALobbyPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PlayerController/LobbyPlayerController.h" },
		{ "ModuleRelativePath", "PlayerController/LobbyPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuietHUD_MetaData[] = {
		{ "Category", "LobbyPlayerController" },
		{ "ModuleRelativePath", "PlayerController/LobbyPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuietHUD;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALobbyPlayerController_SetHUDGameSet, "SetHUDGameSet" }, // 2591998402
		{ &Z_Construct_UFunction_ALobbyPlayerController_SetHUDSetting, "SetHUDSetting" }, // 1822676203
		{ &Z_Construct_UFunction_ALobbyPlayerController_ShowHUDCard, "ShowHUDCard" }, // 2678117910
		{ &Z_Construct_UFunction_ALobbyPlayerController_ShowHUDLevel, "ShowHUDLevel" }, // 2497107776
		{ &Z_Construct_UFunction_ALobbyPlayerController_ShowMainMenu, "ShowMainMenu" }, // 2212947451
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALobbyPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALobbyPlayerController_Statics::NewProp_QuietHUD = { "QuietHUD", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALobbyPlayerController, QuietHUD), Z_Construct_UClass_AMyHUD_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuietHUD_MetaData), NewProp_QuietHUD_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALobbyPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyPlayerController_Statics::NewProp_QuietHUD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALobbyPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Quiet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALobbyPlayerController_Statics::ClassParams = {
	&ALobbyPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ALobbyPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ALobbyPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALobbyPlayerController()
{
	if (!Z_Registration_Info_UClass_ALobbyPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALobbyPlayerController.OuterSingleton, Z_Construct_UClass_ALobbyPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALobbyPlayerController.OuterSingleton;
}
template<> QUIET_API UClass* StaticClass<ALobbyPlayerController>()
{
	return ALobbyPlayerController::StaticClass();
}
ALobbyPlayerController::ALobbyPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALobbyPlayerController);
ALobbyPlayerController::~ALobbyPlayerController() {}
// End Class ALobbyPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_PlayerController_LobbyPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALobbyPlayerController, ALobbyPlayerController::StaticClass, TEXT("ALobbyPlayerController"), &Z_Registration_Info_UClass_ALobbyPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALobbyPlayerController), 1398406795U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_PlayerController_LobbyPlayerController_h_3535599066(TEXT("/Script/Quiet"),
	Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_PlayerController_LobbyPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_PlayerController_LobbyPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
