// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkReverbVolume.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkReverbVolume_generated_h
#error "AkReverbVolume.generated.h already included, missing '#pragma once' in AkReverbVolume.h"
#endif
#define AKAUDIO_AkReverbVolume_generated_h

#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkReverbVolume_h_33_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AAkReverbVolume, NO_API)


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkReverbVolume_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAkReverbVolume(); \
	friend struct Z_Construct_UClass_AAkReverbVolume_Statics; \
public: \
	DECLARE_CLASS(AAkReverbVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(AAkReverbVolume) \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkReverbVolume_h_33_ARCHIVESERIALIZER


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkReverbVolume_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAkReverbVolume(AAkReverbVolume&&); \
	AAkReverbVolume(const AAkReverbVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAkReverbVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAkReverbVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAkReverbVolume) \
	NO_API virtual ~AAkReverbVolume();


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkReverbVolume_h_30_PROLOG
#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkReverbVolume_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkReverbVolume_h_33_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkReverbVolume_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class AAkReverbVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkReverbVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
