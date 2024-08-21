#include<stdio.h>
#define Max_num 20
int main(){
//	76.二叉树的层次遍历算法
void LevelOrderTraversal(Bitree T) {
    Queue Q;	//创建队列
    InitQueue(&Q);    // 初始化队列
    Enqueue(&Q, T); // 根节点入队
    Bitnode* p; // 接收出队元素
    while (!IsEmpty(&Q)) {
        Dequeue(&Q, &p);
        visit(p);	//访问节点p，即输出 
        if (p->lchild != NULL) {
            Enqueue(&Q, p->lchild);		//如果左子节点存在，将其入队。
        }
        if (p->rchild != NULL) {
            Enqueue(&Q, p->rchild);
        }
    }
}


//	77.用邻接表实现广度优先搜索算法
void BFStraverse(ALGraph* q) {
    bool visit[Max_num] = {false};    // 初始化访问数组，记录每个节点是否被访问过。
    Queue Q;	//创建 队列
    InitQueue(&Q);    // 初始化队列
    for (int i = 0; i < q->vexnum; i++) {
        if (!visit[i]) {	//如果节点未被访问，则调用BFS函数。 
            BFS(q, i, visit, &Q);
        }
    }
}
void BFS(ALGraph* q, int i, bool visit[], Queue* Q) {
    visit[i] = true;	//标记当前节点为已访问。
    Enqueue(Q, i);	//将当前节点入队
    while (!IsEmpty(Q)) { // 队列非空
        int v;
        Dequeue(Q, &v);
        for (ArcNode* p = q->vertices[v].firstarc; p; p = p->nextarc) {    //遍历与节点v相邻的所有节点。
            int w = p->adjvex;
            if (!visit[w]) {
                visit[w] = true;
                Enqueue(Q, w);
            }
        }
    }
}
	
// 78. 用邻接矩阵实现广度优先搜索算法
void BFS(ALGraph* G, int i, bool visit[]) {
    Queue Q; // 创建队列
    InitQueue(&Q); // 初始化队列
    visit[i] = true; // 标记当前节点为已访问
    Enqueue(&Q, i); // 当前节点入队

    while (!IsEmpty(&Q)) { // 队列非空
        int v;
        Dequeue(&Q, &v); // 出队
        printf("%d ", v); // 访问节点

        for (int j = 0; j < G->vexnum; j++) { // 遍历邻接矩阵
            if (!visit[j] && G->edge[v][j] == 1) { // 如果未访问且有边
                visit[j] = true; // 标记为已访问
                Enqueue(&Q, j); // 入队
            }
        }
    }
}

//	79.用邻接表实现深度优先搜索算法
void DFStraverse(ALGraph* q) {
    bool visit[Max_num] = {false}; // 初始化访问数组
    for (int i = 0; i < q->vexnum; i++) {
        if (!visit[i]) {
            DFS(q, i, visit);
        }
    }
}

void DFS(ALGraph* q, int i, bool visit[]) {
    visit[i] = true;
    for (ArcNode* p = q->vertices[i].firstarc; p; p = p->nextarc) {
        int j = p->adjvex;
        if (!visit[j]) {
            DFS(q, j, visit);
        }
    }
}	
	
//	80.用邻接矩阵实现深度优先搜索算法
void DFS(ALGraph* G, int i, bool visit[]) {
    visit[i] = true; // 标记当前节点为已访问
    printf("%d ", i); // 访问节点

    for (int j = 0; j < G->vexnum; j++) { // 遍历邻接矩阵
        if (!visit[j] && G->edge[i][j] == 1) { // 如果未访问且有边
            DFS(G, j, visit); // 递归访问
        }
    }
}	 
	
	return 0;
} 
