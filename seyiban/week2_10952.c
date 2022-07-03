#include <stdio.h>
int main() {
	   
	int a[100], b[100];
	int i=0, j;

	while (1)
	{
		scanf_s("%d %d", &a[i], &b[i]);
		if (a[i] == 0 && b[i] == 0)
			break;
		i++;
	}
	j = i;

	for (i = 0; i<j; i++)
	{
		printf("%d\n", (a[i] + b[i]));
	}
	
	return 0;
}