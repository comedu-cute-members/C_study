#include <stdio.h>

int main(){
    
	int N, n, a;
	scanf("%d", &N);

	for (int i=1; i<N; i++){
		a=i;
		n=i;

		while (a > 0){
			n+=a%10;
			a/=10;
		}
		if (n==N){
			printf("%d", i);
			N=0;
			break;
		}
	}
	if (N!=0) printf("0");

	return 0;
}
