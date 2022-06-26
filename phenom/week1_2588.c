#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{

    int x, y;

    scanf("%d%d", &x, &y);

    int a = y % 10;
    int b = (y / 10) % 10;
    int c = y / 100;

    printf("%d\n%d\n%d\n%d", a * x, b * x, c * x, x * y);

    return 0;
}