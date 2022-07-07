#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int count=0;
	char answer[80];


	scanf("%d", &count);
	while(count!=0)
	{
		int point = 0, i, len = 0, add = 1;
		scanf("%s", answer);

		while (answer[len] != 0)
			len++;

		for (i = 0; i < len; i++)
		{
			if (i == 0)
			{
				if (answer[i] == 'O')
				{
					point += add;
				}
				else if (answer[i] == 'X')
				{
					add = 1;
				}
			}
			if (i >= 1)
			{
				if (answer[i] == 'O')
				{
					if (answer[i - 1] == 'O')
					{
						add += 1;
					}
					point += add;
				}
				else if (answer[i] == 'X')
				{
					add = 1;
				}
			}

		}
		printf("%d\n", point);
		count--;
	}
	return 0;
}
