/*
Lista 01
Exercício 7

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

#include <stdio.h>
#include <math.h>

int main(void) {

  float x, y;

  //entrada de x
  scanf("%f", &x);

  //define y com base nas condições especificadas na questão
  if(x<=1){
    y = 1;
  }
  else if(x>1 && x<=2){
    y = 2;
  }
  else if(x>2 && x<=3){
    y = pow(x,2);
  }
  else if(x>3){
    y = pow(x,3);
  }

  //imprime o valor de y
  printf("\n%.2f", y);
  
  return 0;
}