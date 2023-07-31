#include <stdio.h>

/*
Lista 00
Exercício 1

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

int main(void) {
  
 int num, c, d, u, num2;
  scanf ("%d",&num);
  
  c = num /100;
  d = num / 10 - c * 10;
  u = num - c*100 - d*10;

  num2 = u*100 + d*10 + c;
  
  printf ("%d", num2);
  
  return 0;
}