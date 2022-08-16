#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int x, y, w, h, min;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	int temp;
	int len[4] = { x, y, w - x, h - y };
	min = len[0];
	for (int i = 1; i < 4; i++) {
		if (len[i] < min) min = len[i];
	}
	printf("%d", min);
}
