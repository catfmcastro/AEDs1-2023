#include <stdio.h>
#include <stdlib.h>

/*
Lista 06
Exercício 7

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

// Imprime Matriz
void ImprimeMatriz(int *mat)
{

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%d ", *(mat + (i * 6) + j));
        }
        printf("\n");
    }
}

// Preenche as matrizes
void PreencheMatriz(int *matA, int *matB)
{

    printf("\nPreencha a matriz A:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("Insira o valor do elemento %d,%d: ", (i + 1), (j + 1));
            scanf("%d", (matA + 6 * i + j));
            // A + 6*i + j
        }
    }

    printf("\nPreencha a matriz B:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("Insira o valor do elemento %d,%d: ", (i + 1), (j + 1));
            scanf("%d", (matB + 6 * i + j));
        }
    }
}

// Soma as duas matrizes
int *SomaMatriz(int *matA, int *matB, int *matSoma)
{

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            *(matSoma + 6 * i + j) = *(matA + (6 * i) + j) + *(matB + (6 * i) + j);
        }
    }

    return matSoma;
}

// Soma as duas matrizes
int *SubtraiMatrizes(int *matA, int *matB, int *matSub)
{

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            *(matSub + (6 * i) + j) = *(matA + (6 * i) + j) + *(matB + (6 * i) + j);
        }
    }

    return matSub;
}

int main(void)
{
    int *matA = malloc(4 * 6 * sizeof(int));
    int *matB = malloc(4 * 6 * sizeof(int));
    int *matSoma = malloc(4 * 6 * sizeof(int));
    int *matSub = malloc(4 * 6 * sizeof(int));

    // Chamada das Funções
    PreencheMatriz(matA, matB);

    // Soma
    matSoma = SomaMatriz(matA, matB, matSoma);
    printf("\n\nA soma das matrizes é:\n"),
        ImprimeMatriz(matSoma);

    // Subtração
    matSub = SubtraiMatrizes(matA, matB, matSub);
    printf("\n\nA subtração das matrizes é:\n"),
        ImprimeMatriz(matSub);

    // Liberação dos ponteiros
    free(matA);
    free(matB);
    free(matSoma);
    free(matSub);

    return 0;
}