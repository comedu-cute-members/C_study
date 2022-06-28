#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    switch(a){
        case 90 ... 100:printf("A"); break;
        case 80 ... 89:printf("B"); break;
        case 70 ... 79:printf("C"); break;
        case 60 ... 69:printf("D"); break;
        case 0 ...59:printf("F"); break;
    }
    return 0;
}
