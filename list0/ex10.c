#include <stdio.h>

/*
Lista 00
Exercício 10

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

int main(void) {
  
  int hora, min, dia;

  scanf("%d", &hora);
  scanf("%d", &min);

  dia = 60*hora + min;

  printf("%d", dia);
  
  return 0;
}