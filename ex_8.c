#include <stdio.h>

// Faça um programa em C que converta um tempo expresso em segundos para um valor em horas, minutos e segundos (ex.: 1000 segundos corresponde a 0 horas 16 minutos e 40 segundos).

#define SEGUNDOS 60
#define MINUTOS 60
#define HORAS 60

unsigned int tempoTotal, segundos, horas, minutos;

int main(void) {
  printf("Digite o valor da hora em segundos ");
  scanf("%d", &tempoTotal);

  horas = tempoTotal / 3600;
  tempoTotal %= 3600;

  minutos = tempoTotal / 60;
  tempoTotal %= 60;

  segundos = tempoTotal;

  printf("Tempo total é %d horas %d minutos e %d segundos", horas, minutos, segundos);
  
  return 0;
}

//gcc ex_8.c -o resu -Wno-unused-result && ./resu