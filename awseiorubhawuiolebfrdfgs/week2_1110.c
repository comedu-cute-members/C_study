#include <stdio.h>

void main() 
{
    int input, A = 0, B, one, C = 0, cnt = 0;
    scanf("%d", &input);
    A = input;
 
    while (1) {
        if (A < 10)    B = 0;
        else    B = A / 10;
        one = A % 10;
 
        C = B + one;
        cnt++;
 
        B = A % 10;
        one = C % 10;
        A = (B * 10) + one;
 
        if (A == input)
            break;
    }
    printf("%d", cnt);
}
