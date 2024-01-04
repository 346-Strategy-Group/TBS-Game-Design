#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "S_Tile_Data__pf886517966.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UChildActorComponent;
class USceneComponent;
class ABP_Grid_C__pf3410280870;
class ABP_Grid_MeshInst_C__pf886517966;
#include "BP_Grid_Visual__pf3410280870.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/Core/Grid/BP_Grid_Visual.BP_Grid_Visual_C", OverrideNativeName="BP_Grid_Visual_C"))
class ABP_Grid_Visual_C__pf3410280870 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="默认", OverrideNativeName="ChildActor_GridMeshInst"))
	UChildActorComponent* bpv__ChildActor_GridMeshInst__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="默认", OverrideNativeName="Scene"))
	USceneComponent* bpv__Scene__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Grid", Category="默认", MultiLine="true", OverrideNativeName="Grid"))
	ABP_Grid_C__pf3410280870* bpv__Grid__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Grid Mesh Inst", Category="默认", MultiLine="true", OverrideNativeName="Grid_MeshInst"))
	ABP_Grid_MeshInst_C__pf886517966* bpv__Grid_MeshInst__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Offest from Ground", Category="默认", MultiLine="true", OverrideNativeName="OffestFromGround"))
	float bpv__OffestFromGround__pf;
	ABP_Grid_Visual_C__pf3410280870(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_Grid_Visual__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="InitializeGridVisual"))
	virtual void bpf__InitializeGridVisual__pf(ABP_Grid_C__pf3410280870* bpp__Grid__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetOffestFromGround"))
	virtual void bpf__SetOffestFromGround__pf(float bpp__Offest__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="DestoryGridVisual"))
	virtual void bpf__DestoryGridVisual__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Update_Tile_Visual"))
	virtual void bpf__Update_Tile_Visual__pf(FS_Tile_Data__pf886517966 bpp__Data__pf);
public:
};
