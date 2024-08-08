#include <stdio.h>

int leap(int year){
	return year%4==0 && year%100!=0 || year%400==0;
}

typedef struct {
	int num;
	char name[30];
	float scare[3];	
}student;
 
int main()
{

//	41.给出年、月、日,计算该日是该年的第几天解析:需要掌握函数:判断是否为闰年
	int year,month,day,day_th;
	printf("输入年月日的值:");
	scanf("%d %d %d",&year,&month,&day);
	int day_tab[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	for(int i=1;i<month;i++){
		day+=day_tab[i];
	}
	if(leap(year) && month>=3){
		day++;
	}
	printf("是该年的第%d天",day);

//42.(约瑟夫环问题)有n个人围成一圈，顺序排号。从第1个人开始报数(从1到3报数),凡报到3 的人退出圈子,问最后留下的是原来第几号的那位，用指针实现。
	int n,count=0;
	printf("请输入n的值:");
	scanf("%d",&n);
	int people[n],remain=n,*p=NULL;  //remain剩余人数 
	for(int i=0;i<n;i++){
		people[i]=i+1;   //赋初值 
	}
	while(remain>1){
		p=people;	
		while(p!=people+n){
			if(*p!=0){
				count++;
				if(count==3){
					*p=0;
					count=0;
					remain--;
				}
			}
			p++;
		}
	}
	for(int i=0;i<n;i++){
		if(people[i]!=0){
			printf("最后留下的是原来第%d号",people[i]);
		}
	}

//43.有 10 个学生,每个学生的数据包括学号，姓名，3门课的成绩,从键盘输人10个学生数据.要求输出3门课程总平均成绩,以及最高分的学生的数据(包括学号、姓名、3 门课程成绩平均分数)。
	student stu[10];
	int idex=0;
	float sum=0,max_sum=0,aver_1=0,aver_2=0,aver_3=0;
	for(int i=0;i<10;i++){
		printf("请输入第%d个人的信息:",i+1);
		scanf("%d %s %f %f %f",&stu[i].num,&stu[i].name,&stu[i].scare[1],&stu[i].scare[2],&stu[i].scare[3]);
		sum=0;
		for(int j=0;j<3;j++){
			sum += stu[i].scare[j];
		}
		if(sum>max_sum){
			max_sum = sum;
			idex=i;
		}
		aver_1+=stu[i].scare[1];
		aver_2+=stu[i].scare[2];
		aver_3+=stu[i].scare[3];
	}
	aver_1 /= 10;
	aver_2 /= 10;
	aver_3 /= 10;
	printf("3门课程总平均成绩：%.2f   %.2f   %.2f",aver_1,aver_2,aver_3);
	printf("最高分的学生的数据：\n学号：%d 姓名：%d 3门课的成绩：%.2f %.2f %.2f",stu[idex].num,stu[idex].name,stu[idex].scare[1],stu[idex].scare[2],stu[idex].scare[3]);

//	44.采用头插法建立单链表  头插法常用与逆置 

typedef struct LNode {
    int data;
    struct LNode *next;
} LNode;

typedef LNode *Liuklist;
//LNode 结构体定义了单链表节点的结构，包含 data 和 next 两个成员。Liuklist 被定义为指向 LNode 的指针，因此它可以用来表示单链表。

Liuklist list_Headiusert(Liuklist &L) {  //改结构加& 
    LNode *s;  // 加入s 
    int x;	//s的值 
    L=(Node *) malloc(sizeof (LNode));  //L是头节点，链表头节点分配内存空间,并指向空 
    L->next=NULL;
    printf("请输入数据(输入9999结束): ");
    scanf("%d",&x);
    while (x!=9999) {
    	s = (Lnode *)malloc(sizeof(Lnode)); 
    	s -> data=x;
    	s -> next=L->next;
    	L -> next=s;
        printf("请输入数据(输入9999结束): ");
        scanf("%d", &x);
        if (x == 9999) {
            break; 
        }
    }

    return L; 
}
	
//	45.采用尾插法建立单链表 
Liuklist list_Tailiusert(Liuklist &L) {  //改结构加& 
    LNode *s,*r;
    int x;
    L=(Node *) malloc(sizeof (LNode));
    L->next=NULL;
    r=L;
    printf("请输入数据(输入9999结束): ");
    scanf("%d",&x);
    while (x!=9999) {
    	s = (Lnode *)malloc(sizeof(Lnode)); 
    	s->data=x;
    	s->next=r->next;
    	r->next=s;
    	r=s;
        printf("请输入数据(输入9999结束): ");
        scanf("%d", &x);
        if (x == 9999) {
            break; 
        }
    }

    return L; 
}
	return 0;
}
