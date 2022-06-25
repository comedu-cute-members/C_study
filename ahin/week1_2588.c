#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int num1, num2;
    int a, b, c, d;
    int three, two, one;

    printf("(1) 위치의 세 자리 자연수를 입력하세요:");
    scanf("%d", &num1);
    printf("(2) 위치의 세 자리 자연수를 입력하세요:");
    scanf("%d", &num2);

    three = num2 % 10;
    two = (num2 - three) % 100 / 10;
    one = num2 / 100;

    printf("%d %d %d", three, two, one);

    a = num1 * three;
    b = num1 * two;
    c = num1 * one;
    d = num1 * num2;

    printf("\n(1): %d\n(2): %d\n(3): %d\n(4): %d\n(5): %d\n(6): %d\n\n", num1, num2, a, b, c, d);

    return 0;
}
