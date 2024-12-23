// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/Interface/RangeWeaponInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRangeWeaponInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
PROJECTCP_API UClass* Z_Construct_UClass_URangeWeaponInterface();
PROJECTCP_API UClass* Z_Construct_UClass_URangeWeaponInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Interface URangeWeaponInterface Function FinishReloading
void IRangeWeaponInterface::FinishReloading()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_FinishReloading instead.");
}
static FName NAME_URangeWeaponInterface_FinishReloading = FName(TEXT("FinishReloading"));
void IRangeWeaponInterface::Execute_FinishReloading(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(URangeWeaponInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_URangeWeaponInterface_FinishReloading);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IRangeWeaponInterface*)(O->GetNativeInterfaceAddress(URangeWeaponInterface::StaticClass())))
	{
		I->FinishReloading_Implementation();
	}
}
struct Z_Construct_UFunction_URangeWeaponInterface_FinishReloading_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Interface/RangeWeaponInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URangeWeaponInterface_FinishReloading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URangeWeaponInterface, nullptr, "FinishReloading", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URangeWeaponInterface_FinishReloading_Statics::Function_MetaDataParams), Z_Construct_UFunction_URangeWeaponInterface_FinishReloading_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URangeWeaponInterface_FinishReloading()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URangeWeaponInterface_FinishReloading_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IRangeWeaponInterface::execFinishReloading)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishReloading_Implementation();
	P_NATIVE_END;
}
// End Interface URangeWeaponInterface Function FinishReloading

// Begin Interface URangeWeaponInterface Function GetCurrentAmmo
struct RangeWeaponInterface_eventGetCurrentAmmo_Parms
{
	int32 ReturnValue;

	/** Constructor, initializes return property only **/
	RangeWeaponInterface_eventGetCurrentAmmo_Parms()
		: ReturnValue(0)
	{
	}
};
int32 IRangeWeaponInterface::GetCurrentAmmo()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCurrentAmmo instead.");
	RangeWeaponInterface_eventGetCurrentAmmo_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_URangeWeaponInterface_GetCurrentAmmo = FName(TEXT("GetCurrentAmmo"));
int32 IRangeWeaponInterface::Execute_GetCurrentAmmo(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(URangeWeaponInterface::StaticClass()));
	RangeWeaponInterface_eventGetCurrentAmmo_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_URangeWeaponInterface_GetCurrentAmmo);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IRangeWeaponInterface*)(O->GetNativeInterfaceAddress(URangeWeaponInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetCurrentAmmo_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_URangeWeaponInterface_GetCurrentAmmo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Interface/RangeWeaponInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URangeWeaponInterface_GetCurrentAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RangeWeaponInterface_eventGetCurrentAmmo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URangeWeaponInterface_GetCurrentAmmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URangeWeaponInterface_GetCurrentAmmo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URangeWeaponInterface_GetCurrentAmmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URangeWeaponInterface_GetCurrentAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URangeWeaponInterface, nullptr, "GetCurrentAmmo", nullptr, nullptr, Z_Construct_UFunction_URangeWeaponInterface_GetCurrentAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URangeWeaponInterface_GetCurrentAmmo_Statics::PropPointers), sizeof(RangeWeaponInterface_eventGetCurrentAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URangeWeaponInterface_GetCurrentAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_URangeWeaponInterface_GetCurrentAmmo_Statics::Function_MetaDataParams) };
