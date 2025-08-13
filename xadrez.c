#include <stdio.h>

// Definição de quantos passos cada peça vai andar
#define BISPO 5
#define TORRE 5
#define RAINHA 8

int main() {
    int i;

    printf("Movimentos das peças - Nível Novato\n\n");

    // Movimento do Bispo: diagonal pra cima e direita
    printf("Bispo:\n");
    for (i = 1; i <= BISPO; i++) {
        printf("Diagonal cima-direita: passo %d\n", i);
    }
    printf("\n");

    // Movimento da Torre: pra direita
    printf("Torre:\n");
    for (i = 1; i <= TORRE; i++) {
        printf("Direita: passo %d\n", i);
    }
    printf("\n");

    // Movimento da Rainha: pra esquerda
    printf("Rainha:\n");
    for (i = 1; i <= RAINHA; i++) {
        printf("Esquerda: passo %d\n", i);
    }
    printf("\n");

    printf("Fim do código.\n");

    return 0;
}
