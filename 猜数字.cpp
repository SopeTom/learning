#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
void menu()
{
	printf("**********************************\n");
	printf("******     ������С��Ϸ     ******\n");
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
		printf("\n���������²������:>");
		scanf("%d", &guess);
		if (guess > random_num)
		{
			printf("     \n\n�´���\n\n");
		}
		else if (guess < random_num)
		{
			printf("      \n\n��С��\n\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			printf("3��󷵻�������");
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
		printf("����������ѡ�������:>");
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
			printf("����ָ����������������\n");
			break;

		}
	} while (input);
		return 0;
}