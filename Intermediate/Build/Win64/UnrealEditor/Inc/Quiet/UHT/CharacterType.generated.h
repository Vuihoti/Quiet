// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Structs/CharacterType.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUIET_CharacterType_generated_h
#error "CharacterType.generated.h already included, missing '#pragma once' in CharacterType.h"
#endif
#define QUIET_CharacterType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Source_Quiet_Structs_CharacterType_h


#define FOREACH_ENUM_ECHARACTERTYPE(op) \
	op(ECharacterType::ECT_Free) \
	op(ECharacterType::ECT_Interface) \
	op(ECharacterType::ECT_Backpack) \
	op(ECharacterType::ECT_Dead) \
	op(ECharacterType::ECT_GameSetting) \
	op(ECharacterType::ECT_PickLevel) \
	op(ECharacterType::ECT_ChangeCard) \
	op(ECharacterType::ECT_OnShop) 

enum class ECharacterType : uint8;
template<> struct TIsUEnumClass<ECharacterType> { enum { Value = true }; };
template<> QUIET_API UEnum* StaticEnum<ECharacterType>();

#define FOREACH_ENUM_ECHARACTERSTATE(op) \
	op(ECharacterState::ECS_Normal) \
	op(ECharacterState::ECS_Invincible) 

enum class ECharacterState : uint8;
template<> struct TIsUEnumClass<ECharacterState> { enum { Value = true }; };
template<> QUIET_API UEnum* StaticEnum<ECharacterState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
