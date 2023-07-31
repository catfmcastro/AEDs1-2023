/*
Lista 01
Exercício 9

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

#include <stdio.h>

int main(void){
    // entrada do sinal
    char sinal;
    scanf(" %c", &sinal);

    // imprime na tela a mensagem respectiva a cada sinal
    switch (sinal)
    {
    case '<':
        printf("SINAL DE MENOR\n");
        break;

    case '>':
        printf("SINAL DE MAIOR\n");
        break;

    case '=':
        printf("SINAL DE IGUAL\n");
        break;

    default:
        printf("OUTRO SINAL\n");
        break;
    }
    return 0;
}