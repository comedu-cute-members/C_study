#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num[9], max, maxnum = 1;
	int* ptr = num;
	for (int i = 0; i < 9; i++)
		scanf("%d", &ptr[i]);
	max = ptr[0];
	for (int i = 0; i < 9; i++)
	{
		if (ptr[i] > max)
		{
			max = ptr[i];
			maxnum = i + 1;
		}
	}
	printf("%d\n%d", max, maxnum);
}
