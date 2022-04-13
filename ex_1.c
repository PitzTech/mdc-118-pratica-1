#include <stdio.h>

//Faça um programa em C que calcule a média final a partir da fórmula (0,4 x A1) + (0,6 x A2). Considere A1 e A2 números reais entre 0 a 10.

float notaA1, notaA2, media;

int main(void) {
  printf("Digite a nota de sua A1 ");
  scanf("%f", &notaA1);

  printf("\nDigite a nota de sua A2 ");
  scanf("%f", &notaA2);

  media = (notaA1 + notaA2) /2;

  printf("\nA média final é %.2f", media);
  
  return 0;
}