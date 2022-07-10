#include <stdio.h>

int main() {
    int N, A;
    int score{};

    scanf("%d", &N);

    while (N--) {
        scanf("%d", &A);
        
        int score[A], sum = 0, high = 0;
        double avg = 0;
        for (int i = 0; i < A; i++) {
            scanf("%d", score + i);
            sum += score[i];
        }
        avg = (double)sum / A;
        for (int i = 0; i < A; i++) if (score[i] > avg) high++;
        printf("%.3lf%%\n", (double)high * 100 / A);
    }
    return 0;
}
