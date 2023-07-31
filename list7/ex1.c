#include <stdio.h>
#include <stdlib.h>

/*
Lista 07
Exercício 1

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

int main(void)
{
    int n;

    // Input do número de inteiros a serem inseridos
    printf("\nInsira o número de elementos: ");
    scanf("%d", &n);

    // Declaração de vetor
    int *ptr = malloc(n * sizeof(int));

    // Preenche vetor
    for (int i = 0; i < n; i++)
    {
        printf("Insira o elemento %d: ", (i + 1));
        scanf("%d", &ptr[i]);
    }

    // Imprime vetor
    printf("\nO vetor inserido foi:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }

    // Liberação de memória
    free(ptr);

    return 0;
}