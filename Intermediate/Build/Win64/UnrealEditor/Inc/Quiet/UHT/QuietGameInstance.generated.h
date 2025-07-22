// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "QuietGameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUIET_QuietGameInstance_generated_h
#error "QuietGameInstance.generated.h already included, missing '#pragma once' in QuietGameInstance.h"
#endif
#define QUIET_QuietGameInstance_generated_h

#define FID_Quiet_Source_Quiet_QuietGameInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateANewArchive); \
	DECLARE_FUNCTION(execSaveLocalGameSetting); \
	DECLARE_FUNCTION(execSaveLocalArchive); \
	DECLARE_FUNCTION(execLodingLocalArchive); \
	DECLARE_FUNCTION(execLodingLocalSettings);


#define FID_Quiet_Source_Quiet_QuietGameInstance_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuietGameInstance(); \
	friend struct Z_Construct_UClass_UQuietGameInstance_Statics; \
public: \
	DECLARE_CLASS(UQuietGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Quiet"), NO_API) \
	DECLARE_SERIALIZER(UQuietGameInstance)


#define FID_Quiet_Source_Quiet_QuietGameInstance_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuietGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UQuietGameInstance(UQuietGameInstance&&); \
	UQuietGameInstance(const UQuietGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuietGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuietGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuietGameInstance) \
	NO_API virtual ~UQuietGameInstance();


#define FID_Quiet_Source_Quiet_QuietGameInstance_h_13_PROLOG
#define FID_Quiet_Source_Quiet_QuietGameInstance_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Source_Quiet_QuietGameInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Quiet_Source_Quiet_QuietGameInstance_h_16_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Source_Quiet_QuietGameInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUIET_API UClass* StaticClass<class UQuietGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Source_Quiet_QuietGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
