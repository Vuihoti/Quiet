// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HUD/CardSlotOverlay.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUIET_CardSlotOverlay_generated_h
#error "CardSlotOverlay.generated.h already included, missing '#pragma once' in CardSlotOverlay.h"
#endif
#define QUIET_CardSlotOverlay_generated_h

#define FID_Quiet_Source_Quiet_HUD_CardSlotOverlay_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnCardUnHover); \
	DECLARE_FUNCTION(execOnCardHover); \
	DECLARE_FUNCTION(execOnCardClicked); \
	DECLARE_FUNCTION(execUnloadCard); \
	DECLARE_FUNCTION(execEquipCurrentCard); \
	DECLARE_FUNCTION(execUpdateCard);


#define FID_Quiet_Source_Quiet_HUD_CardSlotOverlay_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCardSlotOverlay(); \
	friend struct Z_Construct_UClass_UCardSlotOverlay_Statics; \
public: \
	DECLARE_CLASS(UCardSlotOverlay, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Quiet"), NO_API) \
	DECLARE_SERIALIZER(UCardSlotOverlay)


#define FID_Quiet_Source_Quiet_HUD_CardSlotOverlay_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCardSlotOverlay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCardSlotOverlay(UCardSlotOverlay&&); \
	UCardSlotOverlay(const UCardSlotOverlay&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCardSlotOverlay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCardSlotOverlay); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCardSlotOverlay) \
	NO_API virtual ~UCardSlotOverlay();


#define FID_Quiet_Source_Quiet_HUD_CardSlotOverlay_h_14_PROLOG
#define FID_Quiet_Source_Quiet_HUD_CardSlotOverlay_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Source_Quiet_HUD_CardSlotOverlay_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Quiet_Source_Quiet_HUD_CardSlotOverlay_h_17_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Source_Quiet_HUD_CardSlotOverlay_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUIET_API UClass* StaticClass<class UCardSlotOverlay>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Source_Quiet_HUD_CardSlotOverlay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
