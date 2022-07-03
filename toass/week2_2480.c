#include <stdio.h>

int main(){
    int a, b, c;
    int flag=0;
    int stac;
    scanf("%d %d %d", &a, &b, &c);
    if(a == b){
        flag++;
        stac = a;
    }
    if(a == c){
        flag++;
        stac = a;
    }
    if(b == c){
        flag++;
        stac = b;
    }

    if(flag >= 3){
        printf("%d", 10000+a*1000);
    } else if(flag == 1){
        printf("%d", 1000+stac*100);
    } else {
        if(a > b && a > c){
            printf("%d", a*100);
        } else if(a < b && b > c){
            printf("%d", b*100);
        } else {
            printf("%d", c*100);
        }
    }
    return 0;
}