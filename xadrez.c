#include <stdio.h>
// Desafio de Xadrez - MateCheck

void movimentoRainhaTorre(int m, char p[10]) {
    if(m > 0) {
        printf("%s \n", p);
        movimentoRainhaTorre(m - 1, p);
    }
}

int main() {
    //Variáveis para representar o número de casas que cada peça pode se mover:
    int casasCavalo;
    char peca;

    //obs.: os movimentos das peças estão padronizados!

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
        //Movimentação do Bispo (5 casas na diagonal superior direita) => transformada em loops aninhados
        printf("-- Bispo --\n");
        for (int bispoDireita = 0; bispoDireita < 5; bispoDireita++) {
            for (int bispoCima = 0; bispoCima < 1; bispoCima++)
            {
                printf("Cima, ");
            }           
            printf("Direita\n");
        }
    break;
    case 'T':
    case 't':
        //Movimentação da Torre (5 casas para a direita) => recursividade junto c/ rainha
        int casasTorre = 5;
        char direcaoTorre[10];
        direcaoTorre[10] = "Direita";
        printf("-- Torre --\n");
        movimentoRainhaTorre(casasTorre, direcaoTorre);

    break;
    case 'R':
    case 'r':
        //Movimentação da Rainha (8 casas para a esquerda) => recursividade junto c/ a torre
        int casasRainha = 8;
        char direcaoRainha[10];
        direcaoRainha[10] = "Esquerda";
        printf("-- Rainha --\n");
        movimentoRainhaTorre(casasRainha, direcaoRainha);
    break;
    case 'C':
    case 'c':
        //movimentação do cavalo (em L = esquerda e baixo) => loops com variáveis ou condições múltiplas
        printf("-- Cavalo -- \n");
        for(int y = 0, x = 0; y < 1 && x <= 1; y++, x++) { //y: movimento para baixo; x: movimento para esquerda
            while (x <= 1)
            {
                printf("Esquerda\n");
                x++;
                if(x == 2) {continue;}
            }
            printf("Baixo\n");
        }
    break;
    default:
        printf("Opção inválida!\n");
    break;
    }

    return 0;
}
