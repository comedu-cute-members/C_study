#include <stdio.h>

int d(int n);

int main() {
	int a[30000];
	int j = 1;
	for (int i=0; i<10000; i++)
	{
		a[i] = i + 1;
	}
	while (j <= 10000)
	{
		a[d(j) - 1] = 0;
		j++;
	}
	for (int k = 0; k < 10000; k++)
	{
		if (a[k] != 0)
			printf("%d\n", a[k]);
	}
	return 0;
}
int d(int n)
{
	int new_n = n;
	while (n > 0)
	{
		new_n += n % 10;
		n /= 10;
	}
	return new_n;
}