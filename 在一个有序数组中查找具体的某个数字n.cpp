#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 0;
	int mid = 0;
	scanf("%d", &k);
	printf("������Ҫ�����±������");
	int sz = sizeof(arr)/sizeof(arr[0]);
	int left = 0;//���±�
	int right = sz - 1;//���±�
	
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
			printf("�ҵ��ˣ�%d���±�Ϊ%d", k, mid);
			break;
		}
	}
	 if (left>right)
	{
		printf("δ�ҵ�%d", k);
	}
	return 0;
}