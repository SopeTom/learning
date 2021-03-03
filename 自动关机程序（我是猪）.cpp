#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
	char input[10] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{
		printf("您的电脑将在60秒内关机,输入“我是猪”即可取消关机\n请输入>:");
		scanf("%s", &input);
		if (0 != strcmp(input, "我是猪"))
		{
			printf("指令错误，请输入“我是猪”来取消关机");
		}
		else
		{
			printf("输入正确，系统已取消关机\n本页面将在3秒后自动关闭");
			system("shutdown -a");
			Sleep(3000);
			break;
		}
	}
	return 0;
}

