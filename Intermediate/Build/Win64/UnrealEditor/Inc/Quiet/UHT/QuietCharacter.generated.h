// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "QuietCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AGameItemActor;
class UPrimitiveComponent;
class UTexture2D;
enum class EItemType : uint8;
struct FHitResult;
#ifdef QUIET_QuietCharacter_generated_h
#error "QuietCharacter.generated.h already included, missing '#pragma once' in QuietCharacter.h"
#endif
#define QUIET_QuietCharacter_generated_h

#define FID_Quiet_Source_Quiet_QuietCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ShowDeadUMG_Implementation(); \
	virtual void ResetFlashLight_Implementation(); \
	virtual void UseLightPressed_Implementation(); \
	virtual void UpdataSlot_Implementation(int32 Index, UTexture2D* Icon, int32 Amount, EItemType Itemtype, TSubclassOf<AGameItemActor> Item); \
	DECLARE_FUNCTION(execChangeMania); \
	DECLARE_FUNCTION(execChangeFilth); \
	DECLARE_FUNCTION(execChangeSoulNum); \
	DECLARE_FUNCTION(execTimelineFinished_Aim); \
	DECLARE_FUNCTION(execTimelineUpdate_Aim); \
	DECLARE_FUNCTION(execThrowTrace); \
	DECLARE_FUNCTION(execTimelineFinished_TP); \
	DECLARE_FUNCTION(execTimelineUpdate_TP); \
	DECLARE_FUNCTION(execSetHealth); \
	DECLARE_FUNCTION(execElim); \
	DECLARE_FUNCTION(execShowDeadUMG); \
	DECLARE_FUNCTION(execResetFlashLight); \
	DECLARE_FUNCTION(execUseLightPressed); \
	DECLARE_FUNCTION(execItemViewEvent); \
	DECLARE_FUNCTION(execUpdataSlot); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execOnSphereOverlap); \
	DECLARE_FUNCTION(execBackpackPressed);


#define FID_Quiet_Source_Quiet_QuietCharacter_h_16_CALLBACK_WRAPPERS
#define FID_Quiet_Source_Quiet_QuietCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAQuietCharacter(); \
	friend struct Z_Construct_UClass_AQuietCharacter_Statics; \
public: \
	DECLARE_CLASS(AQuietCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Quiet"), NO_API) \
	DECLARE_SERIALIZER(AQuietCharacter)


#define FID_Quiet_Source_Quiet_QuietCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AQuietCharacter(AQuietCharacter&&); \
	AQuietCharacter(const AQuietCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQuietCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQuietCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AQuietCharacter) \
	NO_API virtual ~AQuietCharacter();


#define FID_Quiet_Source_Quiet_QuietCharacter_h_13_PROLOG
#define FID_Quiet_Source_Quiet_QuietCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Source_Quiet_QuietCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Quiet_Source_Quiet_QuietCharacter_h_16_CALLBACK_WRAPPERS \
	FID_Quiet_Source_Quiet_QuietCharacter_h_16_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Source_Quiet_QuietCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUIET_API UClass* StaticClass<class AQuietCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Source_Quiet_QuietCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
