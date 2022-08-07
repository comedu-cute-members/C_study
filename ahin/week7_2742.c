#include <stdio.h>

int main(void)
{
	int N,M;
	scanf("%d", &N);
	M = N;

	for (int i = 0 ; i < N ; i++)
	{
		printf("%d\n", M);
		M = M - 1;
	}
}
