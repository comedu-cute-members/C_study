#include<stdio.h>


int main() {
    
  int n, imsi, a[1000] = {0};
	scanf("%d", &n);
	for (int i=0; i<n; i++) scanf("%d", &a[i]);
	
  for (int i=0; i<n; i++) {
	  for (int j=0; j<n-1; j++) {
			if (a[j+1]<a[j]) {
				imsi=a[j+1];
				a[j+1]=a[j];
				a[j]=imsi;
			}
		}
	}
	for (int i=0; i<n; i++) printf("%d\n", a[i]);


	return 0;
}
