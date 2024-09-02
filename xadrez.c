#include <stdio.h>  

// Definindo constantes para os movimentos  
#define BISHOP_MOVE 5  
#define ROOK_MOVE 5  
#define QUEEN_MOVE 8  
#define KNIGHT_MOVE 1  

int main() {  
    // Movimentação do bispo usando loops aninhados  
    printf("Movimento do Bispo:\n");  
    for (int i = 0; i < BISHOP_MOVE; i++) {  
        for (int j = 0; j < 1; j++) { // Loop aninhado para simular a diagonal  
            printf("Cima, Direita\n");  
        }  
    }  

    // Movimentação da torre usando loop for  
    printf("\nMovimento da Torre:\n");  
    for (int i = 0; i < ROOK_MOVE; i++) {  
        printf("Direita\n");  
    }  

    // Movimentação da rainha usando loop while  
    printf("\nMovimento da Rainha:\n");  
    int queenMoves = 0;  
    while (queenMoves < QUEEN_MOVE) {  
        printf("Esquerda\n");  
        queenMoves++;  
    }  

    // Movimentação do cavalo usando loop for  
    printf("\nMovimento do Cavalo:\n");  
    for (int i = 0; i < KNIGHT_MOVE; i++) {  
        printf("Cima, Direita\n");  
        printf("Cima, Direita\n"); // Simulando o movimento em L  
    }  

    return 0;  
}
