#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int numA;
    int numB;

    printf("Digite um número para realizar uma adição: ");
    scanf("%i", &numA);

    printf("Digite um outro número para a soma: ");
    scanf("%i", &numB);

    int sum1 = numA + numB;

    if (sum1 > 10){
        printf("Sua soma é maior que 10!");
    }
    else if (sum1 < 10) {
        printf("Sua soma é menor que 10!");
    }
    else {
        printf("Sua soma é igual a 10!");
    }


    return 0;
}
