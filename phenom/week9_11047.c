#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int n, k, money_list[11], count = 0; // k <= 100000000
	scanf("%d %d", &n, &k);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &money_list[i]);
	}

	for (int i = n - 1; i >= 0; i--)
	{
		if (k < money_list[i]) continue;

		int temp = k / money_list[i];
		count += temp;
		k -= temp * money_list[i];

		if (k == 0) break;
	}

	printf("%d", count);
}