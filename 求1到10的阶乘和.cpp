#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//int num1 = 0;
	//int num2 = 10;
	//int num3 = 1;
	//int num4 = 1;
	//int num5 = 1;
	//while (num3 <= num2)
	//{
	//	int num4 = 1;
	//	int num5 = 1;
	//	while (num4 <= num3)
	//	{
	//		num5 = num4 * num5;
	//		num4++;
	//	}
	//	num1 = num1 + num5;
	//	num3++;
	//}
	//printf("����1��10�ĳ˻���%d", num1);
	int i = 0;
	int n = 1;
	int ret = 1;
	int sum = 0;
	for (i = 10;n <= i;n++)
	{
		ret = ret * n;
		sum = ret + sum;
	}
	printf("%dΪ1��10�Ľ׳˺�", sum);
return 0;
}