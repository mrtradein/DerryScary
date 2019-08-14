// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef DERRYSCARYPROJECT_DerryScaryProjectProjectile_generated_h
#error "DerryScaryProjectProjectile.generated.h already included, missing '#pragma once' in DerryScaryProjectProjectile.h"
#endif
#define DERRYSCARYPROJECT_DerryScaryProjectProjectile_generated_h

#define DerryScaryProject_Source_DerryScaryProject_DerryScaryProjectProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define DerryScaryProject_Source_DerryScaryProject_DerryScaryProjectProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define DerryScaryProject_Source_DerryScaryProject_DerryScaryProjectProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADerryScaryProjectProjectile(); \
	friend struct Z_Construct_UClass_ADerryScaryProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(ADerryScaryProjectProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DerryScaryProject"), NO_API) \
	DECLARE_SERIALIZER(ADerryScaryProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define DerryScaryProject_Source_DerryScaryProject_DerryScaryProjectProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADerryScaryProjectProjectile(); \
	friend struct Z_Construct_UClass_ADerryScaryProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(ADerryScaryProjectProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DerryScaryProject"), NO_API) \
	DECLARE_SERIALIZER(ADerryScaryProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define DerryScaryProject_Source_DerryScaryProject_DerryScaryProjectProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADerryScaryProjectProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADerryScaryProjectProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADerryScaryProjectProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADerryScaryProjectProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADerryScaryProjectProjectile(ADerryScaryProjectProjectile&&); \
	NO_API ADerryScaryProjectProjectile(const ADerryScaryProjectProjectile&); \
public:


#define DerryScaryProject_Source_DerryScaryProject_DerryScaryProjectProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADerryScaryProjectProjectile(ADerryScaryProjectProjectile&&); \
	NO_API ADerryScaryProjectProjectile(const ADerryScaryProjectProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADerryScaryProjectProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADerryScaryProjectProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADerryScaryProjectProjectile)


#define DerryScaryProject_Source_DerryScaryProject_DerryScaryProjectProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ADerryScaryProjectProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ADerryScaryProjectProjectile, ProjectileMovement); }


#define DerryScaryProject_Source_DerryScaryProject_DerryScaryProjectProjectile_h_9_PROLOG
#define DerryScaryProject_Source_DerryScaryProject_DerryScaryProjectProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DerryScaryProject_Source_DerryScaryProject_DerryScaryProjectProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	DerryScaryProject_Source_DerryScaryProject_DerryScaryProjectProjectile_h_12_RPC_WRAPPERS \
	DerryScaryProject_Source_DerryScaryProject_DerryScaryProjectProjectile_h_12_INCLASS \
	DerryScaryProject_Source_DerryScaryProject_DerryScaryProjectProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DerryScaryProject_Source_DerryScaryProject_DerryScaryProjectProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DerryScaryProject_Source_DerryScaryProject_DerryScaryProjectProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	DerryScaryProject_Source_DerryScaryProject_DerryScaryProjectProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DerryScaryProject_Source_DerryScaryProject_DerryScaryProjectProjectile_h_12_INCLASS_NO_PURE_DECLS \
	DerryScaryProject_Source_DerryScaryProject_DerryScaryProjectProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DERRYSCARYPROJECT_API UClass* StaticClass<class ADerryScaryProjectProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DerryScaryProject_Source_DerryScaryProject_DerryScaryProjectProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
