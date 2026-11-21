#include <stdio.h>

int main(void) {
    int numeros[6];

    printf("Ordem Inversa\n\n");

    for (int i = 0; i < 6; i++) {
        printf("Digite o %do numero inteiro: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nNumeros na ordem inversa a digitada:\n");
    for (int i = 5; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }

    printf("\n");
    return 0;
}
