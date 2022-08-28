#include<stdio.h>

int main() 
{
	int arr[11];
	int n, coin;
	scanf("%d %d", &n, &coin);
	
    for (int i = 0; i < n; i++) {
		int k;
		scanf("%d", &k);
		arr[i] = k;
	}
	int sum = 0;
	for (int i = n - 1; i >= 0; i--) {
		sum += coin / arr[i];
		coin %= arr[i];
	}
	printf("%d", sum);
}
