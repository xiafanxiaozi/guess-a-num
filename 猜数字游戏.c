#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//��������Ϸ
//1.�Զ�����1-100�����
//2.������
//	a.�¶��ˣ���ϲ�㣬��Ϸ����
//	b.��´��ˣ��������´��˻��ǲ�С�ˣ������£�ֱ���¶�
//3.��Ϸ����һֱ�棬�����˳���Ϸ


void menu()
{
	printf("********************\n");
	printf("****** 1.play ******\n");
	printf("****** 0.exit ******\n");
	printf("********************\n");
}

void game()
{
	//��������Ϸ��ʵ��
	//1. ���������
	//ʱ�� - ʱ���
	int ret = rand() % 100 + 1;//rand������һ��0-32767(7FFF)֮�������
	//printf("%d\n", ret);
	
	//2. ������
	int guess = 0;
	while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess < ret) 
		{
			printf("��С��\n");
		}
		else if(guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���!\n");
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
		menu();//��ӡ�˵�
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//printf("Game Start!\n");
			game();
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