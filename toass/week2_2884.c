#include <stdio.h>
#pragma warning(disable: 4996)

int main(){
    int h,m,a;
    scanf("%d %d", &h, &m);
    a = m -45;
    if(a >= 0){
        printf("%d %d", h, a);
    } else {
        a = m + 15;
        if(h != 0){
            h--;
        } else {
            h = 23;
        }
        printf("%d %d", h, a);
    }
    return 0;
}