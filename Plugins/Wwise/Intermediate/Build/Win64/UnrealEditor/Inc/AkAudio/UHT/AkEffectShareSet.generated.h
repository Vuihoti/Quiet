// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkEffectShareSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkEffectShareSet_generated_h
#error "AkEffectShareSet.generated.h already included, missing '#pragma once' in AkEffectShareSet.h"
#endif
#define AKAUDIO_AkEffectShareSet_generated_h

#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkEffectShareSet_h_31_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAkEffectShareSet, NO_API)


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkEffectShareSet_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkEffectShareSet(); \
	friend struct Z_Construct_UClass_UAkEffectShareSet_Statics; \
public: \
	DECLARE_CLASS(UAkEffectShareSet, UAkAudioType, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkEffectShareSet) \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkEffectShareSet_h_31_ARCHIVESERIALIZER


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkEffectShareSet_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkEffectShareSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAkEffectShareSet(UAkEffectShareSet&&); \
	UAkEffectShareSet(const UAkEffectShareSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkEffectShareSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkEffectShareSet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkEffectShareSet) \
	NO_API virtual ~UAkEffectShareSet();


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkEffectShareSet_h_28_PROLOG
#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkEffectShareSet_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkEffectShareSet_h_31_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkEffectShareSet_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkEffectShareSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkEffectShareSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
