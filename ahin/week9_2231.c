#include <stdio.h>

int main()
{
    int i, n;
    scanf("%d", &n);
    int sum;
    i = 1;
    while (i <= n)
    {
        int a = i;
        sum = i; // 초기화
        while(a > 0)
        {
            sum = sum + a % 10;
            a = a / 10;
        }
        if (sum == n)
        {
            printf("%d", i);
            break;
        }
        if (i == n)
        {
            printf("0");
            break;
        }
        i++;
    }
}
