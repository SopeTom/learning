#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int year = 0;
	int count = 0;
	printf("1000��2000���������:> ");
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
	printf("\n1000��2000�������һ����:> %d", count);
	return 0;
}