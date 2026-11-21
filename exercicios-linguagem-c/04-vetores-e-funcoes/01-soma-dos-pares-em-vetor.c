#include <stdio.h>

int main(void) {
    int numeros[5];
    int soma = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite o %do numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (numeros[i] % 2 == 0) {
            soma = soma + numeros[i];
        }
    }

    printf("A soma dos numeros pares = %d\n", soma);
    return 0;
}
