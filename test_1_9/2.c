#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>

//strlen
//size_t strlen ( const char * str );
//
//返回值为size_t，也就是unsigned int,注意
/*int main()
{
	const char* arr1 = "abc";
	const char* arr2 = "abcde";
	if (strlen(arr1) - strlen(arr2) > 0)
		printf("arr1>arr2\n");
	else
		printf("arr1<=arr2");
	return 0;
}*/
//统计\0前的字符个数，所以常量字符串或者字符数组里面一定要有\0
//常量字符串不能修改

//int main()
//{
//	char arr[] = "hello world.";
//	char* p = "This is an apple.";
//	size_t len1 = strlen(arr);
//	size_t len2 = strlen(p);
//	//格式字符串“%d”需要类型“int”的参数，但可变参数 1 拥有了类型“size_t”
//	//请考虑在格式字符串中使用“%zd”
//	printf("%zd\n", len1);
//	printf("%zd\n", len2);
//	return 0;
//}

//模拟strlen函数

//计数法
//int my_strlen(const char* p)
//{
//	assert(p != NULL);
//	int  count = 0;
//	while (*p != '\0')
//	{
//		p++;
//		count++;
//	}
//	return count;
//}

//递归法
//size_t my_strlen(const char* p)
//{
//	assert(p != NULL);
//	if (*p == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(p + 1);
//}

//指针相减法
//int my_strlen(const char* p)
//{
//	assert(p != NULL);
//	const char* start = p;
//	while (*p)
//	{
//		p++;
//	}
//	return  p - start;
//}
//
//int main()
//{
//	char arr[] = "hello world.";
//	char* p = "This is an apple.";
//	int len1 = my_strlen(arr);
//	int len2 = my_strlen(p);
//	printf("%d\n", len1);
//	printf("%d\n", len2);
//	return 0;
//}

//strcpy
//char * strcpy ( char * destination, const char * source );
//返回类型为目标空间指针
//原字符串不能修改，目标空间可以修改
//连同\0复制过去，所以源字符串要有\0
//赋值过去的目标指针，要有足够大的空间

//int main()
//{
//	const char* p = "hello";
//	char arr[20] = "xxxxxxxxxxxxxx";
//	char* des = strcpy(arr, p);
//	return 0;
//}

//char* my_strcpy(char* des, const char* sou)
//{
//	assert(des && sou);
//	char* ret = des;
//	while (*des++ = *sou++)
//	{
//		;
//	}//当\0赋给*des时，整个表达式为假，循环结束
//	return ret;
//}
//
//int main()
//{
//	const char* p = "hello";
//	char arr[20] = "xxxxxxxxxxxxxx";
//	char* des = my_strcpy(arr, p);
//	printf("%s\n", des);
//	return 0;
//}

//strcat
//char * strcat ( char * destination, const char * source );
//返回目标空间指针
//目标空间可以修改,目标空间足够大
//源字符串不能修改
//从目标的\0开始赋值，所以目标字符串要有\0
//赋值包括源字符串的\0

//int main()
//{
//	char* p = "world";
//	char arr[20] = "hello ";
//	strcat(arr, p);
//	printf("%s\n", arr);
//	return 0;
//}

//char* my_strcat(char* des, const char* sou)
//{
//	assert(des && sou);
//	char* ret = des;
//	//找目标空间的\0
//	while (*des)
//	{
//		des++;
//	}
//	//将源字符串从\0开始接住
//	while (*des++ = *sou++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char* p = "world";
//	char arr[20] = "hello ";
//	my_strcat(arr, p);
//	printf("%s\n", arr);
//	return 0;
//}

//如果自身串接呢
/*int main()
{
	char arr[20] = "hello ";
	strcat(arr, arr);
	return 0;
}*/		//刚开始的赋值，会覆盖住\0,导致程序错误
//所以，strcat函数不能自身追加

//strcmp
//int strcmp ( const char * str1, const char * str2 );
//返回值为整型>0 =0 <0,(VS编译器默认为-1，0，1)
//参与比较的两个字符串不能被更改

