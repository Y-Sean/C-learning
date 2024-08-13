#define _CRT_SECURE_NO_WARNINGS 1
//判断一个整数是否能5整除
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 5 == 0)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}

//已知一个函数y = f(x)，当x < 0时，y = 1；当x = 0时，y = 0；当x > 0时，y = -1。
//#include<stdio.h>
//int main()
//{
//	int x = 0, y = 0;
//	scanf("%d",& x);
//	if (x == 0)
//		printf("0\n");
//	else if (x > 0)
//		printf("-1\n");
//	else
//		printf("1\n");
//	return 0;
//}




//给定两个整数a和b(0 < a, b < 10, 000)，计算a除以b的整数商和余数。
//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d %d", a / b, a % b);
//	return 0;
//}

//写一个函数求两个整数的较大值
//#include<stdio.h>
//int compare(int a, int b)
//{
//	return a > b ? a : b;
//}
//int main()
//{
//	int x = 0, y = 0;
//	scanf("%d%d", &x, &y);
//	printf("%d", compare(x, y));
//	return 0;
//}


//多组比大小
//#include <stdio.h>
//int main() {
//    int a = 0, b = 0;
//    while (2 == scanf("%d %d", &a, &b))
//    {
//        if (a > b)
//            printf("%d>%d\n", a, b);
//        else if (a == b)
//            printf("%d=%d\n", a, b);
//        else
//            printf("%d<%d\n", a, b);
//    }
//    return 0;
//}

//多组输入，判断奇偶
//#include <stdio.h>
//int main() {
//    int a = 0;
//    while (scanf("%d", &a)!=EOF)
//    {
//        if (a % 2 == 0)
//            printf("Even\n");
//        else
//            printf("Odd\n");
//    }
//    return 0;
//}


//KiKi想知道他的考试分数是否通过，请帮他判断。从键盘任意输入一个整数表示的分数，编程判断该分数是否在及格范围内，如果及格，即：分数大于等于60分，是输出“Pass”，否则，输出“Fail”。
//输入描述：
//多组输入，每行输入包括一个整数表示的分数（0~100）。
//#include<stdio.h>
//int main()
//{
//	int a;
//	while (scanf("%d", &a) != EOF)
//	{
//		if (a < 60)
//			printf("Fail\n");
//		else
//			printf("Pass\n");
//	}
//	return 0;
//}


//KiKi想知道他的考试成绩是否完美，请帮他判断。从键盘输入一个整数表示的成绩，编程判断成绩是否在90~100之间，如果是则输出“Perfect”。
//#include<stdio.h>
//int main()
//{
//	int a;
//	while (scanf("%d", &a) != EOF)
//	{
//		if (a>=90&&a <= 100)
//			printf("Perfect\n");
//		
//	}
//	return 0;
//}