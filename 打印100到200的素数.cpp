#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
	int i = 0;
	int count = 0;		
	int u = 0;

	printf("以下为 100 到 200 的素数:  ");
	for (i = 101;i <= 200;i+=2)
	{


		for (u = 2;u <= sqrt(i);u++)
		{
			if (i % u == 0)
			{
				break;
			}
		}
		if (u > sqrt(i))
		{
			printf("%d   ", i);
			count++;
		}
	}
	printf("\n在 100 到 200 间的素数有 %d 个", count);
	return 0;
}