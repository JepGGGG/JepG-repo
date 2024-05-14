#include<stdio.h>

int main() {
  int i,cantidadNumeros,j ;

  printf("¿Cuántos números desea imprimir? ");
  scanf("%d", &cantidadNumeros);

   for ( i = 0; i <= cantidadNumeros*5; i+=5)
  {
     printf("%d\t",i);

	
  }
  printf("\n");
  printf("Muchas gracias por utilizar\n");
  return 0;
}
