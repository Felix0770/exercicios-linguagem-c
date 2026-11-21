#include <stdio.h>
#include <math.h>

int main(void) {
    float area, litros, preco;
    int latas;

    printf("Digite o tamanho da area em metros quadrados: ");
    scanf("%f", &area);

    litros = area / 3;
    latas = (int)ceil(litros / 18);
    preco = latas * 80;

    printf("Quantidade de latas: %d\n", latas);
    printf("Preco total: R$ %.2f\n", preco);

    return 0;
}
