#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int m, n, sip, ill, newill, count = 0;
	scanf("%d", &n);
	if (n < 10) n *= 10;
	m = n;

	while (1) {
		sip = n / 10;
		ill = n % 10;
		newill = sip + ill;
		if (newill >= 10) newill %= 10;

		n = (ill * 10) + newill;
		count++;
		if (n == m) {
			printf("%d", count);
			break;
		}
		else continue;
	}
	return 0;
}