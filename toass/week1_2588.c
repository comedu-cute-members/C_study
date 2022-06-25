#include <stdio.h>

int main(){
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    printf("%d\n", x*(y%10));
    printf("%d\n", x*(y%100-(y%10))/10);
    printf("%d\n", x*(y-(y%100))/100);
    printf("%d\n", x*y);
    return 0;
}   