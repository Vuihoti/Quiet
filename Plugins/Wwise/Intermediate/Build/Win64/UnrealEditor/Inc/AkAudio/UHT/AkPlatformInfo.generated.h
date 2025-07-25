// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Platforms/AkPlatformInfo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkPlatformInfo_generated_h
#error "AkPlatformInfo.generated.h already included, missing '#pragma once' in AkPlatformInfo.h"
#endif
#define AKAUDIO_AkPlatformInfo_generated_h

#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatformInfo_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkPlatformInfo(); \
	friend struct Z_Construct_UClass_UAkPlatformInfo_Statics; \
public: \
	DECLARE_CLASS(UAkPlatformInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkPlatformInfo)


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatformInfo_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkPlatformInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAkPlatformInfo(UAkPlatformInfo&&); \
	UAkPlatformInfo(const UAkPlatformInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkPlatformInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkPlatformInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkPlatformInfo) \
	NO_API virtual ~UAkPlatformInfo();


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatformInfo_h_30_PROLOG
#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatformInfo_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatformInfo_h_33_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatformInfo_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkPlatformInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatformInfo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
