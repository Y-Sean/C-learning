#define _CRT_SECURE_NO_WARNINGS 1
//猜数游戏


#include<time.h>
#include<stdlib.h>
#include<stdio.h>

void munu()
{
	printf("************************\n");
	printf("****    1.play      ****\n");
	printf("****                ****\n");
	printf("****    2.exit      ****\n");
	printf("************************\n");
}

void game()
{
	int guess = 0;
	int num=rand()%100+1;
	printf("请猜100以内的数字:>\n");
	while (1)
	{
		scanf("%d", &guess);
		if (guess > num)
			printf("太大了，再猜猜看\n");
		else if (guess < num)
			printf("太小了，再猜猜看\n");
		else
		{
			printf("恭喜你，猜对了！\n");
			Sleep(2000);
			system("cls");
			break;
		}
	}
}
int main()
{
	//菜单界面
	int input = 0;
	//产生一个随机数,循环外
	srand(time(NULL));

again:
	munu();
	scanf("%d", &input);
	system("cls");
	//根据选项进入相应界面
	switch (input)
	{
	case(1):
		//游戏主体
		game();
		goto again;
	case(2):
		printf("欢迎下次体验\n");
		break;
	default:
		printf("输入错误，请重新输入\n");
		system("cls");
		goto again;
	}
	return 0;
}