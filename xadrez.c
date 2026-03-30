#include <stdio.h>

void Torre(int casas)
{
    if (casas > 0)
    {
        printf("Direita \n");
        Torre(casas - 1);
    }
}

void Rainha(int casas)
{
    if (casas > 0)
    {
        printf("Esquerda \n");
        Rainha(casas - 1);
    }
}

void Bispo(int casas)
{
    if (casas <= 0)
        return;

    // loop externo
    printf("Cima, ");

    // loop interno
    for (int i = 0; i < 1; i++)
    {
        printf("Direita\n");
    }

    Bispo(casas - 1);
}

int main()
{

    printf("Rainha: \n");
    Rainha(8);

    printf("Torre: \n");
    Torre(5);

    printf("Bispo: \n");
    Bispo(5);

    printf("\n");

    printf("Cavalo: \n");
    for (int CimaCavalo = 0; CimaCavalo < 2; CimaCavalo++)
    {
        printf("Cima\n");

        for (int DireitaCavalo = 0; DireitaCavalo < 1; DireitaCavalo++)
        {
            if (CimaCavalo == 1) 
            {
                printf("Direita\n");
            }
        }
    }
    return 0;
}



