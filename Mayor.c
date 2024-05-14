#include <stdio.h>

int main() {
    int a, b, c;
    int i,j;
    int temp;
    printf("dame el primer numero\n");
    scanf("%d", &a);

    printf("dame el segundo numero\n");
    scanf("%d", &b);

    printf("dame el tercer numero\n");
    scanf("%d", &c);

    int mariel[] = {a, b, c}; 
    for ( i = 0; i < 2; i++) {
        for ( j = 0; j < 2 - i; j++) {
            if (mariel[j] < mariel[j + 1]) {
                temp = mariel[j];
                mariel[j] = mariel[j + 1];
                mariel[j + 1] = temp;
            }
        }
    }

    printf("Los numeros ordenados de mayor a menor son:\n");
    for ( i = 0; i < 3; i++) {
        printf("%d\t", mariel[i]);
    }

    return 0;
}
