#define _CRT_SECURE_NO_WARNINGS 1

//VS开发环境调试下面的代码，画图解释下面代码的问题
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hello bit\n");
//	}
//	return 0;
//}
//
//
//在调试过程中，可以发现arr[12]的地址于i的地址一样，之后开始死循环
//*****局部变量在内存中的栈区的使用习惯是：先使用高地址，再使用低地址空间
//*****数组随下标的增长，地址是由高到低的

//i在栈区中使用的地址在数组开辟空间的上面，之间间隔了2*4个字节，所以在数组越界时，arr[10],arr[11],都可以更改
//在arr[12]的空间和i的地址重合，导致两者同步变化，使得程序陷入死循环

//模拟实现库函数strcpy
// 函数原型：char * strcpy ( char * destination, const char * source )
//#include<stdio.h>
//char* my_strcpy(char* des, const char* sou)
//{
//	char* ret = des;
//	while (*sou != '\0')
//	{
//		*des = *sou;
//		sou++;
//		des++;
//	}//先判断，当源字符串读到'\0',就会停止赋值
//	//但是，strcpy,including the terminating null character
//	*des = '\0';
//	return ret;
//	//也可以化简
//	/*
//	while (*sou != '\0')
//	{
//		*des++ = *sou++;
//	}
//	*des = '\0';
//	*/
//}
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[20];
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//模拟实现库函数strlen
//函数原型：size_t strlen ( const char * str );
//without including the terminating null character itself
#include<stdio.h>

unsigned int my_strlen(const char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char str[] = "hello world";
	printf("[hello world]的长度为:%d\n", my_strlen(str));
	return 0;
}