#include <stdio.h>
#include <stdlib.h>

/*
Lista 06
Exercício 2

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

// Imprime o vetor no console
void ImprimeVetor(int n, int vec[n])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", vec[i]);
    }
}

// Procedimento para preencher o vetor
void PreencheVetor(int n, int vec[n])
{
    for (int i = 0; i < 10; i++)
    {
        printf("Insira o elemento de índice %d: ", i);
        scanf("%d", &vec[i]);
    }
}

// Preenche vetor com valores negativos
int *CopiaNegativos(int vec[10], int *cont)
{

    // Conta quantos elementos são negativos
    for (int i = 0; i < 10; i++)
    {
        if (vec[i] < 0)
        {
            (*cont)++;
        }
    }

    int *vecNegativo = (int *)malloc((*cont) * sizeof(int)); // Declaração do vetor negativo
    int j = 0;                                               // Contador de índices do vetor negativo;

    // Preenche o novo vetor com valores negativos
    for (int i = 0; i < 10; i++)
    {
        if (vec[i] < 0)
        {
            vecNegativo[j] = vec[i];
            j++;
        }
    }

    return vecNegativo;
}

// FUNÇÃO MAIN
int main(void)
{
    int vec[10];
    int cont = 0;

    // Chamada das funções
    PreencheVetor(10, vec);
    int *vecNegativo = CopiaNegativos(vec, &cont);

    // Imprime o resultado na tela
    printf("Os valores negativos inseridos são:\n");
    ImprimeVetor(cont, vecNegativo);

    return 0;
}