#include <stdio.h>

int main(void) {
    int matriz[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Diagonal principal: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", matriz[i][i]);
    }

    printf("\n");
    return 0;
}
