// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Study_Project/Study_ProjectGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStudy_ProjectGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	STUDY_PROJECT_API UClass* Z_Construct_UClass_AStudy_ProjectGameModeBase();
	STUDY_PROJECT_API UClass* Z_Construct_UClass_AStudy_ProjectGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Study_Project();
// End Cross Module References
	void AStudy_ProjectGameModeBase::StaticRegisterNativesAStudy_ProjectGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStudy_ProjectGameModeBase);
	UClass* Z_Construct_UClass_AStudy_ProjectGameModeBase_NoRegister()
	{
		return AStudy_ProjectGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AStudy_ProjectGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStudy_ProjectGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Study_Project,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStudy_ProjectGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Study_ProjectGameModeBase.h" },
		{ "ModuleRelativePath", "Study_ProjectGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStudy_ProjectGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStudy_ProjectGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AStudy_ProjectGameModeBase_Statics::ClassParams = {
		&AStudy_ProjectGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AStudy_ProjectGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStudy_ProjectGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStudy_ProjectGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AStudy_ProjectGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStudy_ProjectGameModeBase.OuterSingleton, Z_Construct_UClass_AStudy_ProjectGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AStudy_ProjectGameModeBase.OuterSingleton;
	}
	template<> STUDY_PROJECT_API UClass* StaticClass<AStudy_ProjectGameModeBase>()
	{
		return AStudy_ProjectGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStudy_ProjectGameModeBase);
	AStudy_ProjectGameModeBase::~AStudy_ProjectGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_dpsks_Desktop_GitHub_Unreal5_Study_Study_Project_Source_Study_Project_Study_ProjectGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_dpsks_Desktop_GitHub_Unreal5_Study_Study_Project_Source_Study_Project_Study_ProjectGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AStudy_ProjectGameModeBase, AStudy_ProjectGameModeBase::StaticClass, TEXT("AStudy_ProjectGameModeBase"), &Z_Registration_Info_UClass_AStudy_ProjectGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStudy_ProjectGameModeBase), 3646143515U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_dpsks_Desktop_GitHub_Unreal5_Study_Study_Project_Source_Study_Project_Study_ProjectGameModeBase_h_2629090894(TEXT("/Script/Study_Project"),
		Z_CompiledInDeferFile_FID_Users_dpsks_Desktop_GitHub_Unreal5_Study_Study_Project_Source_Study_Project_Study_ProjectGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_dpsks_Desktop_GitHub_Unreal5_Study_Study_Project_Source_Study_Project_Study_ProjectGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
