#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int A, B;

	while (1)
	{
		scanf("%d %d", &A, &B);
		if (A == 0 && B == 0)
			break;
		else
			printf("%d", A + B);


	}

	return 0;

}
