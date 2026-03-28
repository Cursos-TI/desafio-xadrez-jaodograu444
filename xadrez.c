#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


// Nível Novato - Movimentação das Peças


int main()
{
    int Bispo = 0;
    int Torre = 0;
    int Rainha = 0;

    printf("Rainha: \n");
    for (Rainha; Rainha < 8; Rainha++)
    {
        printf("Esquerda \n");
    }
    
    printf("Torre: \n");
    while (Torre < 5) {
        printf("Direita \n");
        Torre++;
    }
    
    printf("Bispo: \n");
    do {
        printf("Cima, direita \n");
        Bispo++;
    } while (Bispo < 5);

    return 0;
}
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.


