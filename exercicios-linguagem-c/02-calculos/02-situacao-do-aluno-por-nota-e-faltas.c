#include <stdio.h>

int main(void) {
    const float MEDIA_MINIMA = 7.0f;
    const float TOLERANCIA_FALTAS = 0.15f;
    float media, carga_horaria, faltas, limite_faltas;

    printf("Digite a media final do aluno: ");
    scanf("%f", &media);

    printf("Digite a carga horaria total do curso (em horas): ");
    scanf("%f", &carga_horaria);

    printf("Digite a quantidade de horas de falta: ");
    scanf("%f", &faltas);

    limite_faltas = carga_horaria * TOLERANCIA_FALTAS;

    if (faltas > limite_faltas && media < MEDIA_MINIMA) {
        printf("Situacao: Reprovado por nota e por falta.\n");
    } else if (faltas > limite_faltas) {
        printf("Situacao: Reprovado por falta.\n");
    } else if (media < MEDIA_MINIMA) {
        printf("Situacao: Reprovado por nota.\n");
    } else {
        printf("Situacao: Aprovado.\n");
    }

    return 0;
}
