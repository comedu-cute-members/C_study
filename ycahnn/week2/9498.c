#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int score;
	scanf("%d", &score);
	if (score < 60)
		printf("F");
	else
	{
		switch (score / 10)
		{
		case 10:
			printf("A");
			break;

		case 9:
			printf("A");
			break;

		case 8:
			printf("B");
			break;

		case 7:
			printf("C");
			break;

		case 6:
			printf("D");
			break;
		}
	}

	return 0;
}
