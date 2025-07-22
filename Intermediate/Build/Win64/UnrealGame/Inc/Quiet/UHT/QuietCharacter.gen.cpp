// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Quiet/QuietCharacter.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuietCharacter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
QUIET_API UClass* Z_Construct_UClass_AAIController_01_NoRegister();
QUIET_API UClass* Z_Construct_UClass_AGameItemActor_NoRegister();
QUIET_API UClass* Z_Construct_UClass_AItemActorInGame_NoRegister();
QUIET_API UClass* Z_Construct_UClass_AQuietCharacter();
QUIET_API UClass* Z_Construct_UClass_AQuietCharacter_NoRegister();
QUIET_API UClass* Z_Construct_UClass_AQuietPlayerController_NoRegister();
QUIET_API UClass* Z_Construct_UClass_UCombatComponent_NoRegister();
QUIET_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
QUIET_API UEnum* Z_Construct_UEnum_Quiet_ECharacterState();
QUIET_API UEnum* Z_Construct_UEnum_Quiet_ECharacterType();
QUIET_API UEnum* Z_Construct_UEnum_Quiet_EItemType();
UPackage* Z_Construct_UPackage__Script_Quiet();
// End Cross Module References

// Begin Class AQuietCharacter Function BackpackPressed
struct Z_Construct_UFunction_AQuietCharacter_BackpackPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuietCharacter_BackpackPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuietCharacter, nullptr, "BackpackPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietCharacter_BackpackPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQuietCharacter_BackpackPressed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AQuietCharacter_BackpackPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQuietCharacter_BackpackPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AQuietCharacter::execBackpackPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BackpackPressed();
	P_NATIVE_END;
}
// End Class AQuietCharacter Function BackpackPressed

// Begin Class AQuietCharacter Function ChangeFilth
struct Z_Construct_UFunction_AQuietCharacter_ChangeFilth_Statics
{
	struct QuietCharacter_eventChangeFilth_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AQuietCharacter_ChangeFilth_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuietCharacter_eventChangeFilth_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AQuietCharacter_ChangeFilth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuietCharacter_ChangeFilth_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietCharacter_ChangeFilth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuietCharacter_ChangeFilth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuietCharacter, nullptr, "ChangeFilth", nullptr, nullptr, Z_Construct_UFunction_AQuietCharacter_ChangeFilth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietCharacter_ChangeFilth_Statics::PropPointers), sizeof(Z_Construct_UFunction_AQuietCharacter_ChangeFilth_Statics::QuietCharacter_eventChangeFilth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietCharacter_ChangeFilth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQuietCharacter_ChangeFilth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AQuietCharacter_ChangeFilth_Statics::QuietCharacter_eventChangeFilth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AQuietCharacter_ChangeFilth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQuietCharacter_ChangeFilth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AQuietCharacter::execChangeFilth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeFilth(Z_Param_Value);
	P_NATIVE_END;
}
// End Class AQuietCharacter Function ChangeFilth

// Begin Class AQuietCharacter Function ChangeMania
struct Z_Construct_UFunction_AQuietCharacter_ChangeMania_Statics
{
	struct QuietCharacter_eventChangeMania_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AQuietCharacter_ChangeMania_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuietCharacter_eventChangeMania_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AQuietCharacter_ChangeMania_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuietCharacter_ChangeMania_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietCharacter_ChangeMania_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuietCharacter_ChangeMania_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuietCharacter, nullptr, "ChangeMania", nullptr, nullptr, Z_Construct_UFunction_AQuietCharacter_ChangeMania_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietCharacter_ChangeMania_Statics::PropPointers), sizeof(Z_Construct_UFunction_AQuietCharacter_ChangeMania_Statics::QuietCharacter_eventChangeMania_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietCharacter_ChangeMania_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQuietCharacter_ChangeMania_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AQuietCharacter_ChangeMania_Statics::QuietCharacter_eventChangeMania_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AQuietCharacter_ChangeMania()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQuietCharacter_ChangeMania_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AQuietCharacter::execChangeMania)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeMania(Z_Param_Value);
	P_NATIVE_END;
}
// End Class AQuietCharacter Function ChangeMania

// Begin Class AQuietCharacter Function ChangeSoulNum
struct Z_Construct_UFunction_AQuietCharacter_ChangeSoulNum_Statics
{
	struct QuietCharacter_eventChangeSoulNum_Parms
	{
		int32 Num;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Num;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AQuietCharacter_ChangeSoulNum_Statics::NewProp_Num = { "Num", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuietCharacter_eventChangeSoulNum_Parms, Num), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AQuietCharacter_ChangeSoulNum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuietCharacter_ChangeSoulNum_Statics::NewProp_Num,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietCharacter_ChangeSoulNum_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuietCharacter_ChangeSoulNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuietCharacter, nullptr, "ChangeSoulNum", nullptr, nullptr, Z_Construct_UFunction_AQuietCharacter_ChangeSoulNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietCharacter_ChangeSoulNum_Statics::PropPointers), sizeof(Z_Construct_UFunction_AQuietCharacter_ChangeSoulNum_Statics::QuietCharacter_eventChangeSoulNum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietCharacter_ChangeSoulNum_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQuietCharacter_ChangeSoulNum_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AQuietCharacter_ChangeSoulNum_Statics::QuietCharacter_eventChangeSoulNum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AQuietCharacter_ChangeSoulNum()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQuietCharacter_ChangeSoulNum_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AQuietCharacter::execChangeSoulNum)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Num);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeSoulNum(Z_Param_Num);
	P_NATIVE_END;
}
// End Class AQuietCharacter Function ChangeSoulNum

