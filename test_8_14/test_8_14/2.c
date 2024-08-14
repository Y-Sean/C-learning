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
//}死循环


//写一个代码打印1-100之间所有3的倍数的数字
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


//写代码将三个整数数按从大到小输出。
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
//}没有break，就一直运行到结尾。


//打印100~200之间的素数
//素数又称质数，是指在大于1的自然数中，除了1和它自身外，不能被其他自然数整除的数。
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


//打印1000年到2000年之间的闰年
//闰年可以被4整除；可以被100整除且被400整除
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


/*给定两个数，求这两个数的最大公约数
例如：
输入：20 40 
输出：20*/
//最大公约数，也称最大公因数、最大公因子，指两个或多个整数共有约数中最大的一个。

//1.定义法

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

//2.辗转相除法

/*用较大数除以较小数，再用出现的余数（第一余数）去除除数，再用出现的余数（第二余数）去除
第一余数，如此反复，直到最后余数是 0 为止。此时的除数就是这两个数的最大公约数。
	例如：求 24 和 36 的最大公约数，36÷24 = 1……12，24÷12 = 2，余数为 0，所以 24 和 36 
的最大公约数是 12。*/

//(1)第一次思考，比较在意大小

//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0, max = 0, min = 0;
//	scanf("%d%d", &a, &b);
//	max = a >= b ? a : b;
//	min = a >= b ? b : a;
//	int chu = 0, beichu = 0, storage = 0;
//	//被除数/除数=商……余数
//	//min，第一余数，第二余数……从min开始，做被除数依次与下一个数做上式。
//	beichu = min;
//	chu = max % min;
//	while (beichu % chu)        //（beichu % chu）表示下一个余数，也就是被除数
//	{                           //故可把被除数是否为0，作为循环条件
//		storage = beichu % chu;
//		beichu = chu;
//		chu = storage;
//	}
//	printf("%d", chu);
//	return 0;
//}


//（2）不用在意大小

//6/4=1……2，4/2=2……0；
//4/6=0……4，6/4=1……2，4/2=2……0
//可看出此种交替不考虑大小

//#include <stdio.h>
//int gcd(int a, int b) 
//{
//    while (b != 0) //a是被除数，b是除数，temp是储存量
//    {
//        int temp = b;
//        b = a % b;
//        a = temp;
//    }
//    return a;
//}
//int main() {
//    int num1, num2;
//    printf("请输入两个整数：");
//    scanf("%d %d", &num1, &num2);
//    int result = gcd(num1, num2);
//    printf("最大公约数是：%d\n", result);
//    return 0;
//}

//化简

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