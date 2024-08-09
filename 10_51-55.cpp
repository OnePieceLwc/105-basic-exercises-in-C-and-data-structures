#include <stdio.h>
#include <cstring>
#include <ctype.h>
#include <math.h>
int main() {
	
//	51.在一个递增有序的单链表中，存在重复的元素。设计算法删除重复的元素，例如(7.10.10.21.30.42.42.42.51.70)将变为(7.10.21.30.42.51.70)。
void Del_same(LiukList &L){
	Lnode *p=L->next,*q;	//p当前，q找重复
	if(p==NULL){
		return 0;
	}
	while(p->data != NULL){
		q=p->next;
		if(p->data=q->data){
			p->next=q->next;
			free(q);
			
		}
		else{
			p=p->next;	
		}
	}
	
} 	

//	52.设A和B是两个单链表(带头结点)，其中元素递增有序。设计一个算法从 A 和B中的公素产生单链表 C，要求不破坏 A、B 的结点。
void Find_same(LiukList A, LiukList B) {
    Lnode *p = A->head->next, *q = B->head->next, *s;
    LiukList C = (LiukList)malloc(sizeof(Lnode));
    C->head = NULL;
    Lnode *r = C->head;
	// p、q 和 r，分别指向 A 链表、B 链表和新链表 C 的当前节点
    while (p != NULL && q != NULL) {
        if (p->data < q->data) {
            p = p->next;
        } else if (p->data > q->data) {
            q = q->next;
        } else {
        	// 到 p->data == q->data 时 
            s = (Lnode *)malloc(sizeof(Lnode));
            s->data = p->data;
            s->next = NULL;
			//在C尾插 
            if (C->head == NULL) {
                C->head = s;
                r = s;
            } else {
                r->next = s;
                r = s;
            }
            p = p->next;
            q = q->next;
        }
    }
}


//	53.两个整数序列 A=a1,a2,a.....,a和 B=b,,b2,b.…,b已经存入两个单链表中，设计一个算去，判断序列 B是否是序列 A 的连续子序列。
//三个指针 p、q 和 pre，分别指向 A 链表、B 链表和 A 链表的当前节点。
//代码遍历两个链表，比较 p 和 q 指向的节点数据，如果相同，则继续遍历；
//否则，将 q 指针重置为 B 链表的头部，并将 p 指针指向 pre 的下一个节点。
void Find_x(LiukList A,LiukList B){
	Lnode *p=A,*q=B,*pre=A;
	while(p && q){
		if(p->data == p->data){
			p=p->next;
			q=q->next;
		}
		else{
			//重置q从头 
			q=B;
			p=pre->next;
			pre=p;	
		}
	}
	if(q==NULL){
		return 1;
	}else{
		return 0;
	}
} 	

//	54.设计一个算法用于判断带头结点的循环双链表是否对称
//双向循环链表： 同时拥有 next 和 prior 指针。 由于双向循环链表可以从任意节点开始，沿着 next 或 prior 指针遍历，因此可以使用 L->prior 来访问前一个节点。
bool func(DLiukList L){
	DLiukList *p=L->next,*q=L->prior;  //p,q分别指向链表的头部和尾部
	while(p!= q && p->next!=q){
		if(p->data==q->data){
			p=p->next;
			q=q->prior;
		}else{
			return 0;
		}
	}
	return 1;
} 

//	55.有两个循环单链表,链表头指针分别为 hl 和 h2,编写一个函数将链表 h2 链接到链表11 之后，要求链接后的链表仍保持循环链表形式。
LiukList func(LiukList &h1,LiukList h2){
	Lnode *p=h1,*q=h2;
	//找到h1 链表和 h2 链表的尾部
	while(p->next!=h1){
		p=p->next;
	}
	while(q->next!=h2){
		q=q->next;
	}
	//h1 链表的尾部节点的p-> next 指针指向 h2 链表的头部节点，并将 h2 链表的尾部节点的q-> next 指针指向 h1 链表的头部节点
	p->next=h2;
	q->next=h1;
	return h1;
}

	return 0;
}
