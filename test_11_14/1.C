#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int i;
//int main()
//{
//	i--;
//	if (i > sizeof(i))
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}
/*sizeof 的返回值是 size_t 类型，这是一个无符号整数类型，在进行比较时，
会将 i 隐式转换为无符号整数，这也是 -1 被视为一个很大的数的原因。*/

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("ret = %d\n", ret);
//	return 0;
//}

//我们写出的表达式如果不能通过操作符的属性确定唯一的计算路径，那这个表达式就是存在问题

/*输入NxM矩阵，矩阵元素均为整数，计算其中大于零的元素之和。

输入描述：
第一行为N M(N: 矩阵行数；M: 矩阵列数,且M,N<=10)，接下来的N行为矩阵各行。
输出描述：
一行，其中大于零的元素之和。*/

//#include <stdio.h>
//
//int main() {
//    int N = 0;
//    int M = 0;
//    int num[100];
//    scanf("%d %d", &N, &M);
//    int i = 0;
//    for (i = 0; i < M * N; i++) {
//        scanf("%d", &num[i]);
//    }
//    int sum = 0;
//    for (i = 0; i < M * N; i++) {
//        if (num[i] > 0) {
//            sum += num[i];
//        }
//    }
//    printf("%d", sum);
//    return 0;
//}

//输入一个正整数n  (1 ≤ n ≤ 109),输出一行，为正整数n表示为六进制的结果
//#include <stdio.h>
//
//int main() {
//    int n = 0;
//    int num[32] = { 0 };
//    scanf("%d", &n);
//    int i = 0;
//    while (n) {
//        num[i] = n % 6;
//        n /= 6;
//        i++;
//    }
//    for (i--; i >= 0; i--) {
//        printf("%d", num[i]);
//    }
//    return 0;
//}

/*输入描述：
第一行包含两个整数n和m，表示一个矩阵包含n行m列，用空格分隔。 (1≤n≤10,1≤m≤10)

从2到n+1行，每行输入m个整数（范围-231~231-1），用空格分隔，共输入n*m个数，表示第一个矩阵中的元素。

输出描述：
输出m行n列，为矩阵转置后的结果。每个数后面有一个空格。*/
//#include <stdio.h>
//
//int main() {
//    int n = 0;
//    int m = 0;
//    int num[100];
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    for (i = 0; i < n * m; i++) {
//        scanf("%d", &num[i]);
//    }
//    int j = 0;
//    for (j = 0; j < m; j++) {
//        for (i = 0; i < n * m; i++) {
//            if (i % m == j) {
//                printf("%d ", num[i]);
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}

/*输入描述：
第一行输入一个整数(0≤N≤50)。

第二行输入N个整数，输入用空格分隔的N个整数。

第三行输入想要进行删除的一个整数。

输出描述：
输出为一行，删除指定数字之后的序列。*/
//#include <stdio.h>
//
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int num[50];
//    int i = 0;
//    for (i = 0; i < n; i++) {
//        scanf("%d", &num[i]);
//    }
//    int del = 0;
//    scanf("%d", &del);
//    for (i = 0; i < n; i++) {
//        if (num[i] != del) {
//            printf("%d ", num[i]);
//        }
//    }
//    return 0;
//
//}