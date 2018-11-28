// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/TestProjectWheelFront.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestProjectWheelFront() {}
// Cross Module References
	TESTPROJECT_API UClass* Z_Construct_UClass_UTestProjectWheelFront_NoRegister();
	TESTPROJECT_API UClass* Z_Construct_UClass_UTestProjectWheelFront();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_TestProject();
// End Cross Module References
	void UTestProjectWheelFront::StaticRegisterNativesUTestProjectWheelFront()
	{
	}
	UClass* Z_Construct_UClass_UTestProjectWheelFront_NoRegister()
	{
		return UTestProjectWheelFront::StaticClass();
	}
	struct Z_Construct_UClass_UTestProjectWheelFront_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestProjectWheelFront_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestProjectWheelFront_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TestProjectWheelFront.h" },
		{ "ModuleRelativePath", "TestProjectWheelFront.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestProjectWheelFront_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestProjectWheelFront>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTestProjectWheelFront_Statics::ClassParams = {
		&UTestProjectWheelFront::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UTestProjectWheelFront_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTestProjectWheelFront_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestProjectWheelFront()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTestProjectWheelFront_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTestProjectWheelFront, 836159959);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTestProjectWheelFront(Z_Construct_UClass_UTestProjectWheelFront, &UTestProjectWheelFront::StaticClass, TEXT("/Script/TestProject"), TEXT("UTestProjectWheelFront"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestProjectWheelFront);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
