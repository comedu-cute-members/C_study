#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);

	for (int i = 1; i < 10; i++)
	{
		printf("%d * %d = %d\n", N, i, i * N);
	}

	return 0;
}