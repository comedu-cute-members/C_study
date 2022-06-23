#include <stdio.h>
int main() {
	int a, b;
	scanf_s("%d %d", &a, &b);
	
	printf("%d\n", a * (b % 10));
	printf("%d\n", a * ((b-(b % 10))/10%10));
	printf("%d\n", a * (b / 100));
	printf("%d", a * b );

	return 0;
}
