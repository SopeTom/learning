#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 0;i <= 100;i++)
	{
		if (i % 10 == 9)
		{
			printf("%d   ", i);
			count++;
		}
		if(i/10 == 9)
		{
			printf("%d   ", i);
			count++;
		}
	}
	printf("\n1-100一共有 %d 个数字9", count);
	return 0;
}