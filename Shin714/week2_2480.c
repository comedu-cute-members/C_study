#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a, b, c, result;
	scanf("%d %d %d", &a, &b, &c);
	if (a == b) {
		if (a == c) result = 10000 + 1000 * a;
		else result = 1000 + 100 * a;
	}
	else if (a == c) result = 1000 + 100 * a;
	else if (b == c) result = 1000 + 100 * b;
	else if (a > b && a > c) result = 100 * a;
	else if (b > a && b > c) result = 100 * b;
	else if (c > a && c > b) result = 100 * c;
	
	printf("%d", result);
}
