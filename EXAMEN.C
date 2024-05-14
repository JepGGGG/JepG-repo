int main() {
  char usuario[20];
  char contrasena[20];
  int intentos = 0;

  do {
    printf("Ingrese su nombre de usuario: ");
    scanf("%s", usuario);

    printf("Ingrese su contraseña: ");
    scanf("%s", contrasena);

    if (strcmp(usuario, "JepG") == 0 && strcmp(contrasena, "2bmpg") == 0) {
      printf("\n¡Bienvenido al sistema!\n");
      break;
    } else {
      intentos++;
      printf("\nUsuario o contraseña incorrectos. Intentos restantes: %d\n", 3 - intentos);
    }
  } while (intentos < 3);

  if (intentos == 3) {
    printf("\nLo siento, ha superado el número máximo de intentos permitidos.\n");
  }

  return 0;
}
