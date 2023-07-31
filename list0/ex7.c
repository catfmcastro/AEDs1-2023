#include <stdio.h>
#include <math.h>

/*
Lista 00
Exercício 7

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

int main(void){

    int razao, termo, pg;

    scanf("%d", &razao);
    scanf("%d", &termo);

    pg = termo * pow(razao, 4);

    printf("\n%d", pg);

    return 0;
}