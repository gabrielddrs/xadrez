#include <stdio.h>

void torreCima(int casas) {
    if (casas <= 0) return;
    printf("Cima\n");
    torreCima(casas - 1);
}

void torreDireita(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    torreDireita(casas - 1);
}

void bispoDiagonal(int vertical, int horizontal) {
    if (vertical <= 0 || horizontal <= 0) return;
    printf("Cima\n");
    printf("Direita\n");
    bispoDiagonal(vertical - 1, horizontal - 1);
}

void rainhaMovimento(int casas) {
    if (casas <= 0) return;
    printf("Cima\n");
    printf("Direita\n");
    rainhaMovimento(casas - 1);
}

void cavaloMovimento(int maxUp, int maxRight) {
    for (int up = 2; up <= maxUp; up++) {
        for (int right = 1; right <= maxRight; right++) {
            if (up != 2 || right != 1) continue;
            printf("Cima\n");
            printf("Cima\n");
            printf("Direita\n");
            break;
        }
    }
}

void bispoComLoops(int vertical, int horizontal) {
    for (int i = 0; i < vertical; i++) {
        for (int j = 0; j < horizontal; j++) {
            if (i != j) continue;
            printf("Cima\n");
            printf("Direita\n");
        }
    }
}

int main() {
    int casas = 3;
    int vertical = 3;
    int horizontal = 3;

    printf("=== Movimento da Torre ===\n");
    torreCima(casas);
    torreDireita(casas);

    printf("\n=== Movimento do Bispo (Recursividade) ===\n");
    bispoDiagonal(vertical, horizontal);

    printf("\n=== Movimento do Bispo (Loops Aninhados) ===\n");
    bispoComLoops(vertical, horizontal);

    printf("\n=== Movimento da Rainha ===\n");
    rainhaMovimento(casas);

    printf("\n=== Movimento do Cavalo ===\n");
    cavaloMovimento(2, 1);

    return 0;
}