// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Quiet/HUD/LobbyMenuOverlay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyMenuOverlay() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
QUIET_API UClass* Z_Construct_UClass_UGameSetOverlay_NoRegister();
QUIET_API UClass* Z_Construct_UClass_ULobbyMenuOverlay();
QUIET_API UClass* Z_Construct_UClass_ULobbyMenuOverlay_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Quiet();
// End Cross Module References

// Begin Class ULobbyMenuOverlay Function btn_GameSettingPressed
struct Z_Construct_UFunction_ULobbyMenuOverlay_btn_GameSettingPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD/LobbyMenuOverlay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULobbyMenuOverlay_btn_GameSettingPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULobbyMenuOverlay, nullptr, "btn_GameSettingPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyMenuOverlay_btn_GameSettingPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULobbyMenuOverlay_btn_GameSettingPressed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULobbyMenuOverlay_btn_GameSettingPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULobbyMenuOverlay_btn_GameSettingPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULobbyMenuOverlay::execbtn_GameSettingPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->btn_GameSettingPressed();
	P_NATIVE_END;
}
// End Class ULobbyMenuOverlay Function btn_GameSettingPressed

// Begin Class ULobbyMenuOverlay
void ULobbyMenuOverlay::StaticRegisterNativesULobbyMenuOverlay()
{
	UClass* Class = ULobbyMenuOverlay::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "btn_GameSettingPressed", &ULobbyMenuOverlay::execbtn_GameSettingPressed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULobbyMenuOverlay);
UClass* Z_Construct_UClass_ULobbyMenuOverlay_NoRegister()
{
	return ULobbyMenuOverlay::StaticClass();
}
struct Z_Construct_UClass_ULobbyMenuOverlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HUD/LobbyMenuOverlay.h" },
		{ "ModuleRelativePath", "HUD/LobbyMenuOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameSetOverlayclass_MetaData[] = {
		{ "Category", "LobbyMenuOverlay" },
		{ "ModuleRelativePath", "HUD/LobbyMenuOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameSetOverlay_MetaData[] = {
		{ "Category", "LobbyMenuOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/LobbyMenuOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_btn_StartGame_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LobbyMenuOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/LobbyMenuOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_btn_GameSetting_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LobbyMenuOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/LobbyMenuOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_btn_ListOfDevelopers_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LobbyMenuOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/LobbyMenuOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_btn_Quit_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LobbyMenuOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/LobbyMenuOverlay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameSetOverlayclass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameSetOverlay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_btn_StartGame;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_btn_GameSetting;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_btn_ListOfDevelopers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_btn_Quit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULobbyMenuOverlay_btn_GameSettingPressed, "btn_GameSettingPressed" }, // 3543093342
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULobbyMenuOverlay>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULobbyMenuOverlay_Statics::NewProp_GameSetOverlayclass = { "GameSetOverlayclass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULobbyMenuOverlay, GameSetOverlayclass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameSetOverlayclass_MetaData), NewProp_GameSetOverlayclass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULobbyMenuOverlay_Statics::NewProp_GameSetOverlay = { "GameSetOverlay", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULobbyMenuOverlay, GameSetOverlay), Z_Construct_UClass_UGameSetOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameSetOverlay_MetaData), NewProp_GameSetOverlay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULobbyMenuOverlay_Statics::NewProp_btn_StartGame = { "btn_StartGame", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULobbyMenuOverlay, btn_StartGame), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_btn_StartGame_MetaData), NewProp_btn_StartGame_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULobbyMenuOverlay_Statics::NewProp_btn_GameSetting = { "btn_GameSetting", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULobbyMenuOverlay, btn_GameSetting), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_btn_GameSetting_MetaData), NewProp_btn_GameSetting_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULobbyMenuOverlay_Statics::NewProp_btn_ListOfDevelopers = { "btn_ListOfDevelopers", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULobbyMenuOverlay, btn_ListOfDevelopers), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_btn_ListOfDevelopers_MetaData), NewProp_btn_ListOfDevelopers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULobbyMenuOverlay_Statics::NewProp_btn_Quit = { "btn_Quit", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULobbyMenuOverlay, btn_Quit), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_btn_Quit_MetaData), NewProp_btn_Quit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULobbyMenuOverlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyMenuOverlay_Statics::NewProp_GameSetOverlayclass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyMenuOverlay_Statics::NewProp_GameSetOverlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyMenuOverlay_Statics::NewProp_btn_StartGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyMenuOverlay_Statics::NewProp_btn_GameSetting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyMenuOverlay_Statics::NewProp_btn_ListOfDevelopers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyMenuOverlay_Statics::NewProp_btn_Quit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyMenuOverlay_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULobbyMenuOverlay_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Quiet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyMenuOverlay_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULobbyMenuOverlay_Statics::ClassParams = {
	&ULobbyMenuOverlay::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULobbyMenuOverlay_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyMenuOverlay_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyMenuOverlay_Statics::Class_MetaDataParams), Z_Construct_UClass_ULobbyMenuOverlay_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULobbyMenuOverlay()
{
	if (!Z_Registration_Info_UClass_ULobbyMenuOverlay.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULobbyMenuOverlay.OuterSingleton, Z_Construct_UClass_ULobbyMenuOverlay_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULobbyMenuOverlay.OuterSingleton;
}
template<> QUIET_API UClass* StaticClass<ULobbyMenuOverlay>()
{
	return ULobbyMenuOverlay::StaticClass();
}
ULobbyMenuOverlay::ULobbyMenuOverlay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULobbyMenuOverlay);
ULobbyMenuOverlay::~ULobbyMenuOverlay() {}
// End Class ULobbyMenuOverlay

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_HUD_LobbyMenuOverlay_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULobbyMenuOverlay, ULobbyMenuOverlay::StaticClass, TEXT("ULobbyMenuOverlay"), &Z_Registration_Info_UClass_ULobbyMenuOverlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULobbyMenuOverlay), 3134453929U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_HUD_LobbyMenuOverlay_h_4132690935(TEXT("/Script/Quiet"),
	Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_HUD_LobbyMenuOverlay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_HUD_LobbyMenuOverlay_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
