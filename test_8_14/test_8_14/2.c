#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}��ѭ��


//дһ�������ӡ1-100֮������3�ı���������
//#include<stdio.h>
//int main()
//{
//	int i = 3;
//	while (i < 100)
//	{
//		printf("%d ", i);
//		i += 3;
//	}
//	return 0;
//}


//д���뽫�������������Ӵ�С�����
//#include<stdio.h>
//void max(int *x, int *y)
//{
//	int t = 0;
//	if (*x < *y)
//	{
//		t = *y;
//		*y = *x;
//		*x = t;
//	}
//}
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	max(&a, &b);
//	max(&a, &c);
//	max(&b, &c);
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//int func(int a)
//{
//    int b;
//    switch (a)
//    {
//    case 1: b = 30;
//    case 2: b = 20;
//    case 3: b = 16;
//    default: b = 0;
//    }
//    return b;
//}
//#include<stdio.h>
//int main()
//{
//    printf("%d", func(1));
//    return 0;
//}û��break����һֱ���е���β��


//��ӡ100~200֮�������
//�����ֳ���������ָ�ڴ���1����Ȼ���У�����1���������⣬���ܱ�������Ȼ������������
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 100;
//	while (i <= 200)
//	{
//		int d = 0, j = 2;
//		d = sqrt(i)+1;
//		while (j < d)
//		{
//			if (i % j)
//				j++;
//			else
//				break;
//		}
//			if (j >= d)
//				printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//��ӡ1000�굽2000��֮�������
//������Ա�4���������Ա�100�����ұ�400����
//#include<stdio.h>
//int main()
//{
//	int i = 1000;
//	while (i <= 2000)
//	{
//		if (i % 4 == 0 || i % 100 == 0 && i % 400 == 0)
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


/*���������������������������Լ��
���磺
���룺20 40 
�����20*/
//���Լ����Ҳ�����������������ӣ�ָ����������������Լ��������һ����

//1.���巨

//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0,max=0,min=0, i = 2,t=0;
//	scanf("%d%d", &a, &b);
//	max = a >= b ? a : b;
//	min = a >= b ? b : a;
//	if (max == min || max % min == 0)
//		printf("%d", min);
//	else
//	{
//		while (i <= min)
//		{
//			if (max % i == 0 && min % i == 0)
//				if (i > t)
//					t = i;
//			i++;
//		}
//		printf("%d", t);
//	}
//	return 0;
//}

//2.շת�����

/*�ýϴ������Խ�С�������ó��ֵ���������һ������ȥ�����������ó��ֵ��������ڶ�������ȥ��
��һ��������˷�����ֱ����������� 0 Ϊֹ����ʱ�ĳ��������������������Լ����
	���磺�� 24 �� 36 �����Լ����36��24 = 1����12��24��12 = 2������Ϊ 0������ 24 �� 36 
�����Լ���� 12��*/

//(1)��һ��˼�����Ƚ������С

//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0, max = 0, min = 0;
//	scanf("%d%d", &a, &b);
//	max = a >= b ? a : b;
//	min = a >= b ? b : a;
//	int chu = 0, beichu = 0, storage = 0;
//	//������/����=�̡�������
//	//min����һ�������ڶ�����������min��ʼ������������������һ��������ʽ��
//	beichu = min;
//	chu = max % min;
//	while (beichu % chu)        //��beichu % chu����ʾ��һ��������Ҳ���Ǳ�����
//	{                           //�ʿɰѱ������Ƿ�Ϊ0����Ϊѭ������
//		storage = beichu % chu;
//		beichu = chu;
//		chu = storage;
//	}
//	printf("%d", chu);
//	return 0;
//}


//��2�����������С

//6/4=1����2��4/2=2����0��
//4/6=0����4��6/4=1����2��4/2=2����0
//�ɿ������ֽ��治���Ǵ�С

//#include <stdio.h>
//int gcd(int a, int b) 
//{
//    while (b != 0) //a�Ǳ�������b�ǳ�����temp�Ǵ�����
//    {
//        int temp = b;
//        b = a % b;
//        a = temp;
//    }
//    return a;
//}
//int main() {
//    int num1, num2;
//    printf("����������������");
//    scanf("%d %d", &num1, &num2);
//    int result = gcd(num1, num2);
//    printf("���Լ���ǣ�%d\n", result);
//    return 0;
//}

//����

//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0, save = 0;
//	scanf("%d%d", &a, &b);
//	while (b != 0)
//	{
//		save = b;
//		b = a % b;
//		a = save;
//	}
//	printf("%d", a);
//	return 0;
//}