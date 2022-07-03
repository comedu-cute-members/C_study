#include <stdio.h>

int main(void)
{
	int A, a, b, c, d, count=0;
	
	scanf("%d ", &a);
	A = a;

	while (1)
	{
		if (a < 10)
		{
			a *= 11;
		}
		else
		{
			b = a / 10;
			c = a % 10;
			d = b + c;
			a = c * 10 + d % 10;
		}
		count++;
		if (a == A)
			break;
	}
	
	printf("%d ", count);

	return 0;
}
