/*
Lista 02
Exercício 1

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

#include <stdio.h>

int main(void)
{
    int n, x, neg = 0, pos = 0, zero = 0;

    printf("\n Insira a quantidade de números que vão ser inseridos: ");
    scanf(" %d", &n);

    while (n > 0)
    {
        printf("\n Insira um número: ");
        scanf(" %d", &x);

        if (x > 0)
        {
            pos++;
        }
        else if (x < 0)
        {
            neg++;
        }
        else if (x == 0)
        {
            zero++;
        }

        n--;
    }

    printf("\n Você inseriu %d número(s) posivos, %d número(s) negativos %d número(s) nulos.", pos, neg, zero);

    return 0;
}