#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
//在屏幕上输出9*9乘法口诀表
//#include<stdio.h>
//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//			printf("%d*%d=%-2d ", j, i, i * j);
//		printf("\n");
//	}
//	return 0;
//}

//求10 个整数中最大值
//两两比较，比较9次。数组，顺序，循环
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 },max=0 ;
//	for (int i = 0; i < 10; i++)
//		scanf("%d", &arr[i]);
//	for (int i = 0; i < 10; i++)
//		max = max > arr[i] ? max : arr[i];
//	printf("%d", max);
//	return 0;
//}

//计算1/1+1/2+1/3+1/4+1/5 …… + 1/99 + 1/100 的值，打印出结果
//#include<stdio.h>
//int main()
//{
//	double sum = 0, num=0;
//	for (int i = 1; i <= 100;i++)
//	{
//		num= 1.0 / i;
//		sum += num;
//	}
//	printf("%f", sum);
//	return 0;
//}

//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//#include<stdio.h>
//int main()
//{
//	int fu = 1;
//	double sum = 0, num=0;
//	for (int i = 1; i <= 100;i++)
//	{
//		num= 1.0 / i;
//		sum += fu*num;
//		fu *= -1;
//	}
//	printf("%f", sum);
//	return 0;
//}

//编写程序数一下 1到 100 的所有整数中出现多少个数字9
//#include<stdio.h>
//int main()
//{
//	int flag = 0;
//	for (int i = 1; i <= 100; i++)
//		if (i % 10 == 9 || i / 10 == 9)
//			flag++;
//	printf("%d\n", flag);
//	return 0;
//}

//二分查找。编写代码在一个整形有序数组中查找具体的某个数
//要求：找到了就打印数字所在的下标，找不到则输出：找不到。
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 },a=0 ;
//	printf("从0到9中选择一个数");
//	scanf("%d", &a);
//	int left = 0, right = 9, mid = 0;
//	for (; left<=right; )
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > a)
//			right=mid-1;
//		else if (arr[mid] < a)
//			left=mid+1;
//		else
//			break;
//	}
//	if (left <= right)
//		printf("%d\n", mid);
//	else
//		printf("找不到\n");
//	return 0;
//}