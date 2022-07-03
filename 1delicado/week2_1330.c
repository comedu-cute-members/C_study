#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int A = 0, B = 0, num = 0;
	scanf("%d", &A);
	scanf("%d", &B);

	if (A > B)
		num = 1;
	else if (A < B)
		num = 2;
	else
		num = 3;

	switch (num)
	{
	case 1:
		printf(">");
		break;
	case 2:
		printf("<");
		break;
	case 3:
		printf("==");
		break;
	}

	return 0;
}