#include <stdio.h>
#include <math.h>

int main(){
    int N;
    scanf("%d", &N);
    
    int digits = floor(log10(N)+1);
    
    for(int i=N-digits*9;i<=N-1;i++){
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
    
    return 0;
}