#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num = 0, i=0;
	scanf("%d", &num);
	for (i = 1; i < 10; i++)
		printf("%d * %d = %d\n", num, i, num * i);
	return 0;
}