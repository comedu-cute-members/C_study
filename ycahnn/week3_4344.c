#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int count = 1, c, num, avg, i;
	double p;
	int score[1000];

	scanf("%d", &c);  

	while (count <= c)		
	{
		int sum = 0, oavg = 0;
		scanf("%d", &num);		
		for (i = 0; i < num; i++)
		{
			scanf("%d", &score[i]);		
			sum += score[i];		
		}
		avg = sum / num;		
		for (i = 0; i < num; i++)
		{
			if (score[i] > avg)
				oavg++;
		}

		p = (double)oavg / num * 100;   
		printf("%0.3f%%\n", round(p * 1000) / 1000);

		count++;
	}

	return 0;
}
