#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void torre(int n) { if (n > 0) { printf("Direita\n"); torre(n - 1); } }
void bispo(int n) { if (n > 0) { printf("Cima Direita\n"); bispo(n - 1); } }
void rainha(int n){ if (n > 0) { printf("Esquerda\n"); rainha(n - 1); } }

void bispo_loops(int casas) {
    int i, j;
    for (i = 0; i < casas; i++) {
        for (j = 0; j < 1; j++) {
            printf("Cima Direita\n");
        }
    }
}

void cavalo() {
    int up = 0, right = 0;
    for ( ; up < 2 || right < 1; ) {
        while (up < 2) {
            printf("Cima\n");
            up++;
            if (up == 2) break;
        }
        if (right < 1) {
            printf("Direita\n");
            right++;
        }
        if (up >= 2 && right >= 1) break;
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    bispo(casasBispo);
    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    torre(casasTorre);
    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    rainha(casasRainha);
    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    cavalo();
    printf("\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    bispo_loops(casasBispo);
    printf("\n");

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    // (já implementado em cavalo())

    return 0;
}