#include <stdio.h>

int main() {
  char character;

  printf("Ingrese un caracter: ");
  scanf("%c", &character);

  switch (character) {
    case 'a':
    case 'A':
      printf("%c es una vocal.\n", character);
      break;
    case 'e':
    case 'E':
      printf("%c es una vocal.\n", character);
      break;
    case 'i':
    case 'I':
      printf("%c es una vocal.\n", character);
      break;
    case 'o':
    case 'O':
      printf("%c es una vocal.\n", character);
      break;
    case 'u':
    case 'U':
      printf("%c es una vocal.\n", character);
      break;
    default:
      printf("%c no es una vocal.\n", character);
  }

  return 0;
}
