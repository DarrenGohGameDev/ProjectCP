// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/ActorComponent/Character/HitComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECTCP_API UClass* Z_Construct_UClass_UGetHitInterface_NoRegister();
PROJECTCP_API UClass* Z_Construct_UClass_UHitComponent();
PROJECTCP_API UClass* Z_Construct_UClass_UHitComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Class UHitComponent
void UHitComponent::StaticRegisterNativesUHitComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHitComponent);
UClass* Z_Construct_UClass_UHitComponent_NoRegister()
{
	return UHitComponent::StaticClass();
}
struct Z_Construct_UClass_UHitComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ActorComponent/Character/HitComponent.h" },
		{ "ModuleRelativePath", "Public/ActorComponent/Character/HitComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHitComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHitComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectCP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHitComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UHitComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGetHitInterface_NoRegister, (int32)VTABLE_OFFSET(UHitComponent, IGetHitInterface), false },  // 3176531238
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHitComponent_Statics::ClassParams = {
	&UHitComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHitComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHitComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHitComponent()
{
	if (!Z_Registration_Info_UClass_UHitComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHitComponent.OuterSingleton, Z_Construct_UClass_UHitComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHitComponent.OuterSingleton;
}
template<> PROJECTCP_API UClass* StaticClass<UHitComponent>()
{
	return UHitComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHitComponent);
UHitComponent::~UHitComponent() {}
// End Class UHitComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_ActorComponent_Character_HitComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHitComponent, UHitComponent::StaticClass, TEXT("UHitComponent"), &Z_Registration_Info_UClass_UHitComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHitComponent), 284350281U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_ActorComponent_Character_HitComponent_h_3882297952(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_ActorComponent_Character_HitComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_ActorComponent_Character_HitComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
