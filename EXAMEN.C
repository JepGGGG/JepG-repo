#include <stdio.h>
#include<stdbool.h>

bool validar_credenciales(char nombre[], char grupo[]) {

  return (strcmp(nombre, "JepG") == 0 && strcmp(grupo, "2bmpg") == 0);
}


void mostrar_mensaje_bienvenida(char nombre[]) {
  printf("Bienvenido al sistema, %s!\n", nombre);
}


void calcular_factura() {
  int total = 0; // Declaración al inicio de la función
  int cantidad_articulo, precio_unidad, i;
  bool continuar = true;

  for (i = 0; continuar; i++) { // Declaración al inicio del ciclo
    printf("Ingrese la cantidad del producto %d (ingrese 0 para terminar): ", i + 1);
    scanf("%d", &cantidad_articulo);

    if (cantidad_articulo == 0) {
      printf("Ingrese un 0, finalizando la factura.\n");
      continuar = false;
    } else {
      printf("Ingrese el precio unitario del producto %d: ", i + 1);
      scanf("%d", &precio_unidad);

      if (cantidad_articulo > 0 && precio_unidad > 0) {
        total += cantidad_articulo * precio_unidad;
      } else {
        printf("Error: La cantidad y el precio deben ser numeros positivos.\n");
        i--; // Se resta la iteración para evitar un error en la suma
      }
    }
  }

  printf("El importe total de la factura es: %d\n", total);
}

int main() {
  char nombre[20]; 
  char grupo[10];
  int intentos = 0;

  do {
    printf("Ingrese su nombre: ");
    scanf("%s", nombre);

    printf("Ingrese su grupo del cb: ");
    scanf("%s", grupo);

    if (validar_credenciales(nombre, grupo)) {
      mostrar_mensaje_bienvenida(nombre);

      calcular_factura();

      char respuesta;
      printf("Desea realizar otra factura? (s/n): ");
      scanf(" %c", &respuesta);

      if (respuesta != 's' && respuesta != 'S') {
        printf("Gracias por utilizar el sistema %s!\n", nombre);
      }
    } else {
      intentos++;
      printf("Nombre o grupo incorrectos, Intentos restantes: %d\n", 3 - intentos);
    }
  } while (intentos < 3);

  if (intentos == 3) {
    printf("Ha superado el número máximo de intentos permitidos.\n");
  }

  return 0;
}
