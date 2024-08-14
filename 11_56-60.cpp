#include<stdio.h>
int main(){

//	56.设将 n(n>1)个整数存放到区带头结点处单链表乚中，设计算法将L中保存的序列循环石移 k(0<k<n)个位置。例如，若k=1，则将链表(0,1,2,3}变为{3,0,1,2}
//	首先遍历链表以计算节点数量 n，然后将链表的最后一个节点指向头节点，形成一个循环。接着，通过移动指针找到新的头节点，并断开循环。时间复杂度为O(n)，空间复杂度为O(1)
void fun(Liuklist &L,int k){
	int n=1;
	LNode *p=L; 
	if(L==NULL || L->next==NULL){
		return ;
	}
	while(p->next != NULL){
		n++;
		p=p>next;
	}
	p->next=L;
	for(int i=1;i<=n-k;i++){
		p=p->next;
	}
	L=p->next;
	p->next=NULL;
	return ;
} 

//	57.设有一个带头结点的非循环双链表L，其每个结点中除有 pre、data 和 next 域外,还有一个访问频度域 freq,其值均初始化为零。每当在链表中进行一次 Locate(L,x)运算时，令值为x的结点中 freg 域的值增1，并使此链表中的结点保持按访问频度递减的顺序排列，且最近访问的结点排在频度相同的结点之前，以便使频繁访问的结点总是靠近表头。试编写符合上述要求的 Locate(L,x)函数，返回找到结点的地址，类型为指针型。
//用于查找值为 x 的节点，并更新其访问频度。若找到节点，则将其移动到合适的位置以保持频度递减的顺序。时间复杂度为O(n)，空间复杂度为O(1)
DNode* Locate(DNode* L, int x) {
    DNode* p = L->next; // 从头结点的下一个开始
    DNode* q;
    // 找到值为x的节点
    while (p && p->data != x) {
        p = p->next;
    }
    if (p == NULL) { // x不存在
        return p;
    } else {
        p->freq++; // 增加访问频度
        // 如果p是头结点的下一个或p的前一个节点的频度大于p的频度
        if (p->pre == L || p->pre->freq > p->freq) {
            return p; // 不需要移动
        }
        q = p->pre;
        // 如果p不是最后一个节点
        if (p->next != NULL) {
            p->next->pre = q;
            q->next = p->next;
        } else {
            q->next = p->next;    //是最后一个节点
        }
        // 找到插入位置
        while (q != L && p->freq <= q->freq) {
            q = q->next;
        }
        // 插入p到q之后
        p->next = q->next;
        if (q->next != NULL) {
            q->next->pre = p;
        }
        q->next = p;
        p->pre = q;
        return p;
    }
}
//	58.单链表有环,是指单链表的最后一个结点的指针指向了链表中的某个结点(通常单链表的最后一个结点的指针域是空的)。试编写算法判断单链表是否存在环。
//最优解
//使用快慢指针法判断链表是否存在环。如果快指针和慢指针相遇，则说明存在环。时间复杂度为O(n)，空间复杂度为O(1)
int fun(Linklist L){
	LNode *fast=L,*slow=L;
	while(fast->next != NULL && fast != NULL){
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast){
			return 1;
		}
	}
	return 0;
} 
//暴力解
int fun(Linklist L){
	LNode *pre=L,*p=L;
	while(p){
		while(pre!=p){
			if(p->next == pre){
				return 1;
			}
			pre=pre->next;
		}
		p=p->next;
		pre=L;
	}
	return 0;
} 

//	59.设有一个长度 n(n 为偶数)的不带头结点的单链表，且结点值都大于 0，设计算法求这个单链表的最大孪生和。孪生和定义为一个结点值与其孪生结点值之和，对于第i个结点(从开始)，其孪生结点为第 n-i个结点。
//该算法首先找到链表的中点，然后反转后半部分链表，最后计算每对孪生节点的和并找出最大值。时间复杂度为O(n)，空间复杂度为O(1)   反转用头插 
int fun(Linklist L){
	LNode *fast=L,*slow=L;
	while(fast->next && fast){
		slow=slow->next;
		fast=fast->next->next;
	} 
	Lnode *newhead=NULL,*r;
	while(s){
		r=s->next;
		s->next=newhead;
		newhead=s;
		s=r;
	}
	p=L;
	Lnode *Q=newheaf;
	int max=0;
	while(p){
		if(p->data+q->data>max){
			max=p->data+q->data;
			p=p->next;
			q=q->next;
		}
	}
	return max;
}

//	60.已知一个带有表头结点的单链表，结点结构为 data,next 假设该链表只给出了头指针 L在不改变链表的前提下，请设计一个尽可能高效的算法，查找链表中倒数第k个位置上的结点(k 为正整数)。若查找成功，算法输出该结点的 data 域的值，并返回 1:否则，只返回 0.
//	该算法使用两个指针，p 和 q，在遍历链表时保持 p 比 q 领先 k 个节点。最终，当 p 到达链表末尾时，q 就是倒数第k个节点。时间复杂度为O(n)，空间复杂度为O(1)
int fun(Linklist L,int k){
	LNode *p=L->next,*q=L->next;
	int count=0;
	while(p){
		if(count<k){
			p=p->next;
			count++;
		}
		else{
			p=p->next;
			q=q->next;
		}
	}
	if(count<k){
		return 0;
	} else{
		printf("%d",q->data);
		return 1;
	}
}


	return 0;
} 