static_assert(sizeof(RangeWeaponInterface_eventGetCurrentAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URangeWeaponInterface_GetCurrentAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URangeWeaponInterface_GetCurrentAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IRangeWeaponInterface::execGetCurrentAmmo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentAmmo_Implementation();
	P_NATIVE_END;
}
// End Interface URangeWeaponInterface Function GetCurrentAmmo

// Begin Interface URangeWeaponInterface Function GetMaxAmmo
struct RangeWeaponInterface_eventGetMaxAmmo_Parms
{
	int32 ReturnValue;

	/** Constructor, initializes return property only **/
	RangeWeaponInterface_eventGetMaxAmmo_Parms()
		: ReturnValue(0)
	{
	}
};
int32 IRangeWeaponInterface::GetMaxAmmo()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetMaxAmmo instead.");
	RangeWeaponInterface_eventGetMaxAmmo_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_URangeWeaponInterface_GetMaxAmmo = FName(TEXT("GetMaxAmmo"));
int32 IRangeWeaponInterface::Execute_GetMaxAmmo(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(URangeWeaponInterface::StaticClass()));
	RangeWeaponInterface_eventGetMaxAmmo_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_URangeWeaponInterface_GetMaxAmmo);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IRangeWeaponInterface*)(O->GetNativeInterfaceAddress(URangeWeaponInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetMaxAmmo_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_URangeWeaponInterface_GetMaxAmmo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Interface/RangeWeaponInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URangeWeaponInterface_GetMaxAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RangeWeaponInterface_eventGetMaxAmmo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URangeWeaponInterface_GetMaxAmmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URangeWeaponInterface_GetMaxAmmo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URangeWeaponInterface_GetMaxAmmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URangeWeaponInterface_GetMaxAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URangeWeaponInterface, nullptr, "GetMaxAmmo", nullptr, nullptr, Z_Construct_UFunction_URangeWeaponInterface_GetMaxAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URangeWeaponInterface_GetMaxAmmo_Statics::PropPointers), sizeof(RangeWeaponInterface_eventGetMaxAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URangeWeaponInterface_GetMaxAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_URangeWeaponInterface_GetMaxAmmo_Statics::Function_MetaDataParams) };
static_assert(sizeof(RangeWeaponInterface_eventGetMaxAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URangeWeaponInterface_GetMaxAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URangeWeaponInterface_GetMaxAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IRangeWeaponInterface::execGetMaxAmmo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMaxAmmo_Implementation();
	P_NATIVE_END;
}
// End Interface URangeWeaponInterface Function GetMaxAmmo

// Begin Interface URangeWeaponInterface Function Reload
void IRangeWeaponInterface::Reload()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Reload instead.");
}
static FName NAME_URangeWeaponInterface_Reload = FName(TEXT("Reload"));
void IRangeWeaponInterface::Execute_Reload(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(URangeWeaponInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_URangeWeaponInterface_Reload);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IRangeWeaponInterface*)(O->GetNativeInterfaceAddress(URangeWeaponInterface::StaticClass())))
	{
		I->Reload_Implementation();
	}
}
struct Z_Construct_UFunction_URangeWeaponInterface_Reload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Interface/RangeWeaponInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URangeWeaponInterface_Reload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URangeWeaponInterface, nullptr, "Reload", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URangeWeaponInterface_Reload_Statics::Function_MetaDataParams), Z_Construct_UFunction_URangeWeaponInterface_Reload_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URangeWeaponInterface_Reload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URangeWeaponInterface_Reload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IRangeWeaponInterface::execReload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Reload_Implementation();
	P_NATIVE_END;
}
// End Interface URangeWeaponInterface Function Reload

