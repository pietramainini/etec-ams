#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void exibirDadosTela (char nome1[50], char nome2[50])
{
    printf("Informações: \n");
    printf("Nome 1: %s\n", nome1);
    printf("Nome 2: %s\n", nome2);
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome1[50];
    char nome2[50];

    printf("Digite o nome 1: ");
    scanf("%[^\n]", &nome1);
    while ((getchar() != '\n') && !(EOF));

    printf("Digite o nome 2: ");
    scanf("%[^\n]", &nome2);
    while ((getchar() != '\n') && !(EOF));

    exibirDadosTela(nome1, nome2);

    return 0;
}
