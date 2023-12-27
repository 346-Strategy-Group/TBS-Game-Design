// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Grid_Node.h"
#include "Grid_Map.generated.h"

UCLASS()
class AGrid_Map : public AActor
{
	GENERATED_BODY()
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//初始化属性-覆盖
	virtual void PostInitProperties() override;

#if WITH_EDITOR
	//在Editor中修改属性-覆盖
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

public:	
	
	AGrid_Map();

	//棋盘形状
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EGrid_Type MapType = EGrid_Type::None;

	//棋格大小
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Size;

	//TMap用于储存棋盘中的棋格
	UPROPERTY()
	TMap<FGrid_Coord, UGrid_Node*> NodeMap;

	//Clear NodeMap
	UFUNCTION(BlueprintCallable)
	void ClearNodeMap();

	//Insert GridNode
	UFUNCTION(BlueprintCallable)
	void InsertGridNode();

	//获取坐标棋格
	UFUNCTION(BlueprintCallable)
	UGrid_Node* GetNode(FGrid_Coord InCoord) const;

	//寻路算法A*
	UFUNCTION(BlueprintCallable)
	bool FindPath(TArray<UGrid_Node*>& Path, AActor* InActor, UGrid_Node* FromNode, UGrid_Node* ToNode, int StopSteps = 0);

	//判断是否有路径
	UFUNCTION(BlueprintCallable)
	bool IsPathExist(AActor* InActor, UGrid_Node* FromNode, UGrid_Node* ToNode, int StopSteps = 0);

	//获取范围内的棋格
	UFUNCTION()
	TArray<UGrid_Node*> GetNodeNeighbors(UGrid_Node* InNode, int InStep = 0) const;
};
