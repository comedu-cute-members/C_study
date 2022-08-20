#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int d(N)
{
	int result = N;
	while (N != 0)
	{
		result += N % 10;
		N = N / 10;
	}
	return result;
}

int main()
{
	int N;
	scanf("%d", &N);
	for (int i = 0; i <= N; i++)
	{
		if (d(i) == N)
		{
			printf("%d", i);
			break;
		}
		if (i == N)
		{
			printf("0");
			break;
		}
	}
	return 0;
}
