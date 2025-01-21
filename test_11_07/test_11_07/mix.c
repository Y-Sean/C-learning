#define _CRT_SECURE_NO_WAARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define Row 3
#define Col 3

void init(char arr[Row][Col], int row, int col);
void print(char arr[Row][Col], int row, int col);
void computer_move(char arr[Row][Col], int row, int col);
void player_move(char arr[Row][Col], int row, int col);
char is_win(char arr[Row][Col], int row, int col);

void init(char arr[Row][Col], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			arr[i][j] = ' ';
		}
	}
}

void print(char arr[Row][Col], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", arr[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

void computer_move(char arr[Row][Col], int row, int col)
{
	printf("电脑走:\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (arr[x][y] == ' ')
		{
			arr[x][y] = '#';
			break;
		}
	}
}

void player_move(char arr[Row][Col], int row, int col)
{
	printf("请玩家输入要走的坐标:>");
	int x = 0;
	int y = 0;
	while (1)
	{
		scanf("%d %d", &x, &y);
		if (x <= 1 && x >= row || y <= 1 && y >= col)
			printf("输入不合法，请重新输入！\n");
		else if (arr[x - 1][y - 1] = ' ')
		{
			arr[x - 1][y - 1] = '*';
			break;
		}
	}
}

int is_full(char arr[Row][Col], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (arr[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

char is_win(char arr[Row][Col], int row, int col)
{
	//平局Q，继续C，玩家胜利*，电脑胜利--四种情况#
	int i = 0;

	//行连
	for (i = 0; i < row; i++)
	{
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][1] != ' ')
			return arr[i][1];
	}

	//列连
	for (i = 0; i < col; i++)
	{
		if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[1][i] != ' ')
			return arr[i][1];
	}

	//斜线连
	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[1][1] != ' ')
		return arr[1][1];
	else if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[1][1] != ' ')
		return arr[1][1];

	//平局
	if (is_full(arr, Row, Col))
		return 'Q';
	//继续游戏
	return 'C';
}

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