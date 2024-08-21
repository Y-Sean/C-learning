#define _CRT_SECURE_NO_WARNINGS 1

/*实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定

如：输入9，输出9*9口诀表，输出12，输出12*12的乘法口诀表。*/
#include<stdio.h>
#include<math.h>
//void table(int a)
//{
//	int i = 0, j = 0;
//	for (i = 1; i <= a; i++)
//	{
//		for (j = 1; j <= i; j++)
//			printf("%2d*%-2d=%-3d ",j,i,j*i);
//		printf("\n");
//	}
//}


//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	table(a);
//	return 0;
//}


//实现一个函数来交换两个整数的内容。
//void swap(int* a, int* b)
//{
//	int num = *a;
//	*a = *b;
//	*b = num;
//}

//实现函数判断year是不是润年。
//int runnian(int a)
//{
//	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
//		return 1;
//	else
//		return 0;
//}

//实现一个函数is_prime，判断一个数是不是素数。

//利用上面实现的is_prime函数，打印100到200之间的素数。
//int is_prime(int a)
//{
//	for (int i = 2; i < sqrt(a) + 1; i++)
//		if (a % i == 0)
//			return 0;
//	return 1;
//}
//
//
//int main()
//{
//	for (int j = 100; j <= 200; j++)
//		if (is_prime(j))
//			printf("%d ", j);
//	printf("\n");
//	return 0;
//}