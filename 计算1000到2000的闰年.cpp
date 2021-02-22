#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int year = 0;
	int count = 0;
	printf("1000到2000年的闰年有:> ");
	for (year = 1000;year <= 2000;year++)
	{
		if (year % 4 == 0 && year % 100 != 0)
		{
			printf("%d  ", year);
			count++;
		}
		else if (year % 400 == 0)
		{
			printf("%d  ", year);
			count++;
		}
	}
	printf("\n1000到2000年的闰年一共有:> %d", count);
	return 0;
}