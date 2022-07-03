#include <stdio.h>


int main()
{
    int A,B,num;
    
    
    while (1)
    {
        scanf("%d %d", &A, &B);
        num = A + B;
        if (A == 0 && B == 0)
            break;
        else
            printf("%d\n", num);


    }


        return 0;
}
