#include <stdio.h>
#include <math.h>

/*
Lista 00
Exercício 3

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

int main(void) {

  float alt, base, perimetro, area, diagonal;

  scanf("%f", &base);
  scanf("%f", &alt);

  perimetro = 2*base + 2*alt;
  area = base*alt;
  diagonal = sqrt(pow(base, 2) + pow(alt, 2));

    printf("\nPerímetro: %.2f", perimetro);
    printf("\nÁrea: %.2f", area);
    printf("\nDiagonal: %.2f", diagonal);

  return 0;
}