/*
Lista 01
Exercício 3

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

#include <stdio.h>

int main(void) {
  
int ano, idade;
char niv;

//entrada do ano de nascimento e se já fez aniversário
  scanf("%d", &ano);
  scanf(" %c", &niv);

//imprime a idade
  if(niv == 'S'){
    idade = 2023 - ano;
  }
  else if (niv == 'N'){
    idade = 2023-(ano+1);
  }

//imprime se pode dirigir ou não, com base na idade
  if(idade>= 18){
    printf("\n%d\nPode dirigir", idade);
  }
  else if(idade<18){
     printf("\n%d\nNão pode dirigir", idade);
  }

  return 0;
}