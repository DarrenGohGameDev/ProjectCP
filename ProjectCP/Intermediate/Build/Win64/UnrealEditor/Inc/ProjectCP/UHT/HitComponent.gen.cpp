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
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
PROJECTCP_API UClass* Z_Construct_UClass_UGetHitInterface_NoRegister();
PROJECTCP_API UClass* Z_Construct_UClass_UHitComponent();
PROJECTCP_API UClass* Z_Construct_UClass_UHitComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Class UHitComponent Function GetHit_Implementation
struct Z_Construct_UFunction_UHitComponent_GetHit_Implementation_Statics
{
	struct HitComponent_eventGetHit_Implementation_Parms
	{
		int32 damage;
		AActor* hitActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponent/Character/HitComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_hitActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHitComponent_GetHit_Implementation_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitComponent_eventGetHit_Implementation_Parms, damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHitComponent_GetHit_Implementation_Statics::NewProp_hitActor = { "hitActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitComponent_eventGetHit_Implementation_Parms, hitActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHitComponent_GetHit_Implementation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitComponent_GetHit_Implementation_Statics::NewProp_damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitComponent_GetHit_Implementation_Statics::NewProp_hitActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHitComponent_GetHit_Implementation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHitComponent_GetHit_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHitComponent, nullptr, "GetHit_Implementation", nullptr, nullptr, Z_Construct_UFunction_UHitComponent_GetHit_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitComponent_GetHit_Implementation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHitComponent_GetHit_Implementation_Statics::HitComponent_eventGetHit_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHitComponent_GetHit_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHitComponent_GetHit_Implementation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHitComponent_GetHit_Implementation_Statics::HitComponent_eventGetHit_Implementation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHitComponent_GetHit_Implementation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHitComponent_GetHit_Implementation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHitComponent::execGetHit_Implementation)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_damage);
	P_GET_OBJECT(AActor,Z_Param_hitActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetHit_Implementation(Z_Param_damage,Z_Param_hitActor);
	P_NATIVE_END;
}
// End Class UHitComponent Function GetHit_Implementation

// Begin Class UHitComponent
void UHitComponent::StaticRegisterNativesUHitComponent()
{
	UClass* Class = UHitComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetHit_Implementation", &UHitComponent::execGetHit_Implementation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mHitSound_MetaData[] = {
		{ "Category", "HitComponent" },
		{ "ModuleRelativePath", "Public/ActorComponent/Character/HitComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mHitSound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHitComponent_GetHit_Implementation, "GetHit_Implementation" }, // 2642876872
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHitComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHitComponent_Statics::NewProp_mHitSound = { "mHitSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHitComponent, mHitSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mHitSound_MetaData), NewProp_mHitSound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHitComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitComponent_Statics::NewProp_mHitSound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHitComponent_Statics::PropPointers) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_UHitComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHitComponent_Statics::PropPointers),
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
		{ Z_Construct_UClass_UHitComponent, UHitComponent::StaticClass, TEXT("UHitComponent"), &Z_Registration_Info_UClass_UHitComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHitComponent), 3971135655U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_ActorComponent_Character_HitComponent_h_3905099878(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_ActorComponent_Character_HitComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_ActorComponent_Character_HitComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
