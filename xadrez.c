#include <stdio.h>  

// Definindo constantes para as movimentações  
#define BISHOP_MOVE 5  
#define ROOK_MOVE 5  
#define QUEEN_MOVE 8  

int main() {  
    // Movimentação do Bispo: 5 casas na diagonal superior direita  
    int i;  

    // Usando loop for para o movimento do bispo  
    printf("Movimento do Bispo:\n");  
    for (i = 0; i < BISHOP_MOVE; i++) {  
        printf("Cima, Direita\n");  
    }  

    // Movimentação da Torre: 5 casas para a direita  
    printf("\nMovimento da Torre:\n");  
    for (i = 0; i < ROOK_MOVE; i++) {  
        printf("Direita\n");  
    }  

    // Movimentação da Rainha: 8 casas para a esquerda  
    printf("\nMovimento da Rainha:\n");  
    for (i = 0; i < QUEEN_MOVE; i++) {  
        printf("Esquerda\n");  
    }  

    // Usando loop while para o movimento do bispo  
    printf("\nMovimento do Bispo com while:\n");  
    i = 0;  
    while (i < BISHOP_MOVE) {  
        printf("Cima, Direita\n");  
        i++;  
    }  

    // Usando loop do-while para o movimento da torre  
    printf("\nMovimento da Torre com do-while:\n");  
    i = 0;  
    do {  
        printf("Direita\n");  
        i++;  
    } while (i < ROOK_MOVE);  

    // Usando loop while para a rainha  
    printf("\nMovimento da Rainha com while:\n");  
    i = 0;  
    while (i < QUEEN_MOVE) {  
        printf("Esquerda\n");  
        i++;  
    }  

    return 0;  
}
