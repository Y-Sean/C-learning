#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define Row 3
#define Col 3

void menu()
{
	printf("************************************\n");
	printf("********    1.  play     ***********\n");
	printf("********    0.  exit     ***********\n");
	printf("************************************\n");
}

void init(char chess[Row][Col], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			chess[i][j] = ' ';
		}
	}
}

void print(char chess[Row][Col], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", chess[i][j]);
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

void player_move(char chess[Row][Col], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入你想走的坐标:>");
		scanf("%d %d", &x, &y);
		if (x <= 1 && x >= row || y <= 1 && y >= col)
			printf("输入不合法，请重新输入!\n");
		else
		{
			if (chess[x - 1][y - 1] == ' ')
			{
				chess[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该位置已被占领，请重新输入\n");
			}
		}
	}
}

void computer_move(char chess[Row][Col], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走;>\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (chess[x][y] == ' ')
		{
			chess[x][y] = '#';
			break;
		}
	}
}

int is_full(char chess[Row][Col], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (chess[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

char is_win(char chess[Row][Col], int row, int col)
{
	//4种情况：玩家胜利，电脑胜利，平局，继续游戏(玩家和电脑的胜利可以通过：行或列连成线，交叉线 来判断)

	//行连成线
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (chess[i][1] == chess[i][0] && chess[i][1] == chess[i][2] && chess[i][1] != ' ')
			return chess[i][1];
	}

	//列连成线
	for (i = 0; i < col; i++)
	{
		if (chess[1][i] == chess[0][i] && chess[1][i] == chess[2][i] && chess[1][i] != ' ')
			return chess[1][i];
	}

	//交叉线
	if (chess[0][0] == chess[1][1] && chess[1][1] == chess[2][2] && chess[1][1] != ' ')
		return chess[1][1];
	if (chess[2][0] == chess[1][1] && chess[1][1] == chess[0][2] && chess[1][1] != ' ')
		return chess[1][1];

	//平局
	if (is_full(chess, Row, col))
		return 'Q';

	//继续游戏
	return 'C';
}

void game()
{
	char chess[Row][Col] = { 0 };

	//初始化棋盘
	init(chess, Row, Col);

	//打印棋盘
	print(chess, Row, Col);

	//玩家移动函数
	player_move(chess, Row, Col);
	print(chess, Row, Col);//打印更新棋局

	//电脑移动函数
	computer_move(chess, Row, Col);
	print(chess, Row, Col);//打印更新棋局

	while (1)
	{
		//玩家移动函数
		player_move(chess, Row, Col);
		print(chess, Row, Col);//打印更新棋局

		//is_win(chess, Row, Col);判断局势
		//如果平局或者某方胜利，需要跳出循环
		if (is_win(chess, Row, Col) != 'C')
			break;

		//电脑移动函数
		computer_move(chess, Row, Col);
		print(chess, Row, Col);//打印更新棋局

		if (is_win(chess, Row, Col) != 'C')
			break;
	}
	if (is_win(chess, Row, Col) == 'Q')
		printf("此局平局\n");
	else if (is_win(chess, Row, Col) == '#')
		printf("电脑胜利\n");
	else if (is_win(chess, Row, Col) == '*')
		printf("玩家胜利\n");
}

void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请输入你的选项:>");
		scanf("%d", &input);
		//switch控制语句
		switch (input)
		{
		case 1:
			printf("开始游戏\n");
			//游戏主体
			game();
			break;
		case 0:
			printf("感谢使用\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
	} while (input != 0);
}

int main()
{
	srand(time(NULL));
	test();
	return 0;
}