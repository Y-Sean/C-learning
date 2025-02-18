//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include"directory.h"
//
//void menu()
//{
//	printf("**************************\n");
//	printf("****  1.add    2.del  ****\n");
//	printf("****  3.find   4.modi ****\n");
//	printf("****  5.show   6.sort ****\n");
//	printf("****  7.empt   0.exit ****\n");
//	printf("**************************\n");
//}
//
////void test()
////{
////	int input = 0;
////	Directory dir;
////	//初始化
////	InitDirectory(&dir);
////	do
////	{
////		menu();
////		printf("请输入你的选项:>");
////		scanf("%d", &input);
////		switch (input)
////		{
////		case 1:
////			AddDirectory(&dir);
////			break;
////		case 2:
////			DelDirectory(&dir);
////			break;
////		case 3:
////			FindDirectory(&dir);
////			break;
////		case 4:
////			ModiDirectory(&dir);
////			break;
////		case 5:
////			ShowDirectory(&dir);
////			break;
////		case 6:
////			SortDirectory(&dir);
////			break;
////		case 7:
////			EmptyDirectory(&dir);
////			break;
////		case 0:
////			printf("退出电话簿\n");
////			break;
////		default:
////			printf("输入不合法，请重新输入!\n");
////			break;
////		}
////	} while (input);
////}
//
//void test1()
//{
//	int input = 0;
//	Directory dir;
//	//初始化
//	InitDirectory(&dir);
//	void (*pf[8])(Directory*) = { NULL ,AddDirectory,DelDirectory ,FindDirectory ,ModiDirectory ,ShowDirectory ,SortDirectory ,EmptyDirectory };
//	do
//	{
//		menu();
//		printf("请输入你的选项:>");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("退出电话簿\n");
//		}
//		else if (input >= 1 && input <= 6)
//		{
//			pf[input](&dir);
//		}
//		else
//		{
//			printf("输入不合法，请重新输入!\n");
//		}
//	} while (input);
//}
//
////int main()
////{
////	test1();
////	return 0;
////}