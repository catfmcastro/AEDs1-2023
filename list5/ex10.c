#include <stdio.h>
#include <float.h>

/*
Lista 05
Exercício 10

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

int main(void)
{
    int linha = 0;
    float valor = 0, max = FLT_MIN, min = FLT_MAX, media = 0;

    // Abertura do arquivo para leitura
    FILE *arq = fopen("entrada.txt", "r");

    // Determinação dos valores
    while (fscanf(arq, " %f", &valor) != EOF)
    {
        if (valor > max)
        {
            max = valor;
        }
        if (valor < min)
        {
            min = valor;
        }

        media += valor;
        linha++;
    }

    fclose(arq);

    // Cálculo da média
    media = media / linha;

    printf("Valor máximo: %.2f\n", max);
    printf("Valor mínimo: %.2f\n", min);
    printf("Média: %.2f\n", media);

    return 0;
}