#include <stdio.h>
void han_soo(int N)
{

    if (N < 100)
        printf("%d", N);
    else
    {
        int i;
        int cnt;
        int A, B, C; 
        cnt = 99;
        for (i = 100; i <= N; i++)
        {
            A = i / 100;
            B = i / 10 % 10;
            C = i % 10;

            if ((C - B) == (B - A))
                cnt++;
        }
        printf("%d", cnt);
    }
}
int main()
{
    int N;
    scanf("%d", &N);
    han_soo(N);
}
