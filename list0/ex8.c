#include <stdio.h>

/*
Lista 00
Exercício 8

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

int main(void){

    float A, B, C;

    scanf("%f", &A);
    scanf("%f", &B);

    C = A;

    A = B;
    B = C;

    printf("\n%f %f", A, B);

    return 0;
}