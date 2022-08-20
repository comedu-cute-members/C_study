#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int piece_list[7] = {0,}, enter_list[7];
	for (int i = 0; i < 6; i++)
		scanf("%d ", &enter_list[i]);
	// 1 1 2 2 2 8
	piece_list[0] = 1;
	piece_list[1] = 1;
	piece_list[2] = 2;
	piece_list[3] = 2;
	piece_list[4] = 2;
	piece_list[5] = 8;

	for (int i = 0; i < 6; i++)
	{
		printf("%d ", piece_list[i] - enter_list[i]);
	}
}