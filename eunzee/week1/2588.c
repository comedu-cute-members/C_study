#include <stdio.h>

int main(){
    
    int a, b;
    scanf("%d%d", &a, &b);
    
    int units = b % 10;
    int tens = (b / 10) % 10;
    int hundreds = b / 100;
    
    printf("%d\n%d\n%d\n%d", units*a, tens*a, hundreds*a, a*b);
    
    return 0;
}