#include<stdio.h>

int main()
{
    int cases = 0;
    int studentnumber = 0;
    scanf("%d", &cases);
    
    for (int i = 0; i < cases; i++)
    {
        int sum = 0;
        int studentgrade[1000];
        scanf("%d", &studentnumber);
        for (int k = 0; k < studentnumber; k++)
        {
            scanf("%d", &studentgrade[k]);
            sum += studentgrade[k];
        }
    
        int average = 0;
        int count = 0;
        average = (double)sum/studentnumber;
        for(int i = 0; i < studentnumber; i++)
        {
            if(average < studentgrade[i]) count++;
        }
        printf("%.3lf%%\n", (double)count*100/studentnumber);

    }
    return 0;
}