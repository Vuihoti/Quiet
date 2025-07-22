// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerController/LobbyPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
#ifdef QUIET_LobbyPlayerController_generated_h
#error "LobbyPlayerController.generated.h already included, missing '#pragma once' in LobbyPlayerController.h"
#endif
#define QUIET_LobbyPlayerController_generated_h

#define FID_Quiet_Source_Quiet_PlayerController_LobbyPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execShowHUDCard); \
	DECLARE_FUNCTION(execShowHUDLevel); \
	DECLARE_FUNCTION(execShowMainMenu); \
	DECLARE_FUNCTION(execSetHUDGameSet); \
	DECLARE_FUNCTION(execSetHUDSetting);


#define FID_Quiet_Source_Quiet_PlayerController_LobbyPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALobbyPlayerController(); \
	friend struct Z_Construct_UClass_ALobbyPlayerController_Statics; \
public: \
	DECLARE_CLASS(ALobbyPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Quiet"), NO_API) \
	DECLARE_SERIALIZER(ALobbyPlayerController)


#define FID_Quiet_Source_Quiet_PlayerController_LobbyPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALobbyPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALobbyPlayerController(ALobbyPlayerController&&); \
	ALobbyPlayerController(const ALobbyPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALobbyPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALobbyPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALobbyPlayerController) \
	NO_API virtual ~ALobbyPlayerController();


#define FID_Quiet_Source_Quiet_PlayerController_LobbyPlayerController_h_12_PROLOG
#define FID_Quiet_Source_Quiet_PlayerController_LobbyPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Source_Quiet_PlayerController_LobbyPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Quiet_Source_Quiet_PlayerController_LobbyPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Source_Quiet_PlayerController_LobbyPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUIET_API UClass* StaticClass<class ALobbyPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Source_Quiet_PlayerController_LobbyPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
