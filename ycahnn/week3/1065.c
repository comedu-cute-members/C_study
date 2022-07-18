#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int IdentifySequence(int N)
{
	int d1, d2;
	while (N/100 != 0)
	{
		d1 = N /100% 10 - N / 10 % 10;
		
		d2= N /10% 10 - N % 10;
		N = N / 10;
		if (d1 != d2)
			return 0;
		if (N / 100 == 0)
			if (d1 == d2)
				return 1;
	}
}

int main()
{
	int N, i, count=0;
	scanf("%d", &N);
	for (i = 1; i <= N; i++)
	{
		if (i < 100)
			count++;
		if (i >= 100)
		{
			if(IdentifySequence(i))
				count++;
		}
	}
	printf("%d", count);

	return 0;
}
