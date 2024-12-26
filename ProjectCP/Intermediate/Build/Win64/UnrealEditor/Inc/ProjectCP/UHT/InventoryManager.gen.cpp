// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/Managers/InventoryManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECTCP_API UClass* Z_Construct_UClass_ABaseItem_NoRegister();
PROJECTCP_API UClass* Z_Construct_UClass_UInventoryManager();
PROJECTCP_API UClass* Z_Construct_UClass_UInventoryManager_NoRegister();
PROJECTCP_API UClass* Z_Construct_UClass_UPickUpInterface_NoRegister();
PROJECTCP_API UClass* Z_Construct_UClass_UWeaponManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Class UInventoryManager Function TriggerTestDelegate
struct Z_Construct_UFunction_UInventoryManager_TriggerTestDelegate_Statics
{
	struct InventoryManager_eventTriggerTestDelegate_Parms
	{
		ABaseItem* item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Managers/InventoryManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryManager_TriggerTestDelegate_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryManager_eventTriggerTestDelegate_Parms, item), Z_Construct_UClass_ABaseItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryManager_TriggerTestDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryManager_TriggerTestDelegate_Statics::NewProp_item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryManager_TriggerTestDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryManager_TriggerTestDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryManager, nullptr, "TriggerTestDelegate", nullptr, nullptr, Z_Construct_UFunction_UInventoryManager_TriggerTestDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryManager_TriggerTestDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryManager_TriggerTestDelegate_Statics::InventoryManager_eventTriggerTestDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryManager_TriggerTestDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryManager_TriggerTestDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryManager_TriggerTestDelegate_Statics::InventoryManager_eventTriggerTestDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryManager_TriggerTestDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryManager_TriggerTestDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryManager::execTriggerTestDelegate)
{
	P_GET_OBJECT(ABaseItem,Z_Param_item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerTestDelegate(Z_Param_item);
	P_NATIVE_END;
}
// End Class UInventoryManager Function TriggerTestDelegate

// Begin Class UInventoryManager
void UInventoryManager::StaticRegisterNativesUInventoryManager()
{
	UClass* Class = UInventoryManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TriggerTestDelegate", &UInventoryManager::execTriggerTestDelegate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryManager);
UClass* Z_Construct_UClass_UInventoryManager_NoRegister()
{
	return UInventoryManager::StaticClass();
}
struct Z_Construct_UClass_UInventoryManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Managers/InventoryManager.h" },
		{ "ModuleRelativePath", "Public/Managers/InventoryManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weaponManager_MetaData[] = {
		{ "Category", "InventoryManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Managers/InventoryManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mOverlapItem_MetaData[] = {
		{ "Category", "InventoryManager" },
		{ "ModuleRelativePath", "Public/Managers/InventoryManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_weaponManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mOverlapItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryManager_TriggerTestDelegate, "TriggerTestDelegate" }, // 4174778489
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryManager_Statics::NewProp_weaponManager = { "weaponManager", nullptr, (EPropertyFlags)0x00100000000a0809, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryManager, weaponManager), Z_Construct_UClass_UWeaponManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weaponManager_MetaData), NewProp_weaponManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryManager_Statics::NewProp_mOverlapItem = { "mOverlapItem", nullptr, (EPropertyFlags)0x0040000000020801, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryManager, mOverlapItem), Z_Construct_UClass_ABaseItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mOverlapItem_MetaData), NewProp_mOverlapItem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryManager_Statics::NewProp_weaponManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryManager_Statics::NewProp_mOverlapItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventoryManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectCP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UInventoryManager_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UPickUpInterface_NoRegister, (int32)VTABLE_OFFSET(UInventoryManager, IPickUpInterface), false },  // 2222028383
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryManager_Statics::ClassParams = {
	&UInventoryManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInventoryManager_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryManager_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryManager()
{
	if (!Z_Registration_Info_UClass_UInventoryManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryManager.OuterSingleton, Z_Construct_UClass_UInventoryManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryManager.OuterSingleton;
}
template<> PROJECTCP_API UClass* StaticClass<UInventoryManager>()
{
	return UInventoryManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryManager);
UInventoryManager::~UInventoryManager() {}
// End Class UInventoryManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_InventoryManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryManager, UInventoryManager::StaticClass, TEXT("UInventoryManager"), &Z_Registration_Info_UClass_UInventoryManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryManager), 3499709629U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_InventoryManager_h_2492028180(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_InventoryManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_InventoryManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
