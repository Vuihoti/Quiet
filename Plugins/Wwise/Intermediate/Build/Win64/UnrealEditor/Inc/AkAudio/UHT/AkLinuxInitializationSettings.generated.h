// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Platforms/AkPlatform_Linux/AkLinuxInitializationSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkLinuxInitializationSettings_generated_h
#error "AkLinuxInitializationSettings.generated.h already included, missing '#pragma once' in AkLinuxInitializationSettings.h"
#endif
#define AKAUDIO_AkLinuxInitializationSettings_generated_h

#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxInitializationSettings_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMigrateMultiCoreRendering);


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxInitializationSettings_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkLinuxInitializationSettings(); \
	friend struct Z_Construct_UClass_UAkLinuxInitializationSettings_Statics; \
public: \
	DECLARE_CLASS(UAkLinuxInitializationSettings, UAkPlatformInitializationSettingsBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkLinuxInitializationSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxInitializationSettings_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAkLinuxInitializationSettings(UAkLinuxInitializationSettings&&); \
	UAkLinuxInitializationSettings(const UAkLinuxInitializationSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkLinuxInitializationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkLinuxInitializationSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkLinuxInitializationSettings) \
	NO_API virtual ~UAkLinuxInitializationSettings();


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxInitializationSettings_h_26_PROLOG
#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxInitializationSettings_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxInitializationSettings_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxInitializationSettings_h_29_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxInitializationSettings_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkLinuxInitializationSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxInitializationSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
