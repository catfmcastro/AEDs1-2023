#include <stdio.h>

/*
Lista 05
Exercício 1

Catarina F. M. Castro

AEDs 1 -  Prof. Gabriel Barbosa da Fonseca
*/

int main(void)
{
    FILE *arq = fopen("arquivo", "w+");

    // Loop para impressão dos números
    for (int i = 1; i <= 10; i++)
    {
        fprintf(arq, "%d", i);
        if (i < 10)
        {
            fprintf(arq, "\n");
        }
    }

    fclose(arq);

    printf("\n Arquivo pronto!");

    return 0;
}