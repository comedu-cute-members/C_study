#include <stdio.h>
#include <stdlib.h>

int main()
{
	int A , B;
	scanf_s( "%d", &A);
	scanf_s("%d", &B);
	if (A > B)
		printf(">");
	else if (A < B)
		printf("<");
	else
		printf("==");


	return 0;
}
