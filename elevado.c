#include <stdio.h>

int main() {
  float base;
  int i,potencia;

  printf("Ingrese el número base: ");scanf("%f", &base);
  printf("Ingrese la potencia: ");scanf("%d", &potencia);


  float resultado = 1;
  for (i = 0; i < potencia; i++) {
    resultado =resultado * base;
  }
  printf("%.1f elevado a la potencia %d es: %.1f\n", base, potencia, resultado);
  return 0;
}