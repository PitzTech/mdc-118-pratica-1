#include <stdio.h>

// Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).

#define GB_TO_BYTE 1024 * 1024

unsigned int valorGB, resultadoBytes;

int main(void) {
  printf("Digite o valor em GB ");
  scanf("%d", &valorGB);

  resultadoBytes = valorGB * GB_TO_BYTE;
  
  printf("O valor em bytes é %d\n", resultadoBytes);
  
  return 0;
}
//gcc ex_5.c -o resu -Wno-unused-result && ./resu
