// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkSpatialAudioVolume.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkSpatialAudioVolume_generated_h
#error "AkSpatialAudioVolume.generated.h already included, missing '#pragma once' in AkSpatialAudioVolume.h"
#endif
#define AKAUDIO_AkSpatialAudioVolume_generated_h

#if WITH_EDITOR
#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkSpatialAudioVolume_h_59_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execGetCollisionChannel);
#else // WITH_EDITOR
#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkSpatialAudioVolume_h_59_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkSpatialAudioVolume_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAkSpatialAudioVolume(); \
	friend struct Z_Construct_UClass_AAkSpatialAudioVolume_Statics; \
public: \
	DECLARE_CLASS(AAkSpatialAudioVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(AAkSpatialAudioVolume)


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkSpatialAudioVolume_h_59_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAkSpatialAudioVolume(AAkSpatialAudioVolume&&); \
	AAkSpatialAudioVolume(const AAkSpatialAudioVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAkSpatialAudioVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAkSpatialAudioVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAkSpatialAudioVolume) \
	NO_API virtual ~AAkSpatialAudioVolume();


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkSpatialAudioVolume_h_56_PROLOG
#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkSpatialAudioVolume_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkSpatialAudioVolume_h_59_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkSpatialAudioVolume_h_59_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkSpatialAudioVolume_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class AAkSpatialAudioVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkSpatialAudioVolume_h


#define FOREACH_ENUM_EAKFITTOGEOMETRYMODE(op) \
	op(EAkFitToGeometryMode::OrientedBox) \
	op(EAkFitToGeometryMode::AlignedBox) \
	op(EAkFitToGeometryMode::ConvexPolyhedron) 

enum class EAkFitToGeometryMode : uint32;
template<> struct TIsUEnumClass<EAkFitToGeometryMode> { enum { Value = true }; };
template<> AKAUDIO_API UEnum* StaticEnum<EAkFitToGeometryMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
