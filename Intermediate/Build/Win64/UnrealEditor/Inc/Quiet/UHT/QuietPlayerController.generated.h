// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerController/QuietPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGameItemActor;
#ifdef QUIET_QuietPlayerController_generated_h
#error "QuietPlayerController.generated.h already included, missing '#pragma once' in QuietPlayerController.h"
#endif
#define QUIET_QuietPlayerController_generated_h

#define FID_Quiet_Source_Quiet_PlayerController_QuietPlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetHUDLightItemSlot); \
	DECLARE_FUNCTION(execSetHUDActiveItemSlot); \
	DECLARE_FUNCTION(execSetHUDPassiveItemSlot); \
	DECLARE_FUNCTION(execShowHUDShop); \
	DECLARE_FUNCTION(execShowMainMenu); \
	DECLARE_FUNCTION(execShowItemIntroduce); \
	DECLARE_FUNCTION(execSetHUDGameSet); \
	DECLARE_FUNCTION(execSetHUDSetting);


#define FID_Quiet_Source_Quiet_PlayerController_QuietPlayerController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAQuietPlayerController(); \
	friend struct Z_Construct_UClass_AQuietPlayerController_Statics; \
public: \
	DECLARE_CLASS(AQuietPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Quiet"), NO_API) \
	DECLARE_SERIALIZER(AQuietPlayerController)


#define FID_Quiet_Source_Quiet_PlayerController_QuietPlayerController_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AQuietPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AQuietPlayerController(AQuietPlayerController&&); \
	AQuietPlayerController(const AQuietPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQuietPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQuietPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AQuietPlayerController) \
	NO_API virtual ~AQuietPlayerController();


#define FID_Quiet_Source_Quiet_PlayerController_QuietPlayerController_h_13_PROLOG
#define FID_Quiet_Source_Quiet_PlayerController_QuietPlayerController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Source_Quiet_PlayerController_QuietPlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Quiet_Source_Quiet_PlayerController_QuietPlayerController_h_16_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Source_Quiet_PlayerController_QuietPlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUIET_API UClass* StaticClass<class AQuietPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Source_Quiet_PlayerController_QuietPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
