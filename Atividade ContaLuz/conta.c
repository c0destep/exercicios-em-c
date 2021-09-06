#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    setlocale("LC_ALL", "Portuguese");

    char readingDate[10], payDate[10];
    int readingNumber, quantityKw, spendingAverage;
    float amountPay, priceKw, tax;

    welcome();

    templateMessage("INFORME O NÚMERO DA LEITURA");
    scanf("%i", &readingNumber);
    printf("\n");
    templateMessage("INFORME A DATA DA LEITURA");
    scanf("%s", &readingDate);
    printf("\n");
    templateMessage("INFORME QUANTOS KWs FOI CONSUMIDO");
    scanf("%i", &quantityKw);
    printf("\n");
    templateMessage("INFORME O VALOR DO KW");
    scanf("%f", &priceKw);

    amountPay = quantityKw * priceKw + tax;

    printf("VALOR DA FATURA: %f", amountPay);

    return 0;
}

void welcome()
{
    templateMessage("WELCOME TO CODE ELECTRICITY");
    printf("\n");
    templateMessage("VAMOS COMEÇAR REALIZANDO O CADASTRO DA SUA CONTA");
    printf("\n");
}

void templateMessage(char text[200])
{
    printf("----------------------------------------------------\n");
    printf("--- %s ---\n", text);
    printf("----------------------------------------------------\n\n");
}