#include <stdio.h>

int main() {
    // -------------------------
    // Torre: move 5 casas para a direita usando "for"
    // -------------------------
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // -------------------------
    // Bispo: move 5 casas na diagonal para cima e à direita usando "while"
    // -------------------------
    int casasBispo = 5;
    int contadorBispo = 0;
    printf("Movimento do Bispo:\n");
    while (contadorBispo < casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }

    printf("\n");

    // -------------------------
    // Rainha: move 8 casas para a esquerda usando "do-while"
    // -------------------------
    int casasRainha = 8;
    int contadorRainha = 0;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);

    return 0;
}
