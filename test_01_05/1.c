/*声明一个指向含有10个元素的数组的指针，其中每个元素是一个函数指针，
该函数的返回值是int，参数是int*，正确的是（   ）

作业内容
A.(int *p[10])(int*)
B.int [10]*p(int *)
C.int (*(*p)[10])(int *)	//ok
D.int ((int *)[10])*p
*/

/*关于回调函数描述错误的是（   ）
作业内容
A.回调函数就是一个通过函数指针调用的函数		//err
B.回调函数一般通过函数指针实现
C.回调函数一般不是函数的实现方调用，而是在特定的场景下，由另外一方调用。
D.回调函数是调用函数指针指向函数的函数。
*/

/*下面代码中print_arr函数参数设计哪个是正确的？（ ）

 int arr[3][5] = {1,2,3,4,5,6,7,8,9,10};
 print_arr(arr, 3, 5);

作业内容
A.void print_arr(int arr[][],int row, int col);			//err,二维数组列不能省略
B.void print_arr(int* arr, int row, int col);			//err
C.void print_arr(int (*arr)[5], int row, int col);		//二维数组的名字代表第一行元素的
D.void print_arr(int (*arr)[3], int row, int col);		//地址，应为C
*/

/*下面test函数设计正确的是：（   ）

char* arr[5] = {"hello", "bit"};

test(arr);

作业内容
A.void test(char* arr);
B.void test(char** arr);		//ok
C.void test(char arr[5]);
D.void test(char* arr[5]);
*/

/*下面程序的结果是：（ ）

int main()
{
  int a[5] = {5, 4, 3, 2, 1};
  int *ptr = (int *)(&a + 1);
  printf( "%d,%d", *(a + 1), *(ptr - 1));
  return 0;
}				//4,1
*/

/*下面程序的结果是：（ ）

int main()
{
  int aa[2][5] = {10,9,8,7,6,5,4,3,2,1};
  int *ptr1 = (int *)(&aa + 1);
  int *ptr2 = (int *)(*(aa + 1));
  printf( "%d,%d", *(ptr1 - 1), *(ptr2 - 1));
  return 0;			//1,6
}
*/

//练习使用库函数，qsort排序各种类型的数据
//void qsort (void* base, size_t num, size_t size,
//	int (*compar)(const void*, const void*));
//函数指针返回值是int，用于比较两个元素的大小，>0,=0,<0
//#include<stdio.h>
//#include<stdlib.h>
//
////整型比较
//int compare_int(const void* e1, const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//
////浮点型比较
//int compare_float(const void* e1, const void* e2)
//{
//	return (*(float*)e1 - *(float*)e2);
//}
//
////字符型比较`
//int compare_char(const void* e1, const void* e2)
//{
//	return (*(char*)e1 - *(char*)e2);
//}
//
////结构体比较
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int compare_stu_by_age(const void* e1, const void* e2)
//{
//	//return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//	return (*(struct Stu*)e1).age - (*(struct Stu*)e2).age;
//}
//
//int compare_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//int main()
//{
//	//整型数组
//	int arr[] = { 1,3,5,2,6,8,9,4,7,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), compare_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	//浮点型数组
//	float f[] = { 1.1,3.3,5.5,2.2,6.6,8.8,9.9,4.4,7.7,0.0 };
//	sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), compare_float);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%f ", f[i]);
//	}
//	printf("\n");
//	//字符数组
//	char c[] = { 'a','d','c','b','f','e','g' };
//	sz = sizeof(c) / sizeof(c[0]);
//	qsort(c, sz, sizeof(c[0]), compare_char);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c ", c[i]);
//	}
//	printf("\n");
//	//结构体数组
//	struct Stu s[] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), compare_stu_by_age);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s %d  ", s[i].name, s[i].age);
//	}
//	printf("\n");
//	qsort(s, sz, sizeof(s[0]), compare_stu_by_name);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s %d  ", s[i].name, s[i].age);
//	}
//	printf("\n");
//	return 0;
//}

//冒泡排序
//void bubble_sort(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}

#include<stdio.h>
#include<string.h>
//模仿qsort的功能实现一个通用的冒泡排序
void bubble_sort(void* base, int sz, int width, int (*cmp)(const void*, const void*))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		int flag = 1;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				int k = 0;
				for (k = 0; k < width; k++)
				{
					char tmp = *((char*)base + j * width + k);
					*((char*)base + j * width + k) = *((char*)base + (j + 1) * width + k);
					*((char*)base + (j + 1) * width + k) = tmp;
				}
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

//整型比较
int compare_int(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}

//浮点型比较
int compare_float(const void* e1, const void* e2)
{
	return (*(float*)e1 > *(float*)e2) - (*(float*)e1 < *(float*)e2);
}

//字符型比较
int compare_char(const void* e1, const void* e2)
{
	return (*(char*)e1 - *(char*)e2);
}

//结构体比较
struct Stu
{
	char name[20];
	int age;
};
int compare_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int compare_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

int main()
{
	//整型数组
	int arr[] = { 1,3,5,2,6,8,9,4,7,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), compare_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	//浮点型数组
	float f[] = { 1.1,3.3,5.5,2.2,6.6,8.8,9.9,4.4,7.7,0.0 };
	sz = sizeof(f) / sizeof(f[0]);
	bubble_sort(f, sz, sizeof(f[0]), compare_float);
	for (i = 0; i < sz; i++)
	{
		printf("%f ", f[i]);
	}
	printf("\n");
	//字符数组
	char c[] = { 'a','d','c','b','f','e','g' };
	sz = sizeof(c) / sizeof(c[0]);
	bubble_sort(c, sz, sizeof(c[0]), compare_char);
	for (i = 0; i < sz; i++)
	{
		printf("%c ", c[i]);
	}
	printf("\n");
	//结构体数组
	struct Stu s[] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
	sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]), compare_stu_by_age);
	for (i = 0; i < sz; i++)
	{
		printf("%s %d  ", s[i].name, s[i].age);
	}
	printf("\n");
	bubble_sort(s, sz, sizeof(s[0]), compare_stu_by_name);
	for (i = 0; i < sz; i++)
	{
		printf("%s %d  ", s[i].name, s[i].age);
	}
	printf("\n");
	return 0;
}