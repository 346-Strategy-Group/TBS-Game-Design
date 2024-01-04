#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "E_Grid_Shape__pf3764965557.h"
#include "E_TileType__pf886517966.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class USceneComponent;
class UStaticMeshComponent;
#include "BP_Grid_Modifier__pf3410280870.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/Core/Grid/BP_Grid_Modifier.BP_Grid_Modifier_C", OverrideNativeName="BP_Grid_Modifier_C"))
class ABP_Grid_Modifier_C__pf3410280870 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="默认", OverrideNativeName="Scene"))
	USceneComponent* bpv__Scene__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="默认", OverrideNativeName="StaticMesh"))
	UStaticMeshComponent* bpv__StaticMesh__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Shape", Category="默认", MultiLine="true", OverrideNativeName="Shape"))
	E__E_Grid_Shape__pf bpv__Shape__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Type", Category="默认", MultiLine="true", OverrideNativeName="Type"))
	E__E_TileType__pf bpv__Type__pf;
	ABP_Grid_Modifier_C__pf3410280870(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
public:
};
