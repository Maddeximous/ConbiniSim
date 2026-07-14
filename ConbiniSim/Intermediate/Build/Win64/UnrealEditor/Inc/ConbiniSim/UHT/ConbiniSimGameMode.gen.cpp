// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConbiniSim/ConbiniSimGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConbiniSimGameMode() {}

// Begin Cross Module References
CONBINISIM_API UClass* Z_Construct_UClass_AConbiniSimGameMode();
CONBINISIM_API UClass* Z_Construct_UClass_AConbiniSimGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_ConbiniSim();
// End Cross Module References

// Begin Class AConbiniSimGameMode
void AConbiniSimGameMode::StaticRegisterNativesAConbiniSimGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AConbiniSimGameMode);
UClass* Z_Construct_UClass_AConbiniSimGameMode_NoRegister()
{
	return AConbiniSimGameMode::StaticClass();
}
struct Z_Construct_UClass_AConbiniSimGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ConbiniSimGameMode.h" },
		{ "ModuleRelativePath", "ConbiniSimGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConbiniSimGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AConbiniSimGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ConbiniSim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AConbiniSimGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AConbiniSimGameMode_Statics::ClassParams = {
	&AConbiniSimGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AConbiniSimGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AConbiniSimGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AConbiniSimGameMode()
{
	if (!Z_Registration_Info_UClass_AConbiniSimGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AConbiniSimGameMode.OuterSingleton, Z_Construct_UClass_AConbiniSimGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AConbiniSimGameMode.OuterSingleton;
}
template<> CONBINISIM_API UClass* StaticClass<AConbiniSimGameMode>()
{
	return AConbiniSimGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AConbiniSimGameMode);
AConbiniSimGameMode::~AConbiniSimGameMode() {}
// End Class AConbiniSimGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_svart_Documents_GitHub_ConbiniSim_ConbiniSim_Source_ConbiniSim_ConbiniSimGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AConbiniSimGameMode, AConbiniSimGameMode::StaticClass, TEXT("AConbiniSimGameMode"), &Z_Registration_Info_UClass_AConbiniSimGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AConbiniSimGameMode), 1031005146U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_svart_Documents_GitHub_ConbiniSim_ConbiniSim_Source_ConbiniSim_ConbiniSimGameMode_h_1306054645(TEXT("/Script/ConbiniSim"),
	Z_CompiledInDeferFile_FID_Users_svart_Documents_GitHub_ConbiniSim_ConbiniSim_Source_ConbiniSim_ConbiniSimGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_svart_Documents_GitHub_ConbiniSim_ConbiniSim_Source_ConbiniSim_ConbiniSimGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
