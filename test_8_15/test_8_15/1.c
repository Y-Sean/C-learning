#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
//����Ļ�����9*9�˷��ھ���
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

//��10 �����������ֵ
//�����Ƚϣ��Ƚ�9�Ρ����飬˳��ѭ��
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

//����1/1+1/2+1/3+1/4+1/5 ���� + 1/99 + 1/100 ��ֵ����ӡ�����
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

//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
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

//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
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

//���ֲ��ҡ���д������һ���������������в��Ҿ����ĳ����
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 },a=0 ;
//	printf("��0��9��ѡ��һ����");
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
//		printf("�Ҳ���\n");
//	return 0;
//}