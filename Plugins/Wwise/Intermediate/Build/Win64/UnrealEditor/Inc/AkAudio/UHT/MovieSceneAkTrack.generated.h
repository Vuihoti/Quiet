// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneAkTrack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_MovieSceneAkTrack_generated_h
#error "MovieSceneAkTrack.generated.h already included, missing '#pragma once' in MovieSceneAkTrack.h"
#endif
#define AKAUDIO_MovieSceneAkTrack_generated_h

#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkTrack_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneAkTrack(); \
	friend struct Z_Construct_UClass_UMovieSceneAkTrack_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneAkTrack, UMovieSceneTrack, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AkAudio"), AKAUDIO_API) \
	DECLARE_SERIALIZER(UMovieSceneAkTrack)


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkTrack_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AKAUDIO_API UMovieSceneAkTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneAkTrack(UMovieSceneAkTrack&&); \
	UMovieSceneAkTrack(const UMovieSceneAkTrack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AKAUDIO_API, UMovieSceneAkTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneAkTrack); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneAkTrack) \
	AKAUDIO_API virtual ~UMovieSceneAkTrack();


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkTrack_h_30_PROLOG
#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkTrack_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkTrack_h_34_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkTrack_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UMovieSceneAkTrack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkTrack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
