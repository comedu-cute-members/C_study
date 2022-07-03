#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int H = 0, M = 0;
	scanf("%d %d", &H, &M);
	
	if (M < 45)
	{
		M += 15;
		if (H == 0)
			H = 23;
		else
			H -= 1;
	}
	else
		M -= 45;

	printf("%d %d", H, M);

	return 0;
}