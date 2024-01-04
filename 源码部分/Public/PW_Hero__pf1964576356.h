#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "E_HeroType__pf1448998623.h"
#include "BPI_HeroAnimation__pf1448998623.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
class UFloatingPawnMovement;
class USkeletalMeshComponent;
class USceneComponent;
class ABP_Grid_C__pf3410280870;
#include "PW_Hero__pf1964576356.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/Core/Heros/PW_Hero.PW_Hero_C", OverrideNativeName="PW_Hero_C"))
class APW_Hero_C__pf1964576356 : public APawn
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="默认", OverrideNativeName="FloatingPawnMovement"))
	UFloatingPawnMovement* bpv__FloatingPawnMovement__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="默认", OverrideNativeName="SkeletalMesh"))
	USkeletalMeshComponent* bpv__SkeletalMesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="默认", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Hero Type", Category="默认", MultiLine="true", OverrideNativeName="HeroType"))
	E__E_HeroType__pf bpv__HeroType__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Test Anim Index", Category="默认", MultiLine="true", OverrideNativeName="TestAnimIndex"))
	E__E_HeroType__pf bpv__TestAnimIndex__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Grid", Category="默认", MultiLine="true", OverrideNativeName="Grid"))
	ABP_Grid_C__pf3410280870* bpv__Grid__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBPI_Hero_Animation"))
	TScriptInterface<IBPI_HeroAnimation_C> b0l__K2Node_DynamicCast_AsBPI_Hero_Animation__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	APW_Hero_C__pf1964576356(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_PW_Hero__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="MoveByGrid"))
	virtual void bpf__MoveByGrid__pf(ABP_Grid_C__pf3410280870* bpp__Grid__pf, FIntPoint bpp__Src__pf, FIntPoint bpp__Dst__pf);
public:
};
