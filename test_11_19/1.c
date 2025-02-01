#define _CRT_SECURE_NO_WARNINGS 1

/*使用指针打印数组内容

作业内容
写一个函数打印arr数组的内容，不使用数组下标，使用指针。

arr是一个整形一维数组。*/
//#include<stdio.h>

//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *arr++);
//	}
//}
//
//int main()
//{
//	int arr[6] = { 1 ,2,3,4,5,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	char* pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}//小端内存存的是00 33 22 11

//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)     //p[0]==arr[0]==0,p[2]==arr[1]==0;
//	{
//		*(p + i) = 0;
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);//0,0,3,4,5
//	}
//	return 0;
//}

//#include <stdio.h>
//
//void reserve(char* arr, int sz) {
//	int i = 0;
//	char tem = 0;
//	for (i = 0; i < sz / 2; i++) {
//		tem = arr[i];
//		arr[i] = arr[sz - 1 - i];
//		arr[sz - 1 - i] = tem;
//	}
//}
//
//int my_strlen(char* arr) {
//	int count = 0;
//	while (*arr != '\0') {
//		count++;
//		//arr++;
//	}
//	return count;
//}
//
//int main() {
//	char arr[100];
//	scanf("%s", arr);
//	//scanf 函数在读取字符串时，遇到空格、制表符或换行符就会停止读取
//	int sz = my_strlen(arr);
//	printf("%d\n", sz);
//	printf("%s\n", arr);
//	reserve(arr, sz);
//	printf("%s\n", arr);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//#define MAX_LENGTH 10000
//
//// 反转字符串函数
//void reverseString(char* str) {
//    int left = 0;
//    int right = strlen(str) - 1;
//    while (left < right) {
//        // 交换左右指针所指向的字符
//        char temp = str[left];
//        str[left] = str[right];
//        str[right] = temp;
//        left++;
//        right--;
//    }
//}
//
//int main() {
//    char str[MAX_LENGTH + 1];  // 多留一个位置给字符串结束符 '\0'
//
//    // 读取输入的字符串
//    if (fgets(str, sizeof(str), stdin) != NULL) {
//        // 去除fgets可能读取到的换行符
//        int len = strlen(str);
//        if (len > 0 && str[len - 1] == '\n') {
//            str[len - 1] = '\0';
//        }
//
//        // 反转字符串
//        reverseString(str);
//
//        // 输出反转后的字符串
//        printf("%s\n", str);
//    }
//
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int n = 13;
//	int i = 0;
//	int j = 0;
//	int space = 0;
//	// 打印上半部分菱形
//	for (i = 0; i < n / 2 + 1; i++) {
//		// 打印空格
//		for (space = 0; space < n / 2 - i; space++) {
//			printf(" ");
//		}
//		// 打印星号
//		for (j = 0; j < 2 * i + 1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	// 打印下半部分菱形
//	for (i = n / 2 - 1; i >= 0; i--) {
//		// 打印空格
//		for (space = 0; space < n / 2 - i; space++) {
//			printf(" ");
//		}
//		// 打印星号
//		for (j = 0; j < 2 * i + 1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

/*求出0～100000之间的所有“水仙花数”并输出。

“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如:153＝1^3＋5^3＋3^3，则153是一个“水仙花数”。*/
//#include<stdio.h>
//#include<math.h>
//int isNarcissistic(int num)
//{
//	if (num == 0)
//		return 1;
//	int orignal = num;
//	int n = (int)log10(num) + 1;
//	int sum = 0;
//	while (num)
//	{
//		sum += pow(num % 10, n);
//		num /= 10;
//	}
//	return sum == orignal;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		if (isNarcissistic(i))
//			printf("%d ", i);
//	}
//	return 0;
//}

/*求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，

例如：2+22+222+2222+22222*/
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int sum = 0;
	int num = 0;
	for (i = 0; i < 5; i++)
	{
		num = num * 10 + n;
		sum += num;
	}
	printf("%d", sum);
	return 0;
}