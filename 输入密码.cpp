#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
int main()
{
	int i = 0;
	char password[20];
	char password1[20];
	for (;;)
	{
		printf("请创建你的密码:> ");
		scanf("%s", &password);
		printf("请确认你的密码:> ");
		scanf("%s", &password1);
		system("cls");
		if (strcmp(password, password1) == 0)
		{
			break;
		}
		printf("两次密码不相符，请确认清楚后输入\n");
	}
	for (i = 0;i <= 3;i++)
	{
		printf("请输入你的密码:> ");
		scanf("%s", &password1);
		if (strcmp(password, password1) == 0)
		{
			printf("您输入的密码正确，3秒后关闭页面");
			Sleep(3000);
			break;
		}
		else
		{
			system("cls");
			printf("您输入的密码有误，请重新确认后输入\n");
		}

	}
	if(i >= 3)
	{
		system("cls");
		printf("多次输入密码错误，已退出输入登陆系统");
	}
	return 0;
}