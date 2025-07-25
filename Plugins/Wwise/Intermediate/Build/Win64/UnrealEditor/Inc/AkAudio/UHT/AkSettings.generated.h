// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkSettings_generated_h
#error "AkSettings.generated.h already included, missing '#pragma once' in AkSettings.h"
#endif
#define AKAUDIO_AkSettings_generated_h

#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_64_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkGeometrySurfacePropertiesToMap>();

#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_93_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWwiseGeometrySurfacePropertiesRow_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FWwiseGeometrySurfacePropertiesRow>();

#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_121_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWwiseDecayAuxBusRow_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FWwiseDecayAuxBusRow>();

#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_143_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkAcousticTextureParams>();

#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_168_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkSettings(); \
	friend struct Z_Construct_UClass_UAkSettings_Statics; \
public: \
	DECLARE_CLASS(UAkSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_168_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAkSettings(UAkSettings&&); \
	UAkSettings(const UAkSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkSettings)


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_165_PROLOG
#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_168_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_168_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_168_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h


#define FOREACH_ENUM_EAKCOLLISIONCHANNEL(op) \
	op(EAKCC_WorldStatic) \
	op(EAKCC_WorldDynamic) \
	op(EAKCC_Pawn) \
	op(EAKCC_Visibility) \
	op(EAKCC_Camera) \
	op(EAKCC_PhysicsBody) \
	op(EAKCC_Vehicle) \
	op(EAKCC_Destructible) \
	op(EAKCC_UseIntegrationSettingsDefault) 
#define FOREACH_ENUM_EAKUNREALAUDIOROUTING(op) \
	op(EAkUnrealAudioRouting::Custom) \
	op(EAkUnrealAudioRouting::Separate) \
	op(EAkUnrealAudioRouting::AudioLink) \
	op(EAkUnrealAudioRouting::AudioMixer) \
	op(EAkUnrealAudioRouting::EnableWwiseOnly) \
	op(EAkUnrealAudioRouting::EnableUnrealOnly) 

enum class EAkUnrealAudioRouting;
template<> struct TIsUEnumClass<EAkUnrealAudioRouting> { enum { Value = true }; };
template<> AKAUDIO_API UEnum* StaticEnum<EAkUnrealAudioRouting>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
