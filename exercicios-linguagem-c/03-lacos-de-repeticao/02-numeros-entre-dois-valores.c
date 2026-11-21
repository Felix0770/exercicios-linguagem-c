#include <stdio.h>

int main(void) {
    int numero1, numero2;

    printf("Informe o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Informe o segundo numero: ");
    scanf("%d", &numero2);

    if (numero1 < numero2) {
        for (int i = numero1 + 1; i < numero2; i++) {
            printf("%d ", i);
        }
    } else {
        for (int i = numero2 + 1; i < numero1; i++) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
