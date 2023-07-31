/*
Lista 02
Exercício 3

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

#include <stdio.h>

int main(void)
{
    int i = 10, x, d39 = 0, d2 = 0, d5 = 0, dnone = 0;

    do
    {
        printf("\n Insira um número: ");
        scanf(" %d", &x);

        if (x % 3 == 0 && x % 9 == 0)
        {
            d39++;
        }
        if (x % 2 == 0)
        {
            d2++;
        }
        if (x % 5 == 0)
        {
            d5++;
        }
        if (x % 5 != 0 && x % 2 != 0 && x % 3 != 0 && x % 9 != 0)
        {
            dnone++;
        }
        i--;

    } while (i > 0);

    if (dnone > 0)
    {
        while (dnone > 0)
        {
            printf("\n Número não é divisível pelos valores");
            dnone--;
        }
    }

    printf("\n %d Números são divisíveis por 3 e por 9", d39);
    printf("\n %d Números são divisíveis por 2", d2);
    printf("\n %d Números são divisíveis por 5", d39);

    return 0;
}