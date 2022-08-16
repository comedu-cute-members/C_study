#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x, y;
	scanf("%d", &x);
	scanf("%d", &y);
	if (x * y > 0) {
		if (x > 0) printf("1");
		else printf("3");
	}
	else if (x < 0) printf("2");
	else printf("4");
}
