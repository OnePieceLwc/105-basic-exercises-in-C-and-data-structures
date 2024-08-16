# 100道C语言和数据结构基础练习

## **前提：**

**链表  Linklist L;= Lnode （*）L;  下一个L->next  L->data   前一个L->prior**

**有序顺序表 seqlist  A;   A.length  A.data[i]**

## **100道**

🎈1. **输入两个正整数 m 和 n，求其最大公约数和最小公倍数**

🤖2. **输入一行字符，分别统计出其中英文字母、空格、数字和其他字符的个数**

⚙️3. **求 Sn = a + aa + aaa + … + a…a 之值，其中 a 是一个数字，n 表示 a 的位数，n、a 由键盘输入。例如: 2 + 22 + 222 + 2222 + 22222（此时 n=5）**

📖4. **求 1! + 2! + 3! + 4! + … + 20!**

**（扩展）输入一个 n，求 n 的双阶乘，例如输入 20，求 2! + 4! + … + 18! + 20!**

⬇️5. **求 2/1 + 3/2 + 5/3 + 8/5 + ... 前 20 项**

📦6. **一个球从 100m 高度自由落下，每次落地后反弹回原高度的一半，再落下，求它在第 10 次时共经过多少米，第 10 次反弹多高。**

💎7. **猴子吃桃问题。猴子第 1 天摘下若干个桃子，当即吃了一半，还不过瘾，又多吃了一个。第 2 天早上又将剩下的桃子吃掉一半，又多吃了一个。以后每天早上都吃了前一天剩下的一半零一个。到第 10 天早上想再吃时，就只剩一个桃子了。求第 1 天共摘多少个桃子。**

🔥8. **迭代法求 x = 根号 a。求平方根的迭代公式为 x(n+1) = 1/2 * (xn + a/xn)**

🎨9. **用牛顿迭代法求下面方程在 1.5 附近的根: 2x³ - 4x² + 3x - 6 = 0**

🎉10. **用筛选法求 100 之内的素数。**

✏️11. **求一个 3x3 的整型矩阵对角线元素之和。**

🛠️12. **输入 n，求一个 nxn 的整型矩阵对角线元素之和。**

🦊13. **有一个已排好序的数组，要求输入一个数后，按原来排序的规律将它插入数组中。**

🚫14. **将一个数组中的值按逆序重新存放。例如，原来顺序为 8, 6, 5, 4, 1。要求改为 1, 4, 5, 6, 8。**

🚨15. **输出杨辉三角（10行）**

🔧16. **输出“魔方阵”。所谓魔方阵是指这样的方阵，它的每一行、每一列和对角线之和均相等。要求输出 1~n² 的自然数构成的魔方阵。**

🚀17. **找出一个二维数组中的鞍点，即该位置上的元素在该行上最大、在该列上最小。也可能没有鞍点。**

🧞18. **有 15 个数按由大到小顺序存放在一个数组中，输入一个数，要求用折半查找法找出该数是数组中第几个元素的值。如果该数不在数组中，则输出“无此数”。**

📌19. **有一篇文章，共有 3 行文字，每行有 80 个字符。要求分别统计出其中英文大写字母、小写字母、数字、空格以及其他字符的个数。**

🔔20. **有一行电文，已按下面规律译成密码：A->Z a->z B->Y b->y C->X c->x 即第 1 个字母变成第 26 个字母，第 i 个字母变成第(z-(i-a))个字母，非字母字符不变。要求编程序将密码译回原文，并输出密码和原文。**

🎈21. **编一程序，将两个字符串连接起来，不要用 strcat 函数**

🌟22. **编写一个程序，将两个字符串 s1 和 s2 比较**

🌼23. **编写一个程序，将字符数组 s2 中的全部字符复制到字符数组 s1 中，不用 strcpy 函数。复制时，'0' 也要赋值过去。“0”之后的字符不复制。**

🌻24. **编写一个程序，求字符数组 s 的长度，不用 strlen 函数。数组 s 从键盘输入，长度不超过 50。**

🍀25. **输入一行字符，统计其中有多少个单词，单词之间用空格分开。**

🍉26. **利用递归方法求 5!**

