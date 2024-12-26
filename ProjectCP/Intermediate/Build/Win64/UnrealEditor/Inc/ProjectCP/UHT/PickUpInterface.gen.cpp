// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/Interface/PickUpInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickUpInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PROJECTCP_API UClass* Z_Construct_UClass_UPickUpInterface();
PROJECTCP_API UClass* Z_Construct_UClass_UPickUpInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Interface UPickUpInterface Function SetOverlappingItem
struct Z_Construct_UFunction_UPickUpInterface_SetOverlappingItem_Statics
{
	struct PickUpInterface_eventSetOverlappingItem_Parms
	{
		AActor* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/PickUpInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPickUpInterface_SetOverlappingItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickUpInterface_eventSetOverlappingItem_Parms, Item), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPickUpInterface_SetOverlappingItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPickUpInterface_SetOverlappingItem_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPickUpInterface_SetOverlappingItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPickUpInterface_SetOverlappingItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPickUpInterface, nullptr, "SetOverlappingItem", nullptr, nullptr, Z_Construct_UFunction_UPickUpInterface_SetOverlappingItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPickUpInterface_SetOverlappingItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPickUpInterface_SetOverlappingItem_Statics::PickUpInterface_eventSetOverlappingItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPickUpInterface_SetOverlappingItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPickUpInterface_SetOverlappingItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPickUpInterface_SetOverlappingItem_Statics::PickUpInterface_eventSetOverlappingItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPickUpInterface_SetOverlappingItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPickUpInterface_SetOverlappingItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IPickUpInterface::execSetOverlappingItem)
{
	P_GET_OBJECT(AActor,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOverlappingItem(Z_Param_Item);
	P_NATIVE_END;
}
// End Interface UPickUpInterface Function SetOverlappingItem

// Begin Interface UPickUpInterface
void UPickUpInterface::StaticRegisterNativesUPickUpInterface()
{
	UClass* Class = UPickUpInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetOverlappingItem", &IPickUpInterface::execSetOverlappingItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPickUpInterface);
UClass* Z_Construct_UClass_UPickUpInterface_NoRegister()
{
	return UPickUpInterface::StaticClass();
}
struct Z_Construct_UClass_UPickUpInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/PickUpInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPickUpInterface_SetOverlappingItem, "SetOverlappingItem" }, // 1448809294
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPickUpInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPickUpInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectCP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPickUpInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPickUpInterface_Statics::ClassParams = {
	&UPickUpInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPickUpInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UPickUpInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPickUpInterface()
{
	if (!Z_Registration_Info_UClass_UPickUpInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPickUpInterface.OuterSingleton, Z_Construct_UClass_UPickUpInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPickUpInterface.OuterSingleton;
}
template<> PROJECTCP_API UClass* StaticClass<UPickUpInterface>()
{
	return UPickUpInterface::StaticClass();
}
UPickUpInterface::UPickUpInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPickUpInterface);
UPickUpInterface::~UPickUpInterface() {}
// End Interface UPickUpInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_PickUpInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPickUpInterface, UPickUpInterface::StaticClass, TEXT("UPickUpInterface"), &Z_Registration_Info_UClass_UPickUpInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPickUpInterface), 2222028383U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_PickUpInterface_h_4010688604(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_PickUpInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_PickUpInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
