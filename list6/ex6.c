#include <stdio.h>

/*
Lista 06
Exercício 6

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

int main(void)
{
    int mat[4][4];
    int soma = 0;

    // Preenche a matriz
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Insira o valor do elemento %d,%d: ", (i + 1), (j + 1));
            scanf("%d", &mat[i][j]);
        }
    }

    // Soma os elementos abaixo da diagonal principal
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i > j)
            {
                soma += mat[i][j];
            }
        }
    }

    printf("\n\nA soma dos elementos abaixo da diagonal principal é %d", soma);

    // Imprime na tela os elementos da diagonal principal
    printf("\n\nOs elementos da diagonal principal são: ");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == j)
            {
                printf("%d ", mat[i][j]);
            }
        }
    }

    return 0;
}