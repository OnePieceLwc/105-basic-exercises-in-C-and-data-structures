#include <stdio.h>
#include <cstring>
#include <ctype.h>
#include <math.h>
int main() {
	
//	46.在带头结点的单链表工中，别除所有值为x的结点，并释放其空间，假设值为x的结点不唯一，试编写算法以实现上述操作。
void Del_x(LiukList &L,int x){
	Lnode *pre=L,*p=L->next;
	while(p){
		if(p->data==x){
			pre->next=p->next;
			free(p);
			p=pre->next;
		}
		else{
			pre=p;
			p=p->next;	
		}
	}
	
} 	

//	47.试编写在带头结点的单链表工中徐一个最小值结点的高效算法(假设该结点唯一) 
void Del_min(LiukList &L){
	Lnode *pre=L,*p=L->next;  //工作 
	Lnode *minpre=L,*min=L->next;  //最小 
	while(p){
		if(p->data<min->data){
			min=p;
			minpre=pre;
		}
		pre=p;
		p=p->next;	
	}
	minpre->next=min->next;
	free(min);
	
}

//	48.设在一个带表头结点的单链表中，所有结点的元素值无序，试编写一个函数，删除表中所有介于给定的两个值(作为函数参数给出)之间的元素(若存在)。
void Del_x(LiukList &L,int min,int max){
	Lnode *pre=L,*p=L->next;
	while(p){
		if(p->data<max && p->data<max>min){
			pre->next=p->next;
			free(p);
			p=pre->next;
		}
		else{
			pre=p;
			p=p->next;	
		}
	}
	
} 	

//	49.给定两个单链表，试分析找出两个链表的公共结点。
//	暴力破解 
void * publis_node(LiukList L1,LiukList L2){
	Lnode *p=L1->next;
	Lnode *q=L2->next;
	while(p){
		while(q){
			if(p==q){
				return p;
			}
			q=p->next; 
		}
		p=p->next;
		q=L2->next;
	}
	return 0;
} 

//	最优解 
Lnode *func(LiukList L1,LiukList L2){
	Lnode *p=L1->next;
	Lnode *q=L2->next;
	int lenth1=0,lenth2=0;
	while(p){
		lenth1++;
		p=p->next;
	}
	while(q){
		lenth2++;
		q=q->next;
	}
	p=L1->next;
	q=L2->next;
	int lenth=lenth1-lenth2
	if(lenth>0){
		while(leath--){
			p=p->next	
		}
	}
	else{
		while(leath--){
			q=q->next	
		}
	}
	while(p){
		if(p==q){
			return p; 
		}
		p=p->next;
		q=q->next;
	}
	return 0;	
}


//	50.设 C={a1,bi,a2,b...,an,b,}为线性表，采用带头结点的单链表存放，设计一个就地算法将其拆分为两个线性表，使得 A-{a1,a2,….,an}，B={b.,...,b2, bi}。
LiukList func(LiukList &A){
	LiukList B=(LiukList)malloc (sizeod(Lnode));
	B->next=NULL;
	
	Lnode *p=A->next;
	A->next=NULL;
	while(p){
		Lnode *q=p->next;
		ra->next=p;	//尾 
		ra=p;	//尾
		while(q){
			p=q;
			q=q->next;
			p->next=B->next;	//头 
			B->next=p;	//头
		}
	}  
}

	return 0;
}
