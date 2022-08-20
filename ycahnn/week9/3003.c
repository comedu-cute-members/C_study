#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr0[6] = {1,1,2,2,2,8};
	int arr[6], result[6];
	for (int i = 0; i < 6; i++)
	{
		scanf("%d", &arr[i]);
		result[i]=arr0[i] - arr[i];
	}
	for (int i = 0; i < 6; i++)
		printf("%d ", result[i]);
}
