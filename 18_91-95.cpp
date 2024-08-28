#include<stdio.h>
#define N 80
typedef struct worker{
	char num[10];
	char name[10];
	float money[3];
	float avg;
}worker;
worker wk[N];
void fun1(worker wk[]){
	float sum=0;
	for(int i=0;i<N;i++){
		scanf("%s %s %f %f %f",&wk[i].num,&wk[i].name,&wk[i].money[0],&wk[i].money[1],&wk[i].money[2]);
		wk[i].avg= (wk[i].money[0]+wk[i].money[1]+wk[i].money[2])/3.0;
		sum=0;
	}	
}

void fun2(worker wk[]){
	for(int i=0;i<N-1;i++){
		bool flag=false;
		for(int j=N-1;i<j;j--){
			if(wk[j].avg<wk[j-1].avg){
				int temp=wk[j].avg;
				wk[j].avg=wk[j-1].avg;
				wk[j-1].avg=wk[j].avg;
				flag=true;
			}
			if(flag==false){
				return;
			}
		}
	}	
}

void fun3(worker wk[]){
	for(int i=0;i<N;i++){
		printf("%s %s %f %f %f",wk[i].num,wk[i].name,wk[i].money[0],wk[i].money[1],wk[i].money[2],wk[i].avg);
	}	
}

int main(){
//	91.堆排序算法   完全二叉树  k  2k  2k+1 
void HeadAjust(int a[],int k,int len){
	a[0]=a[k];
	for(int i=2*k;i<len;i){
		if(a[i]<a[i+1] && i<len){
			i++;
		}
		if(a[0]>a[i]){
			break;
		}else{
			a[k]=a[i];
			k=i;
		}
	}
	a[k]=a[0];
}
void BridMaxheap(ElemType[],int len){
	for(int i=len/2;i>0;i--){
		HeadAjust(A,i,len)
	}
}

//	92.归并排序
void merge(int A,int low,int mid,int high){
	int *b=(int *)malloc((high-low+1)*sizeof(int));
	for(int k=low;k<=high;k++){
		b[k]=a[k];
	}
	for(int i=low,i=mid+1,k=low;i<=mid && j<=high;){
		if(b[i]<=b[j]){
			a[k++]=b[i++];
		}else{
			a[k++]=b[j++];
		}
	}
	while(i<=mid){
		a[k++]=b[i++];
	}
	while(j<=high){
		a[k++]=b[j++];
	}
}

//	93.设计一个完整的 C 语言程序。要求完成以下功能:从低值开始取出长整型变量 s中偶数位上的数，依次构成一个新数放在t中。例如，当s中的数为 7654321 时，得到结果为 642.
void fun(long s,long *t){
	s=s/10;
	*t=s%100;
	long s1=10； 
	while(s>=100){
		s=s/100;
		*t=s%10*s1+*t;
		s1=s1*10;
	}	
}

//	实现计算:94.有 80 工人，每个工人包括的信息有:工号，名字，三个月的收入以及平均收入。用函数(1)完成工人信息的输入，并计算其平均收入。(2)用冒泡排序法排序工人平均收入。(3)完成工人信息的输出。
fun1();
fun2();
fun3();

//	95.试设计一个算法，判断一个无向图 G是否为一棵树。若是一棵树，则算法返回 true,否则返回 false。
//1.判断有没有环
//2.广度优先搜索 从任意一个顶点开始BFS遍历图。 记录访问过的顶点数量Vnum和经过的边的数量Enum。  如果BFS遍历结束后，访问过的顶点数量等于图中顶点的总数，并且经过的边的数量等于顶点总数减一（因为树是一个没有环的连通图，边的数量总是顶点数减一），则图是一棵树。
bool istree(Graph G){
	bool visited[G.vexunm];
	for(int i=0;i<G.vexnum;i++){
		visited[i]=false;
	}
	int Vnum=0,Vnum=0;
	BFS(G,0,visited,Vnum,Enum);
	if(Vnum=G.vexnum && Enum=G.vexnum-1){
		return true;
	}else{
		return false;
	}
} 
BFS(Graph G,int u,bool visited,int &Vnum,int &Enum){
	Vnum++;
	visited[u]=true;
	Inqueue(Q);
	ENqueue(Q,u);
	while(!isEmpty(Q)){
		DeQueue(Q,u);
		for(int w=FirstNeihbor(Q,u);w>=0){
			w=NextNeihbor;
			if(!visited[w]){
				Vnum++;
				Enum++;
				visited[w]=true;
				Enqueue(Q,w);
			}
		}
	}
}

	return 0;
}
