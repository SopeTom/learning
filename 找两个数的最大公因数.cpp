#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int u = 0;
	int i = 0;
	int temp = 0;
	int n = 0;
	int m = 0;
	printf("��������Ҫ�������Լ����������:>");
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
	printf("%d��%d����С������Ϊ%d", n, m, i);
	return 0;
}