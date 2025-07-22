// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HUD/MainMenuOverlay.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUIET_MainMenuOverlay_generated_h
#error "MainMenuOverlay.generated.h already included, missing '#pragma once' in MainMenuOverlay.h"
#endif
#define QUIET_MainMenuOverlay_generated_h

#define FID_Quiet_Source_Quiet_HUD_MainMenuOverlay_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainMenuOverlay(); \
	friend struct Z_Construct_UClass_UMainMenuOverlay_Statics; \
public: \
	DECLARE_CLASS(UMainMenuOverlay, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Quiet"), NO_API) \
	DECLARE_SERIALIZER(UMainMenuOverlay)


#define FID_Quiet_Source_Quiet_HUD_MainMenuOverlay_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenuOverlay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMainMenuOverlay(UMainMenuOverlay&&); \
	UMainMenuOverlay(const UMainMenuOverlay&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenuOverlay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenuOverlay); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenuOverlay) \
	NO_API virtual ~UMainMenuOverlay();


#define FID_Quiet_Source_Quiet_HUD_MainMenuOverlay_h_13_PROLOG
#define FID_Quiet_Source_Quiet_HUD_MainMenuOverlay_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Source_Quiet_HUD_MainMenuOverlay_h_16_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Source_Quiet_HUD_MainMenuOverlay_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUIET_API UClass* StaticClass<class UMainMenuOverlay>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Source_Quiet_HUD_MainMenuOverlay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
