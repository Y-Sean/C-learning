#define _CRT_SECURE_NO_WARNINGS 1

/*�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������

���磺
���룺5  �����5
���룺10�� �����55
���룺2�� �����1*/
#include<stdio.h>

////int fib(int n)
////{
////	if (n > 2)
////		return fib(n - 1) + fib(n - 2);
////	else
////		return 1;
////}
//
//int fib(int n)
//{
//	int a = 1, b = 1, c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", fib(n));
//	return 0;
//}

/*�ַ������򣨵ݹ�ʵ�֣�

��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�

ʵ�֣��������ַ����е��ַ��������У����������ӡ��
Ҫ�󣺲���ʹ��C�������е��ַ�������������
����:char arr[] = "abcdef";
����֮����������ݱ�ɣ�fedcba*/

//void reverse_string(char* string)
//{
//	if (*string != '\0')
//		reverse_string(string+1);
//	printf("%c", *string);
//}
//
//
//
//int main()
//{
//	char string[20] = { 0 };
//	scanf("%s", string);
//	reverse_string(string);
//	return 0;
//}



//void fenjie(char* arr)
//{
//	if (*arr != '\0')
//		fenjie(arr+1);
//	printf("%c", *arr);
//
//}
//int main()
//{
//	char arr[] = "hello";
//	fenjie(arr);
//	return 0;
//}


/*��׳�
�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩*/

//int jiecheng(int n)
//{
//	if (n > 1)
//		return n * jiecheng(n - 1);
//	else
//		return 1;
//}

int jiecheng(int n)
{
	int prudoct=1;
	for (int i = 1; i <= n; i++)
		prudoct *= i;
	return prudoct;
}

int main()
{
	int n=0;
	scanf("%d", &n);
	printf("%d\n", jiecheng(n));
	return 0;
}