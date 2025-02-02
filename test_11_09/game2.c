//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include"game2.h"
//
//void init(char arr[Rows][Cols], int rows, int cols, char set)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < rows; i++)
//	{
//		for (j = 0; j < cols; j++)
//		{
//			arr[i][j] = set;
//		}
//	}
//}
//
//void print(char arr[Rows][Cols], int row, int col)
//{
//	printf("-----  扫雷  ------\n");
//	int i = 0;
//	int j = 0;
//	for (i = 0; i <= row; i++)
//	{
//		printf("%d ", i);
//	}
//	printf("\n");
//	for (i = 1; i <= row; i++)
//	{
//		printf("%d ", i);
//		for (j = 1; j <= col; j++)
//		{
//			printf("%c ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	printf("-------------------\n");
//}
//
//void setmine(char mine[Rows][Cols], int row, int col, int minecount)
//{
//	int x = 0;
//	int y = 0;
//	while (minecount > 0)
//	{
//		x = rand() % row + 1;
//		y = rand() % col + 1;
//		if (mine[x][y] == '0')
//		{
//			minecount--;
//			mine[x][y] = '1';
//			continue;
//		}
//	}
//}
//
//int showcount(char mine[Rows][Cols], int row, int col, int x, int y)
//{
//	return(mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1]
//		+ mine[x][y - 1] + mine[x][y + 1]
//		+ mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0');
//}
//
////向外拓展的条件：该方格不是雷
////停止递归的条件：
//// 1.碰到边界
//// 2.碰到周围有雷的格子
//
//void showaround(char mine[Rows][Cols], int row, int col, int x, int y)
//{
//}
//
//void sweeping(char mine[Rows][Cols], char minesweeper[Rows][Cols], int row, int col)
//{
//	printf("请输入你想排查雷的坐标:>");
//	int x = 0;
//	int y = 0;
//	int totalchess = Row * Col;
//	while (totalchess - Easy)
//	{
//		scanf("%d %d", &x, &y);
//		if (minesweeper[x][y] != '*')
//		{
//			printf("该坐标已经被排查过了！\n");
//			continue;
//		}
//		if (x <= 0 && x >= 9 || y <= 0 && y >= 9)
//		{
//			printf("输入不合法，请重新输入;>");
//			break;
//		}
//		if (mine[x][y] == '1')
//		{
//			printf("很遗憾，你踩雷了。\n");
//			print(mine, Row, Col);
//			break;
//		}
//		else
//		{
//			totalchess--;
//			minesweeper[x][y] = showcount(mine, Row, Col, x, y) + '0';
//			print(minesweeper, Row, Col);
//		}
//	}
//	if (totalchess - Easy == 0)
//		printf("恭喜你，扫雷成功！\n");
//}