#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int num;
	printf("������һ����:\n");
	scanf("%d", &num);
	if (0 == num % 2)
	{
		printf("%dΪż��\n", num);
	}
	else
	{
		printf("%dΪ����\n", num);
	}
	return 0;
}
