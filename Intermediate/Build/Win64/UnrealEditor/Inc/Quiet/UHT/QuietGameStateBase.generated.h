// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameState/QuietGameStateBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUIET_QuietGameStateBase_generated_h
#error "QuietGameStateBase.generated.h already included, missing '#pragma once' in QuietGameStateBase.h"
#endif
#define QUIET_QuietGameStateBase_generated_h

#define FID_Quiet_Source_Quiet_GameState_QuietGameStateBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAQuietGameStateBase(); \
	friend struct Z_Construct_UClass_AQuietGameStateBase_Statics; \
public: \
	DECLARE_CLASS(AQuietGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Quiet"), NO_API) \
	DECLARE_SERIALIZER(AQuietGameStateBase)


#define FID_Quiet_Source_Quiet_GameState_QuietGameStateBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AQuietGameStateBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AQuietGameStateBase(AQuietGameStateBase&&); \
	AQuietGameStateBase(const AQuietGameStateBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQuietGameStateBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQuietGameStateBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AQuietGameStateBase) \
	NO_API virtual ~AQuietGameStateBase();


#define FID_Quiet_Source_Quiet_GameState_QuietGameStateBase_h_12_PROLOG
#define FID_Quiet_Source_Quiet_GameState_QuietGameStateBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Source_Quiet_GameState_QuietGameStateBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Source_Quiet_GameState_QuietGameStateBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUIET_API UClass* StaticClass<class AQuietGameStateBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Source_Quiet_GameState_QuietGameStateBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
