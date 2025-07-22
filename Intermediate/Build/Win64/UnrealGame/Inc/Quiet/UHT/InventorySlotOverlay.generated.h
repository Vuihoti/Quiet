// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HUD/InventorySlotOverlay.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGameItemActor;
#ifdef QUIET_InventorySlotOverlay_generated_h
#error "InventorySlotOverlay.generated.h already included, missing '#pragma once' in InventorySlotOverlay.h"
#endif
#define QUIET_InventorySlotOverlay_generated_h

#define FID_Quiet_Source_Quiet_HUD_InventorySlotOverlay_h_16_CALLBACK_WRAPPERS
#define FID_Quiet_Source_Quiet_HUD_InventorySlotOverlay_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventorySlotOverlay(); \
	friend struct Z_Construct_UClass_UInventorySlotOverlay_Statics; \
public: \
	DECLARE_CLASS(UInventorySlotOverlay, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Quiet"), NO_API) \
	DECLARE_SERIALIZER(UInventorySlotOverlay)


#define FID_Quiet_Source_Quiet_HUD_InventorySlotOverlay_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventorySlotOverlay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInventorySlotOverlay(UInventorySlotOverlay&&); \
	UInventorySlotOverlay(const UInventorySlotOverlay&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventorySlotOverlay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventorySlotOverlay); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventorySlotOverlay) \
	NO_API virtual ~UInventorySlotOverlay();


#define FID_Quiet_Source_Quiet_HUD_InventorySlotOverlay_h_13_PROLOG
#define FID_Quiet_Source_Quiet_HUD_InventorySlotOverlay_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Source_Quiet_HUD_InventorySlotOverlay_h_16_CALLBACK_WRAPPERS \
	FID_Quiet_Source_Quiet_HUD_InventorySlotOverlay_h_16_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Source_Quiet_HUD_InventorySlotOverlay_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUIET_API UClass* StaticClass<class UInventorySlotOverlay>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Source_Quiet_HUD_InventorySlotOverlay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
