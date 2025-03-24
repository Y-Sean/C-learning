/*写一个宏，计算结构体中某变量相对于首地址的偏移，并给出说明
考察：offsetof宏的实现*/

//#define OFFSETOF(type,x) (size_t)&(((type*)0)->x)
//#include<stdio.h>
////#include<stddef.h>
//struct stu
//{
//	int num;
//	char sex;
//	int score;
//};
//
//int main()
//{
//	printf("%d\n", (int)OFFSETOF(struct stu, num));
//	printf("%d\n", (int)OFFSETOF(struct stu, sex));
//	printf("%d\n", (int)OFFSETOF(struct stu, score));
//	return 0;
//}

// 写一个宏，可以将一个整数的二进制位的奇数位和偶数位交换。
//#define SWAP(x) x=(((x & 0x55555555) << 1) | ((x & 0xAAAAAAAA) >> 1))
//
//#include<stdio.h>
//
//int main()
//{
//	int a = 5;
//	// 0000 0000 0000 0000 0000 0000 0000 0101
//	SWAP(a);
//	// 0000 0000 0000 0000 0000 0000 0000 1010
//	printf("%d\n", a);
//	printf("%x\n", a);
//	return 0;
//}

//#define ISMAX(TYPE,X,Y) X>Y?X:Y
////type，在使用时，可以改变参数，适应不同的数据类型
//#define PRINTF(FORMAT,VALUE) \
//			printf("两者间的最大值为"FORMAT"\n",VALUE)
////format，宏替换时，参数中的格式说明符,是字符串，要有双引号
//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 6;
//	PRINTF("%d", ISMAX(int, a, b));
//
//	double c = 3.14;
//	double d = 5.3;
//	PRINTF("%.2f", ISMAX(double, c, d));
//	return 0;
//}

//#define PRINT(FORMAT,VALUE)\
//	printf("the value of " #VALUE " is "FORMAT"\n",VALUE)
//#include<stdio.h>
//int main()
//{
//	int i = 7;
//	PRINT("%d", i);
//	return 0;
//}

/*还有其他符号
__FUNCTION__	//
__LINE__
__DATA__
__TIME__
__STDC__
*/