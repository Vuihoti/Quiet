// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CombatComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AQuietCharacter;
#ifdef QUIET_CombatComponent_generated_h
#error "CombatComponent.generated.h already included, missing '#pragma once' in CombatComponent.h"
#endif
#define QUIET_CombatComponent_generated_h

#define FID_Quiet_Source_Quiet_CombatComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRegenerateStamina); \
	DECLARE_FUNCTION(execStopCrouch); \
	DECLARE_FUNCTION(execStartCrouch); \
	DECLARE_FUNCTION(execStartRegenerate); \
	DECLARE_FUNCTION(execSprintTimer); \
	DECLARE_FUNCTION(execStopSprint); \
	DECLARE_FUNCTION(execStartSprint); \
	DECLARE_FUNCTION(execInitialize);


#define FID_Quiet_Source_Quiet_CombatComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombatComponent(); \
	friend struct Z_Construct_UClass_UCombatComponent_Statics; \
public: \
	DECLARE_CLASS(UCombatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Quiet"), NO_API) \
	DECLARE_SERIALIZER(UCombatComponent)


#define FID_Quiet_Source_Quiet_CombatComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCombatComponent(UCombatComponent&&); \
	UCombatComponent(const UCombatComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCombatComponent) \
	NO_API virtual ~UCombatComponent();


#define FID_Quiet_Source_Quiet_CombatComponent_h_11_PROLOG
#define FID_Quiet_Source_Quiet_CombatComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Source_Quiet_CombatComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Quiet_Source_Quiet_CombatComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Source_Quiet_CombatComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUIET_API UClass* StaticClass<class UCombatComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Source_Quiet_CombatComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
