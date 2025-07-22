// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Quiet/Actor/CardActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCardActor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
QUIET_API UClass* Z_Construct_UClass_ACardActor();
QUIET_API UClass* Z_Construct_UClass_ACardActor_NoRegister();
QUIET_API UClass* Z_Construct_UClass_AGameItemActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Quiet();
// End Cross Module References

// Begin Class ACardActor
void ACardActor::StaticRegisterNativesACardActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACardActor);
UClass* Z_Construct_UClass_ACardActor_NoRegister()
{
	return ACardActor::StaticClass();
}
struct Z_Construct_UClass_ACardActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/CardActor.h" },
		{ "ModuleRelativePath", "Actor/CardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_I_LightStone_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Actor/CardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_I_Firecracker_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Actor/CardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_I_FlashLight_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Actor/CardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_I_Cake_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Actor/CardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_I_ShopTicket_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Actor/CardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_I_HandMirror_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Actor/CardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_I_Hourglass_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Actor/CardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_I_LightStone;
	static const UECodeGen_Private::FClassPropertyParams NewProp_I_Firecracker;
	static const UECodeGen_Private::FClassPropertyParams NewProp_I_FlashLight;
	static const UECodeGen_Private::FClassPropertyParams NewProp_I_Cake;
	static const UECodeGen_Private::FClassPropertyParams NewProp_I_ShopTicket;
	static const UECodeGen_Private::FClassPropertyParams NewProp_I_HandMirror;
	static const UECodeGen_Private::FClassPropertyParams NewProp_I_Hourglass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACardActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACardActor_Statics::NewProp_I_LightStone = { "I_LightStone", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACardActor, I_LightStone), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameItemActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_I_LightStone_MetaData), NewProp_I_LightStone_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACardActor_Statics::NewProp_I_Firecracker = { "I_Firecracker", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACardActor, I_Firecracker), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameItemActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_I_Firecracker_MetaData), NewProp_I_Firecracker_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACardActor_Statics::NewProp_I_FlashLight = { "I_FlashLight", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACardActor, I_FlashLight), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameItemActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_I_FlashLight_MetaData), NewProp_I_FlashLight_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACardActor_Statics::NewProp_I_Cake = { "I_Cake", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACardActor, I_Cake), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameItemActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_I_Cake_MetaData), NewProp_I_Cake_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACardActor_Statics::NewProp_I_ShopTicket = { "I_ShopTicket", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACardActor, I_ShopTicket), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameItemActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_I_ShopTicket_MetaData), NewProp_I_ShopTicket_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACardActor_Statics::NewProp_I_HandMirror = { "I_HandMirror", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACardActor, I_HandMirror), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameItemActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_I_HandMirror_MetaData), NewProp_I_HandMirror_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACardActor_Statics::NewProp_I_Hourglass = { "I_Hourglass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACardActor, I_Hourglass), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameItemActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_I_Hourglass_MetaData), NewProp_I_Hourglass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACardActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardActor_Statics::NewProp_I_LightStone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardActor_Statics::NewProp_I_Firecracker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardActor_Statics::NewProp_I_FlashLight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardActor_Statics::NewProp_I_Cake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardActor_Statics::NewProp_I_ShopTicket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardActor_Statics::NewProp_I_HandMirror,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardActor_Statics::NewProp_I_Hourglass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACardActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACardActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Quiet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACardActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACardActor_Statics::ClassParams = {
	&ACardActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACardActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACardActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACardActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ACardActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACardActor()
{
	if (!Z_Registration_Info_UClass_ACardActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACardActor.OuterSingleton, Z_Construct_UClass_ACardActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACardActor.OuterSingleton;
}
template<> QUIET_API UClass* StaticClass<ACardActor>()
{
	return ACardActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACardActor);
ACardActor::~ACardActor() {}
// End Class ACardActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Actor_CardActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACardActor, ACardActor::StaticClass, TEXT("ACardActor"), &Z_Registration_Info_UClass_ACardActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACardActor), 344964329U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Actor_CardActor_h_583325381(TEXT("/Script/Quiet"),
	Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Actor_CardActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_Actor_CardActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
