// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkInitBank.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkInitBank_generated_h
#error "AkInitBank.generated.h already included, missing '#pragma once' in AkInitBank.h"
#endif
#define AKAUDIO_AkInitBank_generated_h

#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkInitBank_h_34_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAkInitBank, NO_API)


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkInitBank_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkInitBank(); \
	friend struct Z_Construct_UClass_UAkInitBank_Statics; \
public: \
	DECLARE_CLASS(UAkInitBank, UAkAudioType, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkInitBank) \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkInitBank_h_34_ARCHIVESERIALIZER


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkInitBank_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAkInitBank(UAkInitBank&&); \
	UAkInitBank(const UAkInitBank&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkInitBank); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkInitBank); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAkInitBank) \
	NO_API virtual ~UAkInitBank();


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkInitBank_h_31_PROLOG
#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkInitBank_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkInitBank_h_34_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkInitBank_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkInitBank>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkInitBank_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
