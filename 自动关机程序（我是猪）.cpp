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
		printf("���ĵ��Խ���60���ڹػ�,���롰����������ȡ���ػ�\n������>:");
		scanf("%s", &input);
		if (0 != strcmp(input, "������"))
		{
			printf("ָ����������롰��������ȡ���ػ�");
		}
		else
		{
			printf("������ȷ��ϵͳ��ȡ���ػ�\n��ҳ�潫��3����Զ��ر�");
			system("shutdown -a");
			Sleep(3000);
			break;
		}
	}
	return 0;
}

