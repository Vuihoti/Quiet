// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneAkAudioEventTrack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_MovieSceneAkAudioEventTrack_generated_h
#error "MovieSceneAkAudioEventTrack.generated.h already included, missing '#pragma once' in MovieSceneAkAudioEventTrack.h"
#endif
#define AKAUDIO_MovieSceneAkAudioEventTrack_generated_h

#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventTrack_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneAkAudioEventTrack(); \
	friend struct Z_Construct_UClass_UMovieSceneAkAudioEventTrack_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneAkAudioEventTrack, UMovieSceneAkTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), AKAUDIO_API) \
	DECLARE_SERIALIZER(UMovieSceneAkAudioEventTrack) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneAkAudioEventTrack*>(this); }


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventTrack_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneAkAudioEventTrack(UMovieSceneAkAudioEventTrack&&); \
	UMovieSceneAkAudioEventTrack(const UMovieSceneAkAudioEventTrack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AKAUDIO_API, UMovieSceneAkAudioEventTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneAkAudioEventTrack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieSceneAkAudioEventTrack) \
	AKAUDIO_API virtual ~UMovieSceneAkAudioEventTrack();


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventTrack_h_31_PROLOG
#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventTrack_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventTrack_h_36_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventTrack_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UMovieSceneAkAudioEventTrack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventTrack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
