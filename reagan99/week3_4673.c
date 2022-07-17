#include <stdio.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	int n[10001]={0,};
	int ans[10000]={0,};
	int k;
	for(int i=1;i<=9968;i++){
		n[i]=i+(i%10)+(i%100)/10+(i/100)%10+i/1000;
	}
	for(int i=1; i<=9993;i++){
		k=n[i];
		ans[k]=k;
		if(ans[i]==0){
			printf("%d\n",i);
		}
	}
	
	return 0;
}
