/*
Lista 03
Exercício 6

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

#include <stdio.h>

void form(int n)
{
    int i;
    float s = 1, fat = 1;

    for (i = 1; i <= n; i++)
    {
        fat *= i;
        s += (1 / fat);
    }

    printf("\n\nResultado: %.2f", s);
}

int main(void)
{
    int n;

    printf("\nInsira um valor inteiro e positivo: ");
    scanf(" %d", &n);

    form(n);

    return 0;
}