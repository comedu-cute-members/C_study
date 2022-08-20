#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int n, num_list[1001], count_list[1001], ans = 0, count = 1;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", &num_list[i]);

	for (int i = 0; i < n; i++) {
		int count = 0;
		// i 보다 작은 값을 검색하여 더해주기
		for (int j = 0; j < i; j++) {
			if (num_list[i] > num_list[j]) {
				if (count < count_list[j])
					count = count_list[j];
			}
		}

		count_list[i] = count + 1;
		if (ans < count_list[i])
			ans = count_list[i];
	}
	
	printf("%d", ans);
}