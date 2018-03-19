// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef UNREAL_PROJEKT_2018_Unreal_Projekt_2018Projectile_generated_h
#error "Unreal_Projekt_2018Projectile.generated.h already included, missing '#pragma once' in Unreal_Projekt_2018Projectile.h"
#endif
#define UNREAL_PROJEKT_2018_Unreal_Projekt_2018Projectile_generated_h

#define Unreal_Projekt_2018_Source_Unreal_Projekt_2018_Unreal_Projekt_2018Projectile_h_12_RPC_WRAPPERS \
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
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Unreal_Projekt_2018_Source_Unreal_Projekt_2018_Unreal_Projekt_2018Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
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
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Unreal_Projekt_2018_Source_Unreal_Projekt_2018_Unreal_Projekt_2018Projectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUnreal_Projekt_2018Projectile(); \
	friend UNREAL_PROJEKT_2018_API class UClass* Z_Construct_UClass_AUnreal_Projekt_2018Projectile(); \
public: \
	DECLARE_CLASS(AUnreal_Projekt_2018Projectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Unreal_Projekt_2018"), NO_API) \
	DECLARE_SERIALIZER(AUnreal_Projekt_2018Projectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Unreal_Projekt_2018_Source_Unreal_Projekt_2018_Unreal_Projekt_2018Projectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAUnreal_Projekt_2018Projectile(); \
	friend UNREAL_PROJEKT_2018_API class UClass* Z_Construct_UClass_AUnreal_Projekt_2018Projectile(); \
public: \
	DECLARE_CLASS(AUnreal_Projekt_2018Projectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Unreal_Projekt_2018"), NO_API) \
	DECLARE_SERIALIZER(AUnreal_Projekt_2018Projectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Unreal_Projekt_2018_Source_Unreal_Projekt_2018_Unreal_Projekt_2018Projectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUnreal_Projekt_2018Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUnreal_Projekt_2018Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnreal_Projekt_2018Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnreal_Projekt_2018Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnreal_Projekt_2018Projectile(AUnreal_Projekt_2018Projectile&&); \
	NO_API AUnreal_Projekt_2018Projectile(const AUnreal_Projekt_2018Projectile&); \
public:


#define Unreal_Projekt_2018_Source_Unreal_Projekt_2018_Unreal_Projekt_2018Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnreal_Projekt_2018Projectile(AUnreal_Projekt_2018Projectile&&); \
	NO_API AUnreal_Projekt_2018Projectile(const AUnreal_Projekt_2018Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnreal_Projekt_2018Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnreal_Projekt_2018Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUnreal_Projekt_2018Projectile)


#define Unreal_Projekt_2018_Source_Unreal_Projekt_2018_Unreal_Projekt_2018Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AUnreal_Projekt_2018Projectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AUnreal_Projekt_2018Projectile, ProjectileMovement); }


#define Unreal_Projekt_2018_Source_Unreal_Projekt_2018_Unreal_Projekt_2018Projectile_h_9_PROLOG
#define Unreal_Projekt_2018_Source_Unreal_Projekt_2018_Unreal_Projekt_2018Projectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Unreal_Projekt_2018_Source_Unreal_Projekt_2018_Unreal_Projekt_2018Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Unreal_Projekt_2018_Source_Unreal_Projekt_2018_Unreal_Projekt_2018Projectile_h_12_RPC_WRAPPERS \
	Unreal_Projekt_2018_Source_Unreal_Projekt_2018_Unreal_Projekt_2018Projectile_h_12_INCLASS \
	Unreal_Projekt_2018_Source_Unreal_Projekt_2018_Unreal_Projekt_2018Projectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Unreal_Projekt_2018_Source_Unreal_Projekt_2018_Unreal_Projekt_2018Projectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Unreal_Projekt_2018_Source_Unreal_Projekt_2018_Unreal_Projekt_2018Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Unreal_Projekt_2018_Source_Unreal_Projekt_2018_Unreal_Projekt_2018Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Unreal_Projekt_2018_Source_Unreal_Projekt_2018_Unreal_Projekt_2018Projectile_h_12_INCLASS_NO_PURE_DECLS \
	Unreal_Projekt_2018_Source_Unreal_Projekt_2018_Unreal_Projekt_2018Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Unreal_Projekt_2018_Source_Unreal_Projekt_2018_Unreal_Projekt_2018Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
