#define _CRT_SECURE_NO_WARNINGS 1

/*ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��

�磺����9�����9*9�ھ������12�����12*12�ĳ˷��ھ���*/
#include<stdio.h>
#include<math.h>
//void table(int a)
//{
//	int i = 0, j = 0;
//	for (i = 1; i <= a; i++)
//	{
//		for (j = 1; j <= i; j++)
//			printf("%2d*%-2d=%-3d ",j,i,j*i);
//		printf("\n");
//	}
//}


//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	table(a);
//	return 0;
//}


//ʵ��һ�������������������������ݡ�
//void swap(int* a, int* b)
//{
//	int num = *a;
//	*a = *b;
//	*b = num;
//}

//ʵ�ֺ����ж�year�ǲ������ꡣ
//int runnian(int a)
//{
//	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
//		return 1;
//	else
//		return 0;
//}

//ʵ��һ������is_prime���ж�һ�����ǲ���������

//��������ʵ�ֵ�is_prime��������ӡ100��200֮���������
//int is_prime(int a)
//{
//	for (int i = 2; i < sqrt(a) + 1; i++)
//		if (a % i == 0)
//			return 0;
//	return 1;
//}
//
//
//int main()
//{
//	for (int j = 100; j <= 200; j++)
//		if (is_prime(j))
//			printf("%d ", j);
//	printf("\n");
//	return 0;
//}