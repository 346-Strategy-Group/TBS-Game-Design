#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
class UObject;
#include "BFL_Utilities__pf2069076602.generated.h"
UCLASS(config=Engine, meta=(ReplaceConverted="/Game/Blueprints/Core/Utilites/BFL_Utilities.BFL_Utilities_C", OverrideNativeName="BFL_Utilities_C"))
class UBFL_Utilities_C__pf2069076602 : public UBlueprintFunctionLibrary
{
public:
	GENERATED_BODY()
	UBFL_Utilities_C__pf2069076602(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="__WorldContext", Category, OverrideNativeName="SnapVecToVec"))
	static void bpf__SnapVecToVec__pf(FVector bpp__V1__pf, FVector bpp__V2__pf, UObject* bpp____WorldContext__pf, /*out*/ FVector& bpp__Return__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="__WorldContext", Category, OverrideNativeName="Is_Float_Even"))
	static void bpf__Is_Float_Even__pf(float bpp__Float__pf, UObject* bpp____WorldContext__pf, /*out*/ bool& bpp__Is_Even__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="__WorldContext", Category, OverrideNativeName="Is_Int_Even"))
	static void bpf__Is_Int_Even__pf(int32 bpp__Float__pf, UObject* bpp____WorldContext__pf, /*out*/ bool& bpp__Is_Even__pf);
public:
};
