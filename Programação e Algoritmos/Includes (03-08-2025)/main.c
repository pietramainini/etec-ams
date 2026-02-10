#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // Definição e inicialização de variáveis
    int num = 5;
    int num2 = 144;
    int num3 = sqrt(num2);

    // Faz com que a função rand() retorne um número aleatório diferente
    srand(time(NULL));

    // Transforma a data atual em segundos em uma estrutura de data completa
    time_t segundos = time(NULL);
    struct tm *dataHoraAtual = localtime(&segundos);

    printf("%i\n", num3); // Exibe a variável num3
    printf("%0.1f\n", pow(num3, num)); // Potência entre a variável num3 e num
    printf("Valor absoluto: %0.1f\n", fabs(-14523));
    printf("Numero aleatorio 1: %d\n", rand()); // Mostra um número aleatório
    printf("Numero aleatorio 2: %d\n", rand()); // Mostra um número aleatório
    printf("Numero aleatorio 3: %d\n", rand()); // Mostra um número aleatório
    printf("\nHorário: %d:", dataHoraAtual->tm_hour); // Horas
    printf("%d:", dataHoraAtual->tm_min); // Minutos
    printf("%d", dataHoraAtual->tm_sec); // Segundos

    return 0;
}
