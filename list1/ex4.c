/*
Lista 01
Exercício 4

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

#include <stdio.h>

int main(void) {

//entrada da nota
  int nota;
  scanf("%d", &nota);

//imprime a mensagem respectiva ao valor da nota
  if(nota>=8 && nota<=10){
    printf("\nÓtimo");
  }
  else if(nota>=7 && nota<8){
    printf("\nBom");
  }
  else if(nota>=5 && nota<7){
    printf("\nRegular");
  }
  else if(nota<5){
    printf("\nInsatisfatório");
  }

  return 0;
}