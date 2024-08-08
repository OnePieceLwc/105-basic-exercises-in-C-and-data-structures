#include<stdio.h>
#include<math.h>
int main(){
//	6.求2/1+3/2+5/3+8/5+...前20项 
	double a = 2 , b = 1 , sum = 0 ,temp; 
	for(int i = 1;i <= 20; i++)
	{
		sum = a / b;
		temp = b;
		b = a;
		a += temp;
	}
	printf("前20项和为：%lf",sum);
	
//  7.一个球从100m高度自由落下,每次落地后反弹回原高度的一半,再落下,再反弹求它在第10次时共经过多少米，第10次反弹多高。
	double total_m = 100.0,sum = 0.0; 
	for(int i = 0; i < 10; i++)
	{
		sum += total_m;
		total_m /= 2;
		sum += total_m;
	} 
	printf("第10次时共经过%f米，第10次反弹%f米",sum,total_m);

//  8.猴子吃桃问题。猴子第1天摘下若干个桃子,当即吃了一半,还不过瘾,又多吃了一个。第2天早上又将剩下的桃子吃掉一半,又多吃了一个。以后每天早上都吃了前一天剩下的一半零一个。到第 10天早上想再吃时,就只剩一个桃子了。求第1天共摘多少个桃子。)
	分析：后一天 = ( 前一天 / 2 ) -1  --> 前一天 = ( 后一天 + 1 ) * 2
	int day = 9;
	int prev , cur = 1;
	while( day > 0)
	{
		prev = ( cur + 1 ) * 2;
		cur = prev;	
		day--;
	}
	printf("第1天共摘%d个桃子",cur);
	
//	9.迭代法求x=根号a。求平方根的迭代公式为x(n+1）=1/2 * (xn+a/xn) 
//  分析：牛顿迭代法 ：x(n+1) = x(n) - f(x(n)) / f'(x(n)) https://blog.csdn.net/SanyHo/article/details/106365314
	float a , x0 , x1;
	printf("输入一个正整数a的值：");
	scanf("%f",&a);
	x0 = a / 2;
	x1 = ( x0 + a / x0 ) / 2;
	do
	{
		x0 = x1;
		x1 = ( x0 + a / x0 ) / 2;
	} while( fabs ( x0 - x1 ) >= 1e-5 );
	printf("[%.2f]的平方根为[%.5f]\n",a,x1);
	
//	10.用牛顿迭代法求下面方程在1.5近的根:2x的3次-4x的2次+3x-6=0
	double x0 , x1=1.5,f,f1;
	do
	{
		x0 = x1;
		f = ( ( 2 * x0 - 4 ) * x0 + 3 ) *  x0 -6;
		f1 = ( 6 * x0 - 8 ) * x0 + 3;
		x1 = x0 - f / f1;
	} while( fabs ( x1 - x0 ) >= 1e-5 );
	printf("方程在1.5近的根为[%.5f]\n",x1);

	return 0;
} 
