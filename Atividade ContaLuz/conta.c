#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char readingDate[10], payDate[10];
    int readingNumber, quantityKw, spendingAverage, quantityConta;
    float amountPay;

    welcome();

    templateMessage("QUANTAS CONTAS IRÁ CADASTRAR");
    scanf("%i", &quantityConta);
    printf("\n");

    for (int i = 1; i <= quantityConta; i++)
    {
        templateMessage("INFORME O NÚMERO DA LEITURA");
        scanf("%i", &readingNumber);
        printf("\n");
        templateMessage("INFORME A DATA DA LEITURA");
        scanf("%s", &readingDate);
    }

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