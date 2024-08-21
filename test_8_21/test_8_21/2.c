#define _CRT_SECURE_NO_WARNINGS 1

//编写一个函数实现n的k次方，使用递归实现。
//#include<stdio.h>
//int result(int n,int k)
//{
//	if (k != 1)
//		return n * result(n, k - 1);
//	else
//		return n;
//}
//int main()
//{
//	printf("%d\n", result(2, 4));
//	return 0;
//}


/*计算一个数的每位之和（递归实现）

写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和

例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19

输入：1729，输出：19
*/
//#include<stdio.h>
//int DigitSum(int a)
//{
//	if (a > 9)
//		return a % 10 + DigitSum(a / 10);
//	else
//		return a;
//}
//int main()
//{
//	printf("%d\n", DigitSum(1729));
//	return 0;
//}

//递归和非递归分别实现strlen
//#include<stdio.h>
//#include<string.h>
////int sestrlen(char *arr)
////{
////	int count = 0;
////	while (*arr != '\0')
////	{
////		count++;
////		arr++;
////	}
////	return count;
////}
//
////int main()
////{
////	char arr[] = "hello";
////	printf("%d\n",sestrlen(arr));
////	return 0;
////}
//int sestrlen(char* arr)
//{
//	if (*arr != '\0')
//		return 1 + sestrlen(++arr);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "hello";
//	printf("%d\n", sestrlen(arr));
//	return 0;
//}


//递归方式实现打印一个整数的每一位
//#include<stdio.h>
//int every(int a)
//{
//	if (a > 9)
//	{
//		every(a / 10);
//		printf("%d ", a%10);
//	}
//	else
//		printf("%d ", a);
//}
//int main()
//{
//	int a = 1234;
//	every(a);
//	return 0;
//}