/*
Lista 01
Exercício 6

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

#include <stdio.h>

int main(void) {

  float a, b, x;

    //entrada dos coeficientes
  scanf("%f", &a);
  scanf("%f", &b);

  x = (-b)/a;

    //imprime o resultado
  printf("\n%.2f", x);
  
  return 0;
}