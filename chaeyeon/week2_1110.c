#include <stdio.h>
int main()
{
    int num, cycle = 0;
    scanf("%d", &num);
    int A = num;
    while (1)
    {
        num = (num / 10 + num % 10) % 10 + num % 10 * 10;
        cycle++;
        if (num == A)
        {
            printf("%d", cycle);
            break;
        }
    }
    return 0;
}
