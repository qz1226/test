#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int pow(int a, int b)
{
	int i, t = a;
	for (i = 1; i < b; i++)
	{
		a = a * t;
	}
	return a;
}   //������ͷ�ļ� #include<math.h>,����PATϵͳ�лᳬʱ������Ҫ�Լ�дpow����

int main()
{
	int N, sum, i;
	scanf("%d", &N);
	int n = pow(10, N);

	for (i = pow(10, N - 1); i < n; i++)
	{
		int num = i;
		sum = 0;
		while (num > 0)
		{

			sum = sum + pow(num % 10, N);
			num /= 10;
		}
		if (sum == i)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}