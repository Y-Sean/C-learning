#define _CRT_SECURE_NO_WARNINGS 1
//�ж�һ�������Ƿ���5����
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 5 == 0)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}

//��֪һ������y = f(x)����x < 0ʱ��y = 1����x = 0ʱ��y = 0����x > 0ʱ��y = -1��
//#include<stdio.h>
//int main()
//{
//	int x = 0, y = 0;
//	scanf("%d",& x);
//	if (x == 0)
//		printf("0\n");
//	else if (x > 0)
//		printf("-1\n");
//	else
//		printf("1\n");
//	return 0;
//}




//������������a��b(0 < a, b < 10, 000)������a����b�������̺�������
//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d %d", a / b, a % b);
//	return 0;
//}

//дһ�����������������Ľϴ�ֵ
//#include<stdio.h>
//int compare(int a, int b)
//{
//	return a > b ? a : b;
//}
//int main()
//{
//	int x = 0, y = 0;
//	scanf("%d%d", &x, &y);
//	printf("%d", compare(x, y));
//	return 0;
//}


//����ȴ�С
//#include <stdio.h>
//int main() {
//    int a = 0, b = 0;
//    while (2 == scanf("%d %d", &a, &b))
//    {
//        if (a > b)
//            printf("%d>%d\n", a, b);
//        else if (a == b)
//            printf("%d=%d\n", a, b);
//        else
//            printf("%d<%d\n", a, b);
//    }
//    return 0;
//}

//�������룬�ж���ż
//#include <stdio.h>
//int main() {
//    int a = 0;
//    while (scanf("%d", &a)!=EOF)
//    {
//        if (a % 2 == 0)
//            printf("Even\n");
//        else
//            printf("Odd\n");
//    }
//    return 0;
//}


//KiKi��֪�����Ŀ��Է����Ƿ�ͨ����������жϡ��Ӽ�����������һ��������ʾ�ķ���������жϸ÷����Ƿ��ڼ���Χ�ڣ�������񣬼����������ڵ���60�֣��������Pass�������������Fail����
//����������
//�������룬ÿ���������һ��������ʾ�ķ�����0~100����
//#include<stdio.h>
//int main()
//{
//	int a;
//	while (scanf("%d", &a) != EOF)
//	{
//		if (a < 60)
//			printf("Fail\n");
//		else
//			printf("Pass\n");
//	}
//	return 0;
//}


//KiKi��֪�����Ŀ��Գɼ��Ƿ�������������жϡ��Ӽ�������һ��������ʾ�ĳɼ�������жϳɼ��Ƿ���90~100֮�䣬������������Perfect����
//#include<stdio.h>
//int main()
//{
//	int a;
//	while (scanf("%d", &a) != EOF)
//	{
//		if (a>=90&&a <= 100)
//			printf("Perfect\n");
//		
//	}
//	return 0;
//}