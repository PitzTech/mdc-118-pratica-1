#include <stdio.h>
#include <math.h>

// Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.

float altura, distancia, angulo;

float degreeToRadian(float degree) {
  return degree * M_PI / 180;
}

int main(void) {
  printf("Digite a distancia percorrida pelo aviao em km ");
  scanf("%f", &distancia);

  printf("Digite a angulação média do aviao em graus (<= 45) ");
  while(!scanf("%f", &angulo) || angulo > 45 || angulo < 0) {
    printf("O angulo deve ser menor que 45 e positivo\n");
    printf("Digite novamente: ");
  }  

  altura = sinf(degreeToRadian(angulo)) * distancia;
  
  printf("A altura atual do aviao e de %.2fkm\n", altura);
  
  return 0;
}

//gcc ex_7.c -o resu -lm -Wno-unused-result && ./resu
