#include <stdio.h>
int main() {

	int a, b, c, max;
	scanf_s("%d %d %d", &a, &b, &c);

	if (a == b && b == c)
		printf("%d", (10000 + a * 1000));
	else if (a == b && b != c)
		printf("%d", (1000 + a * 100));
	else if (a == c && b != c)
		printf("%d", (1000 + a * 100));
	else if (b == c && b != a)
		printf("%d", (1000 + b * 100));
	else
	{
		if (a > b && a > c)
			max = a;
		else if (b > a && b > c)
			max = b;
		else if (c > a && c > b)
			max = c;
		printf("%d", (max * 100));
	}

	return 0;
}