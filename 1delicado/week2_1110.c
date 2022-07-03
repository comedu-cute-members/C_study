#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num = 0, first_num = 0, mid_num = 0, new_num = 0, N=1;

	scanf("%d", &num);
	first_num = num;	
	while (1)
	{
		mid_num = (first_num / 10) + (first_num % 10);
		new_num = (first_num % 10) * 10 + (mid_num % 10);
		first_num = new_num;
		if (num == first_num)
			break;
		N += 1;
	}
	printf("%d", N);
	return 0;
}