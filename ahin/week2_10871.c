#include <stdio.h>

int main(void)
{
	int N = 0, X= 0;
	scanf_s("%d %d ", &N, &X);
	
	int a, b;
	for (a = 1; a <= N; a++)
	{
		scanf_s("%d ", &b);
		if (b < X)
			printf("%d ", b);
	}
}
