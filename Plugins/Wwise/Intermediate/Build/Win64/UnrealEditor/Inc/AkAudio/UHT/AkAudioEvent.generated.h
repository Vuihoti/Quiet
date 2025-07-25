// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkAudioEvent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAkComponent;
class UAkGameObject;
class UObject;
enum class AkActionOnEventType : uint8;
enum class EAkCurveInterpolation : uint8;
struct FLatentActionInfo;
#ifdef AKAUDIO_AkAudioEvent_generated_h
#error "AkAudioEvent.generated.h already included, missing '#pragma once' in AkAudioEvent.h"
#endif
#define AKAUDIO_AkAudioEvent_generated_h

#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execExecuteAction); \
	DECLARE_FUNCTION(execPostAtLocation); \
	DECLARE_FUNCTION(execPostOnGameObjectAndWait); \
	DECLARE_FUNCTION(execPostOnComponentAndWait); \
	DECLARE_FUNCTION(execPostOnActorAndWait); \
	DECLARE_FUNCTION(execPostOnGameObject); \
	DECLARE_FUNCTION(execPostOnComponent); \
	DECLARE_FUNCTION(execPostOnActor);


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_41_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAkAudioEvent, NO_API)


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkAudioEvent(); \
	friend struct Z_Construct_UClass_UAkAudioEvent_Statics; \
public: \
	DECLARE_CLASS(UAkAudioEvent, UAkAudioType, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkAudioEvent) \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_41_ARCHIVESERIALIZER


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkAudioEvent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAkAudioEvent(UAkAudioEvent&&); \
	UAkAudioEvent(const UAkAudioEvent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkAudioEvent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkAudioEvent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkAudioEvent) \
	NO_API virtual ~UAkAudioEvent();


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_38_PROLOG
#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_41_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkAudioEvent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
