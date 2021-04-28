// Autor: Lucas Alves
// Data: 13/03/2021
// Descrição: Calcula valor da gasolina

#include <stdio.h>

int main()
{
    // Declarando variáveis
    float valorGasolina = 0;
    float icms = 0;
    double total = 0;

    // Pergunto o valor da gasolina
    printf("Qual o valor da gasolina na refinaria?");
    // Lendo valor da gasolina
    scanf("%f", &valorGasolina);
    // Informo o valor digitado
    printf("\n Voce digitou: %.2f: \n", valorGasolina);
    // Pergunto o valor do ICMS
    printf("Qual a porcentagem do ICMS (sem porcentagem)? \n");
    // Lendo ICMS
    scanf("%f", &icms);

    // Realizo o calculo
    total = valorGasolina + (valorGasolina * (icms / 100));
    // Mostro o resultado
    printf("Valor da gasolina na bomba: %.2f", total);

    return 0;
}