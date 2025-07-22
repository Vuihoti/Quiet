// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HUD/ItemViewOverlay.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUIET_ItemViewOverlay_generated_h
#error "ItemViewOverlay.generated.h already included, missing '#pragma once' in ItemViewOverlay.h"
#endif
#define QUIET_ItemViewOverlay_generated_h

#define FID_Quiet_Source_Quiet_HUD_ItemViewOverlay_h_15_CALLBACK_WRAPPERS
#define FID_Quiet_Source_Quiet_HUD_ItemViewOverlay_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemViewOverlay(); \
	friend struct Z_Construct_UClass_UItemViewOverlay_Statics; \
public: \
	DECLARE_CLASS(UItemViewOverlay, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Quiet"), NO_API) \
	DECLARE_SERIALIZER(UItemViewOverlay)


#define FID_Quiet_Source_Quiet_HUD_ItemViewOverlay_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemViewOverlay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UItemViewOverlay(UItemViewOverlay&&); \
	UItemViewOverlay(const UItemViewOverlay&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemViewOverlay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemViewOverlay); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemViewOverlay) \
	NO_API virtual ~UItemViewOverlay();


#define FID_Quiet_Source_Quiet_HUD_ItemViewOverlay_h_12_PROLOG
#define FID_Quiet_Source_Quiet_HUD_ItemViewOverlay_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Source_Quiet_HUD_ItemViewOverlay_h_15_CALLBACK_WRAPPERS \
	FID_Quiet_Source_Quiet_HUD_ItemViewOverlay_h_15_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Source_Quiet_HUD_ItemViewOverlay_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUIET_API UClass* StaticClass<class UItemViewOverlay>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Source_Quiet_HUD_ItemViewOverlay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
