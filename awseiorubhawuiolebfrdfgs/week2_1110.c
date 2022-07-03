#include <stdio.h>

int main() 
{
    int ten = 0;
    int one = 0;
    int sum = 0;
    int n = 0;
    int a = 0;
    int p = 1;

    scanf("%d", &a);
    n = a;

    while (a != 0)
    {
        ten = n/10;
        one = n % 10;
        sum = ten + one;
        n = (one * 10) + (sum % 10);
        if (n==a)
        {
            break;
        }
        p++;
    }
    printf("%d", p);
    return (0);
}
