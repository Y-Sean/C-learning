//#define _CRT_SECURE_NO_WARNINGS 1
//#include"game2.h"
//
//void menu()
//{
//	printf("************************\n");
//	printf("*****  1. Play   *******\n");
//	printf("*****  0. Exit   *******\n");
//	printf("************************\n");
//	printf("请输入你的选择:>");
//}
//
//void game()
//{
//	printf("开始游戏\n");
//	char mine[Rows][Cols] = { 0 };
//	char minesweeper[Rows][Cols] = { 0 };
//	//初始化棋盘
//	init(mine, Rows, Cols, '0');
//	init(minesweeper, Rows, Cols, '*');
//
//	//打印棋盘
//	print(mine, Row, Col);
//	//print(minesweeper, Row, Col);
//
//	//设置雷
//	setmine(mine, Row, Col, Easy);
//	print(mine, Row, Col);
//
//	//逐步扫雷
//	sweeping(mine, minesweeper, Row, Col);
//}
//
//void test()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("欢迎下次体验\n");
//			break;
//		default:
//			printf("输入不合法，请重新输入\n");
//		}
//	} while (input);
//}
//
////int main()
////{
////	test();
////	return  0;
////}