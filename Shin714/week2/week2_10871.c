#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, X, result;
	scanf("%d %d", &N, &X);
	for (int i = 0; i < N; i++) {
		scanf("%d", &result);
		if (result < X) printf("%d ", result);
	}
	return 0;
}
