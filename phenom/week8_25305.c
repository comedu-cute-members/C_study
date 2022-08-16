#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h> 
#include<string.h>

int main() {
	int N, win_num, score_Arr[1001];

	scanf("%d %d", &N, &win_num);
	for (int i = 0; i < N; i++)
		scanf("%d", &score_Arr[i]);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - 1 - i; j++) {
			if (score_Arr[j] > score_Arr[j + 1]) {
				int temp = score_Arr[j];
				score_Arr[j] = score_Arr[j + 1];
				score_Arr[j + 1] = temp;
			}
		}
	}
	printf("%d", score_Arr[N - win_num ]);
}