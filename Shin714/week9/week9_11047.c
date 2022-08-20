#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, K, value[10] = { 0, }, num_coin = 0;
	scanf("%d %d", &N, &K);
	for (int i = 0; i < N; i++) {
		scanf("%d", &value[i]);
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; K > 0;) {
			K -= value[N - 1 - i];
			num_coin++;
		}
		if (K == 0) break;
		K += value[N - 1 - i];
		num_coin--;
	}
	printf("%d", num_coin);
}
