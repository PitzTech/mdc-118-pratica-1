#include <stdio.h>

// Faça um programa em C que calcule a decomposição de um número inteiro qualquer em unidade, dezena, centena e milhar (ex.: 5637 é decomposto em 7 unidades, 3 dezenas, 6 centenas e 5 milhares).

char numberToDecompose[4];
const char unitNames[6][18] = {"unidades", "dezenas", "centenas", "milhares", "dezenas de milhar", "centenas de milhar"};

int main(void) {
  printf("Digite um número para decompor (limite 6 char) ");
  scanf("%6s",numberToDecompose);

  for(int index = 6; index >= 0; index--) {
    if(!numberToDecompose[index]) continue;
    
    printf("%c %s ", numberToDecompose[index], unitNames[index]);
  }
  
  return 0;
}

//gcc ex_10.c -o resu -Wno-unused-result && ./resu