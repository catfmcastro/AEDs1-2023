/*
Lista 01
Exercício 8

Catarina F. M. Castro

AEDs 1 - Gabriel Barbosa da Fonseca
*/

#include <stdio.h>

int main(void) {

  float sal, salnovo;
  char opcao;

    //entrada do salário e da opção
  scanf(" %c", &opcao);
  scanf("%f", &sal);

    //cálculo do aumento salarial com base na opção selecionada
  switch (opcao) {
  case 'A':
    salnovo = sal + (sal * 0.08);
    break;

  case 'B':
    salnovo = sal + (sal * 0.11);
    break;

  case 'C':
    if (sal <= 1000) {
      salnovo = sal + 350;
    } else if (sal > 1000) {
      salnovo = sal + 200;
    }
  }

    //imprime o salario novo
  printf("%.2f\n", salnovo);

  return 0;
}