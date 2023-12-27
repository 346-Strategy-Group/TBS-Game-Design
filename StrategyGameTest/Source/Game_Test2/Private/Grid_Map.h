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

	//��ʼ������-����
	virtual void PostInitProperties() override;

#if WITH_EDITOR
	//��Editor���޸�����-����
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

public:	
	
	AGrid_Map();

	//������״
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EGrid_Type MapType = EGrid_Type::None;

	//����С
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Size;

	//TMap���ڴ��������е����
	UPROPERTY()
	TMap<FGrid_Coord, UGrid_Node*> NodeMap;

	//Clear NodeMap
	UFUNCTION(BlueprintCallable)
	void ClearNodeMap();

	//Insert GridNode
	UFUNCTION(BlueprintCallable)
	void InsertGridNode();

	//��ȡ�������
	UFUNCTION(BlueprintCallable)
	UGrid_Node* GetNode(FGrid_Coord InCoord) const;

	//Ѱ·�㷨A*
	UFUNCTION(BlueprintCallable)
	bool FindPath(TArray<UGrid_Node*>& Path, AActor* InActor, UGrid_Node* FromNode, UGrid_Node* ToNode, int StopSteps = 0);

	//�ж��Ƿ���·��
	UFUNCTION(BlueprintCallable)
	bool IsPathExist(AActor* InActor, UGrid_Node* FromNode, UGrid_Node* ToNode, int StopSteps = 0);

	//��ȡ��Χ�ڵ����
	UFUNCTION()
	TArray<UGrid_Node*> GetNodeNeighbors(UGrid_Node* InNode, int InStep = 0) const;
};
