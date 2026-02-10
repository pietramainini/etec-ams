#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int teste[] = {1, 10, 100, 1000, 10000};
    int contador = sizeof(teste) / sizeof(teste[0]);

    for (int i = 0; i < contador; i++) {
        printf("Valor de i: %i", i);
        printf("\n");
    }

    return 0;
}
