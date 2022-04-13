#include <stdio.h>

//Faça um programa em C que calcule a média final a partir da fórmula (0,4 x A1) + (0,6 x A2). Considere A1 e A2 números reais entre 0 a 10.

float notaA1, notaA2, media;

int main(void) {
  printf("Digite a nota de sua A1 ");
  scanf("%f", &notaA1);

  printf("Digite a nota de sua A2 ");
  scanf("%f", &notaA2);

  media = notaA1 * 0.4 + notaA2 * 0.6;

  printf("A média final é %.2f\n", media);
  
  return 0;
}

//gcc ex_1.c -o resu -Wno-unused-result && ./resu