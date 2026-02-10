#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int incremento;

    printf("Informe um valor (0 a 10): ");
    scanf("%i", &incremento);

    if ((incremento >= 10) || (incremento < 0)) {
        printf("Valor inválido");
        return 0;
    }

    printf("Valor atual: %i\n", incremento);

    do {
        incremento++;
        printf("Valor atual: %i\n", incremento);
    } while (incremento < 10);
    return 0;
}
