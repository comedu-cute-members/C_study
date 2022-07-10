#include <stdio.h>

int sum(int n)
{
	int sum = n;

	while (n > 0)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
int main()
{
	int num[10001], i, j;
	for (i = 1; i < 10001; i++)
	{	
		j = sum(i);
			if (j < 10001)
				num[j] = 1;
	}
	for (i = 1; i < 10001; i++)
	{
		if (num[i] != 1)
			printf("%d\n", i);
	}
	return 0;
}