// Begin Class AQuietCharacter Function DrewHUD
static FName NAME_AQuietCharacter_DrewHUD = FName(TEXT("DrewHUD"));
void AQuietCharacter::DrewHUD()
{
	ProcessEvent(FindFunctionChecked(NAME_AQuietCharacter_DrewHUD),NULL);
}
struct Z_Construct_UFunction_AQuietCharacter_DrewHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuietCharacter_DrewHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuietCharacter, nullptr, "DrewHUD", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietCharacter_DrewHUD_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQuietCharacter_DrewHUD_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AQuietCharacter_DrewHUD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQuietCharacter_DrewHUD_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AQuietCharacter Function DrewHUD

// Begin Class AQuietCharacter Function Elim
struct Z_Construct_UFunction_AQuietCharacter_Elim_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuietCharacter_Elim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuietCharacter, nullptr, "Elim", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietCharacter_Elim_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQuietCharacter_Elim_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AQuietCharacter_Elim()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQuietCharacter_Elim_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AQuietCharacter::execElim)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Elim();
	P_NATIVE_END;
}
// End Class AQuietCharacter Function Elim

// Begin Class AQuietCharacter Function HeadShake
static FName NAME_AQuietCharacter_HeadShake = FName(TEXT("HeadShake"));
void AQuietCharacter::HeadShake()
{
	ProcessEvent(FindFunctionChecked(NAME_AQuietCharacter_HeadShake),NULL);
}
struct Z_Construct_UFunction_AQuietCharacter_HeadShake_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuietCharacter_HeadShake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuietCharacter, nullptr, "HeadShake", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietCharacter_HeadShake_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQuietCharacter_HeadShake_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AQuietCharacter_HeadShake()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQuietCharacter_HeadShake_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AQuietCharacter Function HeadShake

// Begin Class AQuietCharacter Function Initialize
struct Z_Construct_UFunction_AQuietCharacter_Initialize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xca\xbc\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "QuietCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xca\xbc\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuietCharacter_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuietCharacter, nullptr, "Initialize", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietCharacter_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQuietCharacter_Initialize_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AQuietCharacter_Initialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQuietCharacter_Initialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AQuietCharacter::execInitialize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Initialize();
	P_NATIVE_END;
}
// End Class AQuietCharacter Function Initialize

