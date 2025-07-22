// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Platforms/AkPlatform_tvOS/AkTVOSInitializationSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkTVOSInitializationSettings_generated_h
#error "AkTVOSInitializationSettings.generated.h already included, missing '#pragma once' in AkTVOSInitializationSettings.h"
#endif
#define AKAUDIO_AkTVOSInitializationSettings_generated_h

#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_tvOS_AkTVOSInitializationSettings_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkTVOSAdvancedInitializationSettings_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FAkAdvancedInitializationSettingsWithMultiCoreRendering Super;


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkTVOSAdvancedInitializationSettings>();

#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_tvOS_AkTVOSInitializationSettings_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkTVOSInitializationSettings(); \
	friend struct Z_Construct_UClass_UAkTVOSInitializationSettings_Statics; \
public: \
	DECLARE_CLASS(UAkTVOSInitializationSettings, UAkPlatformInitializationSettingsBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkTVOSInitializationSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_tvOS_AkTVOSInitializationSettings_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAkTVOSInitializationSettings(UAkTVOSInitializationSettings&&); \
	UAkTVOSInitializationSettings(const UAkTVOSInitializationSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkTVOSInitializationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkTVOSInitializationSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkTVOSInitializationSettings) \
	NO_API virtual ~UAkTVOSInitializationSettings();


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_tvOS_AkTVOSInitializationSettings_h_41_PROLOG
#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_tvOS_AkTVOSInitializationSettings_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_tvOS_AkTVOSInitializationSettings_h_44_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_tvOS_AkTVOSInitializationSettings_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkTVOSInitializationSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_tvOS_AkTVOSInitializationSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
