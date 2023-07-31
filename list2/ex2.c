/*
Lista 02
Exercício 2

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

#include <stdio.h>

int main(void)
{
    int n, x, neg = 0, pos = 0, zero = 0, tot = 0;
    float porpos, porneg, porzer;

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
        tot++;
        n--;
    }

    porpos = ((float)pos / tot) * 100;
    porneg = ((float)neg / tot) * 100;
    porzer = ((float)zero / tot) * 100;

    printf("\n Foram inseridos %.2f%% de números postitívos, %.2f%% de números negativos e %.2f%% de números nulos.", porpos, porneg, porzer);

    return 0;
}