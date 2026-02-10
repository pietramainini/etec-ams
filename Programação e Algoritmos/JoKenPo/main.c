#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int jogada, jogadaComputador;
    int jogarNovamente
    srand(time(NULL));

    printf("Jo-Ken-Po!\n");

    do {
        printf("Jogue! (0 - Pedra, 1 - Papel, 2 - Tesoura): ");
        scanf("%i", &jogada);
        while((getchar() != '\n') && !(EOF));

        jogadaComputador = rand() % 3;

        if (jogada == 0 || jogada = 1 || jogada == 2) {
            printf("Você jogou: ");
            if (jogada == 0)
                printf("Pedra\n");
            else if (jogada == 1)
                printf("Papel\n");
            else if (jogada == 2)
                printf("Tesoura\n");

            printf

            if (jogada == jogadaComputador) {
                printf("Empate\n");
            } else if ((jogada == 0 && jogadaComputador == ))


        }
    }



    return 0;
}
