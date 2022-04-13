#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).

int a, b, c;

double * bhaskara(int a, int b, int c) {
  static double raizes[2], delta;
  int denominador;

  delta = sqrt(abs(b*b - 4*a*c));

  denominador = 2*a;
  
  raizes[0] = (b*-1 + delta) / denominador;
  raizes[1] = (b*-1 - delta) / denominador;
  
  return raizes;
}

int main(void) {
  printf("Digite o A de sua equacao ");
  scanf("%d", &a);

  printf("Digite o B de sua equacao ");
  scanf("%d", &b);

    printf("Digite o C de sua equacao ");
  scanf("%d", &c);

  double* raizes = bhaskara(a,b,c);
  
  printf("As raizes dessa equacao sao: %.2f e %.2f", raizes[0], raizes[1]);
  
  return 0;
}

// clang ex_6.c -o resul -lm