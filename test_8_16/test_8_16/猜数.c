#define _CRT_SECURE_NO_WARNINGS 1
//������Ϸ


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
	printf("���100���ڵ�����:>\n");
	while (1)
	{
		scanf("%d", &guess);
		if (guess > num)
			printf("̫���ˣ��ٲ²¿�\n");
		else if (guess < num)
			printf("̫С�ˣ��ٲ²¿�\n");
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
			Sleep(2000);
			system("cls");
			break;
		}
	}
}
int main()
{
	//�˵�����
	int input = 0;
	//����һ�������,ѭ����
	srand(time(NULL));

again:
	munu();
	scanf("%d", &input);
	system("cls");
	//����ѡ�������Ӧ����
	switch (input)
	{
	case(1):
		//��Ϸ����
		game();
		goto again;
	case(2):
		printf("��ӭ�´�����\n");
		break;
	default:
		printf("�����������������\n");
		system("cls");
		goto again;
	}
	return 0;
}