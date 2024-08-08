#include <stdio.h>

int main()
{
//	21.编一程序，将两个字符串连接起来，不要用 strcat函数
	  char s1[100] = {0};
    char s2[50] = {0};
    int index1 = 0, index2 = 0;
    printf("输入字符串 s1: ");
    scanf("%s", s1);
    printf("输入字符串 s2: ");
    scanf("%s", s2);
    while (s1[index1] != '\0') {
        index1++;	// 找到 s1 字符串的末尾
    }
    while (s2[index2] != '\0') {
        s1[index1++] = s2[index2++];
    }
    printf("将s2连接到s1后的字符串:%s\n", s1);

//	22.编写一个程序，将连个字符串 s1 和 s2 比较，
//	如果s1>s2，输出一个整数:若 s1=s2,渝出 0:若sl<s2，输出一个负数:
//	若s1>s2，输出一两个一个正数。不要用 strcmp 函数:字符串用 gets 函数读入。
//	输出的正数或负数的绝对值应是相比较的两个字符串相对应字符的 ASCI 码的差值。
//	例如,“A"和“”相比，由于"A”<“℃”，应输出负数，同时由于'A'与'C的 ASCI 码差值为 2，
//	因此应输出"-2"。同理:“And”和"Aid"相比较，根据第2个字符比较结果，“n"比"i"大 5，因此应输出"5”
	char s1[100] = {0};
    char s2[50] = {0};
    int index = 0,ret=0;
    printf("输入字符串 s1: ");
    gets(s1);
    printf("输入字符串 s2: ");
    gets(s2);
    while(!(ret=s1[index]-s2[index])  &&  s1[index]!='\0'  &&  s2[index]!='\0'){
    	index++;
	}
	printf("%d\n",ret);

//	23.编写一个程序，将字符数组s2 中的全部字符复制到字符数组 s1 中，不用 strcpy 函数。复制时， '0’也要赋值过去。“0’之后的字符不复制。
	char s1[100] = {0};
    char s2[50] = {0};
    int index = 0;
    printf("输入字符串 s1: ");
    scanf("%s", s1);
    printf("输入字符串 s2: ");
    scanf("%s", s2);
    while (s2[index] != '\0') {
        s1[index] = s2[index];
        index++; 
    }
    s1[index] = s2[index];
    printf("字符数组s2 中的全部字符复制到字符数组 s1的字符串:%s\n", s1);

//	24.编写一个程序，求字符数组s的长度，不用 stlen 函数。数组s山键盘输入，长度不超过 50.
	char s[100] = {0};
    int index = 0;
    printf("输入字符串 s: ");
    scanf("%s", s);
    while(s[index++]!='\0'){
	}
    printf("宁符数组s的长度:%d\n", index-1);

//	25.输入一行字符，统计其中有多少个单词，单词之间用空格分开。
	char s[100] = {0};
    int num = 0;
    printf("输入字符串 s: ");
    gets(s);
    for(int i=0;s[i]!='\0';i++){
    	if(s[i]==' '){
			num++;
		}
	}
    printf("宁符数组s的长度:%d\n", num);
	return 0;
}
