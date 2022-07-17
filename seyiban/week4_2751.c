#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
	int num1 = *(int*)a;
	int num2 = *(int*)b;

	if (num1 < num2)
		return - 1;
	if (num1 > num2)
		return 1;
	return 0;
}

int main() {
	int n, arr[1000001];
	scanf_s("%d\n", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d\n", &arr[i]);
	}

	qsort(arr, n, sizeof(int), compare);
	for (int j = 0; j < n; j++)
	{
		printf("%d\n", arr[j]);
	}
	return 0;
}