// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwinStickNM/CharacterBaseC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterBaseC() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
TWINSTICKNM_API UClass* Z_Construct_UClass_ACharacterBaseC();
TWINSTICKNM_API UClass* Z_Construct_UClass_ACharacterBaseC_NoRegister();
UPackage* Z_Construct_UPackage__Script_TwinStickNM();
// End Cross Module References

// Begin Class ACharacterBaseC Function CalculateHealth
struct Z_Construct_UFunction_ACharacterBaseC_CalculateHealth_Statics
{
	struct CharacterBaseC_eventCalculateHealth_Parms
	{
		float delta;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CharacterBaseC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//calculate health\n" },
#endif
		{ "ModuleRelativePath", "CharacterBaseC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "calculate health" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_delta;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacterBaseC_CalculateHealth_Statics::NewProp_delta = { "delta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterBaseC_eventCalculateHealth_Parms, delta), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterBaseC_CalculateHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterBaseC_CalculateHealth_Statics::NewProp_delta,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBaseC_CalculateHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterBaseC_CalculateHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterBaseC, nullptr, "CalculateHealth", nullptr, nullptr, Z_Construct_UFunction_ACharacterBaseC_CalculateHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBaseC_CalculateHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACharacterBaseC_CalculateHealth_Statics::CharacterBaseC_eventCalculateHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBaseC_CalculateHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACharacterBaseC_CalculateHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACharacterBaseC_CalculateHealth_Statics::CharacterBaseC_eventCalculateHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACharacterBaseC_CalculateHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacterBaseC_CalculateHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACharacterBaseC::execCalculateHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_delta);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CalculateHealth(Z_Param_delta);
	P_NATIVE_END;
}
// End Class ACharacterBaseC Function CalculateHealth

// Begin Class ACharacterBaseC
void ACharacterBaseC::StaticRegisterNativesACharacterBaseC()
{
	UClass* Class = ACharacterBaseC::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalculateHealth", &ACharacterBaseC::execCalculateHealth },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACharacterBaseC);
UClass* Z_Construct_UClass_ACharacterBaseC_NoRegister()
{
	return ACharacterBaseC::StaticClass();
}
struct Z_Construct_UClass_ACharacterBaseC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CharacterBaseC.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "CharacterBaseC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_health_MetaData[] = {
		{ "Category", "CharacterBaseC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//health\n" },
#endif
		{ "ModuleRelativePath", "CharacterBaseC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "health" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isDead_MetaData[] = {
		{ "Category", "CharacterBaseC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// death\n" },
#endif
		{ "ModuleRelativePath", "CharacterBaseC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "death" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_health;
	static void NewProp_isDead_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isDead;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACharacterBaseC_CalculateHealth, "CalculateHealth" }, // 3908818811
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterBaseC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterBaseC_Statics::NewProp_health = { "health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBaseC, health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_health_MetaData), NewProp_health_MetaData) };
void Z_Construct_UClass_ACharacterBaseC_Statics::NewProp_isDead_SetBit(void* Obj)
{
	((ACharacterBaseC*)Obj)->isDead = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACharacterBaseC_Statics::NewProp_isDead = { "isDead", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACharacterBaseC), &Z_Construct_UClass_ACharacterBaseC_Statics::NewProp_isDead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isDead_MetaData), NewProp_isDead_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACharacterBaseC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBaseC_Statics::NewProp_health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBaseC_Statics::NewProp_isDead,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBaseC_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACharacterBaseC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_TwinStickNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBaseC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACharacterBaseC_Statics::ClassParams = {
	&ACharacterBaseC::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACharacterBaseC_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBaseC_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBaseC_Statics::Class_MetaDataParams), Z_Construct_UClass_ACharacterBaseC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACharacterBaseC()
{
	if (!Z_Registration_Info_UClass_ACharacterBaseC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACharacterBaseC.OuterSingleton, Z_Construct_UClass_ACharacterBaseC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACharacterBaseC.OuterSingleton;
}
template<> TWINSTICKNM_API UClass* StaticClass<ACharacterBaseC>()
{
	return ACharacterBaseC::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterBaseC);
ACharacterBaseC::~ACharacterBaseC() {}
// End Class ACharacterBaseC

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_niina_Documents_GitHub_TwinStickShooterNiinaMajamaki_TwinStickNM_Source_TwinStickNM_CharacterBaseC_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACharacterBaseC, ACharacterBaseC::StaticClass, TEXT("ACharacterBaseC"), &Z_Registration_Info_UClass_ACharacterBaseC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACharacterBaseC), 610808986U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_niina_Documents_GitHub_TwinStickShooterNiinaMajamaki_TwinStickNM_Source_TwinStickNM_CharacterBaseC_h_3508097516(TEXT("/Script/TwinStickNM"),
	Z_CompiledInDeferFile_FID_Users_niina_Documents_GitHub_TwinStickShooterNiinaMajamaki_TwinStickNM_Source_TwinStickNM_CharacterBaseC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_niina_Documents_GitHub_TwinStickShooterNiinaMajamaki_TwinStickNM_Source_TwinStickNM_CharacterBaseC_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
