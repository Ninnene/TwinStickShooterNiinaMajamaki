// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CharacterBaseC.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TWINSTICKNM_CharacterBaseC_generated_h
#error "CharacterBaseC.generated.h already included, missing '#pragma once' in CharacterBaseC.h"
#endif
#define TWINSTICKNM_CharacterBaseC_generated_h

#define FID_Users_niina_Documents_Unreal_Projects_TwinStickNM_Source_TwinStickNM_CharacterBaseC_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCalculateHealth);


#define FID_Users_niina_Documents_Unreal_Projects_TwinStickNM_Source_TwinStickNM_CharacterBaseC_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacterBaseC(); \
	friend struct Z_Construct_UClass_ACharacterBaseC_Statics; \
public: \
	DECLARE_CLASS(ACharacterBaseC, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TwinStickNM"), NO_API) \
	DECLARE_SERIALIZER(ACharacterBaseC)


#define FID_Users_niina_Documents_Unreal_Projects_TwinStickNM_Source_TwinStickNM_CharacterBaseC_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACharacterBaseC(ACharacterBaseC&&); \
	ACharacterBaseC(const ACharacterBaseC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterBaseC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterBaseC); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACharacterBaseC) \
	NO_API virtual ~ACharacterBaseC();


#define FID_Users_niina_Documents_Unreal_Projects_TwinStickNM_Source_TwinStickNM_CharacterBaseC_h_9_PROLOG
#define FID_Users_niina_Documents_Unreal_Projects_TwinStickNM_Source_TwinStickNM_CharacterBaseC_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_niina_Documents_Unreal_Projects_TwinStickNM_Source_TwinStickNM_CharacterBaseC_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_niina_Documents_Unreal_Projects_TwinStickNM_Source_TwinStickNM_CharacterBaseC_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_niina_Documents_Unreal_Projects_TwinStickNM_Source_TwinStickNM_CharacterBaseC_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TWINSTICKNM_API UClass* StaticClass<class ACharacterBaseC>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_niina_Documents_Unreal_Projects_TwinStickNM_Source_TwinStickNM_CharacterBaseC_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
