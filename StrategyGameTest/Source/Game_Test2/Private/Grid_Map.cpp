// Fill out your copyright notice in the Description page of Project Settings.


#include "Grid_Map.h"
#include "Hexagon_Grid_Node.h"

// Sets default values
AGrid_Map::AGrid_Map()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGrid_Map::BeginPlay()
{
	Super::BeginPlay();
	
}

//��ʼ������ʱ����
void AGrid_Map::PostInitProperties()
{
	Super::PostInitProperties();
}

#if WITH_EDITOR
//�༭���иı�����ʱ����
void AGrid_Map::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	/**/
}
#endif

//�������������ȡ���
UGrid_Node* AGrid_Map::GetNode(FGrid_Coord InCoord) const
{
	if (NodeMap.Contains(InCoord))
		return NodeMap[InCoord];
	else
		return NULL;
}

//Clear NodeMap
void AGrid_Map::ClearNodeMap() {
	NodeMap.Empty();
}

//Insert NodeMap
void AGrid_Map::InsertGridNode() {
	;
}


//Ѱ·
bool AGrid_Map::FindPath(TArray<UGrid_Node*>& Path, AActor* InActor, UGrid_Node* FromNode, UGrid_Node* ToNode, int StopSteps)
{
	Path.Empty();
	//��ȫ�ж�
	if (!FromNode || !ToNode)
		return false;
	if (!NodeMap.FindKey(FromNode) || !NodeMap.FindKey(ToNode))
		return false;
	//��ȡʵ�������յ�
	TArray<UGrid_Node*> ToNodes = GetNodeNeighbors(ToNode, StopSteps);
	for (int i = ToNodes.Num() - 1; i >= 0; i--)
	{
		if (!ToNodes[i]->IsPassable(InActor))
			ToNodes.RemoveAt(i);
	}
	//�ж�����յ��Ƿ����
	if (!FromNode->IsPassable(InActor))
		return false;
	if (ToNodes.Num() == 0)
		return false;
	//�ж��Ƿ��Ѿ������յ�
	if (ToNodes.Contains(FromNode))
		return true;

	//��Ҫ������·��
	TArray<UGrid_Node*> openList;
	//�Ѿ���ɱ�����·��
	TArray<UGrid_Node*> closeList;
	//��ǰ����·��
	UGrid_Node* nowNode;
	nowNode = FromNode;
	openList.Add(nowNode);
	bool bFinded = false;
	//A*Ѱ·
	while (!bFinded)
	{
		//�Ƴ�openList������closeList
		openList.Remove(nowNode);
		closeList.Add(nowNode);
		//��ȡ����·��
		TArray<UGrid_Node*> neighbors = nowNode->Get_Neighbors();
		for (auto neighbor : neighbors)
		{
			if (!neighbor)
				continue;
			//�ж�����·���Ƿ�Ϊ�յ�
			if (ToNodes.Contains(neighbor))
			{
				bFinded = true;
				ToNode = neighbor;
				neighbor->Pre = nowNode;
			}
			//�����closeList����ͨ��������
			if (closeList.Contains(neighbor) || !neighbor->IsPassable(InActor))
				continue;
			//�������openlist�������openlist�Ķ�β���Ա�����
			if (!openList.Contains(neighbor))
			{
				openList.Add(neighbor);
				neighbor->Pre = nowNode;
			}
		}
		//ȡ�����׵�·�㣬����Ϊ�´�ѭ��������·��
		if (openList.Num() <= 0)
			break;
		else
			nowNode = openList[0];
	}
	openList.Empty();
	closeList.Empty();
	//�ҵ���·��
	if (bFinded)
	{
		UGrid_Node* tNode = ToNode;
		while (tNode != FromNode)
		{
			Path.Add(tNode);
			tNode = Cast<UGrid_Node>(tNode->Pre);
		}
		//��ȡ��·��ʱ���յ�->����·������Ҫ��ת�����->�յ��·��
		Algo::Reverse(Path);

		return true;
	}

	return false;
}

//�ж�·���Ƿ����
bool AGrid_Map::IsPathExist(AActor* InActor, UGrid_Node* FromNode, UGrid_Node* ToNode, int StopSteps)
{
	TArray<UGrid_Node*> Path;
	return FindPath(Path, InActor, FromNode, ToNode, StopSteps);
}

//��ȡ��Χ�ڵĵ�
TArray<UGrid_Node*> AGrid_Map::GetNodeNeighbors(UGrid_Node* InNode, int InStep) const
{
	int neighborSteps = InStep;
	TArray<UGrid_Node*> nowCheckList;
	TArray<UGrid_Node*> nextCheckList;
	TArray<UGrid_Node*> findList;
	nextCheckList.AddUnique(InNode);
	findList.AddUnique(InNode);

	//��������ж�
	/**/

	return findList;
}