#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.





int main()
{
    int Bispo = 1;
    int Torre = 1;
    int Rainha = 1;
    int Cavalo = 1;

    printf("Rainha: \n");
    for (Rainha; Rainha <= 8; Rainha++)
    {
        printf("Esquerda \n");
    }
    
    printf("Torre: \n");
    while (Torre <= 5) {
        printf("Direita \n");
        Torre++;
    }
    
    printf("Bispo: \n");
    do {
        printf("Cima, direita \n");
        Bispo++;
    } while (Bispo <= 5);

    printf("\n");

    printf("Cavalo: \n");
    for (Cavalo = 1; Cavalo < 2; Cavalo++)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Baixo\n");
        }

        printf("Esquerda\n");
    }

    return 0;
}



