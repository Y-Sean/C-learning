#define _CRT_SECURE_NO_WARNINGS 1

//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
//#include<stdio.h>
//int result(int n,int k)
//{
//	if (k != 1)
//		return n * result(n, k - 1);
//	else
//		return n;
//}
//int main()
//{
//	printf("%d\n", result(2, 4));
//	return 0;
//}


/*����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�

дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��

���磬����DigitSum(1729)����Ӧ�÷���1+7+2+9�����ĺ���19

���룺1729�������19
*/
//#include<stdio.h>
//int DigitSum(int a)
//{
//	if (a > 9)
//		return a % 10 + DigitSum(a / 10);
//	else
//		return a;
//}
//int main()
//{
//	printf("%d\n", DigitSum(1729));
//	return 0;
//}

//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//#include<stdio.h>
//#include<string.h>
////int sestrlen(char *arr)
////{
////	int count = 0;
////	while (*arr != '\0')
////	{
////		count++;
////		arr++;
////	}
////	return count;
////}
//
////int main()
////{
////	char arr[] = "hello";
////	printf("%d\n",sestrlen(arr));
////	return 0;
////}
//int sestrlen(char* arr)
//{
//	if (*arr != '\0')
//		return 1 + sestrlen(++arr);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "hello";
//	printf("%d\n", sestrlen(arr));
//	return 0;
//}


//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//#include<stdio.h>
//int every(int a)
//{
//	if (a > 9)
//	{
//		every(a / 10);
//		printf("%d ", a%10);
//	}
//	else
//		printf("%d ", a);
//}
//int main()
//{
//	int a = 1234;
//	every(a);
//	return 0;
//}