#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N = 0, X = 0, i = 0, arr[10000]={0};

	scanf("%d %d", &N, &X);
	for (i = 0; i < N; i++)
	{
		scanf("%d ", &arr[i]);
		if (arr[i] < X)
			printf("%d ", arr[i]);
	}
	return 0;
}