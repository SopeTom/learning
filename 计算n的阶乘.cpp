#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	/*int num1 = 0;
	int num2 = 1;
	int sum = 1;
	printf("请输入需要求阶乘的数 ");
	scanf("%d", &num1);
	for (num2 = 1;num2<=num1;num2++)
	{
		sum=num2*sum;
	}
	printf("%d的阶乘是%d", num1, sum);*/
	int i = 0;
	int u = 1;
	int sum = 1;
	printf("请输入需要要求阶乘的数 ");
	scanf("%d", &i);
	while (u <= i)
	{
		sum = u * sum;
		u++;
	}
	printf("%d的阶乘为%d", i, sum);
	return 0;



}