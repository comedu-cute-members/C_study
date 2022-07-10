#include <stdio.h>
int main()
{
    int t_num, s_num;
    scanf("%d", &t_num);
    for(int i=0; i<t_num; i++)
    {
        int scr[1000];
        int sum=0;
        double avg=0;
        scanf("%d",&s_num);
        for(int i=0; i<s_num; i++)
        {
            scanf("%d",&scr[i]);
            sum += scr[i];
        }
        avg = (double)sum / s_num;
        int count = 0;
        for(int i=0; i<s_num; i++)
        {
            if(avg<scr[i])count++;
        }
        printf("%.3lf%%\n",(double)count*100/s_num);
    }
}