// Begin Class AQuietCharacter Function ItemViewEvent
struct Z_Construct_UFunction_AQuietCharacter_ItemViewEvent_Statics
{
	struct QuietCharacter_eventItemViewEvent_Parms
	{
		TSubclassOf<AGameItemActor> ViewingItem;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ViewingItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AQuietCharacter_ItemViewEvent_Statics::NewProp_ViewingItem = { "ViewingItem", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuietCharacter_eventItemViewEvent_Parms, ViewingItem), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameItemActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AQuietCharacter_ItemViewEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuietCharacter_ItemViewEvent_Statics::NewProp_ViewingItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietCharacter_ItemViewEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuietCharacter_ItemViewEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuietCharacter, nullptr, "ItemViewEvent", nullptr, nullptr, Z_Construct_UFunction_AQuietCharacter_ItemViewEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietCharacter_ItemViewEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AQuietCharacter_ItemViewEvent_Statics::QuietCharacter_eventItemViewEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietCharacter_ItemViewEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQuietCharacter_ItemViewEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AQuietCharacter_ItemViewEvent_Statics::QuietCharacter_eventItemViewEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AQuietCharacter_ItemViewEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQuietCharacter_ItemViewEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AQuietCharacter::execItemViewEvent)
{
	P_GET_OBJECT(UClass,Z_Param_ViewingItem);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ItemViewEvent(Z_Param_ViewingItem);
	P_NATIVE_END;
}
// End Class AQuietCharacter Function ItemViewEvent

// Begin Class AQuietCharacter Function LengHalfHeight
static FName NAME_AQuietCharacter_LengHalfHeight = FName(TEXT("LengHalfHeight"));
void AQuietCharacter::LengHalfHeight()
{
	ProcessEvent(FindFunctionChecked(NAME_AQuietCharacter_LengHalfHeight),NULL);
}
struct Z_Construct_UFunction_AQuietCharacter_LengHalfHeight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuietCharacter_LengHalfHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuietCharacter, nullptr, "LengHalfHeight", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietCharacter_LengHalfHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQuietCharacter_LengHalfHeight_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AQuietCharacter_LengHalfHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQuietCharacter_LengHalfHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AQuietCharacter Function LengHalfHeight

// Begin Class AQuietCharacter Function OnSphereOverlap
struct Z_Construct_UFunction_AQuietCharacter_OnSphereOverlap_Statics
{
	struct QuietCharacter_eventOnSphereOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AQuietCharacter_OnSphereOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuietCharacter_eventOnSphereOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AQuietCharacter_OnSphereOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuietCharacter_eventOnSphereOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AQuietCharacter_OnSphereOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuietCharacter_eventOnSphereOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AQuietCharacter_OnSphereOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuietCharacter_eventOnSphereOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AQuietCharacter_OnSphereOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((QuietCharacter_eventOnSphereOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AQuietCharacter_OnSphereOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(QuietCharacter_eventOnSphereOverlap_Parms), &Z_Construct_UFunction_AQuietCharacter_OnSphereOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AQuietCharacter_OnSphereOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuietCharacter_eventOnSphereOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AQuietCharacter_OnSphereOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuietCharacter_OnSphereOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuietCharacter_OnSphereOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuietCharacter_OnSphereOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuietCharacter_OnSphereOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuietCharacter_OnSphereOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuietCharacter_OnSphereOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietCharacter_OnSphereOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuietCharacter_OnSphereOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuietCharacter, nullptr, "OnSphereOverlap", nullptr, nullptr, Z_Construct_UFunction_AQuietCharacter_OnSphereOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietCharacter_OnSphereOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AQuietCharacter_OnSphereOverlap_Statics::QuietCharacter_eventOnSphereOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietCharacter_OnSphereOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQuietCharacter_OnSphereOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AQuietCharacter_OnSphereOverlap_Statics::QuietCharacter_eventOnSphereOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AQuietCharacter_OnSphereOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQuietCharacter_OnSphereOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AQuietCharacter::execOnSphereOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSphereOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AQuietCharacter Function OnSphereOverlap

// Begin Class AQuietCharacter Function ResetFlashLight
static FName NAME_AQuietCharacter_ResetFlashLight = FName(TEXT("ResetFlashLight"));
void AQuietCharacter::ResetFlashLight()
{
	ProcessEvent(FindFunctionChecked(NAME_AQuietCharacter_ResetFlashLight),NULL);
}
struct Z_Construct_UFunction_AQuietCharacter_ResetFlashLight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuietCharacter_ResetFlashLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuietCharacter, nullptr, "ResetFlashLight", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietCharacter_ResetFlashLight_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQuietCharacter_ResetFlashLight_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AQuietCharacter_ResetFlashLight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQuietCharacter_ResetFlashLight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AQuietCharacter::execResetFlashLight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetFlashLight_Implementation();
	P_NATIVE_END;
}
// End Class AQuietCharacter Function ResetFlashLight

// Begin Class AQuietCharacter Function SetHealth
struct Z_Construct_UFunction_AQuietCharacter_SetHealth_Statics
{
	struct QuietCharacter_eventSetHealth_Parms
	{
		int32 AddHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AddHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AQuietCharacter_SetHealth_Statics::NewProp_AddHealth = { "AddHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuietCharacter_eventSetHealth_Parms, AddHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AQuietCharacter_SetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuietCharacter_SetHealth_Statics::NewProp_AddHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietCharacter_SetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuietCharacter_SetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuietCharacter, nullptr, "SetHealth", nullptr, nullptr, Z_Construct_UFunction_AQuietCharacter_SetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietCharacter_SetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_AQuietCharacter_SetHealth_Statics::QuietCharacter_eventSetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietCharacter_SetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQuietCharacter_SetHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AQuietCharacter_SetHealth_Statics::QuietCharacter_eventSetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AQuietCharacter_SetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQuietCharacter_SetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AQuietCharacter::execSetHealth)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AddHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHealth(Z_Param_AddHealth);
	P_NATIVE_END;
}
// End Class AQuietCharacter Function SetHealth

// Begin Class AQuietCharacter Function ShortHalfHeight
static FName NAME_AQuietCharacter_ShortHalfHeight = FName(TEXT("ShortHalfHeight"));
void AQuietCharacter::ShortHalfHeight()
{
	ProcessEvent(FindFunctionChecked(NAME_AQuietCharacter_ShortHalfHeight),NULL);
}
struct Z_Construct_UFunction_AQuietCharacter_ShortHalfHeight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuietCharacter_ShortHalfHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuietCharacter, nullptr, "ShortHalfHeight", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietCharacter_ShortHalfHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQuietCharacter_ShortHalfHeight_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AQuietCharacter_ShortHalfHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQuietCharacter_ShortHalfHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AQuietCharacter Function ShortHalfHeight

// Begin Class AQuietCharacter Function ShowDeadUMG
static FName NAME_AQuietCharacter_ShowDeadUMG = FName(TEXT("ShowDeadUMG"));
void AQuietCharacter::ShowDeadUMG()
{
	ProcessEvent(FindFunctionChecked(NAME_AQuietCharacter_ShowDeadUMG),NULL);
}
struct Z_Construct_UFunction_AQuietCharacter_ShowDeadUMG_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuietCharacter_ShowDeadUMG_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuietCharacter, nullptr, "ShowDeadUMG", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietCharacter_ShowDeadUMG_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQuietCharacter_ShowDeadUMG_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AQuietCharacter_ShowDeadUMG()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQuietCharacter_ShowDeadUMG_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AQuietCharacter::execShowDeadUMG)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowDeadUMG_Implementation();
	P_NATIVE_END;
}
// End Class AQuietCharacter Function ShowDeadUMG

// Begin Class AQuietCharacter Function ThrowTrace
struct Z_Construct_UFunction_AQuietCharacter_ThrowTrace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuietCharacter_ThrowTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuietCharacter, nullptr, "ThrowTrace", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietCharacter_ThrowTrace_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQuietCharacter_ThrowTrace_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AQuietCharacter_ThrowTrace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQuietCharacter_ThrowTrace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AQuietCharacter::execThrowTrace)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ThrowTrace();
	P_NATIVE_END;
}
// End Class AQuietCharacter Function ThrowTrace

// Begin Class AQuietCharacter Function TimelineFinished_Aim
struct Z_Construct_UFunction_AQuietCharacter_TimelineFinished_Aim_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuietCharacter_TimelineFinished_Aim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuietCharacter, nullptr, "TimelineFinished_Aim", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietCharacter_TimelineFinished_Aim_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQuietCharacter_TimelineFinished_Aim_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AQuietCharacter_TimelineFinished_Aim()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQuietCharacter_TimelineFinished_Aim_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AQuietCharacter::execTimelineFinished_Aim)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TimelineFinished_Aim();
	P_NATIVE_END;
}
// End Class AQuietCharacter Function TimelineFinished_Aim

// Begin Class AQuietCharacter Function TimelineFinished_TP
struct Z_Construct_UFunction_AQuietCharacter_TimelineFinished_TP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuietCharacter_TimelineFinished_TP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuietCharacter, nullptr, "TimelineFinished_TP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietCharacter_TimelineFinished_TP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQuietCharacter_TimelineFinished_TP_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AQuietCharacter_TimelineFinished_TP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQuietCharacter_TimelineFinished_TP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AQuietCharacter::execTimelineFinished_TP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TimelineFinished_TP();
	P_NATIVE_END;
}
// End Class AQuietCharacter Function TimelineFinished_TP

