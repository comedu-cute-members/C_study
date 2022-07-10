#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int C, N, score[1000], average;
    float perc;

    scanf("%d", &C);
    
    
    for (int i = 0; i < C; i++) {
        float total = 0, h_score = 0;
        average = 0;
        scanf("%d", &N);

        for (int j = 0; j < N; j++) {
            scanf("%d", &score[j]);
            total += score[j];
        }

        average = total / N;

        for (int k = 0; k < N; k++) {
            if (average < score[k])
                h_score++;
            else h_score = h_score;
        }

        perc = h_score * 100 / N;
        printf("%.3f%%\n", perc);
    }
}