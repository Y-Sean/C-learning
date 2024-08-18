#define _CRT_SECURE_NO_WARNINGS 1
//猜数游戏
#include<time.h>
#include<stdlib.h>
#include<stdio.h>

//void munu()
//{
//	printf("************************\n");
//	printf("****    1.play      ****\n");
//	printf("****                ****\n");
//	printf("****    0.exit      ****\n");
//	printf("************************\n");
//}
//
//void game()
//{
//	int guess = 0;
//	int num = rand() % 100 + 1;
//	printf("请猜100以内的数字:>\n");
//	while (1)
//	{
//		scanf("%d", &guess);
//		if (guess > num)
//			printf("太大了，再猜猜看\n");
//		else if (guess < num)
//			printf("太小了，再猜猜看\n");
//		else
//		{
//			printf("恭喜你，猜对了！\n");
//			Sleep(2000);
//			system("cls");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	//菜单界面
//	int input = 0;
//	//产生一个随机数,循环外
//	srand(time(NULL));
//again:
//	munu();
//	scanf("%d", &input);
//	system("cls");
//	//根据选项进入相应界面
//	switch (input)
//	{
//	case(1):
//		//游戏主体
//		game();
//		goto again;
//	case(0):
//		printf("欢迎下次体验\n");
//		break;
//	default:
//		printf("输入错误，请重新输入\n");
//		system("cls");
//		goto again;
//	}
//	return 0;
//}

//goto在输入1，和重新输入环节，回到开始菜单。用循环语句也可以


//void munu()
//{
//	printf("************************\n");
//	printf("****    1.play      ****\n");
//	printf("****                ****\n");
//	printf("****    0.exit      ****\n");
//	printf("************************\n");
//}
//
//void game()
//{
//	int guess = 0;
//	int num = rand() % 100 + 1;
//	printf("请猜100以内的数字:>\n");
//	while (1)
//	{
//		scanf("%d", &guess);
//		if (guess > num)
//			printf("太大了，再猜猜看\n");
//		else if (guess < num)
//			printf("太小了，再猜猜看\n");
//		else
//		{
//			printf("恭喜你，猜对了！\n");
//			Sleep(2000);
//			system("cls");
//			break;
//		}
//	}
//}
//int main()
//{
//	//菜单界面
//	int input = 0;
//	//产生一个随机数,循环外
//	srand(time(NULL));
//	while (1)
//	{
//		munu();
//		scanf("%d", &input);
//		system("cls");
//		//根据选项进入相应界面
//		switch (input)
//		{
//		case(1):
//			//游戏主体
//			game();
//			break;
//		case(0):
//			printf("欢迎下次体验\n");
//			Sleep(1000);
//			system("cls");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			system("cls");
//		}
//	}
//	return 0;
//}

//改为游戏环节循环后，发现输入1，和重新输入环节适应情景；但是退出环节在套了循环后，就不能
//退出了。因为套了两层结构体，用两次goto还可以。也可以在循环里面的推退出环节弄个goto跳出
//循环。



//以下是老师讲的代码
void menu()
{
	printf("**************************\n");
	printf("******    1. play   ******\n");
	printf("******    0. exit   ******\n");
	printf("**************************\n");
}

//rand函数是专门用来生成随机数的
//rand函数返回的是0~RAND_MAX(32767)之间的一个随机数
//#define RAND_MAX 0x7fff
//

//
//rand函数在使用之前要使用一个srand函数来设置随机数的生成器
//srand函数在程序中只要调用一次就可以了，不需要频繁调用
//

//
//时间戳
//C语言中，time函数会返回时间戳
//
//NULL - 空指针
//
void game()
{
	int num = 0;
	//1. 生成随机数
	int ret = rand()%100+1;
	//printf("%d\n", ret);
	//2. 猜数字

	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &num);
		if (num < ret)
		{
			printf("猜小了\n");
		}
		else if (num > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		//打印菜单
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//game函数中是猜数字的整个路基逻辑
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);

	return 0;
}

//老师用的do循环，把退出环节作为判断条件，挺好使