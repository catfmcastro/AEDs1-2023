/*
Lista 02
Exercício 5

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

#include <stdio.h>

// media sal pop, media filhos, maior sal, perc de pessoas com sal<100

int main(void)
{

    int f, filhos = 0, tot = 0, hab = 0, mediafilhos = 0, pessoas100 = 0;
    float s, sal = 0, mediasal = 0, maiorsal = 0, porcpeq;

    do
    {

        // inserção de valores
        printf("\n Insira seu salário: ");
        scanf(" %f", &s);
        printf("\n Insira o número de filhos: ");
        scanf(" %d", &f);

        tot++;
        sal = sal + s;

        // contador de filhos
        if (f > 0)
        {
            filhos = filhos + f;
        }

        // quant. de pessoas com sal<=100
        if (s <= 100)
        {
            pessoas100++;
        }

        // maior salário
        if (s > maiorsal)
        {
            maiorsal = s;
        }

    } while (s > 0);

    hab = tot + filhos;
    mediasal = sal / hab;
    mediafilhos = filhos / tot;
    porcpeq = pessoas100 / hab;

    printf("\n Média do salário da população: %.2f", mediasal);
    printf("\n Média do número de filhos: %d", mediafilhos);
    printf("\n Maior salário: %.2f", maiorsal);
    printf("\n Percentual de pessoas com salário até R$100,00: %.2f", porcpeq);

    return 0;
}