//int main()
//{
//	char* arr1 = "abd";
//	char* arr2 = "abcadef";
//	int n = strcmp(arr1, arr2);
//	printf("%d\n", n);
//	return 0;
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 - *str2 == 0 && *str1 && str2)
//	{
//		str1++;
//		str2++;
//	}
//	if (*str1 - *str2 > 0)
//		return 1;
//	else if (*str1 - *str2 < 0)
//		return -1;
//	else
//		return 0;
//}
//
//int main()
//{
//	char* arr1 = "abd";
//	char* arr2 = "abcdef";
//	int n = my_strcmp(arr1, arr2);
//	printf("%d\n", n);
//	return 0;
//}

//strcpy,strcat,strcmp都是没有限制的字符串操作函数
//来看看有限制的字符串操作函数strncpy,strncat,strncmp

//strncpy
//char * strncpy ( char * destination, const char * source, size_t num );
//严格按照赋值个数，不包括\0，就没有\0
//int main()
//{
//	char* p = "hello.";
//	char arr[20] = "wwwwwwwwwwwww";
//	strncpy(arr, p, 4);
//	printf("%s\n", arr);
//	return 0;
//}

//strncat
//char * strncat ( char * destination, const char * source, size_t num );
//追加过去，可能会覆盖\0,所以不管追加是不是完整部分，都补上\0

//int main()
//{
//	char* p = "hello";
//	char arr[20] = "world!";
//	strncat(arr, p, 4);
//	printf("%s\n", arr);
//	return 0;
//}

//strncmp
//int strncmp ( const char * str1, const char * str2, size_t num );

//int main()
//{
//	char* arr1 = "abd";
//	char* arr2 = "abcadef";
//	int n = strncmp(arr1, arr2, 2);
//	printf("%d\n", n);
//	return 0;
//}

//strstr
/*const char * strstr ( const char * str1, const char * str2 );
	  char * strstr (       char * str1, const char * str2 );*/
	  //定位重复字符串，定位第一次出现的位置
	  //str1是被扫描的字符串
	  //没有找到，则返回空指针

	  //int main()
	  //{
	  //	char* arr1 = "abcdacda";
	  //	char* arr2 = "cda";
	  //	char* ret = strstr(arr1, arr2);
	  //	printf("%s\n", ret);
	  //	return 0;
	  //}

//char* my_strstr(char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	if (str2 == '\0')
//		return NULL;
//	char* start = str1;
//	char* p = str1;
// //先找到str1开始比对的位置
//	while (*start != *str2)
//	{
//		start++;
//	}
//	while (start != '\0')
//	{
//		p = start;
//		const char* q = str2;
//		while (*p == *q)
//		{
//			p++;
//			q++;
//		}
//		if (*q == '\0')
//			return start;
//		start++;
//	}
//	return NULL;
//}

//char* my_strstr(char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	if (str2 == '\0')
//		return NULL;
//	char* start = str1;
//	char* p = str1;
//	while (start != '\0')
//	{
//		p = start;
//		const char* q = str2;
//		//p和q在循环过程中可能同时到\0，所以并且的每个条件都有必要
//		while (*p && *q && *p == *q)
//		{
//			p++;
//			q++;
//		}
//		if (*q == '\0')
//			return start;
//		start++;
//		//如果start和str2不一样，就会跳过前面的部分，直至找到相同的位置
//	}
//	return NULL;
//}
//
//int main()
//{
//	char* arr1 = "abbbcdacda";
//	char* arr2 = "bbc";
//	char* ret = my_strstr(arr1, arr2);
//	printf("%s\n", ret);
//	return 0;
//}

//strtok
//char * strtok ( char * str, const char * delimiters );
//分隔字符串，第一个参数是字符串，第二个参数是分隔符集合
//会改变第一个参数，需要临时拷贝
//第一次，找到第一个分隔符，将其置0，并记住位置。
//第二次，第一个参数需要变为NULL，并继续
//如果没有分隔符后，就返回NULL

//int main()
//{
//	char arr[] = "www.cepp-666,hello";
//	char arr2[30];
//	char* p = ",.";
//	char* str = NULL;
//	strcpy(arr2, arr);
//	for (str = strtok(arr2, p); str != NULL; str = strtok(NULL, p))
//	{
//		printf("%s ", str);
//	}
//	return 0;
//}