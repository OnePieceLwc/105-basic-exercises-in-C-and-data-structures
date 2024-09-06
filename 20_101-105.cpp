#include<stdio.h>
int main(){
//	101.试将二叉树的结点自下而上，从右至左访问  (入栈) 
typedef int DataType;
typedef struct Bstnode {
    DataType data;
    struct Bstnode *lchild, *rchild;
} Bstnode, *Bstree;

void fun(Bstree T){
	InitQueue(Q);
	InitStack(S);
	Bstnode *P;
	EnQueue(Q,T);
	while(!IsEupty(Q)){
		DeQueue(Q,P);
		push(S,P);
		if(P->lchild){
			EnQueue(Q,P->lchild)
		};
		if(P->rchild){
			EnQueue(Q,P->rchild)
		};
	}
	while(!IsEupty(S)){
		pop(S,P);
		visit(P);
	}	
}

//	102.求二叉树的所有双分支节点个数。(单分支、叶结点同理)
int fun(Bstree T){
	if(T==NULL){
		return 0;
	}else if(T->lchild && T->rchild){
		return fun(T->lchild)+fun(T->rchild)+1;
	}else{
		return fun(T->lchild)+fun(T->rchild);
	}
}
//单分支
int fun(Bstree T){
	if(T==NULL){
		return 0;
	}else if(T->lchild==NULL && T->rchild==NULL){
		return 0;
	}else if(T->lchild && T->rchild){
		return fun(T->lchild)+fun(T->rchild);
	}else{
		return fun(T->lchild)+fun(T->rchild)+1;
	}
}
//叶结点
int fun(Bstree T){
	if(T==NULL){
		return 0;
	}else if(T->lchild==NULL && T->rchild==NULL){
		return 1;
	}else {
		return fun(T->lchild)+fun(T->rchild);
	}
}

//	103.二叉树先序遍历的非递归算法
//口决:访问入栈向左走，出栈观察右子树
void preorder(Bstree T){
	InitStack(S);
	BstNode *p=T;
	while(p && !IsStack(S)){
		if(p){
			visit(P)
			push(S,p);
			p=p->lchild;
		}else{
			pop(S,p);
			p=p->rchild;
		}
	}	
}

//	104.二叉树中序遍历的非递归算法
//口决:入栈向左一直走，出栈访问右子树
void preorder(Bstree T){
	InitStack(S);
	BstNode *p=T;
	while(p && !IsStack(S)){
		if(p){
			visit(P)
			p=p->lchild;
		}else{
			pop(S,p);
			push(S,p);
			p=p->rchild;
		}
	}	
}

//	105.二叉树后序遍历的非递归算法
//口决:入栈向左一直走->判定右子树(<-右子树不空且未被访问    空或被访问 ->)->出栈访问标记重置 
void preorder(Bstree T){
	InitStack(S);
	BstNode *p=T，*r=NULL;
	while(p || !IsStack(S)){
		if(p){
			visit(p)
			p=p->lchild;
		}else{
			gettop(S,p);
			if(p->rchild && p->rchild!=r){
				p=p->rchild;
			}else{ //p为空或  p!=r
				pop(S,p);
				visit(p);
				r=p;
				p=NULL;
			}
			
		}
	}	
}

	return 0;
} 
