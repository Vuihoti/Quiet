// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "QuietGameModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUIET_QuietGameModeBase_generated_h
#error "QuietGameModeBase.generated.h already included, missing '#pragma once' in QuietGameModeBase.h"
#endif
#define QUIET_QuietGameModeBase_generated_h

#define FID_Quiet_Source_Quiet_QuietGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAQuietGameModeBase(); \
	friend struct Z_Construct_UClass_AQuietGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AQuietGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Quiet"), NO_API) \
	DECLARE_SERIALIZER(AQuietGameModeBase)


#define FID_Quiet_Source_Quiet_QuietGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AQuietGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AQuietGameModeBase(AQuietGameModeBase&&); \
	AQuietGameModeBase(const AQuietGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQuietGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQuietGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AQuietGameModeBase) \
	NO_API virtual ~AQuietGameModeBase();


#define FID_Quiet_Source_Quiet_QuietGameModeBase_h_12_PROLOG
#define FID_Quiet_Source_Quiet_QuietGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Source_Quiet_QuietGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Source_Quiet_QuietGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUIET_API UClass* StaticClass<class AQuietGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Source_Quiet_QuietGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
