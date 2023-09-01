/*
Lista 02
Exercício 4

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

#include <stdio.h>

int main(void)
{
    int n, i;
    float fat = 1, e = 1;

    printf("\n Insira um número: ");
    scanf(" %d", &n);

    for (i = 1; i <= n; i++)
    {
        fat *= i;
        e += (1 / fat);
    }

    printf("\n Resposta: %.2f", e);

    return 0;
}
