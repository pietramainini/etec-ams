#include <stdio.h>
#include <stdlib.h>
#include <math.h> // Para o segundo exercício
#include <locale.h>
#include <ctype.h> // Para o quarto exercicio

int main()
{
    setlocale(LC_ALL, "Portuguese");

    /* 01. Crie um programa que some dois números inteiros
    e exiba, na tela, o resultado da soma dos números.  */

    int num1, num2;

    printf("Primeiro exercício!");

    printf("\nDigite um número para a operação de soma: ");
    scanf("%i", &num1);

    printf("Digite um segundo número: ");
    scanf("%i", &num2);

    int soma;
    soma = num1 + num2;

    printf("O resultado da adição é %i", soma);

    /* 02. Crie um programa que leia dois números (digitados, um de cada vez)
    e exiba o resultado do primeiro número elevado ao segundo. */

    int a, b;

    printf("\n");
    printf("\nSegundo exercício!");

    printf("\nDigite um número base: ");
    scanf("%i", &a);

    printf("Elevado a quanto?: ");
    scanf("%i", &b);

    printf("Sua potência resultou %0.1f", pow(a, b));

    /* 03. Crie um programa que leia dois números (digitados, um de cada vez) e que exiba o maior. Caso os números sekam iguais,
    imprimir na tela: "Os números são iguais" */

    int i, f;

    printf("\n");
    printf("\nTerceiro exercício!");

    printf("\nVamos comparar números? Digite um número para ser comparado: ");
    scanf("%i", &i);

    printf("Digite o número para comparar: ");
    scanf("%i", &f);

    if (i > f) {
        printf("Número um é maior!");
    }
    else if (f > i) {
        printf("Número dois é maior!");
    }
    else {
        printf("Os números são iguais!");
    }

    /* 04. Crie um programa que leia dois caracteres (letra) na tela (um de cada vez) e, após a leitura do segundo caractere,
    pergunte ao usuário se ele gostaria de sobrescrever o valor do segundo caractere digitado. Caso sim, ele repetirá o trecho
    de código que pede o valor do segundo caractere, até que o usuário não queira mais sobrescrever. Após isso, exibir o valor de cada
    caractere na tela. */

    char char1;
    char char2;
    char renovarValor = 'S';

    while((getchar() != '\n') && !(EOF));

    printf("\n");
    printf("\nQuarto exercício!");

    printf("\nDigite o valor do primeiro caractere: ");
    scanf("%c", &char1);
    while((getchar() != '\n') && !(EOF));

    while (toupper (renovarValor) == 'S') {
        printf("Digite o valor do segundo caractere: ");
        scanf("%c", &char2);
        while((getchar() != '\n') && !(EOF));

        printf("Gostaria de renovar o valor? (S - Sim / N - Não): ");
        scanf("%c", &renovarValor);
        while((getchar() != '\n') && !(EOF));
    }

    printf("\n");
    printf("Valores: \n");
    printf("Caractere 1: %c\n", char1);
    printf("Caractere 2: %c\n", char2);
    printf("Fim da Avaliação.\n");


    return 0;
}