// Begin Class AQuietCharacter Function TimelineUpdate_Aim
struct Z_Construct_UFunction_AQuietCharacter_TimelineUpdate_Aim_Statics
{
	struct QuietCharacter_eventTimelineUpdate_Aim_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AQuietCharacter_TimelineUpdate_Aim_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuietCharacter_eventTimelineUpdate_Aim_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AQuietCharacter_TimelineUpdate_Aim_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuietCharacter_TimelineUpdate_Aim_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietCharacter_TimelineUpdate_Aim_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuietCharacter_TimelineUpdate_Aim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuietCharacter, nullptr, "TimelineUpdate_Aim", nullptr, nullptr, Z_Construct_UFunction_AQuietCharacter_TimelineUpdate_Aim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietCharacter_TimelineUpdate_Aim_Statics::PropPointers), sizeof(Z_Construct_UFunction_AQuietCharacter_TimelineUpdate_Aim_Statics::QuietCharacter_eventTimelineUpdate_Aim_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietCharacter_TimelineUpdate_Aim_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQuietCharacter_TimelineUpdate_Aim_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AQuietCharacter_TimelineUpdate_Aim_Statics::QuietCharacter_eventTimelineUpdate_Aim_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AQuietCharacter_TimelineUpdate_Aim()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQuietCharacter_TimelineUpdate_Aim_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AQuietCharacter::execTimelineUpdate_Aim)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TimelineUpdate_Aim(Z_Param_Value);
	P_NATIVE_END;
}
// End Class AQuietCharacter Function TimelineUpdate_Aim

// Begin Class AQuietCharacter Function TimelineUpdate_TP
struct Z_Construct_UFunction_AQuietCharacter_TimelineUpdate_TP_Statics
{
	struct QuietCharacter_eventTimelineUpdate_TP_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AQuietCharacter_TimelineUpdate_TP_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuietCharacter_eventTimelineUpdate_TP_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AQuietCharacter_TimelineUpdate_TP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuietCharacter_TimelineUpdate_TP_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietCharacter_TimelineUpdate_TP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuietCharacter_TimelineUpdate_TP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuietCharacter, nullptr, "TimelineUpdate_TP", nullptr, nullptr, Z_Construct_UFunction_AQuietCharacter_TimelineUpdate_TP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietCharacter_TimelineUpdate_TP_Statics::PropPointers), sizeof(Z_Construct_UFunction_AQuietCharacter_TimelineUpdate_TP_Statics::QuietCharacter_eventTimelineUpdate_TP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietCharacter_TimelineUpdate_TP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQuietCharacter_TimelineUpdate_TP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AQuietCharacter_TimelineUpdate_TP_Statics::QuietCharacter_eventTimelineUpdate_TP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AQuietCharacter_TimelineUpdate_TP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQuietCharacter_TimelineUpdate_TP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AQuietCharacter::execTimelineUpdate_TP)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TimelineUpdate_TP(Z_Param_Value);
	P_NATIVE_END;
}
// End Class AQuietCharacter Function TimelineUpdate_TP

// Begin Class AQuietCharacter Function UpdataSlot
struct QuietCharacter_eventUpdataSlot_Parms
{
	int32 Index;
	UTexture2D* Icon;
	int32 Amount;
	EItemType Itemtype;
	TSubclassOf<AGameItemActor> Item;
};
static FName NAME_AQuietCharacter_UpdataSlot = FName(TEXT("UpdataSlot"));
void AQuietCharacter::UpdataSlot(int32 Index, UTexture2D* Icon, int32 Amount, EItemType Itemtype, TSubclassOf<AGameItemActor> Item)
{
	QuietCharacter_eventUpdataSlot_Parms Parms;
	Parms.Index=Index;
	Parms.Icon=Icon;
	Parms.Amount=Amount;
	Parms.Itemtype=Itemtype;
	Parms.Item=Item;
	ProcessEvent(FindFunctionChecked(NAME_AQuietCharacter_UpdataSlot),&Parms);
}
struct Z_Construct_UFunction_AQuietCharacter_UpdataSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Itemtype_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Itemtype;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AQuietCharacter_UpdataSlot_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuietCharacter_eventUpdataSlot_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AQuietCharacter_UpdataSlot_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuietCharacter_eventUpdataSlot_Parms, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AQuietCharacter_UpdataSlot_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuietCharacter_eventUpdataSlot_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AQuietCharacter_UpdataSlot_Statics::NewProp_Itemtype_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AQuietCharacter_UpdataSlot_Statics::NewProp_Itemtype = { "Itemtype", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuietCharacter_eventUpdataSlot_Parms, Itemtype), Z_Construct_UEnum_Quiet_EItemType, METADATA_PARAMS(0, nullptr) }; // 2516133327
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AQuietCharacter_UpdataSlot_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuietCharacter_eventUpdataSlot_Parms, Item), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameItemActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AQuietCharacter_UpdataSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuietCharacter_UpdataSlot_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuietCharacter_UpdataSlot_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuietCharacter_UpdataSlot_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuietCharacter_UpdataSlot_Statics::NewProp_Itemtype_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuietCharacter_UpdataSlot_Statics::NewProp_Itemtype,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuietCharacter_UpdataSlot_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietCharacter_UpdataSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuietCharacter_UpdataSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuietCharacter, nullptr, "UpdataSlot", nullptr, nullptr, Z_Construct_UFunction_AQuietCharacter_UpdataSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietCharacter_UpdataSlot_Statics::PropPointers), sizeof(QuietCharacter_eventUpdataSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietCharacter_UpdataSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQuietCharacter_UpdataSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(QuietCharacter_eventUpdataSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AQuietCharacter_UpdataSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQuietCharacter_UpdataSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AQuietCharacter::execUpdataSlot)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_OBJECT(UTexture2D,Z_Param_Icon);
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_GET_ENUM(EItemType,Z_Param_Itemtype);
	P_GET_OBJECT(UClass,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdataSlot_Implementation(Z_Param_Index,Z_Param_Icon,Z_Param_Amount,EItemType(Z_Param_Itemtype),Z_Param_Item);
	P_NATIVE_END;
}
// End Class AQuietCharacter Function UpdataSlot

// Begin Class AQuietCharacter Function UseLightPressed
static FName NAME_AQuietCharacter_UseLightPressed = FName(TEXT("UseLightPressed"));
void AQuietCharacter::UseLightPressed()
{
	ProcessEvent(FindFunctionChecked(NAME_AQuietCharacter_UseLightPressed),NULL);
}
struct Z_Construct_UFunction_AQuietCharacter_UseLightPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuietCharacter_UseLightPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuietCharacter, nullptr, "UseLightPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuietCharacter_UseLightPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQuietCharacter_UseLightPressed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AQuietCharacter_UseLightPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQuietCharacter_UseLightPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AQuietCharacter::execUseLightPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UseLightPressed_Implementation();
	P_NATIVE_END;
}
// End Class AQuietCharacter Function UseLightPressed