// Begin Interface URangeWeaponInterface Function SetCurrentAmmo
struct RangeWeaponInterface_eventSetCurrentAmmo_Parms
{
	int32 amount;
};
void IRangeWeaponInterface::SetCurrentAmmo(int32 amount)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetCurrentAmmo instead.");
}
static FName NAME_URangeWeaponInterface_SetCurrentAmmo = FName(TEXT("SetCurrentAmmo"));
void IRangeWeaponInterface::Execute_SetCurrentAmmo(UObject* O, int32 amount)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(URangeWeaponInterface::StaticClass()));
	RangeWeaponInterface_eventSetCurrentAmmo_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_URangeWeaponInterface_SetCurrentAmmo);
	if (Func)
	{
		Parms.amount=amount;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IRangeWeaponInterface*)(O->GetNativeInterfaceAddress(URangeWeaponInterface::StaticClass())))
	{
		I->SetCurrentAmmo_Implementation(amount);
	}
}
struct Z_Construct_UFunction_URangeWeaponInterface_SetCurrentAmmo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Interface/RangeWeaponInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URangeWeaponInterface_SetCurrentAmmo_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RangeWeaponInterface_eventSetCurrentAmmo_Parms, amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URangeWeaponInterface_SetCurrentAmmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URangeWeaponInterface_SetCurrentAmmo_Statics::NewProp_amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URangeWeaponInterface_SetCurrentAmmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URangeWeaponInterface_SetCurrentAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URangeWeaponInterface, nullptr, "SetCurrentAmmo", nullptr, nullptr, Z_Construct_UFunction_URangeWeaponInterface_SetCurrentAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URangeWeaponInterface_SetCurrentAmmo_Statics::PropPointers), sizeof(RangeWeaponInterface_eventSetCurrentAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URangeWeaponInterface_SetCurrentAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_URangeWeaponInterface_SetCurrentAmmo_Statics::Function_MetaDataParams) };
static_assert(sizeof(RangeWeaponInterface_eventSetCurrentAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URangeWeaponInterface_SetCurrentAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URangeWeaponInterface_SetCurrentAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IRangeWeaponInterface::execSetCurrentAmmo)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrentAmmo_Implementation(Z_Param_amount);
	P_NATIVE_END;
}
// End Interface URangeWeaponInterface Function SetCurrentAmmo

// Begin Interface URangeWeaponInterface Function SetMaxAmmo
struct RangeWeaponInterface_eventSetMaxAmmo_Parms
{
	int32 amount;
};
void IRangeWeaponInterface::SetMaxAmmo(int32 amount)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetMaxAmmo instead.");
}
static FName NAME_URangeWeaponInterface_SetMaxAmmo = FName(TEXT("SetMaxAmmo"));
void IRangeWeaponInterface::Execute_SetMaxAmmo(UObject* O, int32 amount)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(URangeWeaponInterface::StaticClass()));
	RangeWeaponInterface_eventSetMaxAmmo_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_URangeWeaponInterface_SetMaxAmmo);
	if (Func)
	{
		Parms.amount=amount;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IRangeWeaponInterface*)(O->GetNativeInterfaceAddress(URangeWeaponInterface::StaticClass())))
	{
		I->SetMaxAmmo_Implementation(amount);
	}
}
struct Z_Construct_UFunction_URangeWeaponInterface_SetMaxAmmo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Interface/RangeWeaponInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URangeWeaponInterface_SetMaxAmmo_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RangeWeaponInterface_eventSetMaxAmmo_Parms, amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URangeWeaponInterface_SetMaxAmmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URangeWeaponInterface_SetMaxAmmo_Statics::NewProp_amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URangeWeaponInterface_SetMaxAmmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URangeWeaponInterface_SetMaxAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URangeWeaponInterface, nullptr, "SetMaxAmmo", nullptr, nullptr, Z_Construct_UFunction_URangeWeaponInterface_SetMaxAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URangeWeaponInterface_SetMaxAmmo_Statics::PropPointers), sizeof(RangeWeaponInterface_eventSetMaxAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URangeWeaponInterface_SetMaxAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_URangeWeaponInterface_SetMaxAmmo_Statics::Function_MetaDataParams) };
static_assert(sizeof(RangeWeaponInterface_eventSetMaxAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URangeWeaponInterface_SetMaxAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URangeWeaponInterface_SetMaxAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IRangeWeaponInterface::execSetMaxAmmo)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMaxAmmo_Implementation(Z_Param_amount);
	P_NATIVE_END;
}
// End Interface URangeWeaponInterface Function SetMaxAmmo

