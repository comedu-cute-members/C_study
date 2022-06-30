#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a,b,c;
	scanf("%d %d",&a,&b);
	for (int i=1;i<=a;i++){
		scanf("%d",&c);
		if(b>c)
			printf("%d ",c);
	}
	return 0;
}
