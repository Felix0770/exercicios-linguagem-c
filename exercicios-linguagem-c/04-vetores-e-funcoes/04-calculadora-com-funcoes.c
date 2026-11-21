#include <stdio.h>

float somar(float a, float b) {
    return a + b;
}

float subtrair(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    return a / b;
}

int main(void) {
    int opcao;
    float a, b;

    printf("CALCULADORA EM C - UDF\n\n");
    printf("1. Somar\n");
    printf("2. Subtrair\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n\n");

    printf("Escolha a operacao (1-4): ");
    scanf("%d", &opcao);

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);

    printf("Digite o segundo numero: ");
    scanf("%f", &b);

    switch (opcao) {
        case 1:
            printf("Resultado da soma: %.2f\n", somar(a, b));
            break;
        case 2:
            printf("Resultado da subtracao: %.2f\n", subtrair(a, b));
            break;
        case 3:
            printf("Resultado da multiplicacao: %.2f\n", multiplicar(a, b));
            break;
        case 4:
            if (b == 0) {
                printf("Erro: divisao por zero!\n");
            } else {
                printf("Resultado da divisao: %.2f\n", dividir(a, b));
            }
            break;
        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
