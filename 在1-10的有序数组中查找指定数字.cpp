#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 0;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("请输入要查找的数字 ");
	scanf("%d", &k);
	for (i = 0;i < sz;i++)
	{
		if (k == arr[i])
		{
			printf("%d 的下标为 %d\n", k, i);
			break;
		}
	}
	if (i == sz)
	{
		printf("数组中没有要查找的数字 %d\n", k);
	}
	return 0;
}