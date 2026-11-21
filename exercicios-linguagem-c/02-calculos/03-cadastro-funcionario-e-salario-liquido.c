#include <stdio.h>

int main(void) {
    char nome[100], endereco[150], sexo, cidade[80], estado[30];
    int idade;
    double salario_bruto, desc_vt, desc_va, desc_saude, salario_liquido;

    printf("Nome: ");
    scanf(" %99[^\n]", nome);

    printf("Endereco: ");
    scanf(" %149[^\n]", endereco);

    printf("Sexo (M/F): ");
    scanf(" %c", &sexo);

    printf("Cidade: ");
    scanf(" %79[^\n]", cidade);

    printf("Estado: ");
    scanf(" %29[^\n]", estado);

    printf("Idade: ");
    scanf("%d", &idade);

    printf("Salario Bruto: R$ ");
    scanf("%lf", &salario_bruto);

    desc_vt = salario_bruto * 0.02;
    desc_va = salario_bruto * 0.05;
    desc_saude = salario_bruto * 0.10;
    salario_liquido = salario_bruto - (desc_vt + desc_va + desc_saude);

    printf("\n--- Dados do Funcionario ---\n");
    printf("Nome: %s\n", nome);
    printf("Endereco: %s\n", endereco);
    printf("Sexo: %c\n", sexo);
    printf("Cidade: %s\n", cidade);
    printf("Estado: %s\n", estado);
    printf("Idade: %d\n", idade);
    printf("Salario Bruto: R$ %.2f\n", salario_bruto);
    printf("Desconto Vale Transporte (2%%): R$ %.2f\n", desc_vt);
    printf("Desconto Vale Alimentacao (5%%): R$ %.2f\n", desc_va);
    printf("Desconto Plano de Saude (10%%): R$ %.2f\n", desc_saude);
    printf("Salario Liquido: R$ %.2f\n", salario_liquido);

    return 0;
}
