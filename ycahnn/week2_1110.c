#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i=0,n, A, B, result=-1;
	scanf("%d", &A);
		
	
	while (A != result)
	{
		if (i == 0)
			result = A;

		B = result / 10 + (result % 10);
		result = (result % 10) * 10 + B%10;
		i++;
	} 

	printf("%d", i);

	return 0;

}
