#include <stdio.h>

int main() 
{
    int N,X;
    int number;
    scanf("%d %d",&N,&X);
    for(int i=0; i<N ; i++)
    {
        scanf("%d", &number);
        if(number < X)
            {
                printf("%d ",number);
            }
        
    }
    printf("\n");
}
