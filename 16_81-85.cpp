#include<stdio.h>
int mian(){
//	81.BFS算法求解单源最短路径问题(权值相同也适用)
void BFS_min(Groph G,int u,int d[],bool visited[]){
	for(int i=0;i<G.vex.num;i++){
		d[i]=-1;
		visited[i]=false;
	}
	d[u]=0;
	visited[u]=true;
	Queue Q;	//创建 队列
    InitQueue(&Q);    // 初始化队列
    EnQueue(Q,u);	//u入对 
    while(!IsEmpty(Q)){
    	DeQueue(Q,u);
    	for(int w=FirstNeighbor(Q,u);w>=0;w--){
    		w=NextNeighbor(Q,u,w);
    		if(visited[w]==false){
    			d[w]=d[u]+1;
    			EnQueue(Q,w);
    			visited[w]=true;
			}
		}
	}
}

//	82.已知一个有向图使用邻接矩阵存储，写出一个算法求图中入度为0的点的个数。
//	邻接矩阵 行为出度，列为入度 
typedef struct {
    int edge[Max_num][Max_num]; // 邻接矩阵
    int vexnum; // 图的顶点数
    int edgenum; // 图的边数
} AMGraph;
int sum_zero(AMGraph G){
	int count=0,tag;
	for(int i=0;i<G.vexnum;i++){
		tag=0;
		for(int j=0;j<G.vexnum;j++){
			if(G.edge[j][i]!=0){
				tag=1;
				break;
			}
		}
		if(tag==0){
			count++;
		}
	}
	return count;
}	
//(扩展)已知一个有向图使用邻接矩阵存储，写出一个算法求图中出度为0的点的个数。
int sum_zero(AMGraph G){
	int count=0,tag;
	for(int i=0;i<G.vexnum;i++){
		tag=0;
		for(int j=0;j<G.vexnum;j++){
			if(G.edge[i][j]!=0){
				tag=1;
				break;
			}
		}
		if(tag==0){
			count++;
		}
	}
	return count;
}

//	83.设计一个算法，统计一个采用邻接表存储的具有n个顶点的无向无权图所有顶点的度	
void node_degree(ALGraph G){
	ArcNode *p;
	for(int i=0;i<G.vexnum;i++){
		int count=0;
		p=G.vertices[v].firstarc;
		while(p){
			count++;
			p=p->nextarc;
		}
		printf("结点%d的度为%d",i,count);
	}
}

//	84.折半查找
int func(int l[],int n,int k){
	int low=0,high=n-1,mid;
	while(low<high){
		min=(low+high)/2;
		if(l[mid]==k){
			return min;
		}
		else if(l[mid]<k){
			high=mid-1;
		}else{
			low=mid+1;
		}
	}
	return -1;
}

//	85.二叉排序树的查找
typedef struct Bstnode {
    int data;
    int Bstnode *lchild, *rchild;
} Bstnode, *Bstree;
Bstnode* func(Bstree T,int key){
	while(T && T->dada!=key){
		if(key<T->dada){
			T=T->lchild;
		}else{
			T=T->rchild;
		}	
	}
	return T;
}

	
}
	
	return 0;
}
