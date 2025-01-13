// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/ActorComponent/Attribute/GAS/HealthAttributeSet.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthAttributeSet() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
PROJECTCP_API UClass* Z_Construct_UClass_UHealthAttributeSet();
PROJECTCP_API UClass* Z_Construct_UClass_UHealthAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Class UHealthAttributeSet Function OnRepCurrentHealth
struct Z_Construct_UFunction_UHealthAttributeSet_OnRepCurrentHealth_Statics
{
	struct HealthAttributeSet_eventOnRepCurrentHealth_Parms
	{
		FGameplayAttributeData oldCurrentHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponent/Attribute/GAS/HealthAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_oldCurrentHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_oldCurrentHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHealthAttributeSet_OnRepCurrentHealth_Statics::NewProp_oldCurrentHealth = { "oldCurrentHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthAttributeSet_eventOnRepCurrentHealth_Parms, oldCurrentHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_oldCurrentHealth_MetaData), NewProp_oldCurrentHealth_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthAttributeSet_OnRepCurrentHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthAttributeSet_OnRepCurrentHealth_Statics::NewProp_oldCurrentHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthAttributeSet_OnRepCurrentHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthAttributeSet_OnRepCurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthAttributeSet, nullptr, "OnRepCurrentHealth", nullptr, nullptr, Z_Construct_UFunction_UHealthAttributeSet_OnRepCurrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthAttributeSet_OnRepCurrentHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHealthAttributeSet_OnRepCurrentHealth_Statics::HealthAttributeSet_eventOnRepCurrentHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthAttributeSet_OnRepCurrentHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthAttributeSet_OnRepCurrentHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHealthAttributeSet_OnRepCurrentHealth_Statics::HealthAttributeSet_eventOnRepCurrentHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHealthAttributeSet_OnRepCurrentHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthAttributeSet_OnRepCurrentHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealthAttributeSet::execOnRepCurrentHealth)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_oldCurrentHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRepCurrentHealth(Z_Param_Out_oldCurrentHealth);
	P_NATIVE_END;
}
// End Class UHealthAttributeSet Function OnRepCurrentHealth

// Begin Class UHealthAttributeSet Function OnRepMaxHealth
struct Z_Construct_UFunction_UHealthAttributeSet_OnRepMaxHealth_Statics
{
	struct HealthAttributeSet_eventOnRepMaxHealth_Parms
	{
		FGameplayAttributeData oldMaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponent/Attribute/GAS/HealthAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_oldMaxHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_oldMaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHealthAttributeSet_OnRepMaxHealth_Statics::NewProp_oldMaxHealth = { "oldMaxHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthAttributeSet_eventOnRepMaxHealth_Parms, oldMaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_oldMaxHealth_MetaData), NewProp_oldMaxHealth_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthAttributeSet_OnRepMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthAttributeSet_OnRepMaxHealth_Statics::NewProp_oldMaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthAttributeSet_OnRepMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthAttributeSet_OnRepMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthAttributeSet, nullptr, "OnRepMaxHealth", nullptr, nullptr, Z_Construct_UFunction_UHealthAttributeSet_OnRepMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthAttributeSet_OnRepMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHealthAttributeSet_OnRepMaxHealth_Statics::HealthAttributeSet_eventOnRepMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthAttributeSet_OnRepMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthAttributeSet_OnRepMaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHealthAttributeSet_OnRepMaxHealth_Statics::HealthAttributeSet_eventOnRepMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHealthAttributeSet_OnRepMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthAttributeSet_OnRepMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealthAttributeSet::execOnRepMaxHealth)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_oldMaxHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRepMaxHealth(Z_Param_Out_oldMaxHealth);
	P_NATIVE_END;
}
// End Class UHealthAttributeSet Function OnRepMaxHealth

// Begin Class UHealthAttributeSet Function TakeDamage
struct Z_Construct_UFunction_UHealthAttributeSet_TakeDamage_Statics
{
	struct HealthAttributeSet_eventTakeDamage_Parms
	{
		float Amount;
		float currentHpPercent;
		AActor* owner;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponent/Attribute/GAS/HealthAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_currentHpPercent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_owner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealthAttributeSet_TakeDamage_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthAttributeSet_eventTakeDamage_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealthAttributeSet_TakeDamage_Statics::NewProp_currentHpPercent = { "currentHpPercent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthAttributeSet_eventTakeDamage_Parms, currentHpPercent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthAttributeSet_TakeDamage_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthAttributeSet_eventTakeDamage_Parms, owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthAttributeSet_TakeDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthAttributeSet_TakeDamage_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthAttributeSet_TakeDamage_Statics::NewProp_currentHpPercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthAttributeSet_TakeDamage_Statics::NewProp_owner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthAttributeSet_TakeDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthAttributeSet_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthAttributeSet, nullptr, "TakeDamage", nullptr, nullptr, Z_Construct_UFunction_UHealthAttributeSet_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthAttributeSet_TakeDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHealthAttributeSet_TakeDamage_Statics::HealthAttributeSet_eventTakeDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthAttributeSet_TakeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthAttributeSet_TakeDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHealthAttributeSet_TakeDamage_Statics::HealthAttributeSet_eventTakeDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHealthAttributeSet_TakeDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthAttributeSet_TakeDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealthAttributeSet::execTakeDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_currentHpPercent);
	P_GET_OBJECT(AActor,Z_Param_owner);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TakeDamage(Z_Param_Amount,Z_Param_Out_currentHpPercent,Z_Param_owner);
	P_NATIVE_END;
}
// End Class UHealthAttributeSet Function TakeDamage

// Begin Class UHealthAttributeSet
void UHealthAttributeSet::StaticRegisterNativesUHealthAttributeSet()
{
	UClass* Class = UHealthAttributeSet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRepCurrentHealth", &UHealthAttributeSet::execOnRepCurrentHealth },
		{ "OnRepMaxHealth", &UHealthAttributeSet::execOnRepMaxHealth },
		{ "TakeDamage", &UHealthAttributeSet::execTakeDamage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHealthAttributeSet);
UClass* Z_Construct_UClass_UHealthAttributeSet_NoRegister()
{
	return UHealthAttributeSet::StaticClass();
}
struct Z_Construct_UClass_UHealthAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ActorComponent/Attribute/GAS/HealthAttributeSet.h" },
		{ "ModuleRelativePath", "Public/ActorComponent/Attribute/GAS/HealthAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/ActorComponent/Attribute/GAS/HealthAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/ActorComponent/Attribute/GAS/HealthAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_currentHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_maxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHealthAttributeSet_OnRepCurrentHealth, "OnRepCurrentHealth" }, // 1090879888
		{ &Z_Construct_UFunction_UHealthAttributeSet_OnRepMaxHealth, "OnRepMaxHealth" }, // 3686270869
		{ &Z_Construct_UFunction_UHealthAttributeSet_TakeDamage, "TakeDamage" }, // 1296429428
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealthAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHealthAttributeSet_Statics::NewProp_currentHealth = { "currentHealth", "OnRepCurrentHealth", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthAttributeSet, currentHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentHealth_MetaData), NewProp_currentHealth_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHealthAttributeSet_Statics::NewProp_maxHealth = { "maxHealth", "OnRepMaxHealth", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthAttributeSet, maxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxHealth_MetaData), NewProp_maxHealth_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHealthAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthAttributeSet_Statics::NewProp_currentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthAttributeSet_Statics::NewProp_maxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthAttributeSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHealthAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectCP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHealthAttributeSet_Statics::ClassParams = {
	&UHealthAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHealthAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHealthAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UHealthAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHealthAttributeSet()
{
	if (!Z_Registration_Info_UClass_UHealthAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHealthAttributeSet.OuterSingleton, Z_Construct_UClass_UHealthAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHealthAttributeSet.OuterSingleton;
}
template<> PROJECTCP_API UClass* StaticClass<UHealthAttributeSet>()
{
	return UHealthAttributeSet::StaticClass();
}
void UHealthAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_currentHealth(TEXT("currentHealth"));
	static const FName Name_maxHealth(TEXT("maxHealth"));
	const bool bIsValid = true
		&& Name_currentHealth == ClassReps[(int32)ENetFields_Private::currentHealth].Property->GetFName()
		&& Name_maxHealth == ClassReps[(int32)ENetFields_Private::maxHealth].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UHealthAttributeSet"));
}
UHealthAttributeSet::UHealthAttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHealthAttributeSet);
UHealthAttributeSet::~UHealthAttributeSet() {}
// End Class UHealthAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_ActorComponent_Attribute_GAS_HealthAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHealthAttributeSet, UHealthAttributeSet::StaticClass, TEXT("UHealthAttributeSet"), &Z_Registration_Info_UClass_UHealthAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHealthAttributeSet), 1466943423U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_ActorComponent_Attribute_GAS_HealthAttributeSet_h_3511250067(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_ActorComponent_Attribute_GAS_HealthAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_ActorComponent_Attribute_GAS_HealthAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
