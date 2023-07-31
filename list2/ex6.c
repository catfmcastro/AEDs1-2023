/*
Lista 02
Exercício 6

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

#include <stdio.h>

int main(void)
{
    int n, s = 1, i, frac = 0;

    printf("\n Insira um valor inteiro e positivo: ");
    scanf(" %d", &n);

    for (i = 1; i <= n; i++)
    {
        frac += i;
        s += (1 / frac);
    }

    printf("\n %d", s);

    return 0;
}