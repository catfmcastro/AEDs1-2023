#include <stdio.h>

/*
Lista 04
Exercício 3

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

int divisao(int numerador, int denominador)
{
    int resp = 0;

    if (denominador < numerador || denominador == numerador)
    {
        numerador = numerador - denominador;
        resp += 1 + divisao(numerador, denominador);
    }
    else if (denominador > numerador)
    {
        resp = 0;
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

    resp = divisao(num, den);

    printf("\n A resposta é: %d", resp);

    return 0;
}