#include <stdio.h>

#define TAXA_SERVICO 0.10

int main(void) {
    float valor_consumo, valor_taxa, valor_total, valor_por_pessoa;
    int quantidade_pessoas;

    printf("RESTAURANTE UDF - FECHAMENTO DE CONTA\n");
    printf("Informe o valor total do consumo (R$): ");
    scanf("%f", &valor_consumo);

    printf("Informe o numero de pessoas na mesa: ");
    scanf("%d", &quantidade_pessoas);

    if (quantidade_pessoas <= 0) {
        printf("Quantidade de pessoas invalida.\n");
        return 1;
    }

    valor_taxa = valor_consumo * TAXA_SERVICO;
    valor_total = valor_consumo + valor_taxa;
    valor_por_pessoa = valor_total / quantidade_pessoas;

    printf("\nRESUMO DA CONTA\n");
    printf("Valor do consumo: R$ %.2f\n", valor_consumo);
    printf("Taxa de servico (10%%): R$ %.2f\n", valor_taxa);
    printf("------------------------------------------\n");
    printf("VALOR TOTAL DA CONTA: R$ %.2f\n", valor_total);
    printf("VALOR POR PESSOA (%d pag.): R$ %.2f\n",
           quantidade_pessoas, valor_por_pessoa);

    return 0;
}
