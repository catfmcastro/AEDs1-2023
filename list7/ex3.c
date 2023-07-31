#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/*
Lista 07
Exercício 3

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

int main(void)
{
    int n; // Número de elementos do vetor
    int maior = INT_MIN;

    // Input
    printf("\nInsira o número de elementos do vetor: ");
    scanf("%d", &n);

    // Declaração do vetor
    int *vec = malloc(n * sizeof(int));

    printf("\n");
    for (int i = 0; i < n; i++)
    {
        // Input de elementos do vetor
        printf("Insira o elemento %d: ", i + 1);
        scanf("%d", &vec[i]);

        // Detecta o maior número do vetor
        if (vec[i] > maior)
        {
            maior = vec[i];
        }
    }

    printf("\n\nO maior número do vetor é %d", maior);

    free(vec);

    return 0;
}