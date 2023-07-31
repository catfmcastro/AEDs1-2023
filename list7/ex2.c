#include <stdio.h>

/*
Lista 07
Exercício 2

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

// Permuta dois caracteres
void PermutaVetor(char *x, char *y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
}

// Imprime a permutação
void ImprimePermutacao(char *str, int inicio, int fim)
{
    if (inicio == fim)
    {
        printf("%s\n", str);
    }
    else
    {
        for (int i = inicio; i <= fim; i++)
        {
            PermutaVetor((str + inicio), (str + i));
            ImprimePermutacao(str, inicio + 1, fim);
            PermutaVetor((str + fim), (str + i)); // backtrack
        }
    }
}

int main()
{
    char str[] = "ABCD";
    int tam = sizeof(str) - 1;

    // Imprime o resultado
    printf("As permutações da string são:\n");
    ImprimePermutacao(str, 0, tam - 1);

    return 0;
}