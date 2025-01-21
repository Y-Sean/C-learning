#define _CRT_SECURE_NO_WAARNINGS 1

//#include <stdio.h>
//int main()
//{
//	char str[] = "hello bit";
//	printf("%d %d\n", sizeof(str), strlen(str));
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	char arr1[8] = "abcdefg";
//
//	char* p = arr;
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(char*));
//	return 0;
//}

//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//#include<stdio.h>
//#include<string.h>
//
//void swap(int arr1[], int arr2[])
//{
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}
//
//int main()
//{
//	int arr1[4] = { 1,2,3,4 };
//	int arr2[4] = { 4,3,2,1 };
//	swap(arr1, arr2);
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

/*创建一个整形数组，完成对数组的操作

实现函数init() 初始化数组为全0
实现print()  打印数组的每个元素
实现reverse()  函数完成数组元素的逆置。
要求：自己设计以上函数的参数，返回值。

*/

//#define max 10
//#include<stdio.h>
//
//void init(int arr[])
//{
//	int i = 0;
//	for (i = 0; i < max; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void print(int arr[])
//{
//	int i = 0;
//	for (i = 0; i < max; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[])
//{
//	int l = 0;
//	int r = max - 1;
//	while (l < r)
//	{
//		int tmp = arr[r];
//		arr[r] = arr[l];
//		arr[l] = tmp;
//		l++;
//		r--;
//	}
//}
//
//int main()
//{
//	int arr[max];
//	init(arr);
//	print(arr);
//	int i = 0;
//	for (i = 0; i < max; i++)
//	{
//		arr[i] = i;
//	}
//	print(arr);
//	reverse(arr);
//	print(arr);
//	return 0;
//}