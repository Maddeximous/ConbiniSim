// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConbiniSimPickUpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AConbiniSimCharacter;
class UPrimitiveComponent;
struct FHitResult;
#ifdef CONBINISIM_ConbiniSimPickUpComponent_generated_h
#error "ConbiniSimPickUpComponent.generated.h already included, missing '#pragma once' in ConbiniSimPickUpComponent.h"
#endif
#define CONBINISIM_ConbiniSimPickUpComponent_generated_h

#define FID_Users_svart_Documents_Unreal_Projects_ConbiniSim_Source_ConbiniSim_ConbiniSimPickUpComponent_h_12_DELEGATE \
CONBINISIM_API void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, AConbiniSimCharacter* PickUpCharacter);


#define FID_Users_svart_Documents_Unreal_Projects_ConbiniSim_Source_ConbiniSim_ConbiniSimPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_Users_svart_Documents_Unreal_Projects_ConbiniSim_Source_ConbiniSim_ConbiniSimPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConbiniSimPickUpComponent(); \
	friend struct Z_Construct_UClass_UConbiniSimPickUpComponent_Statics; \
public: \
	DECLARE_CLASS(UConbiniSimPickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ConbiniSim"), NO_API) \
	DECLARE_SERIALIZER(UConbiniSimPickUpComponent)


#define FID_Users_svart_Documents_Unreal_Projects_ConbiniSim_Source_ConbiniSim_ConbiniSimPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UConbiniSimPickUpComponent(UConbiniSimPickUpComponent&&); \
	UConbiniSimPickUpComponent(const UConbiniSimPickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConbiniSimPickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConbiniSimPickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UConbiniSimPickUpComponent) \
	NO_API virtual ~UConbiniSimPickUpComponent();


#define FID_Users_svart_Documents_Unreal_Projects_ConbiniSim_Source_ConbiniSim_ConbiniSimPickUpComponent_h_14_PROLOG
#define FID_Users_svart_Documents_Unreal_Projects_ConbiniSim_Source_ConbiniSim_ConbiniSimPickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_svart_Documents_Unreal_Projects_ConbiniSim_Source_ConbiniSim_ConbiniSimPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_svart_Documents_Unreal_Projects_ConbiniSim_Source_ConbiniSim_ConbiniSimPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_svart_Documents_Unreal_Projects_ConbiniSim_Source_ConbiniSim_ConbiniSimPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONBINISIM_API UClass* StaticClass<class UConbiniSimPickUpComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_svart_Documents_Unreal_Projects_ConbiniSim_Source_ConbiniSim_ConbiniSimPickUpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
