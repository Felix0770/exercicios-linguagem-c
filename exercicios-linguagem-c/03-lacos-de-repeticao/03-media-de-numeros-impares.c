#include <stdio.h>

int main(void) {
    int numero, soma = 0, quantidade = 0;
    float media;

    printf("Digite um numero (0 para terminar): ");
    scanf("%d", &numero);

    while (numero != 0) {
        if (numero % 2 != 0) {
            soma = soma + numero;
            quantidade++;
        }

        printf("Digite um numero (0 para terminar): ");
        scanf("%d", &numero);
    }

    if (quantidade > 0) {
        media = (float)soma / quantidade;
        printf("Media dos numeros impares: %.2f\n", media);
    } else {
        printf("Nenhum numero impar foi encontrado.\n");
    }

    return 0;
}
