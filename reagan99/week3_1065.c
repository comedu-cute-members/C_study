#include <stdio.h>
void han(int su)
{
	int a,b,c,count=0;
	
	if (su<=110)
	{
		if(su>=100)
			printf("%d",99);
		else
			printf("%d",su);
	}	
	else
	{
		for(int i=111;i<=su;i++){
			c=i%10;
			b=(i%100)/10;
			a=i/100;
			
			if(2*b==a+c)
				count++;
		}
		printf("%d",count+99);
	}
}
int main(int argc, char** argv) {
	
	int su;
	scanf("%d",&su);
	han(su);
	
	return 0;
}
