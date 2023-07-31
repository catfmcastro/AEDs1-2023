#include <stdio.h>
#include <stdlib.h>

/*
Lista 07
Exercício 6

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

// Preenche Vetor
void PreencheVetor(int tam, int *vec)
{
    for (int i = 0; i < tam; i++)
    {
        printf("Insira o elemento %d: ", i + 1);
        scanf("%d", &vec[i]);
    }
}

// Soma dos elementos de um vetor
int SomaVetor(int tam, int *vec)
{
    int soma = 0;
    for (int i = 0; i < tam; i++)
    {
        soma += vec[i];
    }
    return soma;
}

int main(void)
{
    int total, tam;

    // Input do tamanho do vetor
    printf("\nInsira o tamanho do vetor: ");
    scanf("%d", &tam);

    // Declaração de vetor e input de elementos
    int *vec = malloc(tam * sizeof(int));
    PreencheVetor(tam, vec);

    // Soma dos elementos
    total = SomaVetor(tam, vec);

    // Imprime o resultado
    printf("\nA soma dos elementos inseridos é %d.", total);

    // Liberação de memória
    free(vec);

    return 0;
}