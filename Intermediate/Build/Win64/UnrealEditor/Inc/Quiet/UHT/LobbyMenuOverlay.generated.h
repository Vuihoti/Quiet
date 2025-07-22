// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HUD/LobbyMenuOverlay.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUIET_LobbyMenuOverlay_generated_h
#error "LobbyMenuOverlay.generated.h already included, missing '#pragma once' in LobbyMenuOverlay.h"
#endif
#define QUIET_LobbyMenuOverlay_generated_h

#define FID_Quiet_Source_Quiet_HUD_LobbyMenuOverlay_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execbtn_GameSettingPressed);


#define FID_Quiet_Source_Quiet_HUD_LobbyMenuOverlay_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULobbyMenuOverlay(); \
	friend struct Z_Construct_UClass_ULobbyMenuOverlay_Statics; \
public: \
	DECLARE_CLASS(ULobbyMenuOverlay, UCommonActivatableWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Quiet"), NO_API) \
	DECLARE_SERIALIZER(ULobbyMenuOverlay)


#define FID_Quiet_Source_Quiet_HUD_LobbyMenuOverlay_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULobbyMenuOverlay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULobbyMenuOverlay(ULobbyMenuOverlay&&); \
	ULobbyMenuOverlay(const ULobbyMenuOverlay&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULobbyMenuOverlay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULobbyMenuOverlay); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULobbyMenuOverlay) \
	NO_API virtual ~ULobbyMenuOverlay();


#define FID_Quiet_Source_Quiet_HUD_LobbyMenuOverlay_h_12_PROLOG
#define FID_Quiet_Source_Quiet_HUD_LobbyMenuOverlay_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Source_Quiet_HUD_LobbyMenuOverlay_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Quiet_Source_Quiet_HUD_LobbyMenuOverlay_h_15_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Source_Quiet_HUD_LobbyMenuOverlay_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUIET_API UClass* StaticClass<class ULobbyMenuOverlay>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Source_Quiet_HUD_LobbyMenuOverlay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
