#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, n, x, A;
	
	scanf("%d %d", &n, &x);

	for(i=1;i<=n;i++)
	{
		scanf("%d", &A);
    if (A < x)
			printf("%d ", A);
		
	}

	return 0;

}
