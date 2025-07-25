// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StreamlineSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STREAMLINERHI_StreamlineSettings_generated_h
#error "StreamlineSettings.generated.h already included, missing '#pragma once' in StreamlineSettings.h"
#endif
#define STREAMLINERHI_StreamlineSettings_generated_h

#define FID_Quiet_Plugins_Streamline_Source_StreamlineRHI_Public_StreamlineSettings_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStreamlineOverrideSettings(); \
	friend struct Z_Construct_UClass_UStreamlineOverrideSettings_Statics; \
public: \
	DECLARE_CLASS(UStreamlineOverrideSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_ProjectUserConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/StreamlineRHI"), NO_API) \
	DECLARE_SERIALIZER(UStreamlineOverrideSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Quiet_Plugins_Streamline_Source_StreamlineRHI_Public_StreamlineSettings_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStreamlineOverrideSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStreamlineOverrideSettings(UStreamlineOverrideSettings&&); \
	UStreamlineOverrideSettings(const UStreamlineOverrideSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStreamlineOverrideSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStreamlineOverrideSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStreamlineOverrideSettings) \
	NO_API virtual ~UStreamlineOverrideSettings();


#define FID_Quiet_Plugins_Streamline_Source_StreamlineRHI_Public_StreamlineSettings_h_27_PROLOG
#define FID_Quiet_Plugins_Streamline_Source_StreamlineRHI_Public_StreamlineSettings_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Plugins_Streamline_Source_StreamlineRHI_Public_StreamlineSettings_h_30_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Plugins_Streamline_Source_StreamlineRHI_Public_StreamlineSettings_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STREAMLINERHI_API UClass* StaticClass<class UStreamlineOverrideSettings>();

#define FID_Quiet_Plugins_Streamline_Source_StreamlineRHI_Public_StreamlineSettings_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStreamlineSettings(); \
	friend struct Z_Construct_UClass_UStreamlineSettings_Statics; \
public: \
	DECLARE_CLASS(UStreamlineSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/StreamlineRHI"), NO_API) \
	DECLARE_SERIALIZER(UStreamlineSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Quiet_Plugins_Streamline_Source_StreamlineRHI_Public_StreamlineSettings_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStreamlineSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStreamlineSettings(UStreamlineSettings&&); \
	UStreamlineSettings(const UStreamlineSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStreamlineSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStreamlineSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStreamlineSettings) \
	NO_API virtual ~UStreamlineSettings();


#define FID_Quiet_Plugins_Streamline_Source_StreamlineRHI_Public_StreamlineSettings_h_50_PROLOG
#define FID_Quiet_Plugins_Streamline_Source_StreamlineRHI_Public_StreamlineSettings_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Plugins_Streamline_Source_StreamlineRHI_Public_StreamlineSettings_h_53_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Plugins_Streamline_Source_StreamlineRHI_Public_StreamlineSettings_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STREAMLINERHI_API UClass* StaticClass<class UStreamlineSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Plugins_Streamline_Source_StreamlineRHI_Public_StreamlineSettings_h


#define FOREACH_ENUM_ESTREAMLINESETTINGOVERRIDE(op) \
	op(EStreamlineSettingOverride::Enabled) \
	op(EStreamlineSettingOverride::Disabled) \
	op(EStreamlineSettingOverride::UseProjectSettings) 

enum class EStreamlineSettingOverride : uint8;
template<> struct TIsUEnumClass<EStreamlineSettingOverride> { enum { Value = true }; };
template<> STREAMLINERHI_API UEnum* StaticEnum<EStreamlineSettingOverride>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
