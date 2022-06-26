#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1, num2, A, B, C;
	scanf("%d", &num1);
	scanf("%d", &num2);
	A = num1 * (num2 % 10);
	B = num1 * (num2 % 100 / 10);
	C = num1 * (num2 / 100);
	printf("%d\n%d\n%d\n", A, B, C);
	printf("%d", A + B * 10 + C * 100);

	return 0;
}
