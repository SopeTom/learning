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
		printf("�봴���������:> ");
		scanf("%s", &password);
		printf("��ȷ���������:> ");
		scanf("%s", &password1);
		system("cls");
		if (strcmp(password, password1) == 0)
		{
			break;
		}
		printf("�������벻�������ȷ�����������\n");
	}
	for (i = 0;i <= 3;i++)
	{
		printf("�������������:> ");
		scanf("%s", &password1);
		if (strcmp(password, password1) == 0)
		{
			printf("�������������ȷ��3���ر�ҳ��");
			Sleep(3000);
			break;
		}
		else
		{
			system("cls");
			printf("���������������������ȷ�Ϻ�����\n");
		}

	}
	if(i >= 3)
	{
		system("cls");
		printf("�����������������˳������½ϵͳ");
	}
	return 0;
}