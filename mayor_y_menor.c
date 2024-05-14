#include <stdio.h>
int main() {
  int numero, mayor, menor, suma, i ;

  printf("Ingrese el primer numero: ");
  scanf("%d", &numero);
  mayor = numero;
  menor = numero;
  
  i = 1; 
  while (i < 10) {
    i++; 
    printf("Ingrese el numero %d: ", i);
    scanf("%d", &numero);
    if (numero > mayor) {
      mayor = numero;
    } else if (numero < menor) {
      menor = numero;
    }
    suma += numero;
  }
  
  printf("El numero mayor es: %d\n", mayor);
  printf("El numero menor es: %d\n", menor);
  printf("La suma de los numeros es: %d\n", suma);

  return 0;
}