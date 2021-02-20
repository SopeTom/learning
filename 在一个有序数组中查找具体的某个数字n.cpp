#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 0;
	int mid = 0;
	scanf("%d", &k);
	printf("请输入要查找下标的数字");
	int sz = sizeof(arr)/sizeof(arr[0]);
	int left = 0;//左下标
	int right = sz - 1;//右下标
	
	while (right >= left)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] = k)
		{
			printf("找到了，%d的下标为%d", k, mid);
			break;
		}
	}
	 if (left>right)
	{
		printf("未找到%d", k);
	}
	return 0;
}