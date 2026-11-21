#include <stdio.h>

float calcularMedia(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3.0f;
}

int verificarSituacao(float media) {
    if (media >= 7.0f) return 1;
    if (media >= 5.0f) return 2;
    return 3;
}

int main(void) {
    float nota1, nota2, nota3, media;
    int situacao;

    printf("Controle de Aprovacao\n\n");
    printf("Digite as 3 notas (separadas por espaco): ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media = calcularMedia(nota1, nota2, nota3);
    situacao = verificarSituacao(media);

    printf("\nResultado:\n");
    printf("Media do aluno: %.2f\n", media);
    printf("Situacao: ");

    if (situacao == 1) {
        printf("APROVADO\n");
    } else if (situacao == 2) {
        printf("RECUPERACAO\n");
    } else {
        printf("REPROVADO\n");
    }

    return 0;
}
