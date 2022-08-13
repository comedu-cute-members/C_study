#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int N = 0, k = 0;
	int score[1000] = { 0 };
	int temp = 0;
	int cut_off_score = 0;

	scanf("%d %d", &N, &k);
	for (int i = 1; i < N+1; i++)
		scanf("%d", &score[i]);

	for (int i = 1; i < N+1; i++) // Sort by descending order
		for (int j = i + 1; j < N+1; j++)
			if (score[i] < score[j])
			{
				temp = score[i];
				score[i] = score[j];
				score[j] = temp;
			}

	cut_off_score = score[k];
	printf("%d", cut_off_score);

	return 0;
}