#include<stdio.h>
int main()
{    
    int num[9]={0,};
    int *loc = num;
    int a = 0 ;
    for(int i=0;i<9;i++){
		scanf("%d",&num[i]);
	}
    
    int max = num[0];
    
    for(int i=1;i<9;i++){
        if(max < loc[i]){
            max = loc[i];
        	a = i;
        }
    }
    printf("%d\n%d",max,a+1);
    return 0;
}
