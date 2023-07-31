#include <stdio.h>

/*
Lista 04
Exercício 4

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

int resto(int numerador, int denominador)
{
    int resp = 0;

    if (denominador < numerador || denominador == numerador)
    {
        numerador = numerador - denominador;
        resp += 0 + resto(numerador, denominador);
    }
    else if (denominador > numerador)
    {
        resp = numerador;
    }

    return resp;
}

int main(void)
{
    ;
    int num, den, resp;

    printf("\n Insira o numerador: ");
    scanf(" %d", &num);

    printf("\n Insira o denominador (diferente de 0): ");
    scanf(" %d", &den);

    resp = resto(num, den);

    printf("\n O resto da divisão é: %d", resp);

    return 0;
}