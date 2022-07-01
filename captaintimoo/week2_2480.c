#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int A, B, C, R, T, Y;
	
	scanf("%d %d %d", &A, &B, &C);

	if (A == B && A==C && B==C)
	{
		R = A * 1000 + 10000;
		printf("%d", (int)R);
	}
	else if (A != B && B!=C && A!=C )
	{
		if (B<A && C<A)
			T = A * 100;
		else if (A<B && C<B)
			T = B * 100;
		else
			T = C * 100;
	printf("%d", (int)T);
	}
	else
	{
		if (A == B && A!=C && B!=C)
			Y = 1000+ 100 * A;
		else if (A == C && A!=B && C!=B)
			Y = C * 100 + 1000;
		else
			Y = B * 100 + 1000;
	
	printf("%d", (int)Y);
	}


	



	return 0;

}
