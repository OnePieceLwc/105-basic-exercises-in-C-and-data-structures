#include <stdio.h>

int main()
{
//   11.用筛选法求 100 之内的素数。
//   筛选法:又称为筛法。先把以个自然数按次序排列起来。1不是质数，也不是合数，要划去第二个数2是质数留不
//   来，而把2后面所有能被2整除的数都划去。2后面第一个没划去的数是3，把3留下，再把3后面所有能被3整除的
//   数都划去。3后面第一个没划去的数是5，再把与后面所有能被5整除的数都划去。这样一直做下去，就会把不
//   超过N的把5留下，全部合数都筛掉，留下的就是不超过N的全部质数。
	int i, j, a[100];
    for (i = 0; i < 100; i++) {
        a[i] = i + 1;	    // 初始化数组
    }
	
//	非素数为0 
    for (i = 2; i < 100; i++) {
        if (a[i - 1] != 0) { 
            for (j = i + 1; j < 100; j++) {
                if (a[j - 1] % a[i - 1] == 0) { 
                    a[j - 1] = 0;
                }
            }
        }
    }

//  输出素数
    printf("100 之内的素数: ");
    for (i = 0; i < 100; i++) {
        if (a[i] != 0) {
            printf("%d ", a[i]);
        }
    }

    printf("\n");


//  12.求一个 3x3 的整型矩阵对角线元素之和。
	  int array[3][3], sum1 = 0, sum2 = 0;
	
    // 输入矩阵元素
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    // 计算主对角线元素之和
    for (int i = 0; i < 3; i++) {
        sum1 += array[i][i];
    }

    // 计算副对角线元素之和
    for (int i = 0; i < 3; i++) {
        sum2 += array[i][2 - i];
    }

    // 打印结果
    printf("主对角线元素之和: %d\n", sum1);
    printf("副对角线元素之和: %d\n", sum2);
    printf("整型矩阵对角线元素之和: %d\n", sum1+sum2-array[1][1]);

//  12（扩展）.输入n,求一个 nxn 的整型矩阵对角线元素之和。
	int n, sum1 = 0, sum2 = 0;

    printf("请输入矩阵大小 n: ");
    scanf("%d", &n);
    int array[n][n];
    printf("请输入矩阵元素:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &array[i][j]);
        }
    }
    // 计算主对角线元素之和
    for (int i = 0; i < n; i++) {
        sum1 += array[i][i];
    }
    // 计算副对角线元素之和
    for (int i = 0; i < n; i++) {
        sum2 += array[i][n - 1 - i];
    }
    // 打印结果
    printf("主对角线元素之和: %d\n", sum1);
    printf("副对角线元素之和: %d\n", sum2);

    if (n % 2 == 1) { 
        printf("整型矩阵对角线元素之和: %d\n", sum1 + sum2 - array[n / 2][n / 2]);	// n为奇数,则减去重复 
    } else { 
        printf("整型矩阵对角线元素之和: %d\n", sum1 + sum2);	// n为偶数，则直接加 
    }

//  13.有一个已排好序的数组,要求输入一个数后,按原来排序的规律将它插人数组中。
    int array[6] = {1, 3, 5, 7, 9};
    int num, i;

    printf("输入插入的数：");
    scanf("%d", &num);

//  如果当前元素 array[i] 大于 num，则将当前元素 array[i] 向后移动一位
//  即 array[i+1] = array[i]。循环结束时，i 指向插入位置的索引。
    for (i = 4; i >= 0 && array[i] > num; i--) {
        array[i+1] = array[i]; 
    }

    array[++i] = num; 

    for (i = 0; i < 6; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

//  14.将一个数组中的值按逆序重新存放。例如,原来顺序为 8,6,5,4,1。要求改为 1,4,5.6,8.
	int array[5]={8,6,5,4,1};
	int beg=0,end=4;
	printf("输出逆序前的数组:");
	for(int i=0;i<5;i++){
		printf("%d ",array[i]);
	}
	while(beg<end){
		int temp=array[beg];
		array[beg]=array[end];
		array[end]=temp;
		beg++;
		end--;
	}
	printf("输出逆序后的数组:");
	for(int i=0;i<5;i++){
		printf("%d ",array[i]);
	}
	printf("\n"); 

//	15.输出杨辉三角（10行）
	int array[10][10];
	for(int i=0;i<10;i++){
		for(int j=0;j<=i;j++){
			if(i==j || i==0)
			{
				array[i][j]=1;
			}
			else 
			{
				array[i][j]=array[i-1][j]+array[i-1][j-1];	
			}
		}
	}
	
	for(int i=0;i<10;i++){
		for(int j=0;j<=i;j++){
		printf("%5d",array[i][j]);
		}
		printf("\n");
    }

	return 0;
}