// Begin Interface URangeWeaponInterface Function Shoot
void IRangeWeaponInterface::Shoot()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Shoot instead.");
}
static FName NAME_URangeWeaponInterface_Shoot = FName(TEXT("Shoot"));
void IRangeWeaponInterface::Execute_Shoot(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(URangeWeaponInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_URangeWeaponInterface_Shoot);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IRangeWeaponInterface*)(O->GetNativeInterfaceAddress(URangeWeaponInterface::StaticClass())))
	{
		I->Shoot_Implementation();
	}
}
struct Z_Construct_UFunction_URangeWeaponInterface_Shoot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Interface/RangeWeaponInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URangeWeaponInterface_Shoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URangeWeaponInterface, nullptr, "Shoot", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URangeWeaponInterface_Shoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_URangeWeaponInterface_Shoot_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URangeWeaponInterface_Shoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URangeWeaponInterface_Shoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IRangeWeaponInterface::execShoot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Shoot_Implementation();
	P_NATIVE_END;
}
// End Interface URangeWeaponInterface Function Shoot

// Begin Interface URangeWeaponInterface
void URangeWeaponInterface::StaticRegisterNativesURangeWeaponInterface()
{
	UClass* Class = URangeWeaponInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FinishReloading", &IRangeWeaponInterface::execFinishReloading },
		{ "GetCurrentAmmo", &IRangeWeaponInterface::execGetCurrentAmmo },
		{ "GetMaxAmmo", &IRangeWeaponInterface::execGetMaxAmmo },
		{ "Reload", &IRangeWeaponInterface::execReload },
		{ "SetCurrentAmmo", &IRangeWeaponInterface::execSetCurrentAmmo },
		{ "SetMaxAmmo", &IRangeWeaponInterface::execSetMaxAmmo },
		{ "Shoot", &IRangeWeaponInterface::execShoot },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URangeWeaponInterface);
UClass* Z_Construct_UClass_URangeWeaponInterface_NoRegister()
{
	return URangeWeaponInterface::StaticClass();
}
struct Z_Construct_UClass_URangeWeaponInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/RangeWeaponInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URangeWeaponInterface_FinishReloading, "FinishReloading" }, // 765702437
		{ &Z_Construct_UFunction_URangeWeaponInterface_GetCurrentAmmo, "GetCurrentAmmo" }, // 915705832
		{ &Z_Construct_UFunction_URangeWeaponInterface_GetMaxAmmo, "GetMaxAmmo" }, // 3156136934
		{ &Z_Construct_UFunction_URangeWeaponInterface_Reload, "Reload" }, // 1928617725
		{ &Z_Construct_UFunction_URangeWeaponInterface_SetCurrentAmmo, "SetCurrentAmmo" }, // 631317509
		{ &Z_Construct_UFunction_URangeWeaponInterface_SetMaxAmmo, "SetMaxAmmo" }, // 2188361816
		{ &Z_Construct_UFunction_URangeWeaponInterface_Shoot, "Shoot" }, // 1498266970
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IRangeWeaponInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URangeWeaponInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectCP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URangeWeaponInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URangeWeaponInterface_Statics::ClassParams = {
	&URangeWeaponInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URangeWeaponInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_URangeWeaponInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URangeWeaponInterface()
{
	if (!Z_Registration_Info_UClass_URangeWeaponInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URangeWeaponInterface.OuterSingleton, Z_Construct_UClass_URangeWeaponInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URangeWeaponInterface.OuterSingleton;
}
template<> PROJECTCP_API UClass* StaticClass<URangeWeaponInterface>()
{
	return URangeWeaponInterface::StaticClass();
}
URangeWeaponInterface::URangeWeaponInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URangeWeaponInterface);
URangeWeaponInterface::~URangeWeaponInterface() {}
// End Interface URangeWeaponInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_RangeWeaponInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URangeWeaponInterface, URangeWeaponInterface::StaticClass, TEXT("URangeWeaponInterface"), &Z_Registration_Info_UClass_URangeWeaponInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URangeWeaponInterface), 1855839667U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_RangeWeaponInterface_h_3006988792(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_RangeWeaponInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_RangeWeaponInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
