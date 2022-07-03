#include <stdio.h>

int main()
{
    int num, a, b, c, d, e=0, f;
    
    scanf("%d", &num);
    f = num;

    while (1)
    {
        a = num / 10;
        b = num % 10;
        c = a + b;
        d = b * 10 + c % 10;
        num = d;
        e += 1;
        if (d == f)
        {
            printf("%d", e);
            break;
        }
    }
}
