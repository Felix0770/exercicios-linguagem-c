#include <stdio.h>

int main(void) {
    int numero = 1;
    int soma = 0;

    printf("Soma dos numeros pares de 1 a 20\n\n");

    while (numero <= 20) {
        if (numero % 2 == 0) {
            printf("Numero par: %d\n", numero);
            soma = soma + numero;
        }
        numero++;
    }

    printf("O somatorio dos numeros pares e %d\n", soma);
    return 0;
}
