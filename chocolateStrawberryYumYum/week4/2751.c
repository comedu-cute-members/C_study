#include <stdio.h>


int n, a[1000000], b[2000001];


void sort() {

	int max, min, i, j;
	for(i = 0; i < n; i++){
		if(i==0||max<a[i]) max=a[i];
		if(i==0||min>a[i]) min=a[i];
	}
	for(i=min; i<=max; i++) b[i-min] = 0;
	for(i=0; i<n; i++) b[a[i]-min]++;
	j = 0;
	for(i=min; i<=max; i++){
		while(b[i-min]>0){
			a[j]=i;
			j++;
			b[i-min]--;
		}
	}
}


int main(){

	int i;
	scanf("%d", &n);
	for(i=0; i<n; i++) scanf("%d", &a[i]);
	sort();
	for(i=0; i<n; i++) printf("%d\n", a[i]);
    
    
	return 0;
}
