#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int A = 0, B = 0;
	while (1)
	{
		scanf("%d %d", &A, &B);
		if (A == 0 && B == 0)
			break;
		printf("%d\n", A + B);
	}
	return 0;
}