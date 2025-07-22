// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Archive/SaveGameSetting.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUIET_SaveGameSetting_generated_h
#error "SaveGameSetting.generated.h already included, missing '#pragma once' in SaveGameSetting.h"
#endif
#define QUIET_SaveGameSetting_generated_h

#define FID_Quiet_Source_Quiet_Archive_SaveGameSetting_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveGameSetting(); \
	friend struct Z_Construct_UClass_USaveGameSetting_Statics; \
public: \
	DECLARE_CLASS(USaveGameSetting, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Quiet"), NO_API) \
	DECLARE_SERIALIZER(USaveGameSetting)


#define FID_Quiet_Source_Quiet_Archive_SaveGameSetting_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveGameSetting(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USaveGameSetting(USaveGameSetting&&); \
	USaveGameSetting(const USaveGameSetting&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveGameSetting); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveGameSetting); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveGameSetting) \
	NO_API virtual ~USaveGameSetting();


#define FID_Quiet_Source_Quiet_Archive_SaveGameSetting_h_13_PROLOG
#define FID_Quiet_Source_Quiet_Archive_SaveGameSetting_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Source_Quiet_Archive_SaveGameSetting_h_16_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Source_Quiet_Archive_SaveGameSetting_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUIET_API UClass* StaticClass<class USaveGameSetting>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Source_Quiet_Archive_SaveGameSetting_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