// Begin Class AQuietCharacter
void AQuietCharacter::StaticRegisterNativesAQuietCharacter()
{
	UClass* Class = AQuietCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BackpackPressed", &AQuietCharacter::execBackpackPressed },
		{ "ChangeFilth", &AQuietCharacter::execChangeFilth },
		{ "ChangeMania", &AQuietCharacter::execChangeMania },
		{ "ChangeSoulNum", &AQuietCharacter::execChangeSoulNum },
		{ "Elim", &AQuietCharacter::execElim },
		{ "Initialize", &AQuietCharacter::execInitialize },
		{ "ItemViewEvent", &AQuietCharacter::execItemViewEvent },
		{ "OnSphereOverlap", &AQuietCharacter::execOnSphereOverlap },
		{ "ResetFlashLight", &AQuietCharacter::execResetFlashLight },
		{ "SetHealth", &AQuietCharacter::execSetHealth },
		{ "ShowDeadUMG", &AQuietCharacter::execShowDeadUMG },
		{ "ThrowTrace", &AQuietCharacter::execThrowTrace },
		{ "TimelineFinished_Aim", &AQuietCharacter::execTimelineFinished_Aim },
		{ "TimelineFinished_TP", &AQuietCharacter::execTimelineFinished_TP },
		{ "TimelineUpdate_Aim", &AQuietCharacter::execTimelineUpdate_Aim },
		{ "TimelineUpdate_TP", &AQuietCharacter::execTimelineUpdate_TP },
		{ "UpdataSlot", &AQuietCharacter::execUpdataSlot },
		{ "UseLightPressed", &AQuietCharacter::execUseLightPressed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AQuietCharacter);
UClass* Z_Construct_UClass_AQuietCharacter_NoRegister()
{
	return AQuietCharacter::StaticClass();
}
struct Z_Construct_UClass_AQuietCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "QuietCharacter.h" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElimMontage_MetaData[] = {
		{ "Category", "QuietCharacter" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RespawnMontage_MetaData[] = {
		{ "Category", "QuietCharacter" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseSensitivity_MetaData[] = {
		{ "Category", "QuietCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "QuietCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Combat_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuietCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemRef_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuietCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuietCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TouchComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuietCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpotLight_FlashLight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuietCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointLight_ViewItem_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuietCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointLight_LampLight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuietCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToGetLocation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuietCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Plane_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuietCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThrowTraceSpline_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuietCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuietPlayerController_MetaData[] = {
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenBackPackSound_MetaData[] = {
		{ "Category", "QuietCharacter" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CloseBackPackSound_MetaData[] = {
		{ "Category", "QuietCharacter" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeadSound_MetaData[] = {
		{ "Category", "QuietCharacter" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RespawnSound_MetaData[] = {
		{ "Category", "QuietCharacter" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIController_01_MetaData[] = {
		{ "Category", "QuietCharacter" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterType_MetaData[] = {
		{ "Category", "QuietCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(BlueprintReadOnly, EditAnywhere)\n//TSubclassOf<class AGameItemActor> ViewingItem;\n" },
#endif
		{ "ModuleRelativePath", "QuietCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(BlueprintReadOnly, EditAnywhere)\nTSubclassOf<class AGameItemActor> ViewingItem;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterState_MetaData[] = {
		{ "Category", "QuietCharacter" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlashLightItem_MetaData[] = {
		{ "Category", "LightItem" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LampLightItem_MetaData[] = {
		{ "Category", "LightItem" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlashLightElectricity_MetaData[] = {
		{ "Category", "QuietCharacter" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsLight_MetaData[] = {
		{ "Category", "QuietCharacter" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isHover_MetaData[] = {
		{ "Category", "QuietCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UFUNCTION(BlueprintNativeEvent, BlueprintCallable)\n//void ShowRestartUMG();\n" },
#endif
		{ "ModuleRelativePath", "QuietCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION(BlueprintNativeEvent, BlueprintCallable)\nvoid ShowRestartUMG();" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoverItem_MetaData[] = {
		{ "Category", "QuietCharacter" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TackingItem_MetaData[] = {
		{ "Category", "QuietCharacter" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTP_MetaData[] = {
		{ "Category", "QuietCharacter" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bElimmed_MetaData[] = {
		{ "Category", "QuietCharacter" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRespawn_MetaData[] = {
		{ "Category", "QuietCharacter" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GangGangNeed_MetaData[] = {
		{ "Category", "QuietCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xbe\n" },
#endif
		{ "ModuleRelativePath", "QuietCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xbe" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "QuietCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xc7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb5\n" },
#endif
		{ "ModuleRelativePath", "QuietCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb5" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLife_MetaData[] = {
		{ "Category", "QuietCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xc7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "QuietCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGameTime_MetaData[] = {
		{ "Category", "QuietCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb7\xca\xb1\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "QuietCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb7\xca\xb1\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurviveGameTime_MetaData[] = {
		{ "Category", "QuietCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb7\xca\xb1\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "QuietCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb7\xca\xb1\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentJadeNum_MetaData[] = {
		{ "Category", "QuietCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xc7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "QuietCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NeedJadeNum_MetaData[] = {
		{ "Category", "QuietCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xd2\xaa\xef\xbf\xbd\xd5\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "QuietCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xd2\xaa\xef\xbf\xbd\xd5\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CarryCards_MetaData[] = {
		{ "Category", "QuietCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xd0\xaf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "QuietCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xd0\xaf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightStoneClass_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TPClass_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeOutClass_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirecrackerClass_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_S_DropLightStone_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_S_EatCake_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_S_TP_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MPC_Dissolve_MetaData[] = {
		{ "Category", "MaterialParameterCollection" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TPTimeline_MetaData[] = {
		{ "Category", "Timeline" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TPCurve_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAim_MetaData[] = {
		{ "Category", "QuietCharacter" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllThrowLine_MetaData[] = {
		{ "Category", "QuietCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentThrowLine_MetaData[] = {
		{ "Category", "QuietCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimTimeline_MetaData[] = {
		{ "Category", "Timeline" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimCurve_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoulNum_MetaData[] = {
		{ "Category", "QuietCharacter" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filth_MetaData[] = {
		{ "Category", "QuietCharacter" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mania_MetaData[] = {
		{ "Category", "QuietCharacter" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFrantic_MetaData[] = {
		{ "Category", "QuietCharacter" },
		{ "ModuleRelativePath", "QuietCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ElimMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RespawnMontage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseSensitivity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Combat;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TouchComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpotLight_FlashLight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PointLight_ViewItem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PointLight_LampLight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToGetLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Plane;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThrowTraceSpline;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuietPlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OpenBackPackSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CloseBackPackSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeadSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RespawnSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIController_01;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterState;
	static const UECodeGen_Private::FClassPropertyParams NewProp_FlashLightItem;
	static const UECodeGen_Private::FClassPropertyParams NewProp_LampLightItem;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FlashLightElectricity;
	static void NewProp_IsLight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsLight;
	static void NewProp_isHover_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isHover;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HoverItem;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TackingItem;
	static void NewProp_bIsTP_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTP;
	static void NewProp_bElimmed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bElimmed;
	static void NewProp_bRespawn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRespawn;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GangGangNeed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentLife;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentGameTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SurviveGameTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentJadeNum;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NeedJadeNum;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CarryCards_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CarryCards_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CarryCards;
	static const UECodeGen_Private::FClassPropertyParams NewProp_LightStoneClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TPClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TimeOutClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_FirecrackerClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_S_DropLightStone;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_S_EatCake;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_S_TP;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MPC_Dissolve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TPTimeline;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TPCurve;
	static void NewProp_bAim_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllThrowLine_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllThrowLine;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentThrowLine;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LineMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EndMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AimTimeline;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AimCurve;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SoulNum;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Filth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mania;
	static void NewProp_bFrantic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFrantic;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AQuietCharacter_BackpackPressed, "BackpackPressed" }, // 190016465
		{ &Z_Construct_UFunction_AQuietCharacter_ChangeFilth, "ChangeFilth" }, // 2336888921
		{ &Z_Construct_UFunction_AQuietCharacter_ChangeMania, "ChangeMania" }, // 3001741191
		{ &Z_Construct_UFunction_AQuietCharacter_ChangeSoulNum, "ChangeSoulNum" }, // 220569376
		{ &Z_Construct_UFunction_AQuietCharacter_DrewHUD, "DrewHUD" }, // 567173393
		{ &Z_Construct_UFunction_AQuietCharacter_Elim, "Elim" }, // 1763956513
		{ &Z_Construct_UFunction_AQuietCharacter_HeadShake, "HeadShake" }, // 2253944530
		{ &Z_Construct_UFunction_AQuietCharacter_Initialize, "Initialize" }, // 1415121145
		{ &Z_Construct_UFunction_AQuietCharacter_ItemViewEvent, "ItemViewEvent" }, // 855921043
		{ &Z_Construct_UFunction_AQuietCharacter_LengHalfHeight, "LengHalfHeight" }, // 2827014140
		{ &Z_Construct_UFunction_AQuietCharacter_OnSphereOverlap, "OnSphereOverlap" }, // 3654086848
		{ &Z_Construct_UFunction_AQuietCharacter_ResetFlashLight, "ResetFlashLight" }, // 3147667841
		{ &Z_Construct_UFunction_AQuietCharacter_SetHealth, "SetHealth" }, // 2453920225
		{ &Z_Construct_UFunction_AQuietCharacter_ShortHalfHeight, "ShortHalfHeight" }, // 2999589830
		{ &Z_Construct_UFunction_AQuietCharacter_ShowDeadUMG, "ShowDeadUMG" }, // 149628520
		{ &Z_Construct_UFunction_AQuietCharacter_ThrowTrace, "ThrowTrace" }, // 3677160538
		{ &Z_Construct_UFunction_AQuietCharacter_TimelineFinished_Aim, "TimelineFinished_Aim" }, // 4103655764
		{ &Z_Construct_UFunction_AQuietCharacter_TimelineFinished_TP, "TimelineFinished_TP" }, // 614163998
		{ &Z_Construct_UFunction_AQuietCharacter_TimelineUpdate_Aim, "TimelineUpdate_Aim" }, // 2060317797
		{ &Z_Construct_UFunction_AQuietCharacter_TimelineUpdate_TP, "TimelineUpdate_TP" }, // 1034483229
		{ &Z_Construct_UFunction_AQuietCharacter_UpdataSlot, "UpdataSlot" }, // 2078604908
		{ &Z_Construct_UFunction_AQuietCharacter_UseLightPressed, "UseLightPressed" }, // 625199800
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AQuietCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_ElimMontage = { "ElimMontage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, ElimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElimMontage_MetaData), NewProp_ElimMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_RespawnMontage = { "RespawnMontage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, RespawnMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RespawnMontage_MetaData), NewProp_RespawnMontage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_MouseSensitivity = { "MouseSensitivity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, MouseSensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseSensitivity_MetaData), NewProp_MouseSensitivity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_Combat = { "Combat", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, Combat), Z_Construct_UClass_UCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Combat_MetaData), NewProp_Combat_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_ItemRef = { "ItemRef", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, ItemRef), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemRef_MetaData), NewProp_ItemRef_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, Inventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inventory_MetaData), NewProp_Inventory_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_TouchComponent = { "TouchComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, TouchComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TouchComponent_MetaData), NewProp_TouchComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_SpotLight_FlashLight = { "SpotLight_FlashLight", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, SpotLight_FlashLight), Z_Construct_UClass_USpotLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpotLight_FlashLight_MetaData), NewProp_SpotLight_FlashLight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_PointLight_ViewItem = { "PointLight_ViewItem", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, PointLight_ViewItem), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointLight_ViewItem_MetaData), NewProp_PointLight_ViewItem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_PointLight_LampLight = { "PointLight_LampLight", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, PointLight_LampLight), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointLight_LampLight_MetaData), NewProp_PointLight_LampLight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_ToGetLocation = { "ToGetLocation", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, ToGetLocation), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToGetLocation_MetaData), NewProp_ToGetLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_Plane = { "Plane", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, Plane), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Plane_MetaData), NewProp_Plane_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_ThrowTraceSpline = { "ThrowTraceSpline", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, ThrowTraceSpline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThrowTraceSpline_MetaData), NewProp_ThrowTraceSpline_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_QuietPlayerController = { "QuietPlayerController", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, QuietPlayerController), Z_Construct_UClass_AQuietPlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuietPlayerController_MetaData), NewProp_QuietPlayerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_OpenBackPackSound = { "OpenBackPackSound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, OpenBackPackSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenBackPackSound_MetaData), NewProp_OpenBackPackSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_CloseBackPackSound = { "CloseBackPackSound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, CloseBackPackSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CloseBackPackSound_MetaData), NewProp_CloseBackPackSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_DeadSound = { "DeadSound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, DeadSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeadSound_MetaData), NewProp_DeadSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_RespawnSound = { "RespawnSound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, RespawnSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RespawnSound_MetaData), NewProp_RespawnSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_AIController_01 = { "AIController_01", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, AIController_01), Z_Construct_UClass_AAIController_01_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIController_01_MetaData), NewProp_AIController_01_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_CharacterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_CharacterType = { "CharacterType", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, CharacterType), Z_Construct_UEnum_Quiet_ECharacterType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterType_MetaData), NewProp_CharacterType_MetaData) }; // 918581571
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_CharacterState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_CharacterState = { "CharacterState", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, CharacterState), Z_Construct_UEnum_Quiet_ECharacterState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterState_MetaData), NewProp_CharacterState_MetaData) }; // 4013654604
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_FlashLightItem = { "FlashLightItem", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, FlashLightItem), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameItemActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlashLightItem_MetaData), NewProp_FlashLightItem_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_LampLightItem = { "LampLightItem", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, LampLightItem), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameItemActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LampLightItem_MetaData), NewProp_LampLightItem_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_FlashLightElectricity = { "FlashLightElectricity", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, FlashLightElectricity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlashLightElectricity_MetaData), NewProp_FlashLightElectricity_MetaData) };
void Z_Construct_UClass_AQuietCharacter_Statics::NewProp_IsLight_SetBit(void* Obj)
{
	((AQuietCharacter*)Obj)->IsLight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_IsLight = { "IsLight", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AQuietCharacter), &Z_Construct_UClass_AQuietCharacter_Statics::NewProp_IsLight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsLight_MetaData), NewProp_IsLight_MetaData) };
void Z_Construct_UClass_AQuietCharacter_Statics::NewProp_isHover_SetBit(void* Obj)
{
	((AQuietCharacter*)Obj)->isHover = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_isHover = { "isHover", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AQuietCharacter), &Z_Construct_UClass_AQuietCharacter_Statics::NewProp_isHover_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isHover_MetaData), NewProp_isHover_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_HoverItem = { "HoverItem", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, HoverItem), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameItemActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoverItem_MetaData), NewProp_HoverItem_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_TackingItem = { "TackingItem", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, TackingItem), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameItemActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TackingItem_MetaData), NewProp_TackingItem_MetaData) };
void Z_Construct_UClass_AQuietCharacter_Statics::NewProp_bIsTP_SetBit(void* Obj)
{
	((AQuietCharacter*)Obj)->bIsTP = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_bIsTP = { "bIsTP", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AQuietCharacter), &Z_Construct_UClass_AQuietCharacter_Statics::NewProp_bIsTP_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTP_MetaData), NewProp_bIsTP_MetaData) };
void Z_Construct_UClass_AQuietCharacter_Statics::NewProp_bElimmed_SetBit(void* Obj)
{
	((AQuietCharacter*)Obj)->bElimmed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_bElimmed = { "bElimmed", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AQuietCharacter), &Z_Construct_UClass_AQuietCharacter_Statics::NewProp_bElimmed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bElimmed_MetaData), NewProp_bElimmed_MetaData) };
void Z_Construct_UClass_AQuietCharacter_Statics::NewProp_bRespawn_SetBit(void* Obj)
{
	((AQuietCharacter*)Obj)->bRespawn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_bRespawn = { "bRespawn", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AQuietCharacter), &Z_Construct_UClass_AQuietCharacter_Statics::NewProp_bRespawn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRespawn_MetaData), NewProp_bRespawn_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_GangGangNeed = { "GangGangNeed", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, GangGangNeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GangGangNeed_MetaData), NewProp_GangGangNeed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_CurrentLife = { "CurrentLife", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, CurrentLife), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLife_MetaData), NewProp_CurrentLife_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_CurrentGameTime = { "CurrentGameTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, CurrentGameTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentGameTime_MetaData), NewProp_CurrentGameTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_SurviveGameTime = { "SurviveGameTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, SurviveGameTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurviveGameTime_MetaData), NewProp_SurviveGameTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_CurrentJadeNum = { "CurrentJadeNum", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, CurrentJadeNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentJadeNum_MetaData), NewProp_CurrentJadeNum_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_NeedJadeNum = { "NeedJadeNum", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, NeedJadeNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NeedJadeNum_MetaData), NewProp_NeedJadeNum_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_CarryCards_ValueProp = { "CarryCards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_CarryCards_Key_KeyProp = { "CarryCards_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_CarryCards = { "CarryCards", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, CarryCards), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CarryCards_MetaData), NewProp_CarryCards_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_LightStoneClass = { "LightStoneClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, LightStoneClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AItemActorInGame_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightStoneClass_MetaData), NewProp_LightStoneClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_TPClass = { "TPClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, TPClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TPClass_MetaData), NewProp_TPClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_TimeOutClass = { "TimeOutClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, TimeOutClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeOutClass_MetaData), NewProp_TimeOutClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_FirecrackerClass = { "FirecrackerClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, FirecrackerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirecrackerClass_MetaData), NewProp_FirecrackerClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_S_DropLightStone = { "S_DropLightStone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, S_DropLightStone), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_S_DropLightStone_MetaData), NewProp_S_DropLightStone_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_S_EatCake = { "S_EatCake", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, S_EatCake), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_S_EatCake_MetaData), NewProp_S_EatCake_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_S_TP = { "S_TP", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, S_TP), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_S_TP_MetaData), NewProp_S_TP_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_MPC_Dissolve = { "MPC_Dissolve", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, MPC_Dissolve), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MPC_Dissolve_MetaData), NewProp_MPC_Dissolve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_TPTimeline = { "TPTimeline", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, TPTimeline), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TPTimeline_MetaData), NewProp_TPTimeline_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_TPCurve = { "TPCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, TPCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TPCurve_MetaData), NewProp_TPCurve_MetaData) };
void Z_Construct_UClass_AQuietCharacter_Statics::NewProp_bAim_SetBit(void* Obj)
{
	((AQuietCharacter*)Obj)->bAim = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_bAim = { "bAim", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AQuietCharacter), &Z_Construct_UClass_AQuietCharacter_Statics::NewProp_bAim_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAim_MetaData), NewProp_bAim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_AllThrowLine_Inner = { "AllThrowLine", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_AllThrowLine = { "AllThrowLine", nullptr, (EPropertyFlags)0x001000800000000c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, AllThrowLine), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllThrowLine_MetaData), NewProp_AllThrowLine_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_CurrentThrowLine = { "CurrentThrowLine", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, CurrentThrowLine), Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentThrowLine_MetaData), NewProp_CurrentThrowLine_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_LineMesh = { "LineMesh", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, LineMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineMesh_MetaData), NewProp_LineMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_EndMesh = { "EndMesh", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, EndMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndMesh_MetaData), NewProp_EndMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_AimTimeline = { "AimTimeline", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, AimTimeline), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimTimeline_MetaData), NewProp_AimTimeline_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_AimCurve = { "AimCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, AimCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimCurve_MetaData), NewProp_AimCurve_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_SoulNum = { "SoulNum", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, SoulNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoulNum_MetaData), NewProp_SoulNum_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_Filth = { "Filth", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, Filth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filth_MetaData), NewProp_Filth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_Mania = { "Mania", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuietCharacter, Mania), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mania_MetaData), NewProp_Mania_MetaData) };
void Z_Construct_UClass_AQuietCharacter_Statics::NewProp_bFrantic_SetBit(void* Obj)
{
	((AQuietCharacter*)Obj)->bFrantic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AQuietCharacter_Statics::NewProp_bFrantic = { "bFrantic", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AQuietCharacter), &Z_Construct_UClass_AQuietCharacter_Statics::NewProp_bFrantic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFrantic_MetaData), NewProp_bFrantic_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AQuietCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_ElimMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_RespawnMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_MouseSensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_Combat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_ItemRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_Inventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_TouchComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_SpotLight_FlashLight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_PointLight_ViewItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_PointLight_LampLight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_ToGetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_Plane,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_ThrowTraceSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_QuietPlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_OpenBackPackSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_CloseBackPackSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_DeadSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_RespawnSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_AIController_01,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_CharacterType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_CharacterType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_CharacterState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_CharacterState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_FlashLightItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_LampLightItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_FlashLightElectricity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_IsLight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_isHover,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_HoverItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_TackingItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_bIsTP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_bElimmed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_bRespawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_GangGangNeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_CurrentLife,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_CurrentGameTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_SurviveGameTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_CurrentJadeNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_NeedJadeNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_CarryCards_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_CarryCards_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_CarryCards,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_LightStoneClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_TPClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_TimeOutClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_FirecrackerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_S_DropLightStone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_S_EatCake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_S_TP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_MPC_Dissolve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_TPTimeline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_TPCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_bAim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_AllThrowLine_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_AllThrowLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_CurrentThrowLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_LineMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_EndMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_AimTimeline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_AimCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_SoulNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_Filth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_Mania,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuietCharacter_Statics::NewProp_bFrantic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AQuietCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AQuietCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Quiet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AQuietCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AQuietCharacter_Statics::ClassParams = {
	&AQuietCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AQuietCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AQuietCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AQuietCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AQuietCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AQuietCharacter()
{
	if (!Z_Registration_Info_UClass_AQuietCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AQuietCharacter.OuterSingleton, Z_Construct_UClass_AQuietCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AQuietCharacter.OuterSingleton;
}
template<> QUIET_API UClass* StaticClass<AQuietCharacter>()
{
	return AQuietCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AQuietCharacter);
AQuietCharacter::~AQuietCharacter() {}
// End Class AQuietCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_QuietCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AQuietCharacter, AQuietCharacter::StaticClass, TEXT("AQuietCharacter"), &Z_Registration_Info_UClass_AQuietCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AQuietCharacter), 2145885873U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_QuietCharacter_h_4057365701(TEXT("/Script/Quiet"),
	Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_QuietCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_QuietCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
