#include <stdio.h>

int main(){
    int value, init, start, end, n=1;
    scanf("%d", &value);
    init = value;
    while(1){
        if(value < 10){
        start = 0;
        end = value;
        } else {
            start = value / 10;
            end = value % 10;
        }
        value = end*10 + (start+end)%10;
        if(init == value){
            break;
        }
        n++;
    }
    printf("%d", n);
}