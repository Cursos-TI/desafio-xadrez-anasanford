#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    //Variáveis para representar o número de casas que cada peça pode se mover:
    int casasBispo, casasTorre, casasRainha, casasCavalo;
    char peca;

    //obs.: no nível iniciante, os movimentos das peças estão padronizados!

    //Início do jogo:
    printf("--- XADREZ ---\n");
    printf("Escolha qual peça você quer mover: \n");
    printf("B. Bispo\n");
    printf("T. Torre\n");
    printf("R. Rainha\n");
    printf("C. Cavalo\n");
    printf("Digite o código da peça: ");
    scanf(" %c", &peca);

    //Opções do menu:
    switch (peca)
    {
    case 'B':
    case 'b':
        //Movimentação do Bispo (5 casas na diagonal superior direita)
        printf("-- Bispo --\n");
        for (casasBispo = 0; casasBispo < 5; casasBispo++) {
            printf("Direita, cima\n");
        }
    break;
    case 'T':
    case 't':
        //Movimentação da Torre (5 casas para a direita)
        printf("-- Torre --\n");
        for (casasTorre = 0; casasTorre < 5; casasTorre++) {
            printf("Direita\n");
        }
    break;
    case 'R':
    case 'r':
        //Movimentação da Rainha (8 casas para a esquerda)
        printf("-- Rainha --\n");
        for(casasRainha = 0; casasRainha < 8; casasRainha++) {
            printf("Esquerda\n");
        }
    break;
    case 'C':
    case 'c':
        //movimentação do cavalo (em L = esquerda e baixo = EEB,EBB,BBE,BEE)
        printf("-- Cavalo -- \n");
        for(int y = 0; y < 1; y++) { //movimento cima baixo
            int x = 0; //movimento esquerda direita
            while (x <= 1)
            {
                printf("Esquerda\n");
                x++;
            }
            printf("Baixo\n");
        }
    break;
    default:
        printf("Opção inválida!\n");
    break;
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
