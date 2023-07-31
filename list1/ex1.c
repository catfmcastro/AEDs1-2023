#include <stdio.h>

/*
Lista 01
Exercício 1

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

int main(void) {
  
  int a, b;
  //entrada dos dois números
  scanf("%d", &a);
  scanf("%d", &b);

  //imprime o maior
  if (a > b) {
    printf("%d", a);
  }
  else {
    printf("%d", b);
  }

  return 0;
}