#include <stdio.h>
int main() {
  char nombre[20];
  char grupo[10];
  int intentos = 0;
  char continuar;
  int cantidad_productos, total = 0, cantidad_articulo, precio_unidad, i;
  do {
    printf("Ingrese su nombre: ");
    scanf("%s", nombre);
    printf("Ingrese su grupo del cb: ");
    scanf("%s", grupo);

    if (strcmp(nombre, "JepG") == 0 && strcmp(grupo, "2bmpg") == 0) {
      printf("Bienvenido al sistema %s!\n", nombre); 

      printf("\nIngrese el número de productos: ");
      scanf("%d", &cantidad_productos);

      for (i = 0; i < cantidad_productos; i++) {
        printf("\nIngrese la cantidad del producto %d: ", i + 1);
        scanf("%d", &cantidad_articulo);

        if (cantidad_articulo == 0) { 
          printf("\nIngreso un 0, finalizando la factura.\n");
          break; 
        }

        printf("Ingrese el precio unitario del producto %d: ", i + 1);
        scanf("%d", &precio_unidad);

        if (cantidad_articulo > 0 && precio_unidad > 0) {
          total += cantidad_articulo * precio_unidad;
        } else {
          printf("Error: La cantidad y el precio deben ser números positivos.\n");
          i--; 
        }
      }

      if (cantidad_articulo != 0) { 
        printf("El importe total de la factura es: %d por tus %d productos.\n", total, cantidad_productos);
      }

      printf("\n¿Desea realizar otra factura? (s/n): ");
      scanf(" %c", &continuar);

      if (continuar != 's' && continuar != 'S') {
        printf("\n¡Gracias por utilizar el sistema!\n");
        break; 
      }
    } else {
      intentos++;
      printf("Nombre o grupo incorrectos, Intentos restantes: %d\n", 3 - intentos);
    }

  } while (intentos < 3);

  if (intentos == 3) {
    printf(" ha superado el número máximo de intentos permitidos.\n");
  }

  return 0;
}
