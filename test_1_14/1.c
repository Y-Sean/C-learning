#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include<assert.h>

//atoi将字符串转换为整数
//跳过字符串前面的空白符isspace，直到非space字符
//解释+—号
//可在整数字符后包含其他字符，但没效果
//无有效字符，不执行返回0

//int main()
//{
//	printf("%d\n", atoi("   12"));
//	printf("%d\n", atoi("\n"));
//	printf("%d\n", atoi("   2345678910"));//INT_MAX
//	printf("%d\n", atoi("   123456789100"));//不会超过INT_MAX
//	printf("%d\n", atoi("   a12"));//0
//	printf("%d\n", atoi("   "));//0
//	printf("%d\n", atoi("23"));
//	printf("%d\n", atoi("   +12"));
//	printf("%d\n", atoi("   +"));
//	printf("%d\n", atoi("   -12"));
//	printf("%d\n", atoi("   12afdf"));
//	printf("%d\n", INT_MAX);//2147483647
//	return 0;
//}

//模拟atoi
//#include<ctype.h>
//int my_atoi(const char* str)
//{
//	assert(str != NULL);
//
//	int result = 0;
//	int sign = 1;
//	const char* p = str;
//
//	// 跳过前导空白字符
//	while (isspace(*p))
//	{
//		p++;
//	}
//
//	// 处理可选的符号
//	if (*p == '-' || *p == '+')
//	{
//		if (*p == '-')
//		{
//			sign = -1;
//		}
//		p++;
//	}
//
//	// 将数字字符转换为整数
//	while (isdigit(*p))
//	{
//		result = result * 10 + (*p - '0');
//		p++;
//	}
//
//	return sign * result;
//}
//
//int main()
//{
//	printf("%d\n", my_atoi("   12"));
//	printf("%d\n", my_atoi("   2345678910"));
//	printf("%d\n", my_atoi("   1234567891"));
//	printf("%d\n", my_atoi("   a12"));
//	printf("%d\n", my_atoi("   "));
//	printf("%d\n", my_atoi("23"));
//	printf("%d\n", my_atoi("   +12"));
//	printf("%d\n", my_atoi("   -12"));
//	printf("%d\n", my_atoi("   12afdf"));
//	printf("%d\n", INT_MAX);
//	return 0;
//}