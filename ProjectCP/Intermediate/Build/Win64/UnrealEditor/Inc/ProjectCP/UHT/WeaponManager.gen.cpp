// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/Managers/WeaponManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECTCP_API UClass* Z_Construct_UClass_ABaseRangeWeapon_NoRegister();
PROJECTCP_API UClass* Z_Construct_UClass_UWeaponManager();
PROJECTCP_API UClass* Z_Construct_UClass_UWeaponManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Class UWeaponManager Function ReloadCurrentWeapon
struct Z_Construct_UFunction_UWeaponManager_ReloadCurrentWeapon_Statics
{
	struct WeaponManager_eventReloadCurrentWeapon_Parms
	{
		AActor* owner;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Managers/WeaponManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_owner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponManager_ReloadCurrentWeapon_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponManager_eventReloadCurrentWeapon_Parms, owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponManager_ReloadCurrentWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponManager_ReloadCurrentWeapon_Statics::NewProp_owner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponManager_ReloadCurrentWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponManager_ReloadCurrentWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponManager, nullptr, "ReloadCurrentWeapon", nullptr, nullptr, Z_Construct_UFunction_UWeaponManager_ReloadCurrentWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponManager_ReloadCurrentWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponManager_ReloadCurrentWeapon_Statics::WeaponManager_eventReloadCurrentWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponManager_ReloadCurrentWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponManager_ReloadCurrentWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWeaponManager_ReloadCurrentWeapon_Statics::WeaponManager_eventReloadCurrentWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponManager_ReloadCurrentWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponManager_ReloadCurrentWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponManager::execReloadCurrentWeapon)
{
	P_GET_OBJECT(AActor,Z_Param_owner);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReloadCurrentWeapon(Z_Param_owner);
	P_NATIVE_END;
}
// End Class UWeaponManager Function ReloadCurrentWeapon

// Begin Class UWeaponManager Function UseCurrentWeapon
struct Z_Construct_UFunction_UWeaponManager_UseCurrentWeapon_Statics
{
	struct WeaponManager_eventUseCurrentWeapon_Parms
	{
		AActor* owner;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Managers/WeaponManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_owner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponManager_UseCurrentWeapon_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponManager_eventUseCurrentWeapon_Parms, owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponManager_UseCurrentWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponManager_UseCurrentWeapon_Statics::NewProp_owner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponManager_UseCurrentWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponManager_UseCurrentWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponManager, nullptr, "UseCurrentWeapon", nullptr, nullptr, Z_Construct_UFunction_UWeaponManager_UseCurrentWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponManager_UseCurrentWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponManager_UseCurrentWeapon_Statics::WeaponManager_eventUseCurrentWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponManager_UseCurrentWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponManager_UseCurrentWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWeaponManager_UseCurrentWeapon_Statics::WeaponManager_eventUseCurrentWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponManager_UseCurrentWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponManager_UseCurrentWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponManager::execUseCurrentWeapon)
{
	P_GET_OBJECT(AActor,Z_Param_owner);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UseCurrentWeapon(Z_Param_owner);
	P_NATIVE_END;
}
// End Class UWeaponManager Function UseCurrentWeapon

// Begin Class UWeaponManager
void UWeaponManager::StaticRegisterNativesUWeaponManager()
{
	UClass* Class = UWeaponManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ReloadCurrentWeapon", &UWeaponManager::execReloadCurrentWeapon },
		{ "UseCurrentWeapon", &UWeaponManager::execUseCurrentWeapon },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeaponManager);
UClass* Z_Construct_UClass_UWeaponManager_NoRegister()
{
	return UWeaponManager::StaticClass();
}
struct Z_Construct_UClass_UWeaponManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Managers/WeaponManager.h" },
		{ "ModuleRelativePath", "Public/Managers/WeaponManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_primaryWeapon_MetaData[] = {
		{ "Category", "WeaponManager" },
		{ "ModuleRelativePath", "Public/Managers/WeaponManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_primaryWeapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeaponManager_ReloadCurrentWeapon, "ReloadCurrentWeapon" }, // 2045165532
		{ &Z_Construct_UFunction_UWeaponManager_UseCurrentWeapon, "UseCurrentWeapon" }, // 3402855034
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponManager_Statics::NewProp_primaryWeapon = { "primaryWeapon", nullptr, (EPropertyFlags)0x0020080000020801, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponManager, primaryWeapon), Z_Construct_UClass_ABaseRangeWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_primaryWeapon_MetaData), NewProp_primaryWeapon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponManager_Statics::NewProp_primaryWeapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWeaponManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectCP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponManager_Statics::ClassParams = {
	&UWeaponManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWeaponManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponManager_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeaponManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWeaponManager()
{
	if (!Z_Registration_Info_UClass_UWeaponManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponManager.OuterSingleton, Z_Construct_UClass_UWeaponManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeaponManager.OuterSingleton;
}
template<> PROJECTCP_API UClass* StaticClass<UWeaponManager>()
{
	return UWeaponManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponManager);
UWeaponManager::~UWeaponManager() {}
// End Class UWeaponManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_WeaponManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponManager, UWeaponManager::StaticClass, TEXT("UWeaponManager"), &Z_Registration_Info_UClass_UWeaponManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponManager), 1203307501U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_WeaponManager_h_1164606184(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_WeaponManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_WeaponManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
