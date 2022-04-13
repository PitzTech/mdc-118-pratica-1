#include <stdio.h>
#include <stdlib.h>

//Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.

#define ICMS 0.17
#define COFINS 0.76
#define PIS_PASEP 0.0165

float precoInicial, precoFinal;

int main(void) {
  printf("Digite o preco inicial ");
  scanf("%f", &precoInicial);

  precoFinal = (1 + ICMS + COFINS + PIS_PASEP) * precoInicial;
  
  printf("\nO preco final é %.2f", precoFinal);
  
  return 0;
}