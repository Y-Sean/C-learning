#define _CRT_SECURE_NO_WARNINGS 1
//������Ϸ
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
//	printf("���100���ڵ�����:>\n");
//	while (1)
//	{
//		scanf("%d", &guess);
//		if (guess > num)
//			printf("̫���ˣ��ٲ²¿�\n");
//		else if (guess < num)
//			printf("̫С�ˣ��ٲ²¿�\n");
//		else
//		{
//			printf("��ϲ�㣬�¶��ˣ�\n");
//			Sleep(2000);
//			system("cls");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	//�˵�����
//	int input = 0;
//	//����һ�������,ѭ����
//	srand(time(NULL));
//again:
//	munu();
//	scanf("%d", &input);
//	system("cls");
//	//����ѡ�������Ӧ����
//	switch (input)
//	{
//	case(1):
//		//��Ϸ����
//		game();
//		goto again;
//	case(0):
//		printf("��ӭ�´�����\n");
//		break;
//	default:
//		printf("�����������������\n");
//		system("cls");
//		goto again;
//	}
//	return 0;
//}

//goto������1�����������뻷�ڣ��ص���ʼ�˵�����ѭ�����Ҳ����


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
//	printf("���100���ڵ�����:>\n");
//	while (1)
//	{
//		scanf("%d", &guess);
//		if (guess > num)
//			printf("̫���ˣ��ٲ²¿�\n");
//		else if (guess < num)
//			printf("̫С�ˣ��ٲ²¿�\n");
//		else
//		{
//			printf("��ϲ�㣬�¶��ˣ�\n");
//			Sleep(2000);
//			system("cls");
//			break;
//		}
//	}
//}
//int main()
//{
//	//�˵�����
//	int input = 0;
//	//����һ�������,ѭ����
//	srand(time(NULL));
//	while (1)
//	{
//		munu();
//		scanf("%d", &input);
//		system("cls");
//		//����ѡ�������Ӧ����
//		switch (input)
//		{
//		case(1):
//			//��Ϸ����
//			game();
//			break;
//		case(0):
//			printf("��ӭ�´�����\n");
//			Sleep(1000);
//			system("cls");
//			break;
//		default:
//			printf("�����������������\n");
//			system("cls");
//		}
//	}
//	return 0;
//}

//��Ϊ��Ϸ����ѭ���󣬷�������1�����������뻷����Ӧ�龰�������˳�����������ѭ���󣬾Ͳ���
//�˳��ˡ���Ϊ��������ṹ�壬������goto�����ԡ�Ҳ������ѭ����������˳�����Ū��goto����
//ѭ����



//��������ʦ���Ĵ���
void menu()
{
	printf("**************************\n");
	printf("******    1. play   ******\n");
	printf("******    0. exit   ******\n");
	printf("**************************\n");
}

//rand������ר�����������������
//rand�������ص���0~RAND_MAX(32767)֮���һ�������
//#define RAND_MAX 0x7fff
//

//
//rand������ʹ��֮ǰҪʹ��һ��srand�����������������������
//srand�����ڳ�����ֻҪ����һ�ξͿ����ˣ�����ҪƵ������
//

//
//ʱ���
//C�����У�time�����᷵��ʱ���
//
//NULL - ��ָ��
//
void game()
{
	int num = 0;
	//1. ���������
	int ret = rand()%100+1;
	//printf("%d\n", ret);
	//2. ������

	while (1)
	{
		printf("�������:>");
		scanf("%d", &num);
		if (num < ret)
		{
			printf("��С��\n");
		}
		else if (num > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
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
		//��ӡ�˵�
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//game�������ǲ����ֵ�����·���߼�
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);

	return 0;
}

//��ʦ�õ�doѭ�������˳�������Ϊ�ж�������ͦ��ʹ