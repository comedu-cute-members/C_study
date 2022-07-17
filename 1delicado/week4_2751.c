#define _CRT_SECURE_NO_WARNINGS
#define MAX 1000000

#include <stdio.h>
#include <stdlib.h>

int arr[MAX] = { 0 };

int static compare(const void* num1, const void* num2)
{
	if (*(int*)num1 > *(int*)num2)
		return 1;
	else if (*(int*)num1 < *(int*)num2)
		return -1;
	else
		return 0;
}

int main(void)
{
	int N = 0; //Input
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);
	
	qsort(arr, N, sizeof(int), compare); //<stdlib.h> qsort: quick sort function

	for (int i = 0; i < N; i++) //Output
		printf("%d\n", arr[i]);
	
	return 0;
}