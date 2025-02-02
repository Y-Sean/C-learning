#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define Row 9
#define Col 9
#define Rows Row+2
#define Cols Col+2
#define Easy 10

//需要特别考虑的扫雷各部分函数的声明和空定义
void init(char arr[Rows][Cols], int rows, int cols, char set);
void print(char arr[Rows][Cols], int row, int col);
void setmine(char mine[Rows][Cols], int row, int col, int minecount);
void sweeping(char mine[Rows][Cols], char minesweeper[Rows][Cols], int row, int col);

void init(char arr[Rows][Cols], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			arr[i][j] = set;
		}
	}
}

void print(char arr[Rows][Cols], int row, int col)
{
	printf("-----  扫雷  ------\n");
	int i = 0;
	int j = 0;
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
	printf("-------------------\n");
}

void setmine(char mine[Rows][Cols], int row, int col, int minecount)
{
	int x = 0;
	int y = 0;
	while (minecount > 0)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			minecount--;
			mine[x][y] = '1';
			continue;
		}
	}
}

int showcount(char mine[Rows][Cols], int row, int col, int x, int y)
{
	return(mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1]
		+ mine[x][y - 1] + mine[x][y + 1]
		+ mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0');
}

void sweeping(char mine[Rows][Cols], char minesweeper[Rows][Cols], int row, int col)
{
	printf("请输入你想排查雷的坐标:>");
	int x = 0;
	int y = 0;
	int totalchess = Row * Col;
	while (totalchess - Easy)
	{
		scanf("%d %d", &x, &y);
		if (minesweeper[x][y] != '*')
		{
			printf("该坐标已经被排查过了！\n");
			continue;
		}
		if (x <= 0 && x >= 9 || y <= 0 && y >= 9)
		{
			printf("输入不合法，请重新输入;>");
			break;
		}
		if (mine[x][y] == '1')
		{
			printf("很遗憾，你踩雷了。\n");
			print(mine, Row, Col);
			break;
		}
		else
		{
			totalchess--;
			minesweeper[x][y] = showcount(mine, Row, Col, x, y) + '0';
			print(minesweeper, Row, Col);
		}
	}
	if (totalchess - Easy == 0)
		printf("恭喜你，扫雷成功！\n");
}

void menu()
{
	printf("************************\n");
	printf("*****  1. Play   *******\n");
	printf("*****  0. Exit   *******\n");
	printf("************************\n");
	printf("请输入你的选择:>");
}

void game()
{
	printf("开始游戏\n");
	char mine[Rows][Cols] = { 0 };
	char minesweeper[Rows][Cols] = { 0 };
	//初始化棋盘
	init(mine, Rows, Cols, '0');
	init(minesweeper, Rows, Cols, '*');

	//打印棋盘
	//print(mine, Row, Col);
	print(minesweeper, Row, Col);

	//设置雷
	setmine(mine, Row, Col, Easy);
	//print(mine, Row, Col);

	//逐步扫雷
	sweeping(mine, minesweeper, Row, Col);
}

void test()
{
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("欢迎再次体验\n");
			break;
		default:
			printf("输入非法，请重新输入\n");
		}
	} while (input);
}

int main()
{
	srand((unsigned int)time(NULL));
	test();
	return 0;
}