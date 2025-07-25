// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/BlueprintNodes/PostEventAsync.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePostEventAsync() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UPostEventAsync();
AKAUDIO_API UClass* Z_Construct_UClass_UPostEventAsync_NoRegister();
AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature();
AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncOutputPin__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

// Begin Delegate FPostEventAsyncOutputPin
struct Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncOutputPin__DelegateSignature_Statics
{
	struct _Script_AkAudio_eventPostEventAsyncOutputPin_Parms
	{
		int32 PlayingID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/BlueprintNodes/PostEventAsync.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayingID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncOutputPin__DelegateSignature_Statics::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AkAudio_eventPostEventAsyncOutputPin_Parms, PlayingID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncOutputPin__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncOutputPin__DelegateSignature_Statics::NewProp_PlayingID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncOutputPin__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncOutputPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AkAudio, nullptr, "PostEventAsyncOutputPin__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncOutputPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncOutputPin__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncOutputPin__DelegateSignature_Statics::_Script_AkAudio_eventPostEventAsyncOutputPin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncOutputPin__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncOutputPin__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncOutputPin__DelegateSignature_Statics::_Script_AkAudio_eventPostEventAsyncOutputPin_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncOutputPin__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncOutputPin__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FPostEventAsyncOutputPin_DelegateWrapper(const FMulticastScriptDelegate& PostEventAsyncOutputPin, int32 PlayingID)
{
	struct _Script_AkAudio_eventPostEventAsyncOutputPin_Parms
	{
		int32 PlayingID;
	};
	_Script_AkAudio_eventPostEventAsyncOutputPin_Parms Parms;
	Parms.PlayingID=PlayingID;
	PostEventAsyncOutputPin.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FPostEventAsyncOutputPin

// Begin Class UPostEventAsync Function PollPostEventFuture
struct Z_Construct_UFunction_UPostEventAsync_PollPostEventFuture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/BlueprintNodes/PostEventAsync.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPostEventAsync_PollPostEventFuture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPostEventAsync, nullptr, "PollPostEventFuture", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPostEventAsync_PollPostEventFuture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPostEventAsync_PollPostEventFuture_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPostEventAsync_PollPostEventFuture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPostEventAsync_PollPostEventFuture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPostEventAsync::execPollPostEventFuture)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PollPostEventFuture();
	P_NATIVE_END;
}
// End Class UPostEventAsync Function PollPostEventFuture

// Begin Class UPostEventAsync Function PostEventAsync
struct Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics
{
	struct PostEventAsync_eventPostEventAsync_Parms
	{
		const UObject* WorldContextObject;
		UAkAudioEvent* AkEvent;
		AActor* Actor;
		int32 CallbackMask;
		FScriptDelegate PostEventCallback;
		bool bStopWhenAttachedToDestroyed;
		UPostEventAsync* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "AutoCreateRefTerm", "PostEventCallback,ExternalSources" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Audiokinetic|Actor" },
		{ "CPP_Default_bStopWhenAttachedToDestroyed", "true" },
		{ "ModuleRelativePath", "Classes/BlueprintNodes/PostEventAsync.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CallbackMask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/AkAudio.EAkCallbackType" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostEventCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CallbackMask;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_PostEventCallback;
	static void NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAttachedToDestroyed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PostEventAsync_eventPostEventAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PostEventAsync_eventPostEventAsync_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PostEventAsync_eventPostEventAsync_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_CallbackMask = { "CallbackMask", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PostEventAsync_eventPostEventAsync_Parms, CallbackMask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CallbackMask_MetaData), NewProp_CallbackMask_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_PostEventCallback = { "PostEventCallback", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PostEventAsync_eventPostEventAsync_Parms, PostEventCallback), Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostEventCallback_MetaData), NewProp_PostEventCallback_MetaData) }; // 1115456951
void Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj)
{
	((PostEventAsync_eventPostEventAsync_Parms*)Obj)->bStopWhenAttachedToDestroyed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_bStopWhenAttachedToDestroyed = { "bStopWhenAttachedToDestroyed", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PostEventAsync_eventPostEventAsync_Parms), &Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PostEventAsync_eventPostEventAsync_Parms, ReturnValue), Z_Construct_UClass_UPostEventAsync_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_AkEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_CallbackMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_PostEventCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_bStopWhenAttachedToDestroyed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPostEventAsync, nullptr, "PostEventAsync", nullptr, nullptr, Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::PostEventAsync_eventPostEventAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::PostEventAsync_eventPostEventAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPostEventAsync_PostEventAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPostEventAsync::execPostEventAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_PROPERTY(FIntProperty,Z_Param_CallbackMask);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PostEventCallback);
	P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPostEventAsync**)Z_Param__Result=UPostEventAsync::PostEventAsync(Z_Param_WorldContextObject,Z_Param_AkEvent,Z_Param_Actor,Z_Param_CallbackMask,FOnAkPostEventCallback(Z_Param_Out_PostEventCallback),Z_Param_bStopWhenAttachedToDestroyed);
	P_NATIVE_END;
}
// End Class UPostEventAsync Function PostEventAsync

// Begin Class UPostEventAsync
void UPostEventAsync::StaticRegisterNativesUPostEventAsync()
{
	UClass* Class = UPostEventAsync::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PollPostEventFuture", &UPostEventAsync::execPollPostEventFuture },
		{ "PostEventAsync", &UPostEventAsync::execPostEventAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPostEventAsync);
UClass* Z_Construct_UClass_UPostEventAsync_NoRegister()
{
	return UPostEventAsync::StaticClass();
}
struct Z_Construct_UClass_UPostEventAsync_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintNodes/PostEventAsync.h" },
		{ "ModuleRelativePath", "Classes/BlueprintNodes/PostEventAsync.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BlueprintNodes/PostEventAsync.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPostEventAsync_PollPostEventFuture, "PollPostEventFuture" }, // 2700469870
		{ &Z_Construct_UFunction_UPostEventAsync_PostEventAsync, "PostEventAsync" }, // 3208524602
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPostEventAsync>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPostEventAsync_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPostEventAsync, Completed), Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncOutputPin__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Completed_MetaData), NewProp_Completed_MetaData) }; // 748482191
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPostEventAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostEventAsync_Statics::NewProp_Completed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPostEventAsync_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPostEventAsync_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPostEventAsync_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPostEventAsync_Statics::ClassParams = {
	&UPostEventAsync::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPostEventAsync_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPostEventAsync_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPostEventAsync_Statics::Class_MetaDataParams), Z_Construct_UClass_UPostEventAsync_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPostEventAsync()
{
	if (!Z_Registration_Info_UClass_UPostEventAsync.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPostEventAsync.OuterSingleton, Z_Construct_UClass_UPostEventAsync_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPostEventAsync.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UPostEventAsync>()
{
	return UPostEventAsync::StaticClass();
}
UPostEventAsync::UPostEventAsync(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPostEventAsync);
UPostEventAsync::~UPostEventAsync() {}
// End Class UPostEventAsync

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPostEventAsync, UPostEventAsync::StaticClass, TEXT("UPostEventAsync"), &Z_Registration_Info_UClass_UPostEventAsync, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPostEventAsync), 1839500981U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_2469113125(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
