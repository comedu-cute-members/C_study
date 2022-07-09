#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int case_num = 0, N=0;

	scanf("%d", &case_num);
	scanf("%c", &N); // \n 처리하기 위한 용도

	for (int i = 0; i < case_num; i++)
	{
		char str[80] = { 0 };
		int score = 0, total_score = 0;

		scanf("%s", &str);

		for (int j = 0; ; j++)
		{
			if (str[j] == 79)
			{
				score += 1;
				total_score += score;
			}
			else if (str[j] == 88)
				score = 0;
			else
				break;
		}

		printf("%d\n", total_score);
	}

	return 0;
}