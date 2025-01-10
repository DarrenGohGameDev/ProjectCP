// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/ActorComponent/Character/AnimationComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECTCP_API UClass* Z_Construct_UClass_UAnimationComponent();
PROJECTCP_API UClass* Z_Construct_UClass_UAnimationComponent_NoRegister();
PROJECTCP_API UEnum* Z_Construct_UEnum_ProjectCP_ECharacterEquipState();
PROJECTCP_API UEnum* Z_Construct_UEnum_ProjectCP_ELowerBodyAnimationState();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Class UAnimationComponent
void UAnimationComponent::StaticRegisterNativesUAnimationComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationComponent);
UClass* Z_Construct_UClass_UAnimationComponent_NoRegister()
{
	return UAnimationComponent::StaticClass();
}
struct Z_Construct_UClass_UAnimationComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ActorComponent/Character/AnimationComponent.h" },
		{ "ModuleRelativePath", "Public/ActorComponent/Character/AnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentLowerBodyAnimationState_MetaData[] = {
		{ "Category", "AnimationComponent" },
		{ "ModuleRelativePath", "Public/ActorComponent/Character/AnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentCharacterEquipState_MetaData[] = {
		{ "Category", "AnimationComponent" },
		{ "ModuleRelativePath", "Public/ActorComponent/Character/AnimationComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_currentLowerBodyAnimationState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_currentLowerBodyAnimationState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_currentCharacterEquipState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_currentCharacterEquipState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimationComponent_Statics::NewProp_currentLowerBodyAnimationState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimationComponent_Statics::NewProp_currentLowerBodyAnimationState = { "currentLowerBodyAnimationState", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationComponent, currentLowerBodyAnimationState), Z_Construct_UEnum_ProjectCP_ELowerBodyAnimationState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentLowerBodyAnimationState_MetaData), NewProp_currentLowerBodyAnimationState_MetaData) }; // 2605313593
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimationComponent_Statics::NewProp_currentCharacterEquipState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimationComponent_Statics::NewProp_currentCharacterEquipState = { "currentCharacterEquipState", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationComponent, currentCharacterEquipState), Z_Construct_UEnum_ProjectCP_ECharacterEquipState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentCharacterEquipState_MetaData), NewProp_currentCharacterEquipState_MetaData) }; // 3153584895
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponent_Statics::NewProp_currentLowerBodyAnimationState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponent_Statics::NewProp_currentLowerBodyAnimationState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponent_Statics::NewProp_currentCharacterEquipState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponent_Statics::NewProp_currentCharacterEquipState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimationComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectCP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationComponent_Statics::ClassParams = {
	&UAnimationComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimationComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimationComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimationComponent()
{
	if (!Z_Registration_Info_UClass_UAnimationComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationComponent.OuterSingleton, Z_Construct_UClass_UAnimationComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimationComponent.OuterSingleton;
}
template<> PROJECTCP_API UClass* StaticClass<UAnimationComponent>()
{
	return UAnimationComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationComponent);
UAnimationComponent::~UAnimationComponent() {}
// End Class UAnimationComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_ActorComponent_Character_AnimationComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationComponent, UAnimationComponent::StaticClass, TEXT("UAnimationComponent"), &Z_Registration_Info_UClass_UAnimationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationComponent), 1092899377U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_ActorComponent_Character_AnimationComponent_h_176829225(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_ActorComponent_Character_AnimationComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_ActorComponent_Character_AnimationComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
