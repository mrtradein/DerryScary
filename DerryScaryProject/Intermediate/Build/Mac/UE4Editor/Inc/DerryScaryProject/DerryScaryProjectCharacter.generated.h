// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DERRYSCARYPROJECT_DerryScaryProjectCharacter_generated_h
#error "DerryScaryProjectCharacter.generated.h already included, missing '#pragma once' in DerryScaryProjectCharacter.h"
#endif
#define DERRYSCARYPROJECT_DerryScaryProjectCharacter_generated_h

#define DerryScaryProject_Source_DerryScaryProject_DerryScaryProjectCharacter_h_14_RPC_WRAPPERS
#define DerryScaryProject_Source_DerryScaryProject_DerryScaryProjectCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define DerryScaryProject_Source_DerryScaryProject_DerryScaryProjectCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADerryScaryProjectCharacter(); \
	friend struct Z_Construct_UClass_ADerryScaryProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(ADerryScaryProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DerryScaryProject"), NO_API) \
	DECLARE_SERIALIZER(ADerryScaryProjectCharacter)


#define DerryScaryProject_Source_DerryScaryProject_DerryScaryProjectCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesADerryScaryProjectCharacter(); \
	friend struct Z_Construct_UClass_ADerryScaryProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(ADerryScaryProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DerryScaryProject"), NO_API) \
	DECLARE_SERIALIZER(ADerryScaryProjectCharacter)


#define DerryScaryProject_Source_DerryScaryProject_DerryScaryProjectCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADerryScaryProjectCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADerryScaryProjectCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADerryScaryProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADerryScaryProjectCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADerryScaryProjectCharacter(ADerryScaryProjectCharacter&&); \
	NO_API ADerryScaryProjectCharacter(const ADerryScaryProjectCharacter&); \
public:


#define DerryScaryProject_Source_DerryScaryProject_DerryScaryProjectCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADerryScaryProjectCharacter(ADerryScaryProjectCharacter&&); \
	NO_API ADerryScaryProjectCharacter(const ADerryScaryProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADerryScaryProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADerryScaryProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADerryScaryProjectCharacter)


#define DerryScaryProject_Source_DerryScaryProject_DerryScaryProjectCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ADerryScaryProjectCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(ADerryScaryProjectCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(ADerryScaryProjectCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(ADerryScaryProjectCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(ADerryScaryProjectCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ADerryScaryProjectCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(ADerryScaryProjectCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(ADerryScaryProjectCharacter, L_MotionController); }


#define DerryScaryProject_Source_DerryScaryProject_DerryScaryProjectCharacter_h_11_PROLOG
#define DerryScaryProject_Source_DerryScaryProject_DerryScaryProjectCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DerryScaryProject_Source_DerryScaryProject_DerryScaryProjectCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	DerryScaryProject_Source_DerryScaryProject_DerryScaryProjectCharacter_h_14_RPC_WRAPPERS \
	DerryScaryProject_Source_DerryScaryProject_DerryScaryProjectCharacter_h_14_INCLASS \
	DerryScaryProject_Source_DerryScaryProject_DerryScaryProjectCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DerryScaryProject_Source_DerryScaryProject_DerryScaryProjectCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DerryScaryProject_Source_DerryScaryProject_DerryScaryProjectCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	DerryScaryProject_Source_DerryScaryProject_DerryScaryProjectCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DerryScaryProject_Source_DerryScaryProject_DerryScaryProjectCharacter_h_14_INCLASS_NO_PURE_DECLS \
	DerryScaryProject_Source_DerryScaryProject_DerryScaryProjectCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DERRYSCARYPROJECT_API UClass* StaticClass<class ADerryScaryProjectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DerryScaryProject_Source_DerryScaryProject_DerryScaryProjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
