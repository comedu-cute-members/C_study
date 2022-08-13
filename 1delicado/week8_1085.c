#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int x = 0, y = 0, w = 0, h = 0;
	int distance[4] = { 0 };
	int min_distance = 0;

	scanf("%d %d %d %d", &x, &y, &w, &h);
	distance[0] = x;
	distance[1] = y;
	distance[2] = w - x;
	distance[3] = h - y;

	min_distance = distance[0];
	for (int i = 1; i < 4; i++)
		if (min_distance > distance[i])
			min_distance = distance[i];

	printf("%d", min_distance);

	return 0;
}