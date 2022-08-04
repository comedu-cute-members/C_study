#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		printf("%d\n", N - i);

	return 0;
}