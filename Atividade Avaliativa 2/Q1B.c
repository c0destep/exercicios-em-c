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
    float base, altura, area;

    message();

    printf("\n Digite um valor da base: ");
    scanf("%f", &base);
    printf("\n Digite um valor da altura: ");
    scanf("%f", &altura);

    area = base * altura;

    printf("\n Área do retângulo: %f \n", area);
}