#include <stdio.h>

int main(void) {
    int w, h;
    int x, y;
    
    scanf("%d %d %d %d", &x, &y, &w, &h);
    
    int distList[4] = {w - x, x, y, h - y};
    
    int minDist = distList[0];
    
    for (int index = 1; index < 4; index++) {
        if (distList[index] < minDist) {
            minDist = distList[index];
        }
    }
    
    printf("%d\n", minDist);
    
    return 0;
}
