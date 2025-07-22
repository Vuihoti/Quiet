// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Lobby/LobbyCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUIET_LobbyCharacter_generated_h
#error "LobbyCharacter.generated.h already included, missing '#pragma once' in LobbyCharacter.h"
#endif
#define QUIET_LobbyCharacter_generated_h

#define FID_Quiet_Source_Quiet_Lobby_LobbyCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALobbyCharacter(); \
	friend struct Z_Construct_UClass_ALobbyCharacter_Statics; \
public: \
	DECLARE_CLASS(ALobbyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Quiet"), NO_API) \
	DECLARE_SERIALIZER(ALobbyCharacter)


#define FID_Quiet_Source_Quiet_Lobby_LobbyCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALobbyCharacter(ALobbyCharacter&&); \
	ALobbyCharacter(const ALobbyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALobbyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALobbyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALobbyCharacter) \
	NO_API virtual ~ALobbyCharacter();


#define FID_Quiet_Source_Quiet_Lobby_LobbyCharacter_h_10_PROLOG
#define FID_Quiet_Source_Quiet_Lobby_LobbyCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Source_Quiet_Lobby_LobbyCharacter_h_13_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Source_Quiet_Lobby_LobbyCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUIET_API UClass* StaticClass<class ALobbyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Source_Quiet_Lobby_LobbyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
