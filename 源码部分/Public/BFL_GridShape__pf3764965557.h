#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "E_Grid_Shape__pf3764965557.h"
#include "S_Grid_Shape_Data__pf3764965557.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
class UObject;
#include "BFL_GridShape__pf3764965557.generated.h"
UCLASS(config=Engine, meta=(ReplaceConverted="/Game/Blueprints/Core/Grid/Grid_Shapes/BFL_GridShape.BFL_GridShape_C", OverrideNativeName="BFL_GridShape_C"))
class UBFL_GridShape_C__pf3764965557 : public UBlueprintFunctionLibrary
{
public:
	GENERATED_BODY()
	UBFL_GridShape_C__pf3764965557(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="__WorldContext", Category, OverrideNativeName="Get_ShapeData"))
	static void bpf__Get_ShapeData__pf(E__E_Grid_Shape__pf bpp__Shape__pf, UObject* bpp____WorldContext__pf, /*out*/ FS_Grid_Shape_Data__pf3764965557& bpp__Data__pf);
public:
};
