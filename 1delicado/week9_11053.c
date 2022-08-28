//도저히 안풀려서 각종 블로그 참고해서 코딩
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int N = 0;
	int A[1000] = { 0 };
	int dp[1000] = { 0 };
	int count = 0;

	scanf("%d", &N);
	for (int i = 0; i<N ; i++)
		scanf("%d", &A[i]);

	for (int i = 0; i < N; i++) {
		dp[i] = 1;
		for (int j = 0; j < i; j++) {
			if (A[i] > A[j]) {
				dp[i] = (((dp[j] + 1) > dp[i]) ? (dp[j] + 1) : (dp[i]));
			}
		}
		count = (count > dp[i] ? count : dp[i]);
	}
	printf("%d", count);

	return 0;
}