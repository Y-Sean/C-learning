#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	find_dog2(arr, sz);
//	int num = -1;
//	//10000000 00000000 00000000 00000001
//	//11111111 11111111 11111111 11111110
//	//11111111 11111111 11111111 11111111
//	//<<
//	//11111111 11111111 11111111 11111110
//	// -1:11111111 11111111 11111111 11111101
//	// //10000000 00000000 00000000 00000010
//
//	//>>
//	//算术右移
//	//11111111 11111111 11111111 11111111
//	//逻辑右移//none
//	//01111111 11111111 11111111 11111111
//	int a = num << 1;
//	int b = num >> 1;
//	printf("%d\n", a);
//	printf("%d", b);
//	return 0;
//}

//int main()
//{
//	int num1 = 1;//00000000 00000000 00000000 00000001
//	int num2 = 2;//00000000 00000000 00000000 00000010
//	int a = num1 & num2;//00000000 00000000 00000000 00000000
//	int b = num1 | num2;//00000000 00000000 00000000 00000011
//	int c = num1 ^ num2;//00000000 00000000 00000000 00000011
//	printf("%d ", a);
//	printf("%d ", b);
//	printf("%d ", c);
//	return 0;
//}

/*一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
编写一个函数找出这两个只出现一次的数字。

例如：
有数组的元素是：1，2，3，4，5，1，2，3，4，6
只有5和6只出现1次，要找出5和6.*/

//void find_diffs(int* arr, int sz, int* num1, int* num2)
//{
//	int mix = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		mix ^= arr[i];
//	}
//	int flag = mix & (-mix);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] & flag)
//			*num1 ^= arr[i];
//		else
//			*num2 ^= arr[i];
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int num1 = 0;
//	int num2 = 0;
//	find_diffs(arr, sz, &num1, &num2);
//	printf("%d %d", num1, num2);
//	return 0;
//}

//模拟strncpy
//char* my_strncpy(char* des, const char* sou, int num)
//{
//	char* p = sou;
//	char* str = des;
//	while (num-- && (*str++ = *p++))
//	{
//		;
//	}
//	while (num--)
//		*str = 0;
//	return des;
//}
//
//int main()
//{
//	const char* sou = "hello";
//	char des[] = "xxxxxxxxxxxxxxxxxxxx";
//	my_strncpy(des, sou, 7);
//	printf(des);
//	return 0;
//}

//模拟strncat
char* my_strncat(char* des, const char* sou, int num)
{
	char* str = des;
	while (*str)
	{
		str++;
	}
	while (num-- && (*str++ = *sou++))
	{
		;
	}
	*str = 0;
	return des;
}

int main()
{
	const char* sou = "world";
	char des[20] = "hello ";
	my_strncat(des, sou, 2);
	printf(des);
	return 0;
}