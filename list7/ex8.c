#include <stdio.h>
#include <stdlib.h>

/*
Lista 07
Exercício 8

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

// Imprime Vetor
void ImprimeVetor(int tam, char vec[tam])
{
    for (int i = 0; i < tam; i++)
    {
        printf("%c ", vec[i]);
    }
}

int main(void)
{
    // Declaração de vetor
    char *alfabeto = malloc(26 * sizeof(char));

    // Salva o alfabeto no vetor
    for (int i = 0; i < 26; i++)
    {
        alfabeto[i] = 'A' + i;
    }

    // Imprime o resultado
    ImprimeVetor(26, alfabeto);

    // Libera a memória
    free(alfabeto);

    return 0;
}