#inclued<stdio.h>
// 定义图的邻接表节点
typedef struct ArcNode {
    int adjvex; // 该边所指向的顶点的位置
    struct ArcNode* nextarc; // 指向下一个邻接点
} ArcNode;

// 定义图的邻接表
typedef struct VNode {
    ArcNode* firstarc; // 指向第一个邻接点
} VNode;

typedef struct ALGraph {
    VNode vertices[Max_num]; // 图的顶点数组
    int vexnum; // 图的顶点数
    int edgenum; // 图的边数
} ALGraph;

int mian(){
//	96.判别有向图中是否存在由顶点vi到顶点vj的路径(i ≠j)(图采用邻接表形式)。
//宽度优先 
int BFS(ALGraph G,int i,int j){
	int visited[G.vexnum]={0};
	InQueue(Q);
	EnQueue(Q,i);
	while(IsEmpty(Q)){
		Dequeue(Q,i);
		visited[i]=1;
		for(int w=FirstNeighor(G,i);w>=0;){
			w=NextNeighor(G,i,w)
			if(w==j){
				return 1;
			}
			if(!visited[w]){
				EnQueue(Q,w);
				visited[i]=1; 
			}			
		}
	}
	return 0; 
}	

//深度优先 
void DFS(ALGraph G,int i,int j,bool &flag,int visited){
	if(i==j){
		flag=true;
		return;
	}
	visited[i]=1;
	for(int w=FirstNeighor(G,i);w>=0;){
		w=NextNeighor(G,i,w)
		if(!visited[w]){
			DFS(G,w,j,flag,visited)
		}
	}
}	

//	97.写出图的深度优先搜索 DFS算法的非递归算法(图采用邻接表形式)。
void DFS_non_rc(ALGraph G,int v){
	int visited[G.vexnum];
	Initstack(s);
	push(s,v);
	while(!IsEmpty(s)){
		v=pop(s);
		visit(v);
		visited[v]=1;
		for(int w=FirstNeighor(G,i);w>=0;){
			w=NextNeighor(G,i,w)
			if(!visited[w]){
				push(s,w);
				visited[w]=1;
			}
		}
	}
}

//	98.计算有向图每个顶点的出度和入度(图采用领接矩阵存储
typedef struct {
    int edge[Max_num][Max_num]; // 邻接矩阵
    int vexnum; // 图的顶点数
    int edgenum; // 图的边数
} AMGraph;

void fun(AMGraphb G,int in_degree[],int out_degree[]){
	for(int i=0;i<G.vexnum;i++){
		int  in=0,out=0;
		for(int j=0;j<G.vexnum;j++){
			if(G.edge[i][j]=1){
				out++;
			}
			if(G.edge[j][i]=1){
				in++;
			}
		}
		in_degree[i]=in;
		out_degreeij]=out;
	}	
}

//	99.计算有向图每个顶点的出度和入度(图采用领接表存储)
void Degre(ALGraph G,int degree[]){
	int in_degree[G.vexnum]={0};
	int out_degree[G.vexnum]={0};
	for(int i=0;i<G.vexnum;i++){
		Arcnode *p=G.vertices[i].firstarc;
		while(p){
			out_degree[i]++;
			in_degree[ p->adjvex]++;
			p= p->nextarc;
		}
	}
	for(int i=0;i<G.vexnum;i++){
		degree[i]=in_degree[i]+out_degree[i];
	}
} 

//	100.拓扑排序算法 DAG有向
bool fun(ALGraph G,int indegree[]){
	Initstack(s);
	for(int i=0;i<G.vexnum;i++){
		if(indegree[i]==0){
			push(s,i);
		}
	}
	int count=0;
	while(!IsEmpty(Q)){
		i=pop(s);
		printf("%d",i);
		count++;
		for(Arcnode *p=G.vertices[i].firstarc;p;p= p->nextarc;){
			int v=p->adjvex;
			indegree[v]--;
			if(indegree[v]==0){
				push(s,v);
			}
		}
	}
	if(count<G.vexnum){
		return false;
	}else{
		return true;
	}
} 




	return 0;
}
