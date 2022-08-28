#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int whole_chess[6] = { 1,1,2,2,2,8 };
	int found_chess[6] = { 0 }, necessary_chess[6] = { 0 };

	for (int i = 0; i < 6; i++)
		scanf("%d", &found_chess[i]);

	for (int i = 0; i < 6; i++)
		necessary_chess[i] = whole_chess[i] - found_chess[i];

	for (int i = 0; i < 6; i++)
		printf("%d ", necessary_chess[i]);

	return 0;
}