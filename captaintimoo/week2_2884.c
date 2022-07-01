#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int H, M, A, B;

	scanf("%d %d", &H, &M);

	if (M >= 45)
	{
		A = H, B = M - 45;
		}
	
	else if (H==0)
	{
		A = 23, B = M + 15;
		
	}
	else
		A = H - 1, B = M + 15;
		
	printf("%d %d", A,B);
	
	return 0;
}	
