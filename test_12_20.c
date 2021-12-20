#include<stdio.h>
//
// 搜索一个数
//int search(int k, int num[], int len)
//{
//	int i = 0;
//	int r = -1;
//	for (i = 0; i < len - 1; i++)
//	{
//		if (num[i] == k)
//		{
//			r = i;
//			break;
//		}
//
//	}
//	return r;
//}
//
//
//
//int main()
//{
//	int num[10] = { 1,8,13,45,58,68,75,79,88,89 };
//	int len = sizeof(num) / sizeof(num[0]);
//  int ret = search(13, num, len);
//	printf("%d", ret);     
//	return 0;
//}



//排序
int max(int a[], int len)
{
	int maxid = 0;
	int i = 1;
	for (i = 1; i < len; i++)
	{
		if (a[i] > a[maxid])
		{
			maxid = i;
		}
	}
	return maxid;
}

int main()
{
	int a[] = { 3,2,1 };
	int len = sizeof(a) / sizeof(a[0]);
	int i = len - 1;
	for (i = len - 1; i > 0; i--)
	{
		int maxid = max(a, i + 1);//int maxid=max(a,len)是错误的，不能循环
		int t = a[maxid];
		a[maxid] = a[i];
		a[i] = t;

	}
	for (int i = 0; i < len; i++)
	{
		printf("%d ", a[i]);
	}


	return 0;
}