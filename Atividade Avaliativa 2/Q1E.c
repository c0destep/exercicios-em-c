#include <stdio.h>
#include <locale.h>

void message(void) {
    printf("*******************************");
    printf("********* PHYTOLINE ***********");
    printf("*******************************");

    return;
}

int main() {
    setlocale(LC_ALL, "portuguese");
    double salario, reajuste, percentual;

    message();

    printf("\n Digite o valor do seu salário: ");
    scanf("%lf", &salario);
    printf("\n Digite o percentual de reajuste: ");
    scanf("%lf", &percentual);

    reajuste = salario + (salario * (percentual/100));

    printf("\n Seu novo salário é: %.2lf \n", reajuste);
}