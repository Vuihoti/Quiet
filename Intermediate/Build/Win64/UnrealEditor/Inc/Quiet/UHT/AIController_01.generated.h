// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/AIController_01.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FAIStimulus;
#ifdef QUIET_AIController_01_generated_h
#error "AIController_01.generated.h already included, missing '#pragma once' in AIController_01.h"
#endif
#define QUIET_AIController_01_generated_h

#define FID_Quiet_Source_Quiet_AI_AIController_01_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execHearFeeling); \
	DECLARE_FUNCTION(execHunchFeeling); \
	DECLARE_FUNCTION(execSightFeeling);


#define FID_Quiet_Source_Quiet_AI_AIController_01_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAIController_01(); \
	friend struct Z_Construct_UClass_AAIController_01_Statics; \
public: \
	DECLARE_CLASS(AAIController_01, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Quiet"), NO_API) \
	DECLARE_SERIALIZER(AAIController_01)


#define FID_Quiet_Source_Quiet_AI_AIController_01_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAIController_01(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAIController_01(AAIController_01&&); \
	AAIController_01(const AAIController_01&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIController_01); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIController_01); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIController_01) \
	NO_API virtual ~AAIController_01();


#define FID_Quiet_Source_Quiet_AI_AIController_01_h_13_PROLOG
#define FID_Quiet_Source_Quiet_AI_AIController_01_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Source_Quiet_AI_AIController_01_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Quiet_Source_Quiet_AI_AIController_01_h_16_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Source_Quiet_AI_AIController_01_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUIET_API UClass* StaticClass<class AAIController_01>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Source_Quiet_AI_AIController_01_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