🍓27. **利用递归函数调用方式，将所输入的 5 个字符，以相反顺序打印出来**

🍋28. **给定一个不多于 5 位的正整数，要求: 1. 求它是几位数，2. 逆序打印出各位数字**

🍊29. **一个 5 位数，判断它是不是回文数。**

🍒30. **求不超过 n 位数，且由 0-7 所能组成的奇数个数。**

🎈31. **一个偶数总能表示为两个素数之和，即把一个偶数分解成两个素数。**

🍉32. **判断一个素数能被几个 9 整除，即判断一个素数能整除几个 9 组成的数**

🍇33. **读取 7 个数(1-50)的整数值，每读取一个值，程序打印出该值个数的 。**

🍈34. **计算字符串中子串出现的次数**

🍋35. **写一个函数，使给定的一个 3x3 的二维整型数组转置，即行列互换**

🎈36. **写一个函数，输入一行字符，将此字符串中最长的单词输出。**

🌼37. **用递归方法求 n 阶勒让德多项式的值**

🌻38. **输入 10 个学生 5 门课的成绩，分别用函数实现下列功能 1. 计算每个学生的平均分; 2. 计算每门课的平均分; 3. 找出所有 50 个分数中最高的分数所对应的学生和课程; 4. 计算平均分方差;**

🍀39. **一个函数，输入一个十六进制数，输出相应的十进制数**

🍉40. **用递归法将一个整数 n 转换成字符串。例如，输入 483，应输出字符串“483”。n 的位数不确定，可以是任意位数的整数。**

🍓41. **给出年、月、日，计算该日是该年的第几天解析：需要掌握函数：判断是否为闰年**

🍋42. **（约瑟夫环问题）有 n 个人围成一圈，顺序排号。从第 1 个人开始报数（从 1 到 3 报数），凡报到 3 的人退出圈子，问最后留下的是原来第几号的那位，用指针实现。**

🍊43. **有 10 个学生，每个学生的数据包括学号，姓名，3 门课的成绩，从键盘输入 10 个学生数据。要求输出 3 门课程总平均成绩，以及最高分的学生的数据（包括学号、姓名、3 门课程成绩平均分数）。**

🍒44. **采用头插法建立单链表，头插法常用于逆置**

🍇45. **采用尾插法建立单链表**

🎈46. **在带头结点的单链表中，删除所有值为 x 的结点，并释放其空间，假设值为 x 的结点不唯一，试编写算法以实现上述操作。**

🍈47. **试编写在带头结点的单链表中寻找一个最小值结点的高效算法（假设该结点唯一）**

🍋48. **设在一个带表头结点的单链表中，所有结点的元素值无序，试编写一个函数，删除表中所有介于给定的两个值（作为函数参数给出）之间的元素（若存在）。**

🍉49. **给定两个单链表，试分析找出两个链表的公共结点。（暴力破解，最优解）**

🍊50. **设 C={a1, b1, a2, b2, ..., an, bn} 为线性表，采用带头结点的单链表存放，设计一个就地算法将其拆分为两个线性表，使得 A={a1, a2, ..., an}, B={b1, b2, ..., bn}。**

🍋51.**在一个递增有序的单链表中，存在重复的元素。设计算法删除重复的元素，例如(7.10.10.21.30.42.42.42.51.70)将变为(7.10.21.30.42.51.70)。**

🍊52.**设A 和 B 是两个单链表(带头结点)，其中元素递增有序。设计一个算法从 A 和B中的公素产生单链表 C，要求不破坏 A、B 的结点。**

🍒53.**两个整数序列 A=a1,a2,a.....,a和 B=b,,b2,b.…,b已经存入两个单链表中，设计一个算去，判断序列 B是否是序列 A 的连续子序列。**

🍉54.**设计一个算法用于判断带头结点的循环双链表是否对称**

🎈55.**有两个循环单链表,链表头指针分别为 hl 和 h2,编写一个函数将链表 h2 链接到链表11 之后，要求链接后的链表仍保持循环链表形式。**

🍇56.**设将 n(n>1)个整数存放到区带头结点处单链表乚中，设计算法将L中保存的序列循环石移 k(0<k<n)个位置。例如，若k=1，则将链表(0,1,2,3}变为{3,0,1,2}**

