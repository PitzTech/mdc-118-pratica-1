#include <stdio.h>

//Faça um programa em C que calcule a área de um triângulo (a = base x altura / 2). Considere base e altura números inteiros maior que 0.

unsigned int base, altura;
float areaTringulo;

int main(void) {
  printf("Digite o valor da base ");
  scanf("%d", &base);

    printf("Digite o valor da altura ");
  scanf("%d", &altura);

  areaTringulo = altura * base / 2;
  
  printf("\nO valor da área do triangulo é %.2f", areaTringulo);
  
  return 0;
}