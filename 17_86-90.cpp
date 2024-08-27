#include<stdio.h>
int main(){
//	86.直接插入排序算法  o(n*n)
//哨兵,舍弃a[0]
//从第二个元素开始（i=2），检查当前元素是否小于前一个元素。
//如果是，则将当前元素存储在a[0]中（作为哨兵）。
//然后，使用一个内循环（for(j=i-1; a[j]>a[0]; j--)）将比a[0]大的元素向后移动，为插入当前元素腾出位置。
//最后，将a[0]的值放入正确的位置。
void func(int a[],int n){ 
	for(int i=2;i<=n;i++){
		if(a[i]<a[i-1]){
			a[0]=a[i];
			int j;
			for(j=i-1;a[j]>a[0];j--){
				a[j+1]=a[j];	
			}
			a[j+1]=a[0];
		}	
	}	
}  
//不用哨兵
void func(int a[],int n){ 
	for(int i=1;i<=n;i++){
		if(a[i]<a[i-1]){
			int temp=a[i];
			int j;
			for(j=i-1;a[j]>a[0] && j>=0;j--){
				a[j+1]=a[j];	
			}
			a[j+1]=temp;
		}	
	}	
}  

//	87.折半插入排序算法
//从第三个元素开始，依次将每个元素插入到已排序的部分。
//使用二分查找找到合适的插入位置。
//将已排序部分的元素向右移动以腾出空间。
//将当前元素插入到正确的位置。
void Iusort(int a[],int n){
	int low,high,mid,i;
	for(i=2;i<=n;i++){
		a[0]=a[i];
		low=1;
		high=i-1;
		while(low<=high){
			mid=(low+high)/2;
			if(a[mid]>a[0]){
				high=mid-1;
			}else{
				low=mid+1;
			}
		}	
		for(int j=i-1;j>=low;j--){
			a[j+1]=a[j];
		}
		a[high+1]=a[0]; 
	}
}
	
//	88.冒泡排序算法
void func(int a[],int n){
	for(int i=0;i<n;i++){
		bool flag=false;	//flag，用于标记在当前轮次是否发生了交换。如果没有发生交换，说明数组已经有序，可以提前结束排序。
		for(int j=n-1;j>i;j--){
			if(a[j]<a[j-1]){
				int temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
				flag=true;
			}
		}
		if(flag==true){
			return;
		}	
	}
}

//	89.快速排序算法   分治法    有序o(n*n)   无序和平均o(n*log 2 n)
int partition(int a[],int low,int high){
	int pivot=a[low];	//基准值
	while(low<high){
		while(low<high){	//防止越界 
			high--;
		}
		a[low]=a[high];
		while(low<high && a[low]<=pivot ){	//防止越界 
			low++;
		}
		a[high]=a[low];
	}
	a[low]=pivot;
	return low;
}
void func(int a[],int low,int high){
	if(low<high){
		int p=partition(a,low,high);	//分左右 
		func(a,low,p-1);
		func(a,p+1,high);
	}	
}

//	90.简单选择排序算法   //每次选择最小 
void func(int a[],int n){
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(a[i]<a[min]){
				min=j;
			}
		}
		if(i!=min){
			int temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
}	
	
	
	return 0;
}
