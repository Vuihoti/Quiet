// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkTrigger.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkTrigger_generated_h
#error "AkTrigger.generated.h already included, missing '#pragma once' in AkTrigger.h"
#endif
#define AKAUDIO_AkTrigger_generated_h

#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkTrigger_h_31_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAkTrigger, NO_API)


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkTrigger_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkTrigger(); \
	friend struct Z_Construct_UClass_UAkTrigger_Statics; \
public: \
	DECLARE_CLASS(UAkTrigger, UAkAudioType, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkTrigger) \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkTrigger_h_31_ARCHIVESERIALIZER


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkTrigger_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkTrigger(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAkTrigger(UAkTrigger&&); \
	UAkTrigger(const UAkTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkTrigger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkTrigger); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkTrigger) \
	NO_API virtual ~UAkTrigger();


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkTrigger_h_28_PROLOG
#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkTrigger_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkTrigger_h_31_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkTrigger_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkTrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkTrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
