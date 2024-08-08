#include <stdio.h>
#include <math.h>
#include <string.h>
//	判断一个数是否是素数
int Isprimer(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
		return 0;
	}
	return 1;
}

// 计算模式串的 next 数组
void getNext(char *pattern, int *next) {
  int j = 0;
  next[0] = 0; // next[0] 总是为 0
  for (int i = 1; pattern[i] != '\0'; i++) {
    // 当 pattern[i] 和 pattern[j] 相等时，next[i] = j + 1
    while (j > 0 && pattern[i] != pattern[j]) {
      j = next[j - 1]; // 回退到上一个匹配的位置
    }
    if (pattern[i] == pattern[j]) {
      j++;
    }
    next[i] = j;
  }
}

// 使用 KMP 算法查找子串出现的次数
int kmp(char *text, char *pattern) {
  int count = 0;
  int textLength = strlen(text);
  int patternLength = strlen(pattern);
  int next[patternLength];

  getNext(pattern, next); // 计算 next 数组

  int i = 0, j = 0;
  while (i < textLength) {
    // 当 text[i] 和 pattern[j] 相等时，继续比较下一个字符
    while (j > 0 && text[i] != pattern[j]) {
      j = next[j - 1]; // 回退到上一个匹配的位置
    }
    if (text[i] == pattern[j]) {
      j++;
    }
    if (j == patternLength) { // 匹配成功
      count++;
      j = next[j - 1]; // 回退到上一个匹配的位置
    }
    i++;
  }

  return count;
}


// 打印二维数组
void printfarray(int array[3][3]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", array[i][j]);
    }
    printf("\n");
  }
}

// 转置二维数组
void reversearray(int array[3][3]) {
  int temp;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < i; j++) { 
      temp = array[i][j];
      array[i][j] = array[j][i];
      array[j][i] = temp;
    }
  }
}


int main()
{
//	31.一个偶数总能表示为两个素数之和，即把一个偶数分解成两个素数。
//		解析:重点在于要学会函数:判断一个数是否是素数
	int n,i;
	do{
		printf("输入偶数:");
		scanf("%d",&n);
	}while(n%2!=0);
	for(i=1;i<n;i++){
		if(Isprimer(i)&&Isprimer(n-i)){
			break; 
		}
	}
	printf("输入偶数%d解成两个素数%d和%d。",n,i,n-i);

//	32.判断一个素数能被几个9整除，即判断一个素数能整除几个9组成的数
	int p,i;
	long int sum=9;
	printf("输入一个素数:");
	scanf("%d",&p);
	for(i=1;;i++){
		if(sum%p==0){
			break;
		}
		else{
			sum =sum*10+9;	
		}
	}
	printf("素数%d能被%d个9整除的数%d。",p,i,sum);

//	33.读取7个数(1-50)的整数值，每读取一个值，程序打印出该值个数的 *。	
	int n;
	for(int i=0;i<7;i++){
		printf("输入一个数字:");
		scanf("%d",&n);
		if(n>50||n<1){
			printf("重新输入一个数字:");
			i--;
		}else{
			for(int j=0;j<n;j++){
				printf("*");
			}
		}
		printf("\n");
	}

//	34.计算字符串中子串出现的次数
//	1.用暴力匹配
	int count = 0;
    int textLength, patternLength, i, j, k;
    char text[50], pattern[50];
  
    printf("输入2个字符串,主串在前,子串在后:\n");
    gets(text);
    gets(pattern);
  
    textLength = strlen(text);
    patternLength = strlen(pattern);
  
    for (i = 0; i <= textLength - patternLength; i++) {
      for (k = i, j = 0; j < patternLength && text[k] == pattern[j]; k++, j++);
      if (j == patternLength) { // 子串匹配成功
        count++;
        j = 0; // 重置 j，继续匹配下一个子串
        i += patternLength - 1; // 跳过已经匹配的字符
      } 
    }

  printf("字符串中子串出现的次数: %d\n", count);
//	2.KMP 
	 char text[50], pattern[50];
  
    printf("输入2个字符串,主串在前,子串在后:\n");
    gets(text);
    gets(pattern);
  
    int count = kmp(text, pattern);
    printf("字符串中子串出现的次数: %d\n", count);

//	35.写一个函数,使给定的一个 3x3 的二维整型数组转置,即行列互换
	int array[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printf("转置前:\n");
    printfarray(array);
    reversearray(array);
    printf("转置后:\n");
    printfarray(array);
	
	return 0;
}
