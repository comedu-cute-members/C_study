#include <stdio.h>
int main()
{
    int t_num;
    char s[80];
    scanf("%d",&t_num);
    for (int i=0; i<t_num; i++)
    {
        int sum=0, plus=1, a=0;
        scanf("%s",s);
        while(s[a]!='\0')
        {
            if(s[a]=='O')
                sum += plus++;
            else
                plus=1;
            a++;
        }
        printf("%d\n",sum);
    }
}
