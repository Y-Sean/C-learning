#define _CRT_SECURE_NO_WARNINGS 1
/*
输入一个正整数n  (1 ≤ n ≤ 109)
输出描述：
输出一个值，为求和结果。*/
//#include<stdio.h>
//int main()
//{
//	long long sum = 0, n = 0;
//	scanf("%d", &n);
//	for (long long i = 1; i <= n; i++)
//		sum += i;
//	printf("%lld\n", sum);
//	return 0;
//}
//考虑输出范围，例如输入100000，输出超出了int类型

/*小乐乐学校教学楼的电梯前排了很多人，他的前面有n个人在等电梯。电梯每次可以乘坐12人，每次
上下需要的时间为4分钟（上需要2分钟，下需要2分钟）。请帮助小乐乐计算还需要多少分钟才能乘电
梯到达楼上。（假设最初电梯在1层）
输入描述：
输入包含一个整数n (0 ≤ n ≤ 109)

输出描述：
输出一个整数，即小乐乐到达楼上需要的时间。*/
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n <= 11)
//		printf("2\n");
//	else
//		printf("%d\n", 4 * ((n + 1) / 12) + 2);
//	return 0;
//}

//上题目中，  4 * (n + 1) / 12 + 2  
//当n=1000时，结果为335，但实际想要的是334
//1001/12=83，83*4+2=334，但是(1001/12)*4，即1001/3=333
//可见，计算的顺序很重要。要么分步，要么用上小括号