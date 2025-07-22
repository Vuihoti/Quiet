// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actor/ItemActorInGame.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUIET_ItemActorInGame_generated_h
#error "ItemActorInGame.generated.h already included, missing '#pragma once' in ItemActorInGame.h"
#endif
#define QUIET_ItemActorInGame_generated_h

#define FID_Quiet_Source_Quiet_Actor_ItemActorInGame_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItemActorInGame(); \
	friend struct Z_Construct_UClass_AItemActorInGame_Statics; \
public: \
	DECLARE_CLASS(AItemActorInGame, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Quiet"), NO_API) \
	DECLARE_SERIALIZER(AItemActorInGame)


#define FID_Quiet_Source_Quiet_Actor_ItemActorInGame_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AItemActorInGame(AItemActorInGame&&); \
	AItemActorInGame(const AItemActorInGame&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItemActorInGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItemActorInGame); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItemActorInGame) \
	NO_API virtual ~AItemActorInGame();


#define FID_Quiet_Source_Quiet_Actor_ItemActorInGame_h_9_PROLOG
#define FID_Quiet_Source_Quiet_Actor_ItemActorInGame_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Source_Quiet_Actor_ItemActorInGame_h_12_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Source_Quiet_Actor_ItemActorInGame_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUIET_API UClass* StaticClass<class AItemActorInGame>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Source_Quiet_Actor_ItemActorInGame_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
