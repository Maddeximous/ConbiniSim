// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConbiniSimWeaponComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AConbiniSimCharacter;
#ifdef CONBINISIM_ConbiniSimWeaponComponent_generated_h
#error "ConbiniSimWeaponComponent.generated.h already included, missing '#pragma once' in ConbiniSimWeaponComponent.h"
#endif
#define CONBINISIM_ConbiniSimWeaponComponent_generated_h

#define FID_Users_svart_Documents_Unreal_Projects_ConbiniSim_Source_ConbiniSim_ConbiniSimWeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndPlay); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execAttachWeapon);


#define FID_Users_svart_Documents_Unreal_Projects_ConbiniSim_Source_ConbiniSim_ConbiniSimWeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConbiniSimWeaponComponent(); \
	friend struct Z_Construct_UClass_UConbiniSimWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(UConbiniSimWeaponComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ConbiniSim"), NO_API) \
	DECLARE_SERIALIZER(UConbiniSimWeaponComponent)


#define FID_Users_svart_Documents_Unreal_Projects_ConbiniSim_Source_ConbiniSim_ConbiniSimWeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UConbiniSimWeaponComponent(UConbiniSimWeaponComponent&&); \
	UConbiniSimWeaponComponent(const UConbiniSimWeaponComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConbiniSimWeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConbiniSimWeaponComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UConbiniSimWeaponComponent) \
	NO_API virtual ~UConbiniSimWeaponComponent();


#define FID_Users_svart_Documents_Unreal_Projects_ConbiniSim_Source_ConbiniSim_ConbiniSimWeaponComponent_h_11_PROLOG
#define FID_Users_svart_Documents_Unreal_Projects_ConbiniSim_Source_ConbiniSim_ConbiniSimWeaponComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_svart_Documents_Unreal_Projects_ConbiniSim_Source_ConbiniSim_ConbiniSimWeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_svart_Documents_Unreal_Projects_ConbiniSim_Source_ConbiniSim_ConbiniSimWeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_svart_Documents_Unreal_Projects_ConbiniSim_Source_ConbiniSim_ConbiniSimWeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONBINISIM_API UClass* StaticClass<class UConbiniSimWeaponComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_svart_Documents_Unreal_Projects_ConbiniSim_Source_ConbiniSim_ConbiniSimWeaponComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
