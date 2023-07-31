#include <stdio.h>

/*
Lista 06
Exercício 5

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

// Preenche a matriz
void PreencheMatriz(int (*mat)[5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Insira o valor do elemento %d,%d: ", (i + 1), (j + 1));
            scanf("%d", &mat[i][j]);
        }
    }
}

// Soma os elementos da linha 4
int SomaLinha4(int (*mat)[5])
{
    int respLinha4 = 0;

    for (int i = 0; i < 5; i++)
    {
        respLinha4 += mat[3][i];
    }

    return respLinha4;
}

// Soma os elementos da coluna 2
int SomaColuna2(int (*mat)[5])
{
    int respCol2 = 0;

    for (int i = 0; i < 5; i++)
    {
        respCol2 += mat[i][1];
    }

    return respCol2;
}

// Soma os elementos da diagonal principal
int SomaDiagPrin(int (*mat)[5])
{
    int respDiagPrin = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == j)
            {
                respDiagPrin += mat[i][j];
            }
        }
    }
    return respDiagPrin;
}

// Soma os elementos da diagonal secundária
int SomaDiagSec(int (*mat)[5])
{
    int respDiagSec = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i + j == 4)
            {
                respDiagSec += mat[i][j];
            }
        }
    }

    return respDiagSec;
}

// Soma todos os elementos
int SomaTotal(int (*mat)[5])
{
    int total = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            total += mat[i][j];
        }
    }

    return total;
}

int main(void)
{
    int mat[5][5];
    int respLinha4, respCol2, respDiagPrin, respDiagSec, total;

    // Preenche a matriz
    PreencheMatriz(mat);

    // Chamada das funções
    respLinha4 = SomaLinha4(mat);
    respCol2 = SomaColuna2(mat);
    respDiagPrin = SomaDiagPrin(mat);
    respDiagSec = SomaDiagSec(mat);
    total = SomaTotal(mat);

    // Imprime os resultados no console
    printf("\n\nA soma dos elementos da linha 4 é %d.", respLinha4);
    printf("\nA soma dos elementos da coluna 2 é %d.", respCol2);
    printf("\nA soma dos elementos da diagonal principal é %d.", respDiagPrin);
    printf("\nA soma dos elementos da diagonal secudária é %d.", respDiagSec);
    printf("\nA soma de todos os elementos da matriz é %d.", total);

    return 0;
}