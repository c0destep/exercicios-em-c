#include <stdio.h>
#include <stdlib.h>
// Definindo variavel global
#define PI 3.14159265 

// Declaração das variaveis
float angulo, sen, coss, tg, sc, cs, ct;

// Função seno com retorno vazio
void seno()
{
    // Imprimindo na tela uma mensagem
    printf("\nDigite o angulo um graus.:");
    // Lendo o que foi digitado
    scanf("%f", &angulo);
    // Calculando o angulo é guardando o resultado na variavel 'sen'
    sen = sin(angulo * PI / 180);
    // Imprimindo o resultado
    printf("\nO seno de %f = %f\n", angulo, sen);
}

void cosseno()
{
    printf("\nDigite o angulo um graus.:");
    scanf("%f", &angulo);
    coss = cos(angulo * (PI / 180));
    printf("\nO cosseno de %f = %f\n", angulo, coss);
}

void tangente()
{
    printf("\nDigite o angulo um graus.:");
    scanf("%f", &angulo);
    tg = tan(angulo * (PI / 180));
    printf("\nA tangente de %f = %f\n", angulo, tg);
}

void secante()
{
    printf("\nDigite o angulo um graus.:");
    scanf("%f", &angulo);
    sc = 1 / cos(angulo * (PI / 180));
    printf("\nA secante de %f = %f\n", angulo, sc);
}

void cossecante()
{
    printf("\nDigite o angulo um graus.:");
    scanf("%f", &angulo);
    cs = 1 / sin(angulo * (PI / 180));
    printf("\nA cossecante de %f = %f\n", angulo, cs);
}

void cotangente()
{
    printf("\nDigite o angulo um graus.:");
    scanf("%f", &angulo);
    ct = 1 / tan(angulo * (PI / 180));
    printf("\nA cotangente de %f = %f\n", angulo, ct);
}

// Função principal de execução
int main()
{
    // Declarando variavel
    int op;
    // Imprimindo na tela as opções
    printf("\n=================TRIGONOMETRIA CALC==================");
    printf("\n===Escolha uma opção em seguida entre com o angulo===\n");
    printf("\nMenu:\n");
    printf("\n 1-Seno");
    printf("\n 2-Cosseno");
    printf("\n 3-Tangente");
    printf("\n 4-Secante");
    printf("\n 5-Cossecante");
    printf("\n 6-Cotangente");
    printf("\n\nOpcao.:");
    // Lendo a opção
    scanf("%d", &op);

    // Verifica qual a opção digitada, e intancia a função correspondente
    switch (op)
    {
    case 1:
        seno();
        break;

    case 2:
        cosseno();
        break;

    case 3:
        tangente();
        break;

    case 4:
        secante();
        break;

    case 5:
        cossecante();
        break;

    case 6:
        cotangente();
        break;

    default:
        // Caso não escolha uma opção do escopo retorna uma mensagem de inexistente
        printf("\nErro! Opcao inexistente.\n");
        break;
    }

    return 0;
}