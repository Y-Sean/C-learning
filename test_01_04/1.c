#define _CRT_SECURE_NO_WARNINGS 1

/*如何定义一个int类型的指针数组，数组元素个数为10个：(   )

作业内容
A.int a[10]				//定义了一个int类型的数组，数组元素个数为10个
B.int (*a)[10]			//定义了一个数组指针a,指向元素为10个int的数组
C.int *a[10];			//定义了一个指针数组，存放int*类型的数组
D.int (*a[10])(int);	//int (*) (int),定义了函数指针,int (*p)(int),定义了函数指针p
//类似的，int (*a[10])(int)是存放函数指针的数组
*/

/*下面哪个是数组指针（   ）

作业内容
A.int** arr[10]		定义了一个int*类型的数组，也就是二维数组
B.int (*arr[10])	()有无无所谓，还是一个指针数组
C.char *(*arr)[10]	定义了一个数组指针arr,指向元素为10个char*类型的数组
D.char(*)arr[10]	不完整，可以说char (*arr)[10]或者char* arr[10]
*/

//sizeof(char *[10]);可以，返回值为10；还有函数传参时，可以。其他定义时要有名字

////下面哪个代码是错误的？()
//
//#include <stdio.h>
//int main()
//{
//	int* p = NULL;
//	int arr[10] = { 0 };
//	/*A.p = arr;				//ok
//	B.int (*ptr)[10] = &arr;	//定义了数组指针，ok
//	C.p = &arr[0];				//ok
//	D.p = &arr;					//err
//	*/
//	return 0;
//}

/*下面代码关于数组名描述不正确的是（ ）

int main()
{
  int arr[10] = {0};
  return 0;
}

作业内容
A.数组名arr和&arr是一样的		//err
B.sizeof(arr)，arr表示整个数组		//ok
C.&arr，arr表示整个数组			//ok
D.除了sizeof(arr)和&arr中的数组名，其他地方出现的数组名arr，都是数组首元素的地址。	//ok
*/

//除了sizeof(arr)和&arr中的数组名，其他地方出现的数组名arr，都是数组首元素的地址。

/*下面哪个是函数指针？(   )

作业内容
A.int* fun(int a, int b);		//函数的返回类型是int*
B.int(*)fun(int a, int b);
C.int (*fun)(int a, int b);		//ok
D.(int *)fun(int a, int n);
*/

/*设有以下函数void fun(int n,char *s){……},则下面对函数指针的定义和赋值均是正确的是：（ ）

作业内容
A.void (*pf)(int，char); pf=&fun;		//函数指针pf,but 第二个参数错误
B.void (*pf)(int n，char *s); pf=fun;	//ok
C.void *pf(); *pf=fun;
D.void *pf(); pf=fun;
*/

/*在游戏设计中，经常会根据不同的游戏状态调用不同的函数，我们可以通过函数指针来实现这一功能，
下面哪个是：一个参数为int *，返回值为int的函数指针（ ）

作业内容
A.int (*fun)(int)
B.int (*fun)(int *)		//ok
C.int* fun(int *)
D.int* (*fun)(int *)
*/

/*定义一个函数指针，指向的函数有两个int形参并且返回一个函数指针，
返回的指针指向一个有一个int形参且返回int的函数？下面哪个是正确的？（   ）

作业内容
A.int (*(*F)(int, int))(int)		//ok
B.int (*F)(int, int)				//函数指针
C.int (*(*F)(int, int))				//指向函数指针的指针
D.*(*F)(int, int)(int)
*/

/*杨氏矩阵

作业内容
有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。

要求：时间复杂度小于O(N);*/
//#include <stdio.h>
//#include <stdbool.h>
//
//bool searchMatrix(int matrix[][4], int rows, int cols, int target) {
//	int row = 0;
//	int col = cols - 1;
//
//	while (row < rows && col >= 0) {
//		if (matrix[row][col] == target) {
//			return true;
//		}
//		else if (matrix[row][col] > target) {
//			col--;
//		}
//		else {
//			row++;
//		}
//	}
//
//	return false;
//}
//
//int main() {
//	int matrix[4][4] = {
//		{1, 4, 7, 11},
//		{2, 5, 8, 12},
//		{3, 6, 9, 16},
//		{10, 13, 14, 17}
//	};
//	int target = 5;
//
//	if (searchMatrix(matrix, 4, 4, target)) {
//		printf("Found %d in the matrix.\n", target);
//	}
//	else {
//		printf("%d is not in the matrix.\n", target);
//	}
//
//	return 0;
//}

/*字符串左旋。实现一个函数，可以左旋字符串中的k个字符。
例如：
ABCD左旋一个字符得到BCDA
ABCD左旋两个字符得到CDAB*/
//#include<stdio.h>
//#include<string.h>
//
//char* turn_left(char* arr, int len, int k)
//{
//	char tmp[100] = { 0 };
//	strcpy(tmp, arr);
//	for (int i = 0; i < len; i++)
//	{
//		arr[i] = tmp[(i + k) % len];
//	}
//	return arr;
//}
//
//int main()
//{
//	char arr[] = "ABCD";
//	int k = 0;
//	scanf("%d", &k);
//	int len = strlen(arr);
//	turn_left(arr, len, k);
//	char tmp[100] = { 0 };
//	strcpy(tmp, arr);
//	printf("%s\n", tmp);
//	return 0;
//}

/*字符串旋转结果
写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。

例如：给定s1 =AABCD和s2 = BCDAA，返回1
给定s1=abcd和s2=ACBD，返回0.

AABCD左旋一个字符得到ABCDA
AABCD左旋两个字符得到BCDAA
AABCD右旋一个字符得到DAABC*/
#include<stdio.h>
#include<string.h>

int is_turn(char* arr1, char* arr2, int len1, int len2)
{
	if (len1 != len2)
	{
		return 0;
	}
	char tmp[100] = { 0 };
	strcpy(tmp, arr1);
	int i = 0;
	int j = 0;
	int flag[100] = { 0 };
	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len1; j++)
		{
			if (arr2[i] == tmp[(j + i) % len1])
			{
				flag[i] = j;
				break;
			}
		}
	}
	for (i = 0; i < len1 - 1; i++)
	{
		if (flag[i] == flag[i + 1])
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	char arr1[] = "AABCD";
	char arr2[] = "BCDAA";
	int len1 = strlen(arr1);
	int len2 = strlen(arr2);
	if (is_turn(arr1, arr2, len1, len2))
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}

	return 0;
}