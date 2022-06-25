#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a, b;
	int b_1, b_10, b_100;
	scanf("%d", &a);
	scanf("%d", &b);
	b_1 = b % 10;
	b_10 = b % 100 / 10;
	b_100 = b / 100;
	printf("%d\n%d\n%d\n%d\n", a * b_1, a * b_10, a * b_100, a * b);
	return 0;
}
