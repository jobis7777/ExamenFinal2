// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_USFX/EstrategiaZigzag.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstrategiaZigzag() {}
// Cross Module References
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_AEstrategiaZigzag_NoRegister();
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_AEstrategiaZigzag();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_USFX();
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_UIEstrategiaMovimiento_NoRegister();
// End Cross Module References
	void AEstrategiaZigzag::StaticRegisterNativesAEstrategiaZigzag()
	{
	}
	UClass* Z_Construct_UClass_AEstrategiaZigzag_NoRegister()
	{
		return AEstrategiaZigzag::StaticClass();
	}
	struct Z_Construct_UClass_AEstrategiaZigzag_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstrategiaZigzag_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstrategiaZigzag_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstrategiaZigzag.h" },
		{ "ModuleRelativePath", "EstrategiaZigzag.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstrategiaZigzag_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIEstrategiaMovimiento_NoRegister, (int32)VTABLE_OFFSET(AEstrategiaZigzag, IIEstrategiaMovimiento), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstrategiaZigzag_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstrategiaZigzag>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstrategiaZigzag_Statics::ClassParams = {
		&AEstrategiaZigzag::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEstrategiaZigzag_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstrategiaZigzag_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstrategiaZigzag()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstrategiaZigzag_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstrategiaZigzag, 3126228547);
	template<> DONKEYKONG_USFX_API UClass* StaticClass<AEstrategiaZigzag>()
	{
		return AEstrategiaZigzag::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstrategiaZigzag(Z_Construct_UClass_AEstrategiaZigzag, &AEstrategiaZigzag::StaticClass, TEXT("/Script/DonkeyKong_USFX"), TEXT("AEstrategiaZigzag"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstrategiaZigzag);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
