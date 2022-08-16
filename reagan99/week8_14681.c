#include <stdio.h>
int main() {
	int x,y;
	scanf("%d %d",&x, &y);
	if(x*y>0){
		if(x>0) printf("1");	
		else printf("3");	
	}
	else{
		if(x>0) printf("4");
		else printf("2");			
	}
	return 0;
}
