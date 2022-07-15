#include <stdio.h>

int main(void) {
    int test, num;

    scanf("%d", &test);

    while (test--) {
        scanf("%d", &num);
        int score[num], sum = 0, high = 0;
        double avg = 0;
        for (int i = 0; i < num; i++) {
            scanf("%d", score + i);
            sum += score[i];
        }
        avg = (double)sum / num;
        for (int i = 0; i < num; i++) if (score[i] > avg) high++;
        printf("%.3lf%%\n", (double)high * 100 / num);
    }
}