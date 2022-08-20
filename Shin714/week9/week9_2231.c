#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int 분해합(num) {
	int result = num;
	for (int k = 0; k < 7; k++) {
		int p = pow(10, k);
		result += (num / p) % 10;

	}
	return result;
}

int main() {
	int n, ans = 0;
	scanf("%d", &n);
	for (int i = 1; i < n; i++) {
		if (분해합(i) == n) {
			
			ans = i;
			break;
		}
	}
	printf("%d", ans);
}
