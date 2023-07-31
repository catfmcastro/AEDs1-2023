#include <stdio.h>

/*
Lista 04
Exercício 9

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

void converteHora(int total_segundos, int *hora, int *min, int *seg)
{
    // conversão de seg, em hora, min e seg
    *hora = total_segundos / 3600;
    *min = (total_segundos % 3600) / 60;
    *seg = (total_segundos) % 60;
}

int main(void)
{
    int seg, h, m, s;

    printf("\n Insira o total de segundos: ");
    scanf(" %d", &seg);

    converteHora(seg, &h, &m, &s);

    printf("\n %d:%d:%d", h, m, s);

    return 0;
}