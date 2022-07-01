#include <stdio.h>

int main(void)
{
	int H, M, a, b;

	scanf("%d %d", &H, &M);

	if (M >= 45)
	{
		a = M - 45;
		printf("%d %d", H, a);
	}

	else if (M < 45)
	{
		a = 60 - (45 - M);
		b = H - 1;
		if (b < 0)
		{
			b = b + 24;
		}
		printf("%d %d", b, a);
	}
}
