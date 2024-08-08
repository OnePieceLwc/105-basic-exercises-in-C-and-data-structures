#include <stdio.h>

int fact(int x){
	int sum=0;
	if(x==1 || x==0){
		sum=1;
	}
	else{
		sum=x*fact(x-1);	
	}
	return sum;
}

void func(int n){
	char next;
	if(n<=1){
		next =getchar();
		printf("输出相反结果为：");
		putchar(next);
	}
	else{
		next=getchar();
		func(n-1);
		putchar(next);
	}
}

int main()
{
//	26.利用递归方法求 5!
	int n,num;
	printf("输入递归方法的数：");
	scanf("%d",&n);
	num=fact(n);
	printf("递归法求%d!的值为：%d",n,num);

//	27.利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来
	int i=5; 
	printf("输入递5个以内字符："); 
	func(i);

//	28.给定一个不多于5位的正整数，要求:1.求它是几位数，2.逆序打印出各位数字
	int n,sum=0,temp;
	printf("输入不多于5位的正整数：");
	scanf("%d",&n);
	temp=n;
	for(int i=0;i<5;i++){
		if(n!=0){
			sum++;
			n /= 10;
		}
	}
	printf("它是%d位数\n",sum);
	printf("逆序打印数字:");
    while (temp != 0) {
        printf("%d ", temp % 10); 	// 打印最后一位数字
        temp /= 10; 	// 去掉最后一位数字
    }
    printf("\n");

//	29.一个5位数，判断它是不是回文数。
//	如 12321 是回文数，个位与万位相同，十位与千位相同
	int a,b,c,d,e,f,x;
	printf("输入5位的正整数：");
	scanf("%d",&x);
	a=x/10000;
	b=x%10000/10;
	c=x%10000/100;
	d=x%10000/10;
	e=x%10;
	if(e==a && b==d){
		printf("这个数是回文数");
	}
	else{
		printf("这个数不是回文数");
	}

//	30.求不超过n位数，且由 0-7 所能组成的奇数个数。 
//	思路：
//	1.最后一位为奇数1357 ，4种
//	2.如果2位数，则7*4   7是因为首数字不能为0
//	3.如果3位数，则7*8*4
	printf("输求不超过n(n>=2)位数，且由 0-7 所能组成的奇数个数。\n");
	long s=4,sum=0,n;
	printf("输入n位数的n:");
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		if(i==2){
			s *= 7;
		}
		else{
			s *= 8;
		}
		sum += s;
	}
	printf("不超过8位数，且由 0-7 所能组成的奇数个数为%ld个。",sum);
	
	return 0;
}
