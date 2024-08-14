#define _CRT_SECURE_NO_WARNINGS 1
/*
输入一个班级5个学生各5科成绩，输出5个学生各5科成绩及总分。
输入描述：
五行，每行输入一个学生各5科成绩（浮点数表示，范围0.0~100.0），用空格分隔。
输出描述：
五行，按照输入顺序每行输出一个学生的5科成绩及总分（小数点保留1位），用空格分隔。*/
//#include<stdio.h>
//int main()
//{
//	int l = 0;
//	while (l < 5)
//	{
//		double arr[5] = { 0 }, sum = 0;
//		int i = 0;
//		while (i < 5)
//		{
//			scanf("%lf", &arr[i]);
//			i++;
//		}
//		int j = 0;
//		while (j < 5)
//		{
//			printf("%.1f ", arr[j]);
//			j++;
//		}
//		int k = 0;
//		while (k < 5)
//		{
//			sum += arr[k];
//			k++;
//		}
//		printf("%.1f\n", sum);
//		l++;
//	}
//	return 0;
//}
/*收获： while循环语句所遵循的变量，需要在循环开始前定义变量；for循环语句所遵循的变量在
* 其语句中定义变量，出语句即释放变量。因此，多循环并列时，要注意在while语句前定义变量，不
* 能仅使用一个变量，需要设置多个变量，以及在最开始定义该计数变量，while语句里的++会影响
一开始定义的变量；而for语句则无此问题。
*/

//输入5个，输出5个
//#include<stdio.h>
//int main()
//{
//	int arr[5] = { 0 }, sum = 0;
//	for (int i = 0; i < 5; i++)
//		scanf("%d", &arr[i]);
//	for(int i=0;i<5;i++)
//		printf("%d ", arr[i]);
//	for (int i = 0; i < 5; i++)
//		sum += arr[i];
//	printf("%d", sum);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		double arr[5] = { 0 }, sum = 0;
//		for (int i = 0; i < 5; i++)
//			scanf("%lf", &arr[i]);
//		for (int i = 0; i < 5; i++)
//			printf("%.1f ", arr[i]);
//		for (int i = 0; i < 5; i++)
//			sum += arr[i];
//		printf("%.1f\n", sum);
//		i++;
//	}
//	return 0;
//}



/*KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的线段图案。

输入描述：
多组输入，一个整数（1~100），表示线段长度，即“*”的数量。
输出描述：
针对每行输入，输出占一行，用“*”组成的对应长度的线段。*/
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) != EOF)
//	{
//		int i = 0;
//		while (i < a)
//		{
//			printf("*");
//			i++;
//		}
//		printf("\n");
//	}
//	return 0;
//}
//这种是输入n个，就输出n个。且每次输入的数据只能空格隔开



//#include<stdio.h>
//int main()
//{
	////1. 字面常量
	//3;
	//100;
	//3.14;
	//'a';//字符字面常量
	//"abcdef";//字符串字面常量

	//2. const 修饰的常变量
	/*const int num = 100;
	num = 200;

	printf("%d\n", num);*/


	/*const int n = 10;
	int arr[n] = {0};*/
	//err.
//	#define M 100
//
//int main()
//{
//	int arr[M] = { 0 };
//	printf("%d\n", M);
//	//M = 200;//err
//
//	return 0;
//}


//数组[]里面需要一个常量，const修饰的长变量不可以，define定义的可以



//#include<stdio.h>
//int main()
//{
//	int arr[] = { 0 }, i=0,a=0,b=0 ;
//	while (scanf("%d", &a)!=EOF)
//	{
//		while (i >= 0)
//		{
//			arr[i] = a;
//			if (a != EOF)
//				i++;
//			else
//				break;
//		}
//		while (b < i)
//		{
//			printf("*");
//			b++;
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}
//***************************************运行超时？？？？



/*给定秒数 seconds ，把秒转化成小时、分钟和秒。
数据范围： 0<seconds<100000000 
输入描述：
一行，包括一个整数，即给定的秒数。
输出描述：
一行，包含三个整数，依次为输入整数对应的小时数、分钟数和秒数（可能为零），中间用一个空格隔开。
*/
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d %d %d\n", a / 3600, a % 3600 / 60, a % 3600 % 60);
//	return 0;
//}

/*输入：
11
0
-11
复制
输出：
1
0.5
0*/
//#include<stdio.h>
//int main()
//{
//	int t = 0;
//	while (scanf("%d", &t) != EOF)
//	{
//		if (t > 0)
//			printf("1\n");
//		else if (t == 0)
//			printf("0.5\n");
//		else
//			printf("0\n");
//	}
//	return 0;
//}