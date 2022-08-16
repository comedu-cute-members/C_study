#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Min(int *ptr ,int n)
{
	int min;
	min = ptr[0];
	for (int i = 0; i < n; i++)
	{
		if (ptr[i] < min)
			min = ptr[i];
	}
	return min;
}
int main()
{
	int x, y, w, h,min;
	scanf("%d%d%d%d", &x, &y, &w, &h);
	int d[4] = { x,h,w - x,h - y };
	printf("%d", Min(d,4));
}
