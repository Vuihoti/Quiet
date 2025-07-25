// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkAudioType.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAudioType() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType();
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

// Begin Class UAkAudioType Function GetWwiseShortID
struct Z_Construct_UFunction_UAkAudioType_GetWwiseShortID_Statics
{
	struct AkAudioType_eventGetWwiseShortID_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkAudioType" },
		{ "ModuleRelativePath", "Classes/AkAudioType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkAudioType_GetWwiseShortID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkAudioType_eventGetWwiseShortID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkAudioType_GetWwiseShortID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioType_GetWwiseShortID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioType_GetWwiseShortID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkAudioType_GetWwiseShortID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkAudioType, nullptr, "GetWwiseShortID", nullptr, nullptr, Z_Construct_UFunction_UAkAudioType_GetWwiseShortID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioType_GetWwiseShortID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkAudioType_GetWwiseShortID_Statics::AkAudioType_eventGetWwiseShortID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioType_GetWwiseShortID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkAudioType_GetWwiseShortID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkAudioType_GetWwiseShortID_Statics::AkAudioType_eventGetWwiseShortID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkAudioType_GetWwiseShortID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkAudioType_GetWwiseShortID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkAudioType::execGetWwiseShortID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetWwiseShortID();
	P_NATIVE_END;
}
// End Class UAkAudioType Function GetWwiseShortID

// Begin Class UAkAudioType Function LoadData
struct Z_Construct_UFunction_UAkAudioType_LoadData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkAudioType" },
		{ "ModuleRelativePath", "Classes/AkAudioType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkAudioType_LoadData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkAudioType, nullptr, "LoadData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioType_LoadData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkAudioType_LoadData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAkAudioType_LoadData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkAudioType_LoadData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkAudioType::execLoadData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadData();
	P_NATIVE_END;
}
// End Class UAkAudioType Function LoadData

// Begin Class UAkAudioType Function UnloadData
struct Z_Construct_UFunction_UAkAudioType_UnloadData_Statics
{
	struct AkAudioType_eventUnloadData_Parms
	{
		bool bAsync;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkAudioType" },
		{ "CPP_Default_bAsync", "false" },
		{ "ModuleRelativePath", "Classes/AkAudioType.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bAsync_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAsync;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAkAudioType_UnloadData_Statics::NewProp_bAsync_SetBit(void* Obj)
{
	((AkAudioType_eventUnloadData_Parms*)Obj)->bAsync = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkAudioType_UnloadData_Statics::NewProp_bAsync = { "bAsync", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkAudioType_eventUnloadData_Parms), &Z_Construct_UFunction_UAkAudioType_UnloadData_Statics::NewProp_bAsync_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkAudioType_UnloadData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioType_UnloadData_Statics::NewProp_bAsync,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioType_UnloadData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkAudioType_UnloadData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkAudioType, nullptr, "UnloadData", nullptr, nullptr, Z_Construct_UFunction_UAkAudioType_UnloadData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioType_UnloadData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkAudioType_UnloadData_Statics::AkAudioType_eventUnloadData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioType_UnloadData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkAudioType_UnloadData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkAudioType_UnloadData_Statics::AkAudioType_eventUnloadData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkAudioType_UnloadData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkAudioType_UnloadData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkAudioType::execUnloadData)
{
	P_GET_UBOOL(Z_Param_bAsync);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnloadData(Z_Param_bAsync);
	P_NATIVE_END;
}
// End Class UAkAudioType Function UnloadData

// Begin Class UAkAudioType
void UAkAudioType::StaticRegisterNativesUAkAudioType()
{
	UClass* Class = UAkAudioType::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetWwiseShortID", &UAkAudioType::execGetWwiseShortID },
		{ "LoadData", &UAkAudioType::execLoadData },
		{ "UnloadData", &UAkAudioType::execUnloadData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkAudioType);
UClass* Z_Construct_UClass_UAkAudioType_NoRegister()
{
	return UAkAudioType::StaticClass();
}
struct Z_Construct_UClass_UAkAudioType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Wwise Audio Type abstract Unreal base class.\n *\n * All Unreal assets derive from this type.\n */" },
#endif
		{ "IncludePath", "AkAudioType.h" },
		{ "ModuleRelativePath", "Classes/AkAudioType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wwise Audio Type abstract Unreal base class.\n\nAll Unreal assets derive from this type." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoLoad_MetaData[] = {
		{ "Category", "AkAudioType|Behaviour" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Automatically load SoundBanks and associated media associated when Unreal loads this asset.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkAudioType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Automatically load SoundBanks and associated media associated when Unreal loads this asset." },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "Deprecated", "" },
		{ "ModuleRelativePath", "Classes/AkAudioType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShortID_MetaData[] = {
		{ "Deprecated", "" },
		{ "ModuleRelativePath", "Classes/AkAudioType.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserData_MetaData[] = {
		{ "Category", "AkAudioType" },
		{ "ModuleRelativePath", "Classes/AkAudioType.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bAutoLoad_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoLoad;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ID;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ShortID;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UserData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UserData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkAudioType_GetWwiseShortID, "GetWwiseShortID" }, // 2417163376
		{ &Z_Construct_UFunction_UAkAudioType_LoadData, "LoadData" }, // 1399097225
		{ &Z_Construct_UFunction_UAkAudioType_UnloadData, "UnloadData" }, // 1815355640
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAudioType>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UAkAudioType_Statics::NewProp_bAutoLoad_SetBit(void* Obj)
{
	((UAkAudioType*)Obj)->bAutoLoad = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkAudioType_Statics::NewProp_bAutoLoad = { "bAutoLoad", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkAudioType), &Z_Construct_UClass_UAkAudioType_Statics::NewProp_bAutoLoad_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoLoad_MetaData), NewProp_bAutoLoad_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkAudioType_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAudioType, ID_DEPRECATED), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UAkAudioType_Statics::NewProp_ShortID = { "ShortID", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAudioType, ShortID_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShortID_MetaData), NewProp_ShortID_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAudioType_Statics::NewProp_UserData_Inner = { "UserData", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAkAudioType_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAudioType, UserData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserData_MetaData), NewProp_UserData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAudioType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioType_Statics::NewProp_bAutoLoad,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioType_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioType_Statics::NewProp_ShortID,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioType_Statics::NewProp_UserData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioType_Statics::NewProp_UserData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioType_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAkAudioType_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioType_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAudioType_Statics::ClassParams = {
	&UAkAudioType::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAkAudioType_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioType_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioType_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkAudioType_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkAudioType()
{
	if (!Z_Registration_Info_UClass_UAkAudioType.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAudioType.OuterSingleton, Z_Construct_UClass_UAkAudioType_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkAudioType.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UAkAudioType>()
{
	return UAkAudioType::StaticClass();
}
UAkAudioType::UAkAudioType(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAudioType);
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkAudioType)
// End Class UAkAudioType

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkAudioType_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkAudioType, UAkAudioType::StaticClass, TEXT("UAkAudioType"), &Z_Registration_Info_UClass_UAkAudioType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAudioType), 2652664079U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkAudioType_h_3539342907(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkAudioType_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkAudioType_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
