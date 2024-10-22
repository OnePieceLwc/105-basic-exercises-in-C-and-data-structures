#include<stdio.h>
int main(){
//	61.假定采用带头结点的单链表保存单词，当两个单词有相同的后缀时，可共享相同的后缀存储空间，例如，loading 和 being 的存储映像如下图所示,设 strl 和 str2 分别指向两个单词所在单链表的头结点，链表结点结构为 data next。请设计个时间上尽可能高效的算法，找出由 st1 和 str2 所指向两个链表共同后缀的起始位置(如图中字符i所在结点的位置 P)。
Lnode* func(Linklist str1,Linklist L2){
	int m=0,n=0;
	Lnode* p=str1->next,q=str2->next;
	while(p){
		m++;
		p=p->next;
	}
	while(q){
		n++;
		q=q->next;
	}
	p=str1;
	q=str2;
	while(m>n){
		p=p->next;
		m--;
	}
	while(m<n){
		q=q->next;
		n--;
	}
	while(p){
		if(p==q){
			return p;
		}
		p=p->next;
		q=q->next;
	}
	retrun p;
}

//62.用单链表保存m 个整数，结点的结构为[data][link]，且|data|<n(n 为正整数)。现要求设计一个时间复杂度尽可能高效的算法，对于链表中 data 的绝对值相等的结点，仅保留第欠出现的结点而删除其余绝对值相等的结点。例如，若给定的单链表 head 如下
void func(Linklist &L,int n){
	int *q;
	q = malloc(sizeof(int) * (n + 1));
	for(int i=0;i<n;n++){
		*(q+i)=0;
	}
	Lnode* p=L,*r;
	while(p->next !=NULL){
		m=p->next->data > 0 ?p->next->data:-p->next->data;
		if(*(q+m)==0){
			*(q+m)=1;
			p=p->next;
		}else{
			r=p->nrxt;
			p->next=r->next;
			free(r);
		}
	}
	free(q);
}

//63.设线性表L=(a1.a.a3.…,an2,an1.am)采用带头结点的单链表保存，链表中的结点定义如下typedef struct LNode{int data;struct node*next;}LNode, *LinkL ist:请设计一个空间复杂度为o(1)且时间上尽可能高效的算法，重新排列工中的各结点，得到线性表L'=(a1,an,a2,an-1,a3,an2.…)
Lnode* fun(Linklist &L){
	Lnode *p=L,*q=L,*r;
//	找到链表的中间节点：使用两个指针 p 和 q。p 每次移动一步，q 每次移动两步。当 q 到达链表末尾时，p 刚好位于中间节点。
	while(p->next!=NULL){
		p=p->next;
		q=q->next;
		if(q->next!=NULL){ 
			q=q->next; 
		}
	}
//	分割链表:q 现在指向后半部分的头节点,将 p 的 next 指向 NULL，以断开链表。 
	q=p->next;
	p->next=NULL;
//	反转后半部分链表：使用指针 r 来保存当前节点的下一个节点。
//	然后将当前节点 q 的 next 指向前半部分的头节点 p 的 next，并将 p 的 next 更新为 q。
//	继续这个过程，直到后半部分的所有节点都被反转并插入到前半部分的开头。
	while(q){
		r=q->next;
		q->next=p->next;
		p->next=q;
		q=r;
	}
//	使用指针 p 指向前半部分的头节点，指针 q 指向反转后的后半部分的头节点。
//	交替地将 q 的节点插入到 p 的后面，直到 q 的所有节点都被合并。
	q=p->next;
	p=L->next;
	while(q){
		r=q->next;
		q->next=p->next;
		p->next=q;
		p=p->next;
		q=r;
	}
}

//	64.将两个按值有序排列的非空线性链表合并为一个按值有序的线性链表
Linklist func(Linklist A,Linklist B){
	Linklist C;
	Lnode *p=A,*q=B,*r;
	if(p->data < q->data){
		C=A;
		r=A;
		p=p->next;
	}else{
		C=B;
		r=B;
		q=q->next;
	}
	while(p&&q){
		if(p->data < q->data){
			r->next=p;
			r=p;
			p=p->next;
		}else{
			r->next=q;
			r=q;
			q=q->next;
		}
	}
	r->next=(p!=NULL)?p:q;
	return C;
}

//	65.设线性表L=(X1,X2,…,Xn-2,Xn-1,Xn)中存储整型数据，采用带头结点的单链表保存。中奇数位序的数据元素按升序存放，偶数位序的数据元素按降序存放。请设计一个空间复杂度为 0(1)且时间上尽可能高效的算法，将链表中的元素按从小到大的顺序排序
Linklist func(Linklist &L){
	Lnode *p=L->next->next;		//p 指向链表中第三个节点
	L->next->next=NULL;		//断链  
	
	Lnode *pre,*q;
	while(p){
		q=p->next;		
		pre=L;		//从头开始 
		while(p->next->data < pre->data && p->next!=NULL){
			pre=pre->next;
		}		//找到插入位置 
		p->next=pre->next;
		pre->next=p;
		p=q;
	}	
}

	return 0;
} 
