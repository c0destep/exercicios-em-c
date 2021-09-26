#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void welcome()
{
    printf("----------------------------------------------------\n");
    printf("--- BEM-VINDO A REVISTARIA PEDRINHO LALAU ---\n");
    printf("----------------------------------------------------\n\n");
}

void main()
{
    char name[100], collection[100];
    int year;
    float price, value;
    float tax = 0.1;

    welcome();

    printf("----------------------------------------------------\n");
    printf("--- INFORME O NOME DA REVISTA ---\n");
    printf("----------------------------------------------------\n\n");
    scanf("%s", &name);

    printf("----------------------------------------------------\n");
    printf("--- INFORME O ANO DA REVISTA ---\n");
    printf("----------------------------------------------------\n\n");
    scanf("%i", &year);

    printf("----------------------------------------------------\n");
    printf("--- INFORME A COLEÇÃO DA REVISTA ---\n");
    printf("----------------------------------------------------\n\n");
    scanf("%s", &collection);

    printf("----------------------------------------------------\n");
    printf("--- INFORME O VALOR DA REVISTA ---\n");
    printf("----------------------------------------------------\n\n");
    scanf("%f", &price);

    value = (price * tax) + price;

    printf("----------------------------------------------------\n");
    printf("|--- REVISTA: %s |--- ANO: %i |--- COLECAO: %s \n", name, year, collection);
    printf("----------------------------------------------------\n");
    printf("|- Valor a pagar: R$ %.2f \n", value);
    printf("----------------------------------------------------\n\n\n");
}