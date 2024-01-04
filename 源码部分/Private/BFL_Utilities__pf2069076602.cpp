#include "NativizedAssets.h"
#include "BFL_Utilities__pf2069076602.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UBFL_Utilities_C__pf2069076602::UBFL_Utilities_C__pf2069076602(const FObjectInitializer& ObjectInitializer) : Super()
{
	
}
PRAGMA_ENABLE_OPTIMIZATION
void UBFL_Utilities_C__pf2069076602::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UBFL_Utilities_C__pf2069076602::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
}
PRAGMA_ENABLE_OPTIMIZATION
void UBFL_Utilities_C__pf2069076602::bpf__SnapVecToVec__pf(FVector bpp__V1__pf, FVector bpp__V2__pf, UObject* bpp____WorldContext__pf, /*out*/ FVector& bpp__Return__pf)
{
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	float bpfv__CallFunc_BreakVector_X_1__pf{};
	float bpfv__CallFunc_BreakVector_Y_1__pf{};
	float bpfv__CallFunc_BreakVector_Z_1__pf{};
	float bpfv__CallFunc_GridSnap_Float_ReturnValue__pf{};
	float bpfv__CallFunc_GridSnap_Float_ReturnValue_1__pf{};
	float bpfv__CallFunc_GridSnap_Float_ReturnValue_2__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	UKismetMathLibrary::BreakVector(bpp__V1__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
	UKismetMathLibrary::BreakVector(bpp__V2__pf, /*out*/ bpfv__CallFunc_BreakVector_X_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Y_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Z_1__pf);
	bpfv__CallFunc_GridSnap_Float_ReturnValue__pf = UKismetMathLibrary::GridSnap_Float(bpfv__CallFunc_BreakVector_X__pf, bpfv__CallFunc_BreakVector_X_1__pf);
	bpfv__CallFunc_GridSnap_Float_ReturnValue_1__pf = UKismetMathLibrary::GridSnap_Float(bpfv__CallFunc_BreakVector_Z__pf, bpfv__CallFunc_BreakVector_Z_1__pf);
	bpfv__CallFunc_GridSnap_Float_ReturnValue_2__pf = UKismetMathLibrary::GridSnap_Float(bpfv__CallFunc_BreakVector_Y__pf, bpfv__CallFunc_BreakVector_Y_1__pf);
	bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_GridSnap_Float_ReturnValue__pf, bpfv__CallFunc_GridSnap_Float_ReturnValue_2__pf, bpfv__CallFunc_GridSnap_Float_ReturnValue_1__pf);
	bpp__Return__pf = bpfv__CallFunc_MakeVector_ReturnValue__pf;
}
void UBFL_Utilities_C__pf2069076602::bpf__Is_Float_Even__pf(float bpp__Float__pf, UObject* bpp____WorldContext__pf, /*out*/ bool& bpp__Is_Even__pf)
{
	float bpfv__CallFunc_Percent_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue__pf{};
	bpfv__CallFunc_Percent_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Percent_FloatFloat(bpp__Float__pf, 2.000000);
	bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::EqualEqual_FloatFloat(bpfv__CallFunc_Percent_FloatFloat_ReturnValue__pf, 0.000000);
	bpp__Is_Even__pf = bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue__pf;
}
void UBFL_Utilities_C__pf2069076602::bpf__Is_Int_Even__pf(int32 bpp__Float__pf, UObject* bpp____WorldContext__pf, /*out*/ bool& bpp__Is_Even__pf)
{
	int32 bpfv__CallFunc_Percent_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	bpfv__CallFunc_Percent_IntInt_ReturnValue__pf = UKismetMathLibrary::Percent_IntInt(bpp__Float__pf, 2);
	bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpfv__CallFunc_Percent_IntInt_ReturnValue__pf, 0);
	bpp__Is_Even__pf = bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf;
}
PRAGMA_DISABLE_OPTIMIZATION
void UBFL_Utilities_C__pf2069076602::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UBFL_Utilities_C__pf2069076602::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{58, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintFunctionLibrary 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UBFL_Utilities_C__pf2069076602
{
	FRegisterHelper__UBFL_Utilities_C__pf2069076602()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Blueprints/Core/Utilites/BFL_Utilities"), &UBFL_Utilities_C__pf2069076602::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UBFL_Utilities_C__pf2069076602 Instance;
};
FRegisterHelper__UBFL_Utilities_C__pf2069076602 FRegisterHelper__UBFL_Utilities_C__pf2069076602::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
