#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;//a=6,c=6
//	b = ++c, c++, ++a, a++;//c=8,a=7,b=7,a=8
//	b += a++ + c;//b=7+8+8=23,a=9
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}

//a=9,b=23,c=8

//不允许创建临时变量，交换两个整数的内容
//int main()
//{
//	int a = 4;
//	int b = 6;
//	a = a ^ b;
//	b = a ^ b;//a^b^b=a
//	a = a ^ b;//a^b^a=b
//	printf("%d %d", a, b);
//}

/*写一个函数返回参数二进制中 1 的个数。

比如： 15    0000 1111    4 个 1*/

//int NumberOf1(int n) {
//
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;

/*获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列

答题
( 注：编程题请贴代码+运行截图！)

*/
// 打印整数二进制的奇数位和偶数位
//void print_binary_odd_even_bits(int num)
//{
//	printf("打印偶数序列：");
//	int i = 0;
//	for (i = 30; i >= 0; i -= 2)
//	{
//		int bit = (num >> i) & 1;
//		printf("%d", bit);
//	}
//	printf("\n");
//
//	printf("打印奇数序列：");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		int bit = (num >> i) & 1;
//		printf("%d", bit);
//	}
//	printf("\n");
//}
//
//int main() {
//	int num;
//	printf("请输入一个整数：");
//	scanf("%d", &num);
//
//	print_binary_odd_even_bits(num);
//
//	return 0;
//}

/*编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？

输入例子:

1999 2299

输出例子:7*/
//#include <stdio.h>
//
//
//int main() {
//    int a, b;
//    int count = 0;
//    while (scanf("%d %d", &a, &b) != EOF) { // 注意 while 处理多个 case
//        // 64 位输出请用 printf("%lld") to
//        int num = a ^ b;
//        while (num) {
//            num = num & (num - 1);
//            count++;
//        }
//        printf("%d", count);
//    }
//    return 0;
//}

/*小乐乐上课需要走n阶台阶，因为他腿比较长，所以每次可以选择走一阶或者走两阶，那么他一共有多少种走法？

输入描述：
输入包含一个整数n (1 ≤ n ≤ 30)
输出描述：
输出一个整数，即小乐乐可以走的方法数。*/

//int climb_stairs(int n) {
//    int num = 0;
//    if (n == 1) {
//        return 1;
//    }
//    if (n == 2) {
//        return 2;
//    }
//    else {
//        int i = 0;
//        int num1 = 1;
//        int num2 = 2;
//        for (i = 3; i <= n; i++) {
//            num = num1 + num2;
//            num1 = num2;
//            num2 = num;
//        }
//    }
//    return num;
//}
//
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d", climb_stairs(n));
//    return 0;
//}

/*多组输入，一行有两个整数，分别表示年份和月份，用空格分隔。
输出描述：
针对每组输入，输出为一行，一个整数，表示这一年这个月有多少天。*/

//
//int main() {
//    int y, m;
//    int days;
//    while (scanf("%d %d", &y, &m) != EOF) { // 注意 while 处理多个 case
//        // 64 位输出请用 printf("%lld") to
//        if (m == 2) {
//            if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//                days = 29;
//            else
//                days = 28;
//        }
//        else {
//            if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
//                days = 31;
//            else
//                days = 30;
//        }
//        printf("%d\n", days);
//    }
//    return 0;
//}