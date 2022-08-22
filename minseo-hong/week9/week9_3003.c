#include <stdio.h>

#define NUMBER_OF_CHESS_TYPE 6

int main() {
    int chessPiece[NUMBER_OF_CHESS_TYPE] = { 1, 1, 2, 2, 2, 8 };
    int foundedChess[NUMBER_OF_CHESS_TYPE] = {};
    
    for (int i = 0; i < NUMBER_OF_CHESS_TYPE; i++) {
        scanf("%d", &foundedChess[i]);
    }
    
    for (int i = 0; i < NUMBER_OF_CHESS_TYPE; i++) {
        int remainingChess = chessPiece[i] - foundedChess[i];
        
        printf("%d ", remainingChess);
    }
    
    printf("\n");
    
    return 0;
}
