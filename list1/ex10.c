/*
Lista 01
Exercício 10

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

#include <stdio.h>

int main(void)
{
    int vel, motorista;

    // entrada da velocidade máxima permitida e da velocidade que o motorista estava
    scanf("%d", &vel);
    scanf("%d", &motorista);

    // imprime a mensagem/valor da multa de acordo com a ultrapassagem da velocidade permitida
    if (motorista <= vel)
    {
        printf("Motorista respeitou a lei\n");
    }
    else if (motorista > vel && motorista <= vel + 10)
    {
        printf("Multa de 50 reais");
    }
    else if (motorista >= vel + 11 && motorista <= vel + 30)
    {
        printf("Multa de 100 reais\n");
    }
    else if (motorista > vel + 30)
    {
        printf("Multa de 200 reais");
    }

    return 0;
}