#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int matriz[3][2], transposta[2][3];
    int i, j;

    printf("Digite os elementos da matriz 3x2:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Gerar transposta
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }

    printf("\nMatriz transposta 2x3:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
