// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HUD/CommoditySlotOverlay.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUIET_CommoditySlotOverlay_generated_h
#error "CommoditySlotOverlay.generated.h already included, missing '#pragma once' in CommoditySlotOverlay.h"
#endif
#define QUIET_CommoditySlotOverlay_generated_h

#define FID_Quiet_Source_Quiet_HUD_CommoditySlotOverlay_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnButtonClick); \
	DECLARE_FUNCTION(execOnButtonUnHover); \
	DECLARE_FUNCTION(execOnButtonHover);


#define FID_Quiet_Source_Quiet_HUD_CommoditySlotOverlay_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommoditySlotOverlay(); \
	friend struct Z_Construct_UClass_UCommoditySlotOverlay_Statics; \
public: \
	DECLARE_CLASS(UCommoditySlotOverlay, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Quiet"), NO_API) \
	DECLARE_SERIALIZER(UCommoditySlotOverlay)


#define FID_Quiet_Source_Quiet_HUD_CommoditySlotOverlay_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommoditySlotOverlay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCommoditySlotOverlay(UCommoditySlotOverlay&&); \
	UCommoditySlotOverlay(const UCommoditySlotOverlay&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommoditySlotOverlay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommoditySlotOverlay); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommoditySlotOverlay) \
	NO_API virtual ~UCommoditySlotOverlay();


#define FID_Quiet_Source_Quiet_HUD_CommoditySlotOverlay_h_13_PROLOG
#define FID_Quiet_Source_Quiet_HUD_CommoditySlotOverlay_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Source_Quiet_HUD_CommoditySlotOverlay_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Quiet_Source_Quiet_HUD_CommoditySlotOverlay_h_16_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Source_Quiet_HUD_CommoditySlotOverlay_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUIET_API UClass* StaticClass<class UCommoditySlotOverlay>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Source_Quiet_HUD_CommoditySlotOverlay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
