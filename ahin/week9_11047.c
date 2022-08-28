#include <stdio.h>

int main() {
	int N, K, sum = 0, i,j;
	int A[10];
	scanf("%d %d ", &N, &K);
	for ( i = 0; i < N; i++)
		scanf("%d", &A[i]);
	j = N - 1;
	while (K > 0)
	{
		if (A[j] > K) {
			j--;
		}
		else
		{
			K = K - A[j];
			sum++;
		}
	}
	printf("%d", sum);
}
