#include <stdio.h>

int main(void) {
    float litros, valor, desconto, valorFinal;
    char combustivel;

    printf("Digite o tipo de combustivel (A - Alcool / G - Gasolina): ");
    scanf(" %c", &combustivel);

    printf("Digite a quantidade de litros: ");
    scanf("%f", &litros);

    if (combustivel == 'A' || combustivel == 'a') {
        valor = litros * 1.90;
        if (litros <= 20) {
            desconto = valor * 0.03;
        } else {
            desconto = valor * 0.05;
        }
    } else if (combustivel == 'G' || combustivel == 'g') {
        valor = litros * 2.50;
        if (litros <= 20) {
            desconto = valor * 0.04;
        } else {
            desconto = valor * 0.06;
        }
    } else {
        printf("Combustivel invalido.\n");
        return 0;
    }

    valorFinal = valor - desconto;
    printf("Valor a pagar: R$ %.2f\n", valorFinal);

    return 0;
}
