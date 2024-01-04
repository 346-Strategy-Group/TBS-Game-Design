#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
class USkeletalMeshComponent;
class UFloatingPawnMovement;
class USceneComponent;
class AActor;
class UDamageType;
class AController;
#include "BP_TextChess__pf772598429.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/AC/BP_TextChess.BP_TextChess_C", OverrideNativeName="BP_TextChess_C"))
class ABP_TextChess_C__pf772598429 : public APawn
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="默认", OverrideNativeName="SkeletalMesh"))
	USkeletalMeshComponent* bpv__SkeletalMesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="默认", OverrideNativeName="FloatingPawnMovement"))
	UFloatingPawnMovement* bpv__FloatingPawnMovement__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="默认", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Health", Category="默认", MultiLine="true", OverrideNativeName="health"))
	float bpv__health__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Healthmax", Category="默认", MultiLine="true", OverrideNativeName="healthmax"))
	float bpv__healthmax__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Mana", Category="默认", MultiLine="true", OverrideNativeName="mana"))
	float bpv__mana__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Nowtarget", Category="默认", MultiLine="true", OverrideNativeName="Nowtarget"))
	AActor* bpv__Nowtarget__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_OtherActor"))
	AActor* b0l__K2Node_Event_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Damage"))
	float b0l__K2Node_Event_Damage__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DamageType"))
	UDamageType* b0l__K2Node_Event_DamageType__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InstigatedBy"))
	AController* b0l__K2Node_Event_InstigatedBy__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DamageCauser"))
	AActor* b0l__K2Node_Event_DamageCauser__pf;
	ABP_TextChess_C__pf772598429(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_TextChess__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_TextChess__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_TextChess__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintAuthorityOnly, meta=(Category="Game|Damage", Comment="/** Event when this actor takes ANY damage */", DisplayName="AnyDamage", ToolTip="Event when this actor takes ANY damage", CppFromBpEvent, OverrideNativeName="ReceiveAnyDamage"))
	virtual void bpf__ReceiveAnyDamage__pf(float bpp__Damage__pf, const UDamageType* bpp__DamageType__pf__const, AController* bpp__InstigatedBy__pf, AActor* bpp__DamageCauser__pf);
	UFUNCTION(meta=(Category="Collision", Comment="/** \t *\tEvent when this actor overlaps another actor, for example a player walking into a trigger.\t *\tFor events when objects have a blocking collision, for example a player hitting a wall, see \'Hit\' events.\t *\t@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.\t */", DisplayName="ActorBeginOverlap", ToolTip="Event when this actor overlaps another actor, for example a player walking into a trigger.For events when objects have a blocking collision, for example a player hitting a wall, see \'Hit\' events.@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.", CppFromBpEvent, OverrideNativeName="ReceiveActorBeginOverlap"))
	virtual void bpf__ReceiveActorBeginOverlap__pf(AActor* bpp__OtherActor__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
public:
};
