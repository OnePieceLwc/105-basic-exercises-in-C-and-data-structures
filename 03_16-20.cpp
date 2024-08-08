#include <stdio.h>
#include <ctype.h>
#define N 15
#define X 3
#define Y 4 

int main()
{
	
//16.输出“魔方阵”。所谓魔方阵是指这样的方阵,它的每一行、每一列和对角线之和均相等。要求输出 1~n2的自然数构成的魔方阵。
//	步骤： 
//	1.将1放在第1行的中间一列。
//	2.从2开始直到n*n止，各数依次按此规律存放:每一个数存放的行比前一个数的行数减1，列数加1。 
//	3.如果上一行的行数为1，则下一个数的行数为n(指最下一行)
//	4.当上一个数的列数为n时，下一个数的列数应该为1。
//	5.如果按上面规律确定的位置有数，或者上一个数是第1行第n列时，则把下一个数放在上一个数的下面。
    int array[N][N], i, j, n;
    printf("输入奇数n(1<=n<=%d):", N);
    scanf("%d", &n); 
    while (1) {    
        if (n % 2 != 0 && n <= N && n != 0) 
            break;
        else {
            printf("重新输入奇数n(1<=n<=%d):", N);
            scanf("%d", &n);
        } 
    } 
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            array[i][j] = 0;       // 初始化数组全为0 
        }
    }
    j = n / 2;	
    array[0][j] = 1;	// 将 1 放在第一行的中间一列

    // 从 2 的 n*n 开始，依次存放其他数字
    for (int k = 2; k <= n * n; k++) {
        i = i - 1;
        j = j + 1;
        // 处理越界情况,即步骤3-4
        if (i < 0 && j >= n) { 
            i = n - 1; 
            j = 0; 
        } else if (i < 0) {
            i = n - 1;
        } else if (j >= n) {
            j = 0;
        }
        // 如果位置为空，则将数字填入
        if (array[i][j] == 0) {
            array[i][j] = k;
        } else {
            // 否则将数字填入上一个数字的下方 即步骤5
            i = (i + 1) % n;
            array[i][j] = k;
        }
    }
    printf("魔方阵如下：\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%4d ", array[i][j]);
        }
        printf("\n");
    }

//	17.找出一个二维数组中的鞍点,即该位置上的元素在该行上最大、在该列上最小。也可能没有鞍点。
    int array[X][Y];
    int max, min, row, col, i, j, flag = 0; 
    printf("输入%d到%d的二维数组\n", X, Y); 
    for (i = 0; i < X; i++) {
        for (j = 0; j < Y; j++) {
            scanf("%d", &array[i][j]); // 初始化数组全为0 
        }
    }
    for (i = 0; i < X; i++) {
//    	找到第i行最大 
        max = array[i][0];
        col = 0; 
        for (j = 0; j < Y; j++) {
            if (array[i][j] > max) {
                max = array[i][j];
                col = j; 
            }
        }
//        找到第i行第col列最小 
        min = array[i][col];
        for (j = 0; j < X; j++) {
            if (array[j][col] < min) {
                min = array[j][col];
                row = j;
            }
        }
        
        if (max == min && col < Y) { 
            flag = 1;
            printf("鞍点为[%d][%d]\n", row, col);
            break;
        }
    }
    if (flag == 0) {
        printf("没有鞍点\n"); 
    }

//	18.有 15 个数按由大到小顺序存放在一个数组中,输入一个数,要求用折半查找法找出该数是数组中第几个元素的值。如果该数不在数组中,则输出“无此数”
	int array[15];
    for (int i = 0; i < 15; i++) {
        array[i] = i;
    }
    int low = 0, high = 14, mid, num, flag = 0;
    printf("输入要找的值：");
    scanf("%d", &num);

    while (low <= high) {
		//mid=(low+high)/2;  //改进前的 mid 计算方式，可能存在溢出风险。 
		//当 low 和 high 非常接近时，low + high 可能超过 int 类型所能表示的最大值，导致溢出，最终得到错误的 mid 值。
		mid = low + (high - low) / 2; // 改进后的 mid 计算方式

        if (num == array[mid]) {
            printf("要找的值是第%d个元素。\n", mid + 1);
            flag = 1;
            break;
        } else if (array[mid] > num) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    if (flag == 0) {
        printf("无此数\n");
    }

	 
	
//	19.有一篇文章,共有3行文字,每行有 80 个字符。要求分别统计出其中英文大写字母、小写字母、数字、空格以及其他字符的个数。
	char array[3][80];
    int uppercase = 0, lowercase = 0, digit = 0, space = 0, other = 0;
    for (int i = 0; i < 3; i++) {
    	printf("请输入文章第%d行：\n",i+1);
        fgets(array[i], 80, stdin);
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; array[i][j] != '\0'; j++) {
            if (array[i][j] >= 'A' &&array[i][j] <= 'Z' ) {
                uppercase++;
            } else if (array[i][j] >= 'a' &&array[i][j] <= 'z' ) {
                lowercase++;
            } else if (array[i][j] >= '0' &&array[i][j] <= '9') {
                digit++;
            } else if (array[i][j] == ' ' ) {
                space++;
            } else {
                other++;
            }
        }
    }

    printf("英文大写字母：%d\n", uppercase);
    printf("英文小写字母：%d\n", lowercase);
    printf("数字：%d\n", digit);
    printf("空格：%d\n", space);
    printf("其他字符：%d\n", other);

//	20.有一行电文,已按下面规律译成密码:
//		A->Z	a->z
//		B->Y	b->y
//		C->X	c->x
//即第1个字母变成第 26 个字母,第i个字母变成第(z-(i-a))个字母,非字母字符不变。要求编程序将密码译回原文,并输出密码和原文。
	char cipher[100]; // 存储密文
    char plain[100]; // 存储原文
    int i;
    printf("请输入密文：");
    fgets(cipher, 100, stdin);
    // 译回原文
    for (i = 0; cipher[i] != '\0'; i++) {
        if (isalpha(cipher[i])) {
            if (cipher[i] >= 'A' && cipher[i] <= 'Z' ) {
                plain[i] = 'Z' - (cipher[i] - 'A'); 
            } else {
                plain[i] = 'z' - (cipher[i] - 'a');
            }
        } else {
            plain[i] = cipher[i];
        }
    }
    plain[i] = '\0';
    printf("密文：%s", cipher);
    printf("原文：%s", plain);

	return 0;
}
