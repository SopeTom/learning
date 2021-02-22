#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int u = 0;
	int i = 0;
	int temp = 0;
	int n = 0;
	int m = 0;
	printf("请输入需要查找最大公约数的两个数:>");
	scanf("%d%d", &u, &i);
	n = u;
	m = i;
	if (i > u)
	{
		temp = i;
		i = u;
		u = temp;
	}
	while(u%i)
	{
		temp = u % i;
		u = i;
		i = temp;
	}
	printf("%d 与 %d 的最小公因数为 %d", n, m, i);
	return 0;
}