🍓57.**设有一个带头结点的非循环双链表L，其每个结点中除有 pre、data 和 next 域外,还有一个访问频度域 freq,其值均初始化为零。每当在链表中进行一次 Locate(L,x)运算时，令值为x的结点中 freg 域的值增1，并使此链表中的结点保持按访问频度递减的顺序排列，且最近访问的结点排在频度相同的结点之前，以便使频繁访问的结点总是靠近表头。试编写符合上述要求的 Locate(L,x)函数，返回找到结点的地址，类型为指针型。**

📌58.**单链表有环,是指单链表的最后一个结点的指针指向了链表中的某个结点(通常单链表的最后一个结点的指针域是空的)。试编写算法判断单链表是否存在环。**

🍒59.**设有一个长度 n(n 为偶数)的不带头结点的单链表，且结点值都大于 0，设计算法求这个单链表的最大孪生和。孪生和定义为一个结点值与其孪生结点值之和，对于第i个结点(从开始)，其孪生结点为第 n-i个结点。**

🍈60.**已知一个带有表头结点的单链表，结点结构为 data,next 假设该链表只给出了头指针 L在不改变链表的前提下，请设计一个尽可能高效的算法，查找链表中倒数第k个位置上的结点(k 为正整数)。若查找成功，算法输出该结点的 data 域的值，并返回 1:否则，只返回 0.**

🍉61.**假定采用带头结点的单链表保存单词，当两个单词有相同的后缀时，可共享相同的后缀存储空间，例如，loading 和 being 的存储映像如下图所示,设 strl 和 str2 分别指向两个单词所在单链表的头结点，链表结点结构为 data next。请设计个时间上尽可能高效的算法，找出由 st1 和 str2 所指向两个链表共同后缀的起始位置(如图中字符i所在结点的位置 P)。**

🚫62.**用单链表保存m 个整数，结点的结构为[data][link]，且|data|<n(n 为正整数)。现要求设计一个时间复杂度尽可能高效的算法，对于链表中 data 的绝对值相等的结点，仅保留第欠出现的结点而删除其余绝对值相等的结点。例如，若给定的单链表 head 如下**

🔔63.**设线性表L=(a1.a.a3.…,an2,an1.am)采用带头结点的单链表保存，链表中的结点定义如下typedef struct LNode{int data;struct node*next;}LNode, LinkL ist:请设计一个空间复杂度为o(1)且时间上尽可能高效的算法，重新排列工中的各结点，得到线性表L'=(a1,an,a2,an-1,a3,an2.…)**

📖64.**将两个按值有序排列的非空线性链表合并为一个按值有序的线性链表**

🍋65.**设线性表L=(X1,X2,…,Xn-2,Xn-1,Xn)中存储整型数据，采用带头结点的单链表保存。中奇数位序的数据元素按升序存放，偶数位序的数据元素按降序存放。请设计一个空间复杂度为 0(1)且时间上尽可能高效的算法，将链表中的元素按从小到大的顺序排序**

🔥66.**已知递增有序的单链表 A，B，C分别存储了一个集合，设计算法实现 A=AU(B-C)，要求单链表仍然有序。**

⚙️67.**将两个有序顺序表合并为一个新的有序顺序表，并由函数返回结果顺序表。**

🤖68.**已知在一维数组 A[m+n]中依次存放两个线性表(a1,a2,a3,…,am)和(b;,bz,b.…,bn)。编写一个函数,将数组中两个顺序表的位置互换,即将(bi,b,,b;,,…,b)放在(a1,a2,a3,…,am)的前面。**

🦊69.**给定三个序列 A、B、C，长度均为 n，且均为无重复元素的递增序列，请设计一个时|上尽可能高效的算法，逐行输出同时存在于这三个序列中的所有元素。例如，数组 A为{1.2.3]，数组 B为{2.3,4]，数组C为{-1,0.2}，则输出 2**

🎨70.**已知线性表按顺序存储，且每个元素都是不相同的整型元素，设计把所有的奇数移动至偶数前面的算法。**
