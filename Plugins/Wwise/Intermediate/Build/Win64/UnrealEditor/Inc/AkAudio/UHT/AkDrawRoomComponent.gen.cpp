// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkDrawRoomComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkDrawRoomComponent() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UDrawRoomComponent();
AKAUDIO_API UClass* Z_Construct_UClass_UDrawRoomComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

// Begin Class UDrawRoomComponent
void UDrawRoomComponent::StaticRegisterNativesUDrawRoomComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDrawRoomComponent);
UClass* Z_Construct_UClass_UDrawRoomComponent_NoRegister()
{
	return UDrawRoomComponent::StaticClass();
}
struct Z_Construct_UClass_UDrawRoomComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\x09Utility component for drawing a Room in a scene.\n */" },
#endif
		{ "HideCategories", "Object Mobility VirtualTexture Trigger" },
		{ "IncludePath", "AkDrawRoomComponent.h" },
		{ "ModuleRelativePath", "Classes/AkDrawRoomComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Utility component for drawing a Room in a scene." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDrawRoomComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDrawRoomComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDrawRoomComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDrawRoomComponent_Statics::ClassParams = {
	&UDrawRoomComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00A830A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDrawRoomComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDrawRoomComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDrawRoomComponent()
{
	if (!Z_Registration_Info_UClass_UDrawRoomComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDrawRoomComponent.OuterSingleton, Z_Construct_UClass_UDrawRoomComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDrawRoomComponent.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UDrawRoomComponent>()
{
	return UDrawRoomComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDrawRoomComponent);
UDrawRoomComponent::~UDrawRoomComponent() {}
// End Class UDrawRoomComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkDrawRoomComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDrawRoomComponent, UDrawRoomComponent::StaticClass, TEXT("UDrawRoomComponent"), &Z_Registration_Info_UClass_UDrawRoomComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDrawRoomComponent), 2856631201U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkDrawRoomComponent_h_4177869249(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkDrawRoomComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkDrawRoomComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
