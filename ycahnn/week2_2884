#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int H, M, h = 0, m = 0;

	scanf("%d %d", &H, &M);

	if (M >= 45)
	{
		m = M - 45;
		h = H;
	}

		else if (M < 45)
		{
			m = 60 - (45 - M);

			if (H > 0)
				h = H - 1;
			else
				h = 23;
		}


	printf("%d %d", h,m);

return 0;
}
