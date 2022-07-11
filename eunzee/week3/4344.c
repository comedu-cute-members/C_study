#include <stdio.h>

int main(){
    
    int repeat;
    scanf("%d", &repeat);
    
    while(repeat > 0){
        int studentNum;
        scanf("%d", &studentNum);
        int studentScore[studentNum];
        int sum = 0;
        for(int i=0;i<studentNum;i++){
            scanf("%d", &studentScore[i]);
            sum += studentScore[i];
        }
        double average = (double) sum / studentNum;
        
        int overAverage = 0;
        for(int i=0;i<studentNum;i++){
            if(studentScore[i] > average){
                overAverage++;
            }
        }
        
        printf("%.3lf%%\n", (double)overAverage/studentNum * 100);
        repeat--;
    }
    
    return 0;
}