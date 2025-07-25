// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkAudioInputComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAudioInputComponent() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioInputComponent();
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioInputComponent_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

// Begin Class UAkAudioInputComponent Function PostAssociatedAudioInputEvent
struct Z_Construct_UFunction_UAkAudioInputComponent_PostAssociatedAudioInputEvent_Statics
{
	struct AkAudioInputComponent_eventPostAssociatedAudioInputEvent_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkAudioInputComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Posts this component's AkAudioEvent to Wwise along with associated AudioSamples callback and AudioFormat callback, using this component as the game object source\n    *\n    */" },
#endif
		{ "ModuleRelativePath", "Classes/AkAudioInputComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Posts this component's AkAudioEvent to Wwise along with associated AudioSamples callback and AudioFormat callback, using this component as the game object source" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkAudioInputComponent_PostAssociatedAudioInputEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkAudioInputComponent_eventPostAssociatedAudioInputEvent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkAudioInputComponent_PostAssociatedAudioInputEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioInputComponent_PostAssociatedAudioInputEvent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioInputComponent_PostAssociatedAudioInputEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkAudioInputComponent_PostAssociatedAudioInputEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkAudioInputComponent, nullptr, "PostAssociatedAudioInputEvent", nullptr, nullptr, Z_Construct_UFunction_UAkAudioInputComponent_PostAssociatedAudioInputEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioInputComponent_PostAssociatedAudioInputEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkAudioInputComponent_PostAssociatedAudioInputEvent_Statics::AkAudioInputComponent_eventPostAssociatedAudioInputEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioInputComponent_PostAssociatedAudioInputEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkAudioInputComponent_PostAssociatedAudioInputEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkAudioInputComponent_PostAssociatedAudioInputEvent_Statics::AkAudioInputComponent_eventPostAssociatedAudioInputEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkAudioInputComponent_PostAssociatedAudioInputEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkAudioInputComponent_PostAssociatedAudioInputEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkAudioInputComponent::execPostAssociatedAudioInputEvent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->PostAssociatedAudioInputEvent();
	P_NATIVE_END;
}
// End Class UAkAudioInputComponent Function PostAssociatedAudioInputEvent

// Begin Class UAkAudioInputComponent
void UAkAudioInputComponent::StaticRegisterNativesUAkAudioInputComponent()
{
	UClass* Class = UAkAudioInputComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PostAssociatedAudioInputEvent", &UAkAudioInputComponent::execPostAssociatedAudioInputEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkAudioInputComponent);
UClass* Z_Construct_UClass_UAkAudioInputComponent_NoRegister()
{
	return UAkAudioInputComponent::StaticClass();
}
struct Z_Construct_UClass_UAkAudioInputComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "AkComponent AkComponent" },
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*------------------------------------------------------------------------------------\nUAkAudioInputComponent\n------------------------------------------------------------------------------------*/" },
#endif
		{ "HideCategories", "Transform Rendering Mobility LOD Component Activation Transform Rendering Mobility LOD Component Activation Transform Rendering Mobility LOD Component Activation Trigger PhysicsVolume" },
		{ "IncludePath", "AkAudioInputComponent.h" },
		{ "ModuleRelativePath", "Classes/AkAudioInputComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UAkAudioInputComponent" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkAudioInputComponent_PostAssociatedAudioInputEvent, "PostAssociatedAudioInputEvent" }, // 3194268709
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAudioInputComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAkAudioInputComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioInputComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAudioInputComponent_Statics::ClassParams = {
	&UAkAudioInputComponent::StaticClass,
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
	0x00B000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioInputComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkAudioInputComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkAudioInputComponent()
{
	if (!Z_Registration_Info_UClass_UAkAudioInputComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAudioInputComponent.OuterSingleton, Z_Construct_UClass_UAkAudioInputComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkAudioInputComponent.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UAkAudioInputComponent>()
{
	return UAkAudioInputComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAudioInputComponent);
UAkAudioInputComponent::~UAkAudioInputComponent() {}
// End Class UAkAudioInputComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkAudioInputComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkAudioInputComponent, UAkAudioInputComponent::StaticClass, TEXT("UAkAudioInputComponent"), &Z_Registration_Info_UClass_UAkAudioInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAudioInputComponent), 2783869281U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkAudioInputComponent_h_3146640499(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkAudioInputComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkAudioInputComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
