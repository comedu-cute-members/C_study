#include <stdio.h>

int main() {
	int times,number,all=0,count=0;
	
	float avg=0;
	
	scanf("%d",&times);
	
	for(int i=0;i<times;i++){
		
		scanf("%d",&number);
		
		int score[number]={0,};
		
		for (int k=0;k<number;k++){
			
			scanf("%d",&score[k]);
			
			all += score[k];
	
		}
		avg = float(all)/float(number);
	
		
		for (int j=0;j<number;j++){
			
			if(score[j]>avg){
				
				count++;
			}
		
		}

		printf("%.3f%%\n",(float(count)/float(number))*100);
		all = 0;
		count = 0;	
	}
	return 0;
}
