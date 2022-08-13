#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int x = 0, y = 0, quadrant = 0;

	scanf("%d", &x);
	scanf("%d", &y);

	if (y > 0)
		if (x > 0)
			quadrant = 1; // y>0 && x>0
		else
			quadrant = 2; // y>0 && x<0
	else
		if (x < 0)
			quadrant = 3; // y<0 && x<0
		else
			quadrant = 4; // y<0 && x>0

	printf("%d", quadrant);

	return 0;
}