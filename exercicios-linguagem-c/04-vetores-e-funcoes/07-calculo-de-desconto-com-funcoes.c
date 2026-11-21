#include <stdio.h>

float calcularDesconto(float valor) {
    if (valor < 100.0f) {
        return 0.0f;
    } else if (valor < 500.0f) {
        return valor * 0.05f;
    } else {
        return valor * 0.10f;
    }
}

float calcularValorFinal(float valor, float desconto) {
    return valor - desconto;
}

int main(void) {
    float valor_compra, desconto, valor_final;

    printf("Calculo de Desconto\n\n");
    printf("Digite o valor total da compra: R$ ");
    scanf("%f", &valor_compra);

    desconto = calcularDesconto(valor_compra);
    valor_final = calcularValorFinal(valor_compra, desconto);

    printf("\nResumo:\n");
    printf("Valor original: R$ %.2f\n", valor_compra);
    printf("Desconto aplicado: R$ %.2f\n", desconto);
    printf("Valor final a pagar: R$ %.2f\n", valor_final);

    return 0;
}
