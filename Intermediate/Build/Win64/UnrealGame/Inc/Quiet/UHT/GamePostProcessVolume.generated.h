// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GamePostProcessVolume.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUIET_GamePostProcessVolume_generated_h
#error "GamePostProcessVolume.generated.h already included, missing '#pragma once' in GamePostProcessVolume.h"
#endif
#define QUIET_GamePostProcessVolume_generated_h

#define FID_Quiet_Source_Quiet_GamePostProcessVolume_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSaturation);


#define FID_Quiet_Source_Quiet_GamePostProcessVolume_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGamePostProcessVolume(); \
	friend struct Z_Construct_UClass_AGamePostProcessVolume_Statics; \
public: \
	DECLARE_CLASS(AGamePostProcessVolume, APostProcessVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Quiet"), NO_API) \
	DECLARE_SERIALIZER(AGamePostProcessVolume)


#define FID_Quiet_Source_Quiet_GamePostProcessVolume_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGamePostProcessVolume(AGamePostProcessVolume&&); \
	AGamePostProcessVolume(const AGamePostProcessVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGamePostProcessVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGamePostProcessVolume); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGamePostProcessVolume) \
	NO_API virtual ~AGamePostProcessVolume();


#define FID_Quiet_Source_Quiet_GamePostProcessVolume_h_12_PROLOG
#define FID_Quiet_Source_Quiet_GamePostProcessVolume_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Source_Quiet_GamePostProcessVolume_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Quiet_Source_Quiet_GamePostProcessVolume_h_15_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Source_Quiet_GamePostProcessVolume_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUIET_API UClass* StaticClass<class AGamePostProcessVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Source_Quiet_GamePostProcessVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
