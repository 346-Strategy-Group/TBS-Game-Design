#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "E_TileState__pf886517966.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UInstancedStaticMeshComponent;
class UStaticMesh;
class UMaterialInterface;
#include "BP_Grid_Meshinst__pf886517966.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/Core/Grid/Utilities/BP_Grid_Meshinst.BP_Grid_MeshInst_C", OverrideNativeName="BP_Grid_MeshInst_C"))
class ABP_Grid_MeshInst_C__pf886517966 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="默认", OverrideNativeName="InstancedStaticMesh"))
	UInstancedStaticMeshComponent* bpv__InstancedStaticMesh__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Instance Indexes", Category="默认", MultiLine="true", OverrideNativeName="InstanceIndexes"))
	TArray<FIntPoint> bpv__InstanceIndexes__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I", Category="默认", MultiLine="true", OverrideNativeName="I"))
	int32 bpv__I__pf;
	ABP_Grid_MeshInst_C__pf886517966(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_Grid_MeshInst__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Instance_Add"))
	virtual void bpf__Instance_Add__pf(FTransform const& bpp__Transform__pf__const, FIntPoint const& bpp__Index__pf__const, /*out*/ TArray<E__E_TileState__pf>& bpp__State__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Remove_Instance"))
	virtual void bpf__Remove_Instance__pf(FIntPoint const& bpp__Index__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Clear_Instance"))
	virtual void bpf__Clear_Instance__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Initialize_Grid_MeshInstance"))
	virtual void bpf__Initialize_Grid_MeshInstance__pf(UStaticMesh* bpp__Mesh__pf, UMaterialInterface* bpp__Material__pf, FLinearColor bpp__Color__pf, ECollisionEnabled::Type bpp__Collision__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="默认", OverrideNativeName="Get_ColorFromState"))
	virtual void bpf__Get_ColorFromState__pf(/*out*/ TArray<E__E_TileState__pf>& bpp__States__pf, /*out*/ FLinearColor& bpp__Color__pf, /*out*/ float& bpp__IsFilled__pf);
public:
};
