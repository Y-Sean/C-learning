#define _CRT_SECURE_NO_WARNINGS 1

/*输入一个整数数组，实现一个函数，

来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，

所有偶数位于数组的后半部分。*/

//#include<stdio.h>
//
//void put_odd_front(int* arr, int sz)
//{
//	int* left = arr;
//	int* right = arr + sz - 1;
//	while (left < right)
//	{
//		while (left < right && *left % 2 == 1)
//		{
//			left++;
//		}
//		while (left < right && *right % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tem = *left;
//			*left = *right;
//			*right = tem;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,3,6,8,12,34,56,23,46,79 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	put_odd_front(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//输入一个整数序列，判断是否是有序序列，有序，指序列中的整数从小到大排序或者从大到小排序(相同元素也视为有序)。
//#include <stdio.h>
//
//int main() {
//    //输入n
//    int n = 0;
//    scanf("%d", &n);
//    //输入N个数字
//    int arr[50] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    //判断序列是否有序
//    int flag1 = 1;//升序标记
//    int flag2 = 1;//降序标记
//    for (i = 1; i < n; i++)
//    {
//        if (arr[i - 1] > arr[i])
//            flag1 = 0;
//
//    }
//    for (i = 1; i < n; i++)
//    {
//        if (arr[i - 1] < arr[i])
//            flag2 = 0;
//
//    }
//    if (flag1 == 1 || flag2 == 1)
//        printf("sorted\n");
//    else
//        printf("unsorted\n");
//    return 0;
//}