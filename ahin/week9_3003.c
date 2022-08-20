#include <stdio.h>

int main() {
	int chess[6] = { 1,1,2,2,2,8 }, a;
	for (int i = 0; i < 6; i++)
	{
		scanf("%d", &a);
		printf("%d ", chess[i] - a);
	}
}
