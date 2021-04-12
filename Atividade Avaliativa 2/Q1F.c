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
    double valorFabrica, custoFinal;

    message();

    printf("\n Digite o valor de veículo de fabrica: ");
    scanf("%lf", &valorFabrica);

    custoFinal = valorFabrica + (valorFabrica * 0.28) + (valorFabrica * 0.45);

    printf("\n O custo do veículo é: %.2lf \n", custoFinal);
}