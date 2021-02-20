#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int num;
	printf("请输入一个数:\n");
	scanf("%d", &num);
	if (0 == num % 2)
	{
		printf("%d为偶数\n", num);
	}
	else
	{
		printf("%d为奇数\n", num);
	}
	return 0;
}
