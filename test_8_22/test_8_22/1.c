#define _CRT_SECURE_NO_WARNINGS 1

/*递归和非递归分别实现求第n个斐波那契数

例如：
输入：5  输出：5
输入：10， 输出：55
输入：2， 输出：1*/
#include<stdio.h>

////int fib(int n)
////{
////	if (n > 2)
////		return fib(n - 1) + fib(n - 2);
////	else
////		return 1;
////}
//
//int fib(int n)
//{
//	int a = 1, b = 1, c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", fib(n));
//	return 0;
//}

/*字符串逆序（递归实现）

编写一个函数 reverse_string(char * string)（递归实现）

实现：将参数字符串中的字符反向排列，不是逆序打印。
要求：不能使用C函数库中的字符串操作函数。
比如:char arr[] = "abcdef";
逆序之后数组的内容变成：fedcba*/

//void reverse_string(char* string)
//{
//	if (*string != '\0')
//		reverse_string(string+1);
//	printf("%c", *string);
//}
//
//
//
//int main()
//{
//	char string[20] = { 0 };
//	scanf("%s", string);
//	reverse_string(string);
//	return 0;
//}



//void fenjie(char* arr)
//{
//	if (*arr != '\0')
//		fenjie(arr+1);
//	printf("%c", *arr);
//
//}
//int main()
//{
//	char arr[] = "hello";
//	fenjie(arr);
//	return 0;
//}


/*求阶乘
递归和非递归分别实现求n的阶乘（不考虑溢出的问题）*/

//int jiecheng(int n)
//{
//	if (n > 1)
//		return n * jiecheng(n - 1);
//	else
//		return 1;
//}

int jiecheng(int n)
{
	int prudoct=1;
	for (int i = 1; i <= n; i++)
		prudoct *= i;
	return prudoct;
}

int main()
{
	int n=0;
	scanf("%d", &n);
	printf("%d\n", jiecheng(n));
	return 0;
}