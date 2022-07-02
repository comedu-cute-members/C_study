#include <stdio.h>
int main(void)
{
	int A, B;
	scanfs("%d %d",&A, &B);

	if (A > B)
		printf(">");
	else if (A < B)
		printf("<");
	else if (A == B)
		printf("==");

	return 0;
	
}