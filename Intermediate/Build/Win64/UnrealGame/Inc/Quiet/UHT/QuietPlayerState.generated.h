// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerState/QuietPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUIET_QuietPlayerState_generated_h
#error "QuietPlayerState.generated.h already included, missing '#pragma once' in QuietPlayerState.h"
#endif
#define QUIET_QuietPlayerState_generated_h

#define FID_Quiet_Source_Quiet_PlayerState_QuietPlayerState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAQuietPlayerState(); \
	friend struct Z_Construct_UClass_AQuietPlayerState_Statics; \
public: \
	DECLARE_CLASS(AQuietPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Quiet"), NO_API) \
	DECLARE_SERIALIZER(AQuietPlayerState)


#define FID_Quiet_Source_Quiet_PlayerState_QuietPlayerState_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AQuietPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AQuietPlayerState(AQuietPlayerState&&); \
	AQuietPlayerState(const AQuietPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQuietPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQuietPlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AQuietPlayerState) \
	NO_API virtual ~AQuietPlayerState();


#define FID_Quiet_Source_Quiet_PlayerState_QuietPlayerState_h_12_PROLOG
#define FID_Quiet_Source_Quiet_PlayerState_QuietPlayerState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Source_Quiet_PlayerState_QuietPlayerState_h_15_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Source_Quiet_PlayerState_QuietPlayerState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUIET_API UClass* StaticClass<class AQuietPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Source_Quiet_PlayerState_QuietPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
