// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Quiet/GamePostProcessVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGamePostProcessVolume() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APostProcessVolume();
QUIET_API UClass* Z_Construct_UClass_AGamePostProcessVolume();
QUIET_API UClass* Z_Construct_UClass_AGamePostProcessVolume_NoRegister();
UPackage* Z_Construct_UPackage__Script_Quiet();
// End Cross Module References

// Begin Class AGamePostProcessVolume Function SetSaturation
struct Z_Construct_UFunction_AGamePostProcessVolume_SetSaturation_Statics
{
	struct GamePostProcessVolume_eventSetSaturation_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GamePostProcessVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGamePostProcessVolume_SetSaturation_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GamePostProcessVolume_eventSetSaturation_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGamePostProcessVolume_SetSaturation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGamePostProcessVolume_SetSaturation_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGamePostProcessVolume_SetSaturation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGamePostProcessVolume_SetSaturation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGamePostProcessVolume, nullptr, "SetSaturation", nullptr, nullptr, Z_Construct_UFunction_AGamePostProcessVolume_SetSaturation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGamePostProcessVolume_SetSaturation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGamePostProcessVolume_SetSaturation_Statics::GamePostProcessVolume_eventSetSaturation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGamePostProcessVolume_SetSaturation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGamePostProcessVolume_SetSaturation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGamePostProcessVolume_SetSaturation_Statics::GamePostProcessVolume_eventSetSaturation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGamePostProcessVolume_SetSaturation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGamePostProcessVolume_SetSaturation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGamePostProcessVolume::execSetSaturation)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSaturation(Z_Param_Value);
	P_NATIVE_END;
}
// End Class AGamePostProcessVolume Function SetSaturation

// Begin Class AGamePostProcessVolume
void AGamePostProcessVolume::StaticRegisterNativesAGamePostProcessVolume()
{
	UClass* Class = AGamePostProcessVolume::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetSaturation", &AGamePostProcessVolume::execSetSaturation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGamePostProcessVolume);
UClass* Z_Construct_UClass_AGamePostProcessVolume_NoRegister()
{
	return AGamePostProcessVolume::StaticClass();
}
struct Z_Construct_UClass_AGamePostProcessVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "PostProcessVolume" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Advanced Collision Volume Brush Attachment Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "GamePostProcessVolume.h" },
		{ "ModuleRelativePath", "GamePostProcessVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGamePostProcessVolume_SetSaturation, "SetSaturation" }, // 4224949066
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGamePostProcessVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGamePostProcessVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APostProcessVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_Quiet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGamePostProcessVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGamePostProcessVolume_Statics::ClassParams = {
	&AGamePostProcessVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGamePostProcessVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_AGamePostProcessVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGamePostProcessVolume()
{
	if (!Z_Registration_Info_UClass_AGamePostProcessVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGamePostProcessVolume.OuterSingleton, Z_Construct_UClass_AGamePostProcessVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGamePostProcessVolume.OuterSingleton;
}
template<> QUIET_API UClass* StaticClass<AGamePostProcessVolume>()
{
	return AGamePostProcessVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGamePostProcessVolume);
AGamePostProcessVolume::~AGamePostProcessVolume() {}
// End Class AGamePostProcessVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_GamePostProcessVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGamePostProcessVolume, AGamePostProcessVolume::StaticClass, TEXT("AGamePostProcessVolume"), &Z_Registration_Info_UClass_AGamePostProcessVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGamePostProcessVolume), 3228095941U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_GamePostProcessVolume_h_2308810500(TEXT("/Script/Quiet"),
	Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_GamePostProcessVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_GamePostProcessVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
