#include <stdio.h>
int hansu(int num)
{

	int i=0; 
	int arr[5]={0,};
	if (num < 100)
	{
		return 1;
	}
	while (0<num)
	{
		arr[i] = num % 10;
		num /= 10;
		i++;
	}
	int d;
	d = arr[i - 1] - arr[i - 2]; 
	for (int t=i-2;1 <= t;t--)
	{
		if (arr[t]-arr[t-1]!=d)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n;
	scanf("%d", &n);
	int count = 0;
	for (int i=1;i<=n;i++)
	{
		if (hansu(i) == 1)
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}