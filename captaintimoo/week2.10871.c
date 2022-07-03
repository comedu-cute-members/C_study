#include <stdio.h>


int main()
{
    int N, X, A,i;
    scanf("%d %d", &N, &X);

    for (i = 1; i <= N; i++)
    {   
        scanf("%d", &A);
        if (A < X)
            printf("%d ", (int)A);



    }



    return 0;
}
