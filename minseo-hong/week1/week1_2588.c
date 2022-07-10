#include <stdio.h>

int main() {
    int a, b;
    int fst, snd, trd;
    
    scanf("%d", &a);
    scanf("%d", &b);
    
    fst = b / 100;
    snd = (b % 100) / 10;
    trd = b % 10;
    
    fst *= a;
    snd *= a;
    trd *= a;
    
    printf("%d\n", trd);
    printf("%d\n", snd);
    printf("%d\n", fst);
    printf("%d\n", trd  + snd * 10 + fst * 100);
    
    return 0;
}
