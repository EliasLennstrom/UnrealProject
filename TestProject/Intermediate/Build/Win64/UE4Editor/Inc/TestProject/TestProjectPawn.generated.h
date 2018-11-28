// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTPROJECT_TestProjectPawn_generated_h
#error "TestProjectPawn.generated.h already included, missing '#pragma once' in TestProjectPawn.h"
#endif
#define TESTPROJECT_TestProjectPawn_generated_h

#define TestProject_Source_TestProject_TestProjectPawn_h_19_RPC_WRAPPERS
#define TestProject_Source_TestProject_TestProjectPawn_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define TestProject_Source_TestProject_TestProjectPawn_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestProjectPawn(); \
	friend struct Z_Construct_UClass_ATestProjectPawn_Statics; \
public: \
	DECLARE_CLASS(ATestProjectPawn, AWheeledVehicle, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(ATestProjectPawn)


#define TestProject_Source_TestProject_TestProjectPawn_h_19_INCLASS \
private: \
	static void StaticRegisterNativesATestProjectPawn(); \
	friend struct Z_Construct_UClass_ATestProjectPawn_Statics; \
public: \
	DECLARE_CLASS(ATestProjectPawn, AWheeledVehicle, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(ATestProjectPawn)


#define TestProject_Source_TestProject_TestProjectPawn_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestProjectPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestProjectPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestProjectPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestProjectPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestProjectPawn(ATestProjectPawn&&); \
	NO_API ATestProjectPawn(const ATestProjectPawn&); \
public:


#define TestProject_Source_TestProject_TestProjectPawn_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestProjectPawn(ATestProjectPawn&&); \
	NO_API ATestProjectPawn(const ATestProjectPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestProjectPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestProjectPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestProjectPawn)


#define TestProject_Source_TestProject_TestProjectPawn_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(ATestProjectPawn, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ATestProjectPawn, Camera); } \
	FORCEINLINE static uint32 __PPO__InternalCameraBase() { return STRUCT_OFFSET(ATestProjectPawn, InternalCameraBase); } \
	FORCEINLINE static uint32 __PPO__InternalCamera() { return STRUCT_OFFSET(ATestProjectPawn, InternalCamera); } \
	FORCEINLINE static uint32 __PPO__InCarSpeed() { return STRUCT_OFFSET(ATestProjectPawn, InCarSpeed); } \
	FORCEINLINE static uint32 __PPO__InCarGear() { return STRUCT_OFFSET(ATestProjectPawn, InCarGear); } \
	FORCEINLINE static uint32 __PPO__EngineSoundComponent() { return STRUCT_OFFSET(ATestProjectPawn, EngineSoundComponent); }


#define TestProject_Source_TestProject_TestProjectPawn_h_16_PROLOG
#define TestProject_Source_TestProject_TestProjectPawn_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProject_Source_TestProject_TestProjectPawn_h_19_PRIVATE_PROPERTY_OFFSET \
	TestProject_Source_TestProject_TestProjectPawn_h_19_RPC_WRAPPERS \
	TestProject_Source_TestProject_TestProjectPawn_h_19_INCLASS \
	TestProject_Source_TestProject_TestProjectPawn_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestProject_Source_TestProject_TestProjectPawn_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProject_Source_TestProject_TestProjectPawn_h_19_PRIVATE_PROPERTY_OFFSET \
	TestProject_Source_TestProject_TestProjectPawn_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	TestProject_Source_TestProject_TestProjectPawn_h_19_INCLASS_NO_PURE_DECLS \
	TestProject_Source_TestProject_TestProjectPawn_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestProject_Source_TestProject_TestProjectPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
