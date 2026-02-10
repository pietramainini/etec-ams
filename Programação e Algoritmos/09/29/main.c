#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    02.
    Crie uma função que receba 3 (três) números como
    parâmetro e retorne o maior entre os três
*/

int maiorEntre(int a, int b, int c) {
    int maior = a;

    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }

    return maior;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, num3, maior;

    printf("Digite 3 (três) números: ");
    scanf("%i %i %i", &num1, &num2, &num3);

    maior = maiorEntre(num1, num2, num3);

      // Verifica se todos são iguais
    if (num1 == num2 && num2 == num3) {
        printf("Os três números são iguais: %i\n", num1);
    } else {
        maior = maiorEntre(num1, num2, num3);
        printf("O maior número entre %i, %i e %i é: %i\n", num1, num2, num3, maior);
    }

    return 0;
}
