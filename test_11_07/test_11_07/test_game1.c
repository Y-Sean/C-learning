#include"game1.h"

void menu()
{
	printf("*****************************\n");
	printf("*******   1. Play     *******\n");
	printf("*******   0. Exit     *******\n");
	printf("*****************************\n");
}

void game()
{
	//创建3*3的数组
	char arr[Row][Col] = { 0 };
	//初始化空格
	init(arr, Row, Col);
	print(arr, Row, Col);
	//
	player_move(arr, Row, Col);
	print(arr, Row, Col);
	computer_move(arr, Row, Col);
	print(arr, Row, Col);
	while (1)
	{
		player_move(arr, Row, Col);
		print(arr, Row, Col);
		if (is_win(arr, Row, Col) != 'C')
			break;
		computer_move(arr, Row, Col);
		print(arr, Row, Col);
		if (is_win(arr, Row, Col) != 'C')
			break;
	}
	if (is_win(arr, Row, Col) == 'Q')
		printf("本剧平局\n");
	else if (is_win(arr, Row, Col) == '#')
		printf("电脑胜利\n");
	else if (is_win(arr, Row, Col) == '*')
		printf("玩家胜利\n");
}

void test()
{
	srand((unsigned int)time(NULL));//执行一次就行
	int input = 0;
	do
	{
		menu();
		printf("请输入你的选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("开始游戏\n");
			game();
			break;
		case 0:
			printf("欢迎下次体验\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
	} while (input != 0);
}

int main()
{
	test();
	return 0;
}