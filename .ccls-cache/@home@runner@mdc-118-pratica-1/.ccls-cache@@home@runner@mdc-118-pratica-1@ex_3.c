#include <stdio.h>

//Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.

#define PI 3.1416

unsigned int raioPizza;
float perimetroPizza;

int main(void) {
  printf("Digite o valor do raio da pizza ");
  scanf("%d", &raioPizza);

  perimetroPizza = raioPizza * 2 * PI;
  
  printf("O perimetro da pizza é aprox %.2f\n", perimetroPizza);
  
  return 0;
}

//gcc ex_3.c -o resu -Wno-unused-result && ./resu
