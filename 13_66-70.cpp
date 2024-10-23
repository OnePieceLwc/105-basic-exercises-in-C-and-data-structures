#include<stdio.h>
int main(){
//	66.已知递增有序的单链表 A，B，C分别存储了一个集合，设计算法实现 A=AU(B-C)，要求单链表仍然有序。
Linklist fun(Linklist &A,Linklist &B,Linklist &C){
	//B-C
	Lnode *pre=B,*p=B->next,*q=C->next;
	while(p && q){
		if(p->data<q->data){
			pre=p;
			p=p->next
		}else if(p->data>q->data){
			q=q->next;
		}else{
			pre->next=p->next;
			free(p);
			p=pre->next;
		}
		
	}
	//AUB
	p=A->next;
	q=B->next;
	Lnode *r=A;  //为行动 
	A->next=NULL;
	while(p && q){
		if(p->data<q->data){
			r->next=p;
			r=p;
			p=p->next
		}else {
			r->next=q;
			r=q;
			q=q->next
		}
	}
	if(p==NULL){
		r->next=q;
	}else{
		r->next=p;
	}
	return A; 
}	

//	67.将两个有序顺序表合并为一个新的有序顺序表，并由函数返回结果顺序表
bool func(seqlist A,seqlist B,seqlist C){
	if(A.lenth+B.lenth>C.lenth){
		return 0;
	}
	int i=0,j=0,k=0;
	while(i<A.lenth && i<b.lenth){
		if(A.data[i]<=B.data[j]){
			C.data[k++]=A.data[i++];
		}else{
			C.data[k++]=B.data[j++];
		}
	}
	while(i<A.lenth){
		C.data[k++]=A.data[i++];
	}
	while(i<B.lenth){
		C.data[k++]=B.data[j++];
	}	
	C.length=k;
	return 1;
}

//	68.已知在一维数组 A[m+n]中依次存放两个线性表(a1,a2,a3,…,am)和(b;,bz,b.…,bn)。编写一个函数,将数组中两个顺序表的位置互换,即将(bi,b,,b;,,…,b)放在(a1,a2,a3,…,am)的前面。
typedef int DataType;
void everse(DataType A[],int left,int right,int arrsize){
	if(left>=right  || right > arrsize){
		return 0;
	}
	if(left<0){
		return 0;
	}
	int mid=(left+right)/2;
	while(left<right){
		DataType teap=A[left];
		A[left]=A[right];
		A[right]=teap;
		left++;
		right--;
	}
}

void func(DataType A[],int m,int n,int arrarise){
	everse(A,0,m+n-1,m+n);
	everse(A,0,n-1,n);
	everse(A,n,m+n-1,m);
	
}

//	69.给定三个序列 A、B、C，长度均为 n，且均为无重复元素的递增序列，请设计一个时|上尽可能高效的算法，逐行输出同时存在于这三个序列中的所有元素。例如，数组 A为{1.2.3]，数组 B为{2.3,4]，数组C为{-1,0.2}，则输出 2
int max(int a,int b,int c){
	if(b>a){
		a=b;
	}
	if(c>a){
		a=c;
	}
	return a;
}
void func(int a[],int b[],int c[],int n){
	int i=0,j=0,k=0;
	while(i<n && j<n && k<n){
		if(a[i]==b[j] && a[i]==c[k]){
			printf("%d ",a[i]);
		}else{
			int maxnum=max(a[i],b[j],c[k]);
			if(a[i]<maxname){
				i++;
			}
			if(b[j]<maxname){
				j++;
			}
			if(c[k]<maxname){
				k++;
			}	
		}	
	}
}

//	70.已知线性表按顺序存储，且每个元素都是不相同的整型元素，设计把所有的奇数移动至偶数前面的算法。
void func(int a[],int len){
	int low=0,high=len-1;
	int temp=a[low];
	while(low<high){
		while(low<high && a[high]%2==0){
			high--;
		}
		a[low]=a[high];
		while(low<high && a[low]%2==0){
			low++;
		}
		a[high]=a[low];
	}
	a[low]=temp;
}



	return 0;
} 
