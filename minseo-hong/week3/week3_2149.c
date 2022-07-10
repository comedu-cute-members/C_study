#include <stdio.h>
#include <string.h>

#define KEY_MAX 10
#define CODE_MAX 100
#define MATRIX_ROW_MAX 11
#define MATRIX_COL_MAX 10

int main() {
    char key[KEY_MAX] = {}, code[CODE_MAX] = {}, newKey[KEY_MAX] = {};
    char matrix[MATRIX_ROW_MAX][MATRIX_COL_MAX] = {};

    int keyLen, codeLen;
    int rowLen, colLen;
    
    int index = 0;

    scanf("%s", key);
    scanf("%s", code);

    keyLen = (int)strlen(key);
    codeLen = (int)strlen(code);
    
    rowLen = (codeLen / keyLen) + 1;
    colLen = keyLen;

    memcpy(newKey, key, sizeof(key));

    for (int i = 0; i < keyLen - 1; i++) {
        for (int j = 0; j < keyLen - 1 - i; j++) {
            if (newKey[j] > newKey[j + 1]) {
                int temp = newKey[j];
                newKey[j] = newKey[j + 1];
                newKey[j + 1] = temp;
            }
        }
    }

    for (int col = 0; col < colLen; col++) {
        matrix[0][col] = newKey[col];
    }

    for (int col = 0; col < colLen; col++) {
        for (int row = 1; row < rowLen; row++) {
            matrix[row][col] = code[index];

            index++;
        }
    }

    for (int i = 0; i < keyLen; i++) {
        for (int j = 0; j < keyLen; j++) {
            if (matrix[0][j] == key[i]) {
                matrix[0][j] = i;
                
                break;
            }
        }
    }
    
    for (int i = 0; i < keyLen; i++) {
        for (int j = 0; j < keyLen; j++) {
            if (matrix[0][j] == i) {
                for (int row = 0; row < rowLen; row++) {
                    int temp = matrix[row][i];
                    matrix[row][i] = matrix[row][j];
                    matrix[row][j] = temp;
                }

                break;
            }
        }

    }

    for (int row = 1; row < rowLen; row++) {
        for (int col = 0; col < colLen; col++) {
            printf("%c", matrix[row][col]);
        }
    }
    
    printf("\n");
    
    return 0;
}
