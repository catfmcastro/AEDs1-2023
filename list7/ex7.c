#include <stdio.h>
#include <stdlib.h>

/*
Lista 07
Exercício 7

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

// Inverte um vetor e imprime o resultado na tela
void InverteVetor(int tam, int *vec)
{
    int vecInv[tam];

    for (int i = 0; i < tam; i++)
    {
        vecInv[i] = vec[(tam - 1) - i];
    }

    printf("\n\nO vetor invertido é: ");
    ImprimeVetor(tam, vecInv);
}

int main(void)
{
    int tam;

    // Input do tamanho do vetor
    printf("\nInsira o tamanho do vetor: ");
    scanf("%d", &tam);

    // Declaração do vetor
    int *vec = malloc(tam * sizeof(int));

    // Input dos elementos
    PreencheVetor(tam, vec);

    // Inversão do vetor
    InverteVetor(tam, vec);

    // Liberação da memória
    free(vec);

    return 0;
}