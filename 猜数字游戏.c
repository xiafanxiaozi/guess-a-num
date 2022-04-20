#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//猜数字游戏
//1.自动产生1-100随机数
//2.猜数字
//	a.猜对了，恭喜你，游戏结束
//	b.你猜错了，会告诉你猜大了还是猜小了，继续猜，直到猜对
//3.游戏可以一直玩，除非退出游戏


void menu()
{
	printf("********************\n");
	printf("****** 1.play ******\n");
	printf("****** 0.exit ******\n");
	printf("********************\n");
}

void game()
{
	//猜数字游戏的实现
	//1. 生成随机数
	//时间 - 时间戳
	int ret = rand() % 100 + 1;//rand返回了一个0-32767(7FFF)之间的数字
	//printf("%d\n", ret);
	
	//2. 猜数字
	int guess = 0;
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess < ret) 
		{
			printf("猜小了\n");
		}
		else if(guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了!\n");
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
		menu();//打印菜单
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//printf("Game Start!\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
	return 0;
}