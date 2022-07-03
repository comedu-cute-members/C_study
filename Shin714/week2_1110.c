#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char num, value, count = 1;
	scanf("%d", &num);
	value = 10 * (num % 10) + (num / 10 + num % 10) % 10;
	while (value != num) {
		count++;
		value = 10 * (value % 10) + (value / 10 + value % 10) % 10;
	}
	printf("%d", count);
	return 0;
}
