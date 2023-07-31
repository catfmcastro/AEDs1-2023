#include <stdio.h>
#include <stdlib.h>

/*
Lista 07
Exercício 5

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

// Imprime Vetor
void ImprimeVetor(int tam, int vec[tam])
{
    for (int i = 0; i < tam; i++)
    {
        printf("%d ", vec[i]);
    }
}

// Preenche Vetor
void PreencheVetor(int tam, int *vec)
{
    for (int i = 0; i < tam; i++)
    {
        printf("Insira o elemento %d: ", i + 1);
        scanf("%d", &vec[i]);
    }
}

// Ordena os elementos do vetor em ordem crescente
void ordenaVetor(int tam, int *vec)
{
    // variável para deterctar se os dois elementos já estão em ordem
    int ordenado = 1;

    // Bubble sort
    while (ordenado == 1)
    {
        for (int i = 0; i < tam - 1; i++)
        {
            ordenado = 0;
            if (vec[i + 1] < vec[i])
            {
                ordenado = 1;
                int temp = vec[i];
                vec[i] = vec[i + 1];
                vec[i + 1] = temp;
            }
        }
    }
}

int main(void)
{
    int n; // Tamanho do vetor

    // Input
    printf("\nInsira o tamanho do vetor: ");
    scanf("%d", &n);

    // Declaração do vetor
    int *vec = malloc(n * sizeof(int));

    printf("\n");
    PreencheVetor(n, vec);

    ordenaVetor(n, vec);

    printf("\n");
    ImprimeVetor(n, vec);

    free(vec);

    return 0;
}