#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int h(x) {
	if (x < 100) return 1;
	else if (x == 1000) return 0;
	else if (x / 100 - x / 10 % 10 == x / 10 % 10 - x % 10) return 1;
	else return 0;

}
int main() {
	int N = 0, result = 0;
	scanf("%d", &N);
	for (; N; N--) {
		result += h(N);
	}
	printf("%d", result);
}
