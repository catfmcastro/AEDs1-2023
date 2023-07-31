#include <stdio.h>

/*
Lista 06
Exercício 8

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

// Imprime Matriz
void ImprimeMatriz(int mat[][10])
{

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

// Preenche a matriz
void PreencheMatriz(int (*mat)[10])
{

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("Insira o valor do elemento %d,%d: ", (i + 1), (j + 1));
            scanf("%d", &mat[i][j]);
        }
    }
}

// Troca a linha 2 com a linha 8
void LinhaLinha(int (*mat)[10])
{
    int matTrocada[10][10];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == 7)
            {
                matTrocada[i][j] = mat[1][j];
            }
            else if (i == 1)
            {
                matTrocada[i][j] = mat[7][j];
            }
            else
            {
                matTrocada[i][j] = mat[i][j];
            }
        }
    }

    printf("\n\nApós trocar a linha 2 com a linha 8, o resultado é:\n");
    ImprimeMatriz(matTrocada);
}

// Troca a coluna 4 com a coluna 10
void ColCol(int (*mat)[10])
{
    int matTrocada[10][10];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j == 3)
            {
                matTrocada[i][j] = mat[i][9];
            }
            else if (j == 9)
            {
                matTrocada[i][j] = mat[i][3];
            }
            else
            {
                matTrocada[i][j] = mat[i][j];
            }
        }
    }

    printf("\n\nApós trocar a coluna 4 com a coluna 10, o resultado é:\n");
    ImprimeMatriz(matTrocada);
}

// Troca a diagonal principal com a secundária
void Diagonais(int (*mat)[10])
{
    int matTrocada[10][10];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == j)
            {
                matTrocada[i][j] = mat[i][9 - j];
            }
            else if (i == (9 - j))
            {
                matTrocada[i][j] = mat[i][j];
            }
            else
            {
                matTrocada[i][j] = mat[i][j];
            }
        }
    }

    printf("\n\nApós trocar a diagonal principal com a secundária, o resultado é:\n");
    ImprimeMatriz(matTrocada);
}

// Troca a linha 5 com a coluna 10
void LinhaCol(int (*mat)[10])
{
    int matTrocada[10][10];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == 4)
            {
                matTrocada[i][j] = mat[i][9];
            }
            else if (j == 9)
            {
                matTrocada[i][j] = mat[4][j];
            }
            else
            {
                matTrocada[i][j] = mat[i][j];
            }
        }
    }

    printf("\n\nApós trocar a linha 5 com a coluna 10, o resultado é:\n");
    ImprimeMatriz(matTrocada);
}

int main(void)
{
    int mat[10][10];

    PreencheMatriz(mat);

    printf("\nA matriz inserida é:\n");
    ImprimeMatriz(mat);

    LinhaLinha(mat);
    ColCol(mat);
    Diagonais(mat);
    LinhaCol(mat);

    return 0;
}