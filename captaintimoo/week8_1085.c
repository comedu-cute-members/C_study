#include <stdio.h>
 
int main()
{
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    int min = x;
    if (min > w - x)
        min = w - x;
    if (min > y)
        min = y;
    if (min > h - y)
        min = h - y;
    printf("%d\n", min);

}
