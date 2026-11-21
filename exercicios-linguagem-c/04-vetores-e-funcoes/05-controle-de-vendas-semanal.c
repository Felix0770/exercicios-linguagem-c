#include <stdio.h>

int main(void) {
    float vendas[7];
    float total_vendido = 0.0f;
    float media_diaria;
    float maior_venda = 0.0f;
    int dia_maior_venda = 0;
    int dias_acima_mil = 0;

    printf("Controle de Vendas Semanal\n\n");

    for (int i = 0; i < 7; i++) {
        printf("Digite o valor das vendas do Dia %d: R$ ", i + 1);
        scanf("%f", &vendas[i]);

        total_vendido += vendas[i];

        if (i == 0 || vendas[i] > maior_venda) {
            maior_venda = vendas[i];
            dia_maior_venda = i + 1;
        }

        if (vendas[i] > 1000.0f) {
            dias_acima_mil++;
        }
    }

    media_diaria = total_vendido / 7.0f;

    printf("\nRelatorio Final:\n");
    printf("Total vendido na semana: R$ %.2f\n", total_vendido);
    printf("Media diaria de vendas: R$ %.2f\n", media_diaria);
    printf("Dia com maior valor de vendas: Dia %d (R$ %.2f)\n",
           dia_maior_venda, maior_venda);
    printf("Dias com vendas superiores a R$ 1.000,00: %d dia(s)\n",
           dias_acima_mil);

    return 0;
}
