#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num[9], max, maxnum = 1;

	for (int i = 0; i < 9; i++)
		scanf("%d", &num[i]);

	max = num[0];

	for (int i = 0; i < 9; i++)
	{
		if (num[i]>max)
		{
			max = num[i];
			maxnum = i+1;
		}
	}
	printf("%d\n%d", max, maxnum);
}
