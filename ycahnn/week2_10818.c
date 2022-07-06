#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int num[1000000];

int main()
{
	int max, min, N, i=1;

	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &num[i]);
	}
	min = num[0];
	for (i = 0; i < N; i++)
	{
		if (num[i] < min)
			min = num[i];
	}
	printf("%d ", min);
	max = num[0];
	for (i = 0; i < N; i++)
	{
		if (num[i] > max)
			max = num[i];
	}
	printf("%d", max);


	return 0;
}
