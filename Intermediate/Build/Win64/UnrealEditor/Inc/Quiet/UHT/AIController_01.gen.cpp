// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Quiet/AI/AIController_01.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIController_01() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
QUIET_API UClass* Z_Construct_UClass_AAIController_01();
QUIET_API UClass* Z_Construct_UClass_AAIController_01_NoRegister();
UPackage* Z_Construct_UPackage__Script_Quiet();
// End Cross Module References

// Begin Class AAIController_01 Function HearFeeling
struct Z_Construct_UFunction_AAIController_01_HearFeeling_Statics
{
	struct AIController_01_eventHearFeeling_Parms
	{
		AActor* Actor;
		FAIStimulus Stimulus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/AIController_01.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stimulus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIController_01_HearFeeling_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIController_01_eventHearFeeling_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAIController_01_HearFeeling_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIController_01_eventHearFeeling_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(0, nullptr) }; // 177100813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController_01_HearFeeling_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_01_HearFeeling_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_01_HearFeeling_Statics::NewProp_Stimulus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_01_HearFeeling_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_01_HearFeeling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController_01, nullptr, "HearFeeling", nullptr, nullptr, Z_Construct_UFunction_AAIController_01_HearFeeling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_01_HearFeeling_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIController_01_HearFeeling_Statics::AIController_01_eventHearFeeling_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_01_HearFeeling_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIController_01_HearFeeling_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAIController_01_HearFeeling_Statics::AIController_01_eventHearFeeling_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAIController_01_HearFeeling()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIController_01_HearFeeling_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAIController_01::execHearFeeling)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HearFeeling(Z_Param_Actor,Z_Param_Stimulus);
	P_NATIVE_END;
}
// End Class AAIController_01 Function HearFeeling

// Begin Class AAIController_01 Function HunchFeeling
struct Z_Construct_UFunction_AAIController_01_HunchFeeling_Statics
{
	struct AIController_01_eventHunchFeeling_Parms
	{
		AActor* Actor;
		FAIStimulus Stimulus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/AIController_01.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stimulus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIController_01_HunchFeeling_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIController_01_eventHunchFeeling_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAIController_01_HunchFeeling_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIController_01_eventHunchFeeling_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(0, nullptr) }; // 177100813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController_01_HunchFeeling_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_01_HunchFeeling_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_01_HunchFeeling_Statics::NewProp_Stimulus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_01_HunchFeeling_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_01_HunchFeeling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController_01, nullptr, "HunchFeeling", nullptr, nullptr, Z_Construct_UFunction_AAIController_01_HunchFeeling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_01_HunchFeeling_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIController_01_HunchFeeling_Statics::AIController_01_eventHunchFeeling_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_01_HunchFeeling_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIController_01_HunchFeeling_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAIController_01_HunchFeeling_Statics::AIController_01_eventHunchFeeling_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAIController_01_HunchFeeling()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIController_01_HunchFeeling_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAIController_01::execHunchFeeling)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HunchFeeling(Z_Param_Actor,Z_Param_Stimulus);
	P_NATIVE_END;
}
// End Class AAIController_01 Function HunchFeeling

// Begin Class AAIController_01 Function Reset
struct Z_Construct_UFunction_AAIController_01_Reset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/AIController_01.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_01_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController_01, nullptr, "Reset", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_01_Reset_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIController_01_Reset_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAIController_01_Reset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIController_01_Reset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAIController_01::execReset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Reset();
	P_NATIVE_END;
}
// End Class AAIController_01 Function Reset

// Begin Class AAIController_01 Function SightFeeling
struct Z_Construct_UFunction_AAIController_01_SightFeeling_Statics
{
	struct AIController_01_eventSightFeeling_Parms
	{
		AActor* Actor;
		FAIStimulus Stimulus;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/AIController_01.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stimulus;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIController_01_SightFeeling_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIController_01_eventSightFeeling_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAIController_01_SightFeeling_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIController_01_eventSightFeeling_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(0, nullptr) }; // 177100813
void Z_Construct_UFunction_AAIController_01_SightFeeling_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AIController_01_eventSightFeeling_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAIController_01_SightFeeling_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIController_01_eventSightFeeling_Parms), &Z_Construct_UFunction_AAIController_01_SightFeeling_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController_01_SightFeeling_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_01_SightFeeling_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_01_SightFeeling_Statics::NewProp_Stimulus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_01_SightFeeling_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_01_SightFeeling_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_01_SightFeeling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController_01, nullptr, "SightFeeling", nullptr, nullptr, Z_Construct_UFunction_AAIController_01_SightFeeling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_01_SightFeeling_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIController_01_SightFeeling_Statics::AIController_01_eventSightFeeling_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_01_SightFeeling_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIController_01_SightFeeling_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAIController_01_SightFeeling_Statics::AIController_01_eventSightFeeling_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAIController_01_SightFeeling()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIController_01_SightFeeling_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAIController_01::execSightFeeling)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SightFeeling(Z_Param_Actor,Z_Param_Stimulus);
	P_NATIVE_END;
}
// End Class AAIController_01 Function SightFeeling

// Begin Class AAIController_01
void AAIController_01::StaticRegisterNativesAAIController_01()
{
	UClass* Class = AAIController_01::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HearFeeling", &AAIController_01::execHearFeeling },
		{ "HunchFeeling", &AAIController_01::execHunchFeeling },
		{ "Reset", &AAIController_01::execReset },
		{ "SightFeeling", &AAIController_01::execSightFeeling },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAIController_01);
UClass* Z_Construct_UClass_AAIController_01_NoRegister()
{
	return AAIController_01::StaticClass();
}
struct Z_Construct_UClass_AAIController_01_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AI/AIController_01.h" },
		{ "ModuleRelativePath", "AI/AIController_01.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[] = {
		{ "Category", "AIController_01" },
		{ "ModuleRelativePath", "AI/AIController_01.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAIController_01_HearFeeling, "HearFeeling" }, // 2488018836
		{ &Z_Construct_UFunction_AAIController_01_HunchFeeling, "HunchFeeling" }, // 2167946030
		{ &Z_Construct_UFunction_AAIController_01_Reset, "Reset" }, // 3957141230
		{ &Z_Construct_UFunction_AAIController_01_SightFeeling, "SightFeeling" }, // 356882521
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIController_01>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AAIController_01_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((AAIController_01*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAIController_01_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAIController_01), &Z_Construct_UClass_AAIController_01_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnable_MetaData), NewProp_bEnable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIController_01_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIController_01_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIController_01_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAIController_01_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_Quiet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIController_01_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAIController_01_Statics::ClassParams = {
	&AAIController_01::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAIController_01_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAIController_01_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIController_01_Statics::Class_MetaDataParams), Z_Construct_UClass_AAIController_01_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAIController_01()
{
	if (!Z_Registration_Info_UClass_AAIController_01.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAIController_01.OuterSingleton, Z_Construct_UClass_AAIController_01_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAIController_01.OuterSingleton;
}
template<> QUIET_API UClass* StaticClass<AAIController_01>()
{
	return AAIController_01::StaticClass();
}
AAIController_01::AAIController_01(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAIController_01);
AAIController_01::~AAIController_01() {}
// End Class AAIController_01

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_AI_AIController_01_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAIController_01, AAIController_01::StaticClass, TEXT("AAIController_01"), &Z_Registration_Info_UClass_AAIController_01, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIController_01), 832546228U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_AI_AIController_01_h_96479269(TEXT("/Script/Quiet"),
	Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_AI_AIController_01_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_AI_AIController_01_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
