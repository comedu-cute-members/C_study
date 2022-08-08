#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int N, n;
	scanf("%d", &N);
	n = N;

	for (int i = 0; i < N; i++) {
		printf("%d\n", n);
		n--;
	}
}