#include <stdio.h>
int main() {

	int H, M;
	scanf_s("%d %d", &H, &M);

	if (H == 0)
	{
		if (M < 45)
			printf("%d %d", 23, (M + 60 - 45));
		else
			printf("%d %d", H, (M - 45));
	}
	else
	{
		if (M < 45)
			printf("%d %d", (H - 1), (M + 60 - 45));
		else
			printf("%d %d", H, (M - 45));
	}
	
	return 0;
}