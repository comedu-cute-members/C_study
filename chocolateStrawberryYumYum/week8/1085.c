#include <stdio.h>

int main() {
	 
	int x, y, w, h;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	int n = x;

	if (n > w - x) n = w - x;
	if (n > y) n = y;
	if (n > h - y) n = h - y;

	printf("%d", n);

	return 0;
} 
