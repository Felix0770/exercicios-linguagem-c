#include <stdio.h>

int main(void) {
    const double VALOR_HORA = 10.25;
    double horas_trabalhadas, salario;

    printf("Digite quantas horas voce trabalhou: ");
    scanf("%lf", &horas_trabalhadas);

    salario = horas_trabalhadas * VALOR_HORA;
    printf("Salario a receber: R$ %.2f\n", salario);

    return 0;
}
