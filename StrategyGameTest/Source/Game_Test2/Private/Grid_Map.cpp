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

//初始化属性时调用
void AGrid_Map::PostInitProperties()
{
	Super::PostInitProperties();
}

#if WITH_EDITOR
//编辑器中改变属性时调用
void AGrid_Map::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	/**/
}
#endif

//根据棋盘坐标获取棋格
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


//寻路
bool AGrid_Map::FindPath(TArray<UGrid_Node*>& Path, AActor* InActor, UGrid_Node* FromNode, UGrid_Node* ToNode, int StopSteps)
{
	Path.Empty();
	//安全判断
	if (!FromNode || !ToNode)
		return false;
	if (!NodeMap.FindKey(FromNode) || !NodeMap.FindKey(ToNode))
		return false;
	//获取实际所有终点
	TArray<UGrid_Node*> ToNodes = GetNodeNeighbors(ToNode, StopSteps);
	for (int i = ToNodes.Num() - 1; i >= 0; i--)
	{
		if (!ToNodes[i]->IsPassable(InActor))
			ToNodes.RemoveAt(i);
	}
	//判断起点终点是否存在
	if (!FromNode->IsPassable(InActor))
		return false;
	if (ToNodes.Num() == 0)
		return false;
	//判断是否已经到达终点
	if (ToNodes.Contains(FromNode))
		return true;

	//将要遍历的路点
	TArray<UGrid_Node*> openList;
	//已经完成遍历的路点
	TArray<UGrid_Node*> closeList;
	//当前所在路点
	UGrid_Node* nowNode;
	nowNode = FromNode;
	openList.Add(nowNode);
	bool bFinded = false;
	//A*寻路
	while (!bFinded)
	{
		//移除openList，加入closeList
		openList.Remove(nowNode);
		closeList.Add(nowNode);
		//获取相邻路点
		TArray<UGrid_Node*> neighbors = nowNode->Get_Neighbors();
		for (auto neighbor : neighbors)
		{
			if (!neighbor)
				continue;
			//判断相邻路点是否为终点
			if (ToNodes.Contains(neighbor))
			{
				bFinded = true;
				ToNode = neighbor;
				neighbor->Pre = nowNode;
			}
			//如果在closeList或不能通行则跳过
			if (closeList.Contains(neighbor) || !neighbor->IsPassable(InActor))
				continue;
			//如果不在openlist，则加入openlist的队尾，以备后用
			if (!openList.Contains(neighbor))
			{
				openList.Add(neighbor);
				neighbor->Pre = nowNode;
			}
		}
		//取出队首的路点，设置为下次循环遍历的路点
		if (openList.Num() <= 0)
			break;
		else
			nowNode = openList[0];
	}
	openList.Empty();
	closeList.Empty();
	//找到了路径
	if (bFinded)
	{
		UGrid_Node* tNode = ToNode;
		while (tNode != FromNode)
		{
			Path.Add(tNode);
			tNode = Cast<UGrid_Node>(tNode->Pre);
		}
		//获取的路径时从终点->起点的路径，需要反转回起点->终点的路径
		Algo::Reverse(Path);

		return true;
	}

	return false;
}

//判断路径是否存在
bool AGrid_Map::IsPathExist(AActor* InActor, UGrid_Node* FromNode, UGrid_Node* ToNode, int StopSteps)
{
	TArray<UGrid_Node*> Path;
	return FindPath(Path, InActor, FromNode, ToNode, StopSteps);
}

//获取范围内的点
TArray<UGrid_Node*> AGrid_Map::GetNodeNeighbors(UGrid_Node* InNode, int InStep) const
{
	int neighborSteps = InStep;
	TArray<UGrid_Node*> nowCheckList;
	TArray<UGrid_Node*> nextCheckList;
	TArray<UGrid_Node*> findList;
	nextCheckList.AddUnique(InNode);
	findList.AddUnique(InNode);

	//层层向外判断
	/**/

	return findList;
}