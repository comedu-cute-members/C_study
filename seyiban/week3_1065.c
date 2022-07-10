#include <stdio.h>

int h(int a);

int main() {
	int n;
	scanf_s("%d", &n);
	int count = 0;
	for (int i = 1; i <= n; i++)
	{
		int num= h(i);
		if (num == 1)
			count++;
	}
	printf("%d", count);
	return 0;
}
int h(int a) {
	if (a < 100) {
		return 1;
	}
	else if ((a / 100) + (a % 10) == (2 * (a / 10 % 10))) {
		return 1;
	}
	else {
		return 0;
	}
		
}