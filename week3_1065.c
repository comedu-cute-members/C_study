#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int arith_prog(int n) {
	int result = 0, ten, ill, baek, gap1, gap2;
	if (n < 100)
		result = n;
	else if (n < 1000) {
		for (int i = 100; i <= n; i++) {
			baek = i / 100;
			ten = (i - (baek * 100)) / 10;
			ill = (i - (baek * 100)) % 10;

			gap1 = baek - ten;
			gap2 = ten - ill;

			if (gap1 == gap2)
				result++;
		}

		result += 99;
	}

	else result = 144;

	return result;
}

int main() {
	int num;
	scanf("%d", &num);
	arith_prog(num);
	printf("%d", arith_prog(num));
}