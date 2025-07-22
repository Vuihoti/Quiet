// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HUD/CardOverlay.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUIET_CardOverlay_generated_h
#error "CardOverlay.generated.h already included, missing '#pragma once' in CardOverlay.h"
#endif
#define QUIET_CardOverlay_generated_h

#define FID_Quiet_Source_Quiet_HUD_CardOverlay_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdatePossessCard); \
	DECLARE_FUNCTION(execUpdateCarryCard);


#define FID_Quiet_Source_Quiet_HUD_CardOverlay_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCardOverlay(); \
	friend struct Z_Construct_UClass_UCardOverlay_Statics; \
public: \
	DECLARE_CLASS(UCardOverlay, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Quiet"), NO_API) \
	DECLARE_SERIALIZER(UCardOverlay)


#define FID_Quiet_Source_Quiet_HUD_CardOverlay_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCardOverlay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCardOverlay(UCardOverlay&&); \
	UCardOverlay(const UCardOverlay&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCardOverlay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCardOverlay); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCardOverlay) \
	NO_API virtual ~UCardOverlay();


#define FID_Quiet_Source_Quiet_HUD_CardOverlay_h_13_PROLOG
#define FID_Quiet_Source_Quiet_HUD_CardOverlay_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Source_Quiet_HUD_CardOverlay_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Quiet_Source_Quiet_HUD_CardOverlay_h_16_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Source_Quiet_HUD_CardOverlay_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUIET_API UClass* StaticClass<class UCardOverlay>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Source_Quiet_HUD_CardOverlay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
