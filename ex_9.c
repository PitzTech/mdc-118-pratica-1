#include <stdio.h>

// Faça um programa em C que converta uma idade expressa em anos, meses e dias para um valor em dias. Considere um ano com 365 dias e um mês com 30 dias.

unsigned int anos, meses, dias;

int main(void) {
  printf("Digite quantos anos você tem ");
  scanf("%d", &anos);

  printf("E quantos meses ");
  scanf("%d", &meses);

  printf("E quantos dias ");
  scanf("%d", &dias);

  dias += anos * 365;
  dias += meses * 30;

  printf("A sua idade em dias é %d dias", dias);
  
  return 0;
}

// clang ex_9.c -o resul -lm