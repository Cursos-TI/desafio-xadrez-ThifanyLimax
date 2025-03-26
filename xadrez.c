#include <stdio.h>

// Desafio de Xadrez - MateCheck 

// Função recursiva para movimentação da Torre (direita)
void mover_torre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    mover_torre(passos - 1);
}

// Função recursiva para movimentação do Bispo (cima e direita)
void mover_bispo(int passos, int atual) {
    if (atual == passos) return;
    printf("Cima Direita\n");
    mover_bispo(passos, atual + 1);
}

// Função recursiva para movimentação da Rainha (esquerda)
void mover_rainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    mover_rainha(passos - 1);
}

// Movimentação do Cavalo (duas casas para cima e uma para a direita)
void mover_cavalo(int tentativas) {
    for (int i = 0; i < tentativas; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Cima\n");
        }
        for (int k = 0; k < 1; k++) {
            printf("Direita\n");
        }
        printf("\n");
        printf("--- Movimento completo ---\n");
    }
}

int main() {
    // Número de casas a serem movidas (definido no código)
    const int passos_torre = 5;
    const int passos_bispo = 5;
    const int passos_rainha = 8;
    const int tentativas_cavalo = 1; // Número de vezes que o cavalo faz o movimento em L

    printf("Passos da Torre:\n");
    mover_torre(passos_torre);
    printf("\n");

    printf("Passos do Bispo:\n");
    mover_bispo(passos_bispo, 0);
    printf("\n");

    printf("Passos da Rainha:\n");
    mover_rainha(passos_rainha);
    printf("\n");

    printf("Passos do Cavalo:\n");
    mover_cavalo(tentativas_cavalo);
    printf("\n");

    return 0;
}