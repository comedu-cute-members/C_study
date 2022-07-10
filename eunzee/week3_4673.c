#include <stdio.h>

int d(int n){
    return n + n/10000 + (n/1000)%10 + (n/100)%10 + (n%100)/10 + n%10;
}

int main(){
    
    int notSelf[10000] = {0,};
    
    for(int i=1;i<=10000;i++){
        int num = i;
        while(d(num) <= 10000){
            num = d(num);
            notSelf[num-1] = 1;
        }
    }
    
    for(int i=1;i<=10000;i++){
        if(!notSelf[i-1]){
            printf("%d\n", i);
        }
    }
    
    return 0;
}