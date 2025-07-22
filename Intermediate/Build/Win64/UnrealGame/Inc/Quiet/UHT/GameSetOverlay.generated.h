// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HUD/GameSetOverlay.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameSets;
#ifdef QUIET_GameSetOverlay_generated_h
#error "GameSetOverlay.generated.h already included, missing '#pragma once' in GameSetOverlay.h"
#endif
#define QUIET_GameSetOverlay_generated_h

#define FID_Quiet_Source_Quiet_HUD_GameSetOverlay_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplySettingInUI); \
	DECLARE_FUNCTION(execApplySet); \
	DECLARE_FUNCTION(execShowFPSChange); \
	DECLARE_FUNCTION(execSetSettingDefault); \
	DECLARE_FUNCTION(execSetUIDefault);


#define FID_Quiet_Source_Quiet_HUD_GameSetOverlay_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameSetOverlay(); \
	friend struct Z_Construct_UClass_UGameSetOverlay_Statics; \
public: \
	DECLARE_CLASS(UGameSetOverlay, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Quiet"), NO_API) \
	DECLARE_SERIALIZER(UGameSetOverlay)


#define FID_Quiet_Source_Quiet_HUD_GameSetOverlay_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameSetOverlay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGameSetOverlay(UGameSetOverlay&&); \
	UGameSetOverlay(const UGameSetOverlay&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameSetOverlay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameSetOverlay); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameSetOverlay) \
	NO_API virtual ~UGameSetOverlay();


#define FID_Quiet_Source_Quiet_HUD_GameSetOverlay_h_14_PROLOG
#define FID_Quiet_Source_Quiet_HUD_GameSetOverlay_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Source_Quiet_HUD_GameSetOverlay_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Quiet_Source_Quiet_HUD_GameSetOverlay_h_17_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Source_Quiet_HUD_GameSetOverlay_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUIET_API UClass* StaticClass<class UGameSetOverlay>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Source_Quiet_HUD_GameSetOverlay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
