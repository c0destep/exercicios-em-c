#include <stdio.h>
#include <locale.h>

void message(void)
{
    printf("*******************************");
    printf("********* PHYTOLINE ***********");
    printf("*******************************");

    return;
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int ano, meses, dias, idade;

    message();

    printf("\n Digite o ano: ");
    scanf("%i", &ano);
    printf("\n Digite o mês: ");
    scanf("%i", &meses);
    printf("\n Digite os dias: ");
    scanf("%i", &dias);

    idade = (ano * 365) + (meses * 30) + dias;

    printf("\n Sua idade em dias é: %i \n", idade);
}