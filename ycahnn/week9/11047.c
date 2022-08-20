#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N,M, K, A[10], num=0;
	scanf("%d", &N);
	M = N - 1;
	scanf("%d", &K);
	for (int i = 0; i < N; i++)
		scanf("%d", &A[i]);
	for (; ;)
	{
		num += K / A[M];
		K = K %A[M--];
		if (K == 0)
			break;
	}
	printf("%d", num);
}
