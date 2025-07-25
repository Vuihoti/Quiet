// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Platforms/AkPlatform_LinuxArm64/AkLinuxArm64InitializationSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkLinuxArm64InitializationSettings_generated_h
#error "AkLinuxArm64InitializationSettings.generated.h already included, missing '#pragma once' in AkLinuxArm64InitializationSettings.h"
#endif
#define AKAUDIO_AkLinuxArm64InitializationSettings_generated_h

#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_LinuxArm64_AkLinuxArm64InitializationSettings_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMigrateMultiCoreRendering);


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_LinuxArm64_AkLinuxArm64InitializationSettings_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkLinuxArm64InitializationSettings(); \
	friend struct Z_Construct_UClass_UAkLinuxArm64InitializationSettings_Statics; \
public: \
	DECLARE_CLASS(UAkLinuxArm64InitializationSettings, UAkPlatformInitializationSettingsBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkLinuxArm64InitializationSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_LinuxArm64_AkLinuxArm64InitializationSettings_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAkLinuxArm64InitializationSettings(UAkLinuxArm64InitializationSettings&&); \
	UAkLinuxArm64InitializationSettings(const UAkLinuxArm64InitializationSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkLinuxArm64InitializationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkLinuxArm64InitializationSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkLinuxArm64InitializationSettings) \
	NO_API virtual ~UAkLinuxArm64InitializationSettings();


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_LinuxArm64_AkLinuxArm64InitializationSettings_h_26_PROLOG
#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_LinuxArm64_AkLinuxArm64InitializationSettings_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_LinuxArm64_AkLinuxArm64InitializationSettings_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_LinuxArm64_AkLinuxArm64InitializationSettings_h_29_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_LinuxArm64_AkLinuxArm64InitializationSettings_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkLinuxArm64InitializationSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_LinuxArm64_AkLinuxArm64InitializationSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
