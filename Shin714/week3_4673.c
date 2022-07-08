#include <stdio.h>
int main() {
	int n;
	for (int i = 1; i <= 10000; i++) {
		for (n = i - 1; n; n--) {
			if (!(n + n / 1000 + n / 100 % 10 + n / 10 % 10 + n % 10 - i)) break;
		}
		if (!n) printf("%d\n", i);
	}
}
