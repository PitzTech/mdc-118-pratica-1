#include <stdio.h>
#include <math.h>
#include <complex.h>

// Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).

int eqCoeficientes[3];

float complex * bhaskara(int a, int b, int c) {
  static float complex raizes[2], delta;
  int denominador = 2*a;

  delta = csqrtf(b*b - 4*a*c);
  
  raizes[0] = (b*-1 + delta) / denominador;
  raizes[1] = (b*-1 - delta) / denominador;
  
  return raizes;
}

void printComplexNumber(float complex number) {
  printf("Raiz 2: %.2f + %.2fi\n", creal(number), cimag(number));  
}

int main(void) {
  printf("Digite o A, B e C de sua equacao separados por espacos:\n");

  for(int counter = 0; counter < 3; counter++){
    scanf("%d", &eqCoeficientes[counter]);
  }

  float complex * raizes = bhaskara(eqCoeficientes[0],eqCoeficientes[1],eqCoeficientes[2]);
  
  printf("As raizes dessa equacao sao:\n");
  printComplexNumber(raizes[0]);
  printComplexNumber(raizes[1]);

  return 0;
}

//gcc ex_6.c -o resu -lm -Wno-unused-result && ./resu
