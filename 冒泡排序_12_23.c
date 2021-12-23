#include<stdio.h>


void bubble_sort(int arr[], int sz)
{
	int i = 0;
	//冒泡排序的趟数
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//优化
		//每一趟冒泡排序
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}//若该组数已完成排序，则无需进行下一趟
	}
}
int main()
{
	int arr[] = { 9,8,7,5,6,4,2,3,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}