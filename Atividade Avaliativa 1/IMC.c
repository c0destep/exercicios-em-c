#include <stdio.h>
#include <math.h>
#include <locale.h>

float calculaICM(float peso, int idade, float altura)
{
    float imc;

    imc = peso / (altura * altura);

    return imc;
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    float imc, peso, altura;
    int idade;
    char nome[30];

    printf("\n Informe seu nome: ");
    scanf("%s", nome);
    printf("\n Informe sua idade: ");
    scanf("%i", &idade);
    printf("\n Informe sua altura: ");
    scanf("%f", &altura);
    printf("\n Informe seu peso: ");
    scanf("%f", &peso);

    imc = calculaICM(peso, idade, altura);

    if (imc <= 18.5)
    {
        printf("\n %.2f é seu IMC", imc);
        printf("\n %s você está abaixo do peso \n", nome);
    }
    else if ((imc >= 18.6) && (imc <= 24.9))
    {
        printf("\n %.2f é seu IMC", imc);
        printf("\n %s você está no peso ideal", nome);
    }
    else if ((imc >= 25.0) && (imc <= 29.9))
    {
        printf("\n %.2f é seu IMC", imc);
        printf("\n %s você está levemente acima do peso", nome);
    }
    else if ((imc >= 30.0) && (imc <= 34.9))
    {
        printf("\n %.2f é seu IMC", imc);
        printf("\n %s você tem obesidade", nome);
    }
    else if ((imc >= 35.5) && (imc <= 39.9))
    {
        printf("\n %.2f é seu IMC", imc);
        printf("\n %s você tem obesidade severa", nome);
    }
    else
    {
        printf("\n %.2f é seu IMC", imc);
        printf("\n %s você tem obesidade mórbida", nome);
    }

    return 0;
}
