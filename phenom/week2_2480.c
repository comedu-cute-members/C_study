#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n1, n2, n3, money;
	scanf("%d%d%d", &n1, &n2, &n3);

	if (n1 == n2 && n2 == n3)
		money = n1 * 1000 + 10000;

	else if (n1 == n2)
		money = n1 * 100 + 1000;
	else if (n1 == n3)
		money = n1 * 100 + 1000;
	else if (n3 == n2)
		money = n2 * 100 + 1000;

	else {
		if (n1 > n2 && n1 > n3) money = n1 * 100;
		if (n2 > n1 && n2 > n3) money = n2 * 100;
		if (n3 > n1 && n3 > n2) money = n3 * 100;
	}

	printf("%d", money);
}