// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HUD/InventoryGridOverlay.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGameItemActor;
#ifdef QUIET_InventoryGridOverlay_generated_h
#error "InventoryGridOverlay.generated.h already included, missing '#pragma once' in InventoryGridOverlay.h"
#endif
#define QUIET_InventoryGridOverlay_generated_h

#define FID_Quiet_Source_Quiet_HUD_InventoryGridOverlay_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UpedateSlotArray_Implementation(int32 Index1, TSubclassOf<AGameItemActor> PutInItem, int32 PutInAmount); \
	DECLARE_FUNCTION(execUpedateSlotArray);


#define FID_Quiet_Source_Quiet_HUD_InventoryGridOverlay_h_16_CALLBACK_WRAPPERS
#define FID_Quiet_Source_Quiet_HUD_InventoryGridOverlay_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryGridOverlay(); \
	friend struct Z_Construct_UClass_UInventoryGridOverlay_Statics; \
public: \
	DECLARE_CLASS(UInventoryGridOverlay, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Quiet"), NO_API) \
	DECLARE_SERIALIZER(UInventoryGridOverlay)


#define FID_Quiet_Source_Quiet_HUD_InventoryGridOverlay_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryGridOverlay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInventoryGridOverlay(UInventoryGridOverlay&&); \
	UInventoryGridOverlay(const UInventoryGridOverlay&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryGridOverlay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryGridOverlay); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryGridOverlay) \
	NO_API virtual ~UInventoryGridOverlay();


#define FID_Quiet_Source_Quiet_HUD_InventoryGridOverlay_h_13_PROLOG
#define FID_Quiet_Source_Quiet_HUD_InventoryGridOverlay_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Source_Quiet_HUD_InventoryGridOverlay_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Quiet_Source_Quiet_HUD_InventoryGridOverlay_h_16_CALLBACK_WRAPPERS \
	FID_Quiet_Source_Quiet_HUD_InventoryGridOverlay_h_16_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Source_Quiet_HUD_InventoryGridOverlay_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUIET_API UClass* StaticClass<class UInventoryGridOverlay>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Source_Quiet_HUD_InventoryGridOverlay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
