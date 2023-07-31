#include <stdio.h>
#include <math.h>

/*
Lista 00
Exercício 5

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

int main(void) {
const float pi = 3.1415;
float raio, perimetro, area;

  scanf("%f", &raio);

  perimetro = 2*pi*raio;
  area = pow(raio,2)*pi;

  printf("\nPerímetro: %.2f", perimetro);
  printf("\nÁrea: %.2f", area);
  
  return 0;
}