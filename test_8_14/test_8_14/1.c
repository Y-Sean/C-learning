#define _CRT_SECURE_NO_WARNINGS 1
/*
����һ���༶5��ѧ����5�Ƴɼ������5��ѧ����5�Ƴɼ����ܷ֡�
����������
���У�ÿ������һ��ѧ����5�Ƴɼ�����������ʾ����Χ0.0~100.0�����ÿո�ָ���
���������
���У���������˳��ÿ�����һ��ѧ����5�Ƴɼ����ܷ֣�С���㱣��1λ�����ÿո�ָ���*/
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
/*�ջ� whileѭ���������ѭ�ı�������Ҫ��ѭ����ʼǰ���������forѭ���������ѭ�ı�����
* ������ж������������伴�ͷű�������ˣ���ѭ������ʱ��Ҫע����while���ǰ�����������
* �ܽ�ʹ��һ����������Ҫ���ö���������Լ����ʼ����ü���������while������++��Ӱ��
һ��ʼ����ı�������for������޴����⡣
*/

//����5�������5��
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



/*KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�*����ɵ��߶�ͼ����

����������
�������룬һ��������1~100������ʾ�߶γ��ȣ�����*����������
���������
���ÿ�����룬���ռһ�У��á�*����ɵĶ�Ӧ���ȵ��߶Ρ�*/
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
//����������n���������n������ÿ�����������ֻ�ܿո����



//#include<stdio.h>
//int main()
//{
	////1. ���泣��
	//3;
	//100;
	//3.14;
	//'a';//�ַ����泣��
	//"abcdef";//�ַ������泣��

	//2. const ���εĳ�����
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


//����[]������Ҫһ��������const���εĳ����������ԣ�define����Ŀ���



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
//***************************************���г�ʱ��������



/*�������� seconds ������ת����Сʱ�����Ӻ��롣
���ݷ�Χ�� 0<seconds<100000000 
����������
һ�У�����һ����������������������
���������
һ�У�������������������Ϊ����������Ӧ��Сʱ����������������������Ϊ�㣩���м���һ���ո������
*/
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d %d %d\n", a / 3600, a % 3600 / 60, a % 3600 % 60);
//	return 0;
//}

/*���룺
11
0
-11
����
�����
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