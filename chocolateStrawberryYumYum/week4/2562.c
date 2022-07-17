#include  <stdio.h>


int main() {

	int arr[9], *p=arr, max=0, n=0;

	for (int i=0; i<9; i++) {
		scanf("%d", &p[i]);
		if (max<p[i]) {
			max=p[i];
			n=i+1;
		}
	}
	printf("%d\n%d", max, n);


	return 0;
}
