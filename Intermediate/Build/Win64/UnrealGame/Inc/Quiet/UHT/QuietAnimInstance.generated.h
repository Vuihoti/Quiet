// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "QuietAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUIET_QuietAnimInstance_generated_h
#error "QuietAnimInstance.generated.h already included, missing '#pragma once' in QuietAnimInstance.h"
#endif
#define QUIET_QuietAnimInstance_generated_h

#define FID_Quiet_Source_Quiet_QuietAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuietAnimInstance(); \
	friend struct Z_Construct_UClass_UQuietAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UQuietAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Quiet"), NO_API) \
	DECLARE_SERIALIZER(UQuietAnimInstance)


#define FID_Quiet_Source_Quiet_QuietAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuietAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UQuietAnimInstance(UQuietAnimInstance&&); \
	UQuietAnimInstance(const UQuietAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuietAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuietAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuietAnimInstance) \
	NO_API virtual ~UQuietAnimInstance();


#define FID_Quiet_Source_Quiet_QuietAnimInstance_h_12_PROLOG
#define FID_Quiet_Source_Quiet_QuietAnimInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Source_Quiet_QuietAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Source_Quiet_QuietAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUIET_API UClass* StaticClass<class UQuietAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Source_Quiet_QuietAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
