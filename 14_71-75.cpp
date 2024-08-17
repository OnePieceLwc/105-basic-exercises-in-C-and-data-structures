#include<stdio.h>
int main(){
//	71.设线性表 L=(a1. a2. a.....2.an-1.an.)采用带头结点的单链表保存，请设计一个空间复杂度为 O(1)且时间上尽可能高效的算法，使得单链表 A 分解为两个带头节点的单链表 A 和 B.使得 A 中含有原表中序号为奇数的元素，B 表中含有原表中序号为偶数的元素，且保持,素顺序不变。
void func(Linklist &A,Linklist &B){
	B=(Linklist)mallocc(sizeof(Lnode));
	Lnode *p=A->next,*pre=A,*R=b;
	int i=1;
	while(p){
		if(i%2==0){
			pre->next=p->next;
			r->next=p;
			r=p;
			p=pre->next;
		}else{
			pre=p;
			p=p->next;
		}
		i++;
	}
	r->next=NULL;
} 
//	72.设计在链式存储结构上交换二叉树中所有结点左右子树的算法。
typedef int DataType;
typedef struct Bitnode{
	DataType  data;
	struct Bitnode *lchild,*rchild;
}Bitnode,*Bitree;

void swap(Bitree T){
	Bitnode *p;
	if(T){
		swap(T->lchild);
		swap(T->rchild);
		
		p=T-lchild;
		T-lchild=T-rchild;
		T-rchild=P;
	}
}	
	
//	73.设计一个求结点x在二叉树中的双亲结点的算法
void parent(Bitree T,char x){
	if(T){
		if(T->lchild->data==x){
			printf("%c的双亲%c",x,T->data);
		}
		if(T->rchild->data==x){
			printf("%c的双亲%c",x,T->data);
		}
		parent(T->lchild,x);
		parent(T->rchild,x);
		
	}
}
	
//	74.求二叉树的深度(递归算法)
int Depth(Bitree T)
	if(T){
		int ldepth=Depth(T->lchild);
		int rdepth=Depth(T->rchild);
		if(ldepth>repth){
			return ldepth+1;
		}else{
			return rdepth+1;
		}	
	}else{
		return 0;
	}
}

//	75.二叉树存储形式为(lchild.data.rchild),给出求二叉树得大关键》值得算法。
int get_max(Bitree T)
	if(T){
		int maxl=get_max(T->lchild);
		int maxr=get_max(T->rchild);
		int max=maxl>maxr?maxl:maxr;
		return max>T->data?max:T->data;	
	}else{
		return 0;
	}
}	
	
	return 0;
} 
