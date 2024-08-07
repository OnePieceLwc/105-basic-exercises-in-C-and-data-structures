#include <stdio.h>
#include <cstring>
#include <ctype.h>
#include <math.h>
int main() {
	
//	1.输人两个正整数 m 和 n,求其最大公约数和最小公倍数
	int m, n, i, gcd, lcm, x, y;
    printf("请输入两个正整数 m 和 n：");
    scanf("%d %d", &m, &n);
    if(m<n)
	{x=m;y=n;}  //x为求gcd时的小数，y为求lcm的大数
	else
	{x=n;y=m;}
	while (m % x != 0 || n % x != 0) {  
        x--;
    }
    printf("最大公约数为：%d\n", x);
    
    printf("方法一：最小公倍数为：%d\n", x = m * n / x);
    
    while (y % m != 0 || y % n != 0) {  
        y++;
    }
    printf("方法二：最小公倍数为：%d\n", y);
    
//	2.输入一行字符,分别统计出其中英文字母、空格、数字和其他字符的个数
	char str[100];
    int letters = 0;
    int spaces = 0;
    int digits = 0;
    int others = 0;
    int i;

    printf("请输入一行字符：");
    fgets(str, 100, stdin);  //存储到字符数组 str 中 

    for (i = 0; str[i] != '\0'; i++) {
      if (isalpha(str[i])) {          // 使用 isalpha函数 判断字母
        letters++;
      } else if (isspace(str[i])) {   // 使用 isspace函数 判断空格
        spaces++;
      } else if (isdigit(str[i])) {   // 使用 isdigit函数 判断数字
        digits++;
      } else {
        others++;
      }
    }

    printf("英文字母个数：%d\n", letters);
    printf("空格个数：%d\n", spaces);
    printf("数字个数：%d\n", digits);
    printf("其他字符个数：%d\n", others);
    
//	3.求 Sn =a+aa+aaa+…+a…a之值,其中a是一个数字,n 表示a的位数,n、a由键盘输入。例如:2+22+222+2222+22222(此时 n=5)	
	int n, a, pre_num = 0, num = 0;
    printf("输入n和a的值(n,a):");
    scanf("%d,%d", &n, &a);
    for (int i = 0; i < n; i++) {
        pre_num += a * pow(10, i);
        num += pre_num;
    }
    printf("%d\n", num);
    return 0;
    
//	4.求1!+2!+3!+4!+…+20!
	int i, j;
    long long factorial = 1; 
    long long sum = 0; 
    for (i = 1; i <= 20; i++) {
      factorial = 1; 
      for (j = 1; j <= i; j++) {   //求阶乘 
        factorial *= j;
      }
      sum += factorial; 
    }
    printf("%lld\n", sum);

//	5.（扩展）输入一个n,求n的双阶乘 ,例如输入20，求2!+4!+…18!+20!
	int n;
    long long factorial = 1; 
    long long sum = 0;
    printf("输入n的值（n>2）:");
	scanf("%d",&n); 
    for (int i = n; i > 2; i -= 2) {
      factorial = 1; 
      for (int j = 1; j <= i; j++) { 
        factorial *= j;
      }
      sum += factorial; 
    }
    printf("%lld\n", sum);

    return 0;
}
