#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {

	int N = 0, K = 0;
	int A[11] = { 0 };
	int count = 0;

	scanf("%d %d", &N, &K);
	for (int i = 1; i < (N+1); i++)
		scanf("%d", &A[i]);

	for (int i = N; i > 0; i--) {
		if (K >= A[i])
			count += K / A[i];
			K = K % A[i];
			if (K == 0)
				break;
	}

	printf("%d", count);

	return 0;
}