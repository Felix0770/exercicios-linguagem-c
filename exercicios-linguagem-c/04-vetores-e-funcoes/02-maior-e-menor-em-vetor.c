#include <stdio.h>

int main(void) {
    int numeros[5];
    int maior, menor;

    for (int i = 0; i < 5; i++) {
        printf("Digite o %do numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    maior = numeros[0];
    menor = numeros[0];

    for (int i = 1; i < 5; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);
    return 0;
}
