#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
	int times,sum=0, plus=1;
	char test[80];
	scanf("%d",&times);
	for(int i=0;i<times;i++){
		sum=0, plus=1;
		scanf("%s",test);
		for(int j=0;j<strlen(test);j++){
			if(test[j]=='O'){
				sum+=plus;
				plus++;	
			}
			else{
				plus=1;
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}
