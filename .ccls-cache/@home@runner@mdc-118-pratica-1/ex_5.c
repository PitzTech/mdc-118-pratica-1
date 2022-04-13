#include <stdio.h>
#include <stdlib.h>

// Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).

#define GB_TO_BYTE 1024 * 1024

unsigned int valorGB, resultadoBytes;

int main(void) {
  printf("Digite o valor em GB ");
  scanf("%d", &valorGB);

  resultadoBytes = valorGB * GB_TO_BYTE;
  
  printf("\nO valor em bytes é %d", resultadoBytes);
  
  return 0;
}