#include <stdio.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a;
	int temp;
	scanf("%d", &a);
	int numbers[a];
	
	for(int i=0;i<a;i++){
		scanf(" %d", &numbers[i]);
	}

	for(int i=0;i<a-1;i++){
		for(int j=i+1;j<a;j++){
			if(numbers[i]>numbers[j]){
				temp = numbers[i];
				numbers[i]=numbers[j];
				numbers[j]=temp;
			}
		}
	}	
	for(int i=0; i<a;i++){
		printf("%d\n",numbers[i]);
	}	
	return 0;
}
