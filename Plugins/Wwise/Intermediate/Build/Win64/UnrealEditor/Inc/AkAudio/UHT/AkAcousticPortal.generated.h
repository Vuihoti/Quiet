// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkAcousticPortal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
enum class AkAcousticPortalState : uint8;
#ifdef AKAUDIO_AkAcousticPortal_generated_h
#error "AkAcousticPortal.generated.h already included, missing '#pragma once' in AkAcousticPortal.h"
#endif
#define AKAUDIO_AkAcousticPortal_generated_h

#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetDynamic); \
	DECLARE_FUNCTION(execPortalPlacementValid); \
	DECLARE_FUNCTION(execGetPrimitiveParent); \
	DECLARE_FUNCTION(execSetPortalOcclusion); \
	DECLARE_FUNCTION(execGetPortalOcclusion); \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execDisablePortal); \
	DECLARE_FUNCTION(execEnablePortal);


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkPortalComponent(); \
	friend struct Z_Construct_UClass_UAkPortalComponent_Statics; \
public: \
	DECLARE_CLASS(UAkPortalComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkPortalComponent)


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAkPortalComponent(UAkPortalComponent&&); \
	UAkPortalComponent(const UAkPortalComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkPortalComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkPortalComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkPortalComponent) \
	NO_API virtual ~UAkPortalComponent();


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_36_PROLOG
#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_39_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkPortalComponent>();

#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_230_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execDisablePortal); \
	DECLARE_FUNCTION(execEnablePortal);


#if WITH_EDITOR
#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_230_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execGetCollisionChannel);
#else // WITH_EDITOR
#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_230_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_230_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AAkAcousticPortal, NO_API)


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_230_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAkAcousticPortal(); \
	friend struct Z_Construct_UClass_AAkAcousticPortal_Statics; \
public: \
	DECLARE_CLASS(AAkAcousticPortal, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(AAkAcousticPortal) \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_230_ARCHIVESERIALIZER


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_230_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAkAcousticPortal(AAkAcousticPortal&&); \
	AAkAcousticPortal(const AAkAcousticPortal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAkAcousticPortal); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAkAcousticPortal); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAkAcousticPortal) \
	NO_API virtual ~AAkAcousticPortal();


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_227_PROLOG
#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_230_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_230_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_230_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_230_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_230_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class AAkAcousticPortal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
