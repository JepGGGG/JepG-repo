#include <stdio.h>

int main() {
  int numero_carta;
  printf("Ingrese el número de la carta : ");
  scanf("%d", &numero_carta);
  switch (numero_carta) {
    case 1:
      printf("as\n");
      break;
    case 10:
      printf("sota\n");
      break;
    case 11:
      printf("caballo\n");
      break;
    case 12:
      printf("rey\n");
      break;
    default:
      if (numero_carta >= 2 && numero_carta <= 9) {
        printf("no es ninguna figura ni tampoco as\n");
      } else {
        printf("este no es número de una carta de la baraja española\n");
      }
  }

  return 0;
}