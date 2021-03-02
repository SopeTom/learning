#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
void menu()
{
	printf("**********************************\n");
	printf("******     猜数字小游戏     ******\n");
	printf("**********************************\n");
	printf("**********************************\n");
	printf("**   1.PLAY   ******   0.EXIT   **\n");
	printf("**********************************\n");
}
void game()
{
	int random_num = rand() % 100 + 1;
	int guess = 0;
	while (1)
	{
		printf("\n请输入您猜测的数字:>");
		scanf("%d", &guess);
		if (guess > random_num)
		{
			printf("     \n\n猜大了\n\n");
		}
		else if (guess < random_num)
		{
			printf("      \n\n猜小了\n\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			printf("3秒后返回主界面");
			Sleep(3000);
			system("cls");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请输入您所选项的数字:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			system("cls");
			printf("输入指令有误，请重新输入\n");
			break;

		}
	} while (input);
		return 0;
}