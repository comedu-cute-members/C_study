#include <stdio.h>

int main(int argc, char** argv) {
	
	int a,b,c,d,e,f,g; //c 10 d 1 e 0 f¹Ð g check 
	int i = 0;
	scanf("%d",&a);
	g=a;
		
	if(a<10){
		g = 10*a+a;
		i++;
		while(1){
			c=g/10;
			d=g%10;
			i++;
			f = 10*d + (d+c)%10;
			g=f;
			if(a==f)
				break;	
		}
	}
	else{
		while(1){
			c=g/10;
			d=g%10;
			i++;
			f = 10*d + (d+c)%10;
			g=f;
			if(a==f)
				break;
		}
	}
	if (a==0)
		printf("1");
	else
		printf("%d",i);
	return 0;
}
