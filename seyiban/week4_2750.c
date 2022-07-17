#include <stdio.h>
int main() {
	int N, a[1000];
	scanf_s("%d\n", &N);

	for (int i = 0; i < N; i++)
	{
		scanf_s("%d\n", &a[i]);
	}

	int* p;
	p = a;

	for (int j = 0; j < N-1; j++)
	{
		for (int k = j+1; k < N; k++)
		{
			if (*(p + j) > *(p + k))
			{
				int n = *(p + j);
				*(p + j) = *(p + k);
				*(p + k) = n;
			}
		} 
	}
	for (int i = 0; i < N; i++)
	{
		printf("%d\n", *(p + i));
	}
	return 0;
}