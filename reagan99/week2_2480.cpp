#include <stdio.h>

int main(int argc, char** argv) {
	int a,b,c,d;
	scanf("%d %d %d",&a,&b,&c);
	d=a;
	if (b>d)
		d=b;
		
	if (c>d)
		d=c;
		
	if (a==b && a==c)
		printf("%d",10000+1000*a);
		
	else if ( a==b && a!=c)
		printf("%d",1000+100*a);
		
	else if ( a==c && a!=b)
		printf("%d",1000+100*a);
		
	else if ( b==c && b!=a)
		printf("%d",1000+100*b);
		
	else
		printf("%d",d*100);
		
	return 0;
}
