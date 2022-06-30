#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int H, M, M1;
	scanf("%d%d", &H, &M);
	M1 = M - 45;

	if (M1 < 0) {
		M1 += 60;
		H--;
	}

	if (H < 0)
		H += 24;

	printf("%d %d", H, M1);
	
	return 0;

}