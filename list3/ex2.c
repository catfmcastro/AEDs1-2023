/*
Lista 03
Exercício 2

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

#include <stdio.h>

void media(int sal, int hab)
{
    float calculo = (float)sal / (float)hab;
    printf("\n A média de salário da população é: %.2f", calculo);
}

int main(void)
{
    int filhos, hab = 0;
    float sal;
    char cont;
    do
    {
        printf("\nInsira a quantidade de filhos: ");
        scanf(" %d", &filhos);
        printf("\nInsira o seu salário: ");
        scanf(" %f", &sal);

        hab += filhos + 1;

        printf("\nAdicionar os dados de mais um habitante (responda S ou N): ");
        scanf(" %c", &cont);

    } while (cont == 'S');

    media(sal, hab);

    return 0;
}