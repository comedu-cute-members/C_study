#include <stdio.h>
#include <string.h>


int main() {

    char key[2][11] = { 0 }, n[101] = { 0 }, arr[2][11][11] = { 0 };
    int a = 0, b = 0, c[10] = { 0 };

    scanf("%s %s", key[0], n);

    strcpy(key[1], key[0]);
    a = (int)strlen(key[0]);
    b = (int)strlen(n);

    for (int i = 0; i < a; i++)
        for (int j = i + 1; j < a; j++)
            if (key[1][i] > key[1][j]) {
                char temp = key[1][i];
                key[1][i] = key[1][j];
                key[1][j] = temp;
            }

    for (int i = 0; i < a; i++) {
        for (int j = i * (b / a), idx = 0; j < i * (b / a) + b / a; idx++, j++)
            arr[0][idx][i] = n[j];
    }

    for (int i = 0; i < a; i++)
        for (int j = 0; j < a; j++) {
            if (c[j])
                continue;
            if (key[0][i] == key[1][j]) {
                for (int k = 0; k <= b / a; k++)
                    arr[1][k][i] = arr[0][k][j];
                c[j] = 1;
                break;
            }
        }
    for (int i = 0; i < b / a; i++)
        for (int j = 0; j < a; j++)
            printf("%c", arr[1][i][j]);
    printf("\n");


    return 0;
}
