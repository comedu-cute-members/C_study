#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int a, b, c, result, max1, max;

	scanf("%d %d %d", &a, &b, &c);

	if (a == b && b == c)
	{
		result = 10000 + a * 1000;
		printf("%d", result);
	}
	else if (a == b && b != c)
	{
		result = 1000 + a * 100;
		printf("%d", result);
	}
	else if (b == c && c != a)
	{
		result = 1000 + b * 100;
		printf("%d", result);
	}
	else if (c == a && a != b)
	{
		result = 1000 + c * 100;
		printf("%d", result);
	}
	else
	{
		max1 = (a > b) ? (a) : (b);
		max = (max1 > c) ? (max1) : (c);
		result = max * 100;
		printf("%d", result);
	}


return 0;
}
