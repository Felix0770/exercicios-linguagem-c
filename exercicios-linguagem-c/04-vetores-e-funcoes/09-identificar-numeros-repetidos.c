#include <stdio.h>

int main(void) {
    int numeros[10];

    printf("Numeros Repetidos\n\n");

    for (int i = 0; i < 10; i++) {
        printf("Digite o %do numero inteiro: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nNumeros que aparecem mais de uma vez:\n");

    for (int i = 0; i < 10; i++) {
        int ja_exibido = 0;

        for (int k = 0; k < i; k++) {
            if (numeros[i] == numeros[k]) {
                ja_exibido = 1;
                break;
            }
        }

        if (ja_exibido) {
            continue;
        }

        for (int j = i + 1; j < 10; j++) {
            if (numeros[i] == numeros[j]) {
                printf("%d ", numeros[i]);
                break;
            }
        }
    }

    printf("\n");
    return 0;
}
