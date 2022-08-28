#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int N = 0;
	int M = 0;
	int sum = 0;
	int generator = 0;

	scanf("%d", &N);
	
	for (M = N -54 ; M < N ; M++) { // 각 자릿수가 9인 경우, N과 M은 최대로 54만큼 차이남
		if (M < 0)
			continue;
		else {
			generator = M;
			sum = 0;
			sum += generator;
			for (int i = 0; i < 7; i++) {
				sum += generator % 10;
				generator = generator / 10;
			}
			if (sum == N) {
				printf("%d", M);
				return 0;
			}
		}
	}
	printf("%d", 0);
	return 0;
}