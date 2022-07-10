#include <stdio.h>

int d(n) {
	int num = n;
	while (n) {
		num = n % 10 + num;
		n /= 10;
	}

	return num;
}

int main() {
	for (int i = 1; i < 10000; i++) {
		int count = 0;

		for (int j = 1; j < 10000; j++) {
			if (i == d(j))
				count++;
			}
		if (count == 0)
			printf("%d\n", i);
		}
}
