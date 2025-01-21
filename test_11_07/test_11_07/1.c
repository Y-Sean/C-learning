#define _CRT_SECURE_NO_WAARNINGS 1

//实现一个对整形数组的冒泡排序
#include<stdio.h>

void sort(int arr[], int n)
{
	int i = 0;
	for (i = 0; i < n - 1; i++)
	{
		int j = 0;
		for (j = 0; j < n - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tem = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tem;
			}
		}
	}
}

int main()
{
	int arr[] = { 1,5,8,3,19,15,11,6,9,21 };
	int i = 0;
	int n = sizeof(arr) / sizeof(arr[0]);
	sort(arr, n);
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}