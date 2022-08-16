#include <stdio.h>

int main(void) {
	int n, k;
	scanf("%d %d", &n, &k);

	int num[n];
	for(int i = 0; i<n; i++) scanf("%d", &num[i]);

	int gap = n/2;
	int key = 0;
	int i, j;
	while(1==1) {
		if(gap % 2 == 0) gap++;
		for(i=gap; i<n; i++) {
			key = num[i];
			for(j = i-gap; j>=0; j-=gap) {
				if(key > num[j]) num[j+gap] = num[j];
				else break;
			}
			num[j+gap] = key;
		}
		if(gap == 1) break;
		gap /= 2;
	}
	
	printf("%d", num[k-1]);
	return 0;
}