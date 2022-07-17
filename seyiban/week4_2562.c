#include <stdio.h>
int main() {
	int a[9];

	for (int i = 0; i < 9; i++)
	{
		scanf_s("%d\n", &a[i]);
	}

	int* p;
	p = a;
	int max = 0, n;

	for (int j = 0; j < 9; j++)
	{
		if (*(p + j) > max)
		{
			max = *(p + j);
			n = j + 1;
		}
	}
	printf("%d\n%d", max, n);

	return 0;
}