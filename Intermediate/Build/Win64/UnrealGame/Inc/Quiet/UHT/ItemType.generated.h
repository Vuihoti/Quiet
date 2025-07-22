// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Structs/ItemType.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUIET_ItemType_generated_h
#error "ItemType.generated.h already included, missing '#pragma once' in ItemType.h"
#endif
#define QUIET_ItemType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Source_Quiet_Structs_ItemType_h


#define FOREACH_ENUM_EITEMTYPE(op) \
	op(EItemType::EIT_Active) \
	op(EItemType::EIT_Passive) \
	op(EItemType::EIT_Light) 

enum class EItemType : uint8;
template<> struct TIsUEnumClass<EItemType> { enum { Value = true }; };
template<> QUIET_API UEnum* StaticEnum<EItemType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
