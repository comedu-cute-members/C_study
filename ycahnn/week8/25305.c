#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void sort(int* arr,int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int temp;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main()
{
	int N, k;
	int score[1000];

	scanf("%d%d", &N, &k);
	for (int i=0; i < N; i++)
	{
		scanf("%d", &score[i]);
	}
	sort(score, N);
	printf("%d", score[k - 1]);
}
