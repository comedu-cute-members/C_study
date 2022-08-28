#include <stdio.h>
#include <math.h>

int main(){
    int N;
    scanf("%d", &N);
    
    int digits = floor(log10(N)+1);
    
    if(N<=18){
        printf("%d", N/2);
    } else{
        for(int i=N-(digits-1)*9;i<=N;i++){
            int sum = i;
            int num = i;
            for(int j=0;j<digits;j++){
                sum += num % 10;
                num = (num - (num % 10)) / 10;
            }
            if(sum==N){
                printf("%d", i);
                break;
            }
        }

    }
    return 0;
}