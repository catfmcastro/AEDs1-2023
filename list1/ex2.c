#include <stdio.h>

/*
Lista 01
Exercício 2

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

int main(void) {
  int a, b, s, r;

//entrada dos números
  scanf("%d", &a);
  scanf("%d", &b);

//soma
  s = a+b;

//imprime o resultado final de acordo com o valor da soma
  if (s>=10){
    r = s+5;
    printf("\n%d", r);
  }
  else if(s<10){
    r = s+7;
    printf("\n%d", r);
  }
  
  return 0;
}