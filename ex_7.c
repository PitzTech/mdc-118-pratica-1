#include <stdio.h>
#include <math.h>

// Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.

float altura, distancia, angulo;

int main(void) {
  printf("Digite a distancia percorrida pelo aviao ");
  scanf("%f", &distancia);

  printf("Digite a angulação média do aviao (<= 45) ");
  scanf("%f", &angulo);

  altura = sinf(angulo * 3.1446 / 180) * distancia;
  
  printf("A altura atual do aviao e de %.2f", altura);
  
  return 0;
}

// clang ex_6.c -o resul -lm