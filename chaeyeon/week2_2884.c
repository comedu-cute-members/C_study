
#include <stdio.h>
int main()
{
	int H, M;

	scanf("%d %d", &H, &M);
	M = M - 45;

	if (M < 0) {

		M = M + 60;

		if (H == 0)
			H = 23;
		else if (H != 0)
			H = H - 1;
	}

	printf("%d %d", H, M);
	
	return 0;


}