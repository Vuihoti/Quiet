// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkStateValue.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkStateValue_generated_h
#error "AkStateValue.generated.h already included, missing '#pragma once' in AkStateValue.h"
#endif
#define AKAUDIO_AkStateValue_generated_h

#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkStateValue_h_26_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAkStateValue, NO_API)


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkStateValue_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkStateValue(); \
	friend struct Z_Construct_UClass_UAkStateValue_Statics; \
public: \
	DECLARE_CLASS(UAkStateValue, UAkGroupValue, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkStateValue) \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkStateValue_h_26_ARCHIVESERIALIZER


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkStateValue_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkStateValue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAkStateValue(UAkStateValue&&); \
	UAkStateValue(const UAkStateValue&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkStateValue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkStateValue); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkStateValue) \
	NO_API virtual ~UAkStateValue();


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkStateValue_h_23_PROLOG
#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkStateValue_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkStateValue_h_26_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkStateValue_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkStateValue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkStateValue_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
