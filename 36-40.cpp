#include <stdio.h>
#include <string.h> 
#define N 10
#define M 5

void loogestword(char str[],char word[]){
	int max_len=0;
	int len=0;
	char *p = str; 
	for(int i=0;str[i]!='\0';i++){
		if(str[i]==' '){
			str[i] ='\0';
			len=strlen(p);
			if(len>max_len){
				max_len=len;
				strcpy(word,p);
			}
			p=str+i+1;
		}
	}
    len = strlen(p);
    if (len > max_len) {
        max_len = len;
        strcpy(word, p);
    }
} 

double pnx(float n,float x){
	float result;
	if(n==0){
		result=1;
	}
	if(n==1){
		result=x;
	}
	if(n>1){
		result=(2*n-1)*x*pnx(n-1,x)-(n-1)*pnx(n-2,x)/n;
	}
	return result;
}

float score[N][M];
float a_stv[N],a_covr[M];
int r,c;

void input_stu(){
	for(int i=0;i<N;i++){
		printf("输入第%d个学生的成绩:\n",i+1);
		for(int j=0;j<M;j++){
			scanf("%f",&score[i][j]);
		}
	}
}

void aver_stu(){
	for(int i=0;i<N;i++){
		float sum=0;
		for(int j=0;j<M;j++){
			sum += score[i][j];
		}
		sum /= M;
		printf("第%d个学生的平均分: %f\n",i+1,sum);
	}
}

void aver_cver(){
	for(int j=0;j<M;j++){
		float sum=0;
		for(int i=0;i<N;i++){
			sum += score[i][j];
		}
		sum /= N;
		printf("第%d门课的平均分: %f\n",j+1,sum);
	}
}

float higst(){
	float high=0;
	for(int j=0;j<M;j++){
		for(int i=0;i<N;i++){
			if(score[i][j]>high){
				high=score[i][j];
				r=i;
				c=j;
			}
		}	
	}
	return high;
}

float s_dor(){
	float sumx=0,sumxn=0;
	for(int i=0;i<N;i++){
		sumx += a_stv[i]*a_stv[i];
		sumxn += a_stv[i];
	}
	return sumx/N-(sumxn/N)*(sumxn/N);
}

int func(char s[]){
	int n=0;
	for(int i=0;s[i]!='\0';i++){
		if(s[i]>='0' && s[i]<='9'){
			s[i]=s[i]-'0';
			n=n*16+s[i];
		}
		if(s[i]>='A' && s[i]<='F'){
			s[i]=s[i]-'A'+10;
			n=n*16+s[i];
		}
		if(s[i]>='a' && s[i]<='f'){
			s[i]=s[i]-'f'+10;
			n=n*16+s[i];
		}
		
	}
	return n;
}

void zhuanhuan(int n){
	int i;
	if((i=n/10) !=0){
		zhuanhuan(i);
	}
	putchar(n%10+'0');
}

int main()
{
//	36.写一个函数,输入一行字符,将此字符串中最长的单词输出。
	char line[100]={0},word[100]={0};
	printf("请输入一行字符:");
	gets(line);
	loogestword(line,word);
	printf("输出最长的单词:%s",word);

//37.用递归方法求n阶勒让德多项式的值,递归公式为
	double x,n;
	printf("输入x和n的值(格式n x):");
	scanf("%lf %lf",&n,&x);
	printf("勒让德多项式的值:%f",pnx(n,x));

//	38.输人 10 个学生5 门课的成绩,分别用函数实现下列功能
//	1.计算每个学生的平均分;
//	2.计算每门课的平均分;
//	3.找出所有 50 个分数中最高的分数所对应的学生和课程;
//	4.计算平均分方差;
	input_stu();
	aver_stu();
	aver_cver();
	float highest = higst();
	printf("最高分: %f, 学生: %d, 课程: %d\n",highest,r+1,c+1);
	aver_stu();
	for(int i=0;i<N;i++){
		float sum=0;
		for(int j=0;j<M;j++){
			sum += score[i][j];
		}
		a_stv[i]=sum/M;
	}
	printf("平均分方差: %f\n",s_dor());

//	39.一个函数,输人一个十六进制数,输出相应的十进制数
	char s[9]={0};
	int result;
	printf("输入一个十六进制数:");
	gets(s);
	result=func(s);
	printf("十六进制数:%s,相应的十进制数:%d",s,result);
	
//	40.用递归法将一个整数n转换成字符串。例如，输人 483,应输出字符串”483”。n 的位数不确定,可以是任意位数的整数。
	int n;
	printf("输入一个整数n:");
	scanf("%d",&n);
	if(n<0){
		putchar('-');
		n=-n; 
	}
	zhuanhuan(n);

	return 0;
}
