#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 0;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("������Ҫ���ҵ����� ");
	scanf("%d", &k);
	for (i = 0;i < sz;i++)
	{
		if (k == arr[i])
		{
			printf("%d ���±�Ϊ %d\n", k, i);
			break;
		}
	}
	if (i == sz)
	{
		printf("������û��Ҫ���ҵ����� %d\n", k);
	}
	return 0;
}