// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Component/InventoryComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGameItemActor;
class UTexture2D;
enum class EItemType : uint8;
#ifdef QUIET_InventoryComponent_generated_h
#error "InventoryComponent.generated.h already included, missing '#pragma once' in InventoryComponent.h"
#endif
#define QUIET_InventoryComponent_generated_h

#define FID_Quiet_Source_Quiet_Component_InventoryComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UpdataInventory_Implementation(int32 Index, UTexture2D* Icon, int32 Amount, EItemType Itemtype, TSubclassOf<AGameItemActor> Item); \
	DECLARE_FUNCTION(execSellItem); \
	DECLARE_FUNCTION(execBuyItem); \
	DECLARE_FUNCTION(execFindItemNum); \
	DECLARE_FUNCTION(execUpdataInventory); \
	DECLARE_FUNCTION(execGetItemDataAtIndex); \
	DECLARE_FUNCTION(execFindSameAndNullSlot); \
	DECLARE_FUNCTION(execDeleteItem); \
	DECLARE_FUNCTION(execAddItem);


#define FID_Quiet_Source_Quiet_Component_InventoryComponent_h_16_CALLBACK_WRAPPERS
#define FID_Quiet_Source_Quiet_Component_InventoryComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Quiet"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent)


#define FID_Quiet_Source_Quiet_Component_InventoryComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInventoryComponent(UInventoryComponent&&); \
	UInventoryComponent(const UInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventoryComponent) \
	NO_API virtual ~UInventoryComponent();


#define FID_Quiet_Source_Quiet_Component_InventoryComponent_h_13_PROLOG
#define FID_Quiet_Source_Quiet_Component_InventoryComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Source_Quiet_Component_InventoryComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Quiet_Source_Quiet_Component_InventoryComponent_h_16_CALLBACK_WRAPPERS \
	FID_Quiet_Source_Quiet_Component_InventoryComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Source_Quiet_Component_InventoryComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUIET_API UClass* StaticClass<class UInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Source_Quiet_Component_InventoryComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